#include <bits/stdc++.h>
#include <curl/curl.h>
using namespace std;

size_t callBackFunc(char* ptr, size_t size, size_t nmemb, string* stream) {
  std::vector<char>* recvBuffer = (std::vector<char>*)stream;
  const size_t sizes = size * nmemb;
  recvBuffer->insert(recvBuffer->begin(), (char*)ptr, (char*)ptr + sizes);
  return sizes;
}

int main(int argc, char *argv[]) {
  // start from 1 to ignore script name; argv[0] will be a name of processing file.
  string param = argv[1];
  string target = "http://challenge-server.code-check.io/";
  target += "?q=" + param;
  CURL *curl;
  CURLcode res;
  curl = curl_easy_init();
  string chunk;

  
  if (curl) {
    cout << "here" << endl;
    curl_easy_setopt(curl, CURLOPT_URL, target);
    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, callBackFunc);
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, (string*)&chunk);
    res = curl_easy_perform(curl);
    curl_easy_cleanup(curl);
  }

  cout << chunk << endl;
  return 0;
}

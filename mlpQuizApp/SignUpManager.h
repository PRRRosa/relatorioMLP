#ifndef __SIGNUPMANAGER_H__
#define __SIGNUPMANAGER_H__

#include <iostream>
#include <string>

typedef void SignUpManagerDelegate(std::string);

class SignUpManager {
  public:
    SignUpManager(SignUpManagerDelegate delegate);
    void start();
  private:
  	SignUpManagerDelegate* _delegate;
};
#endif
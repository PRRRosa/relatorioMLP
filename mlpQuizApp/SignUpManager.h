#ifndef __SIGNUPMANAGER_H__
#define __SIGNUPMANAGER_H__

#include <iostream>
#include <string>
#include "Player.h"
#include "Object.h"

typedef void SignUpManagerDelegate(Player);

class SignUpManager:Object {
  public:
    SignUpManager(SignUpManagerDelegate delegate);
    void start();
    void print();
  private:
  	SignUpManagerDelegate* _delegate;
};
#endif
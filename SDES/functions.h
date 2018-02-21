#pragma once

enum TextType { plain, cipher, key };

bool* getInput(int textType);

void IPFunction(bool* textIP);

bool* InverseIPFunction(bool* textIIP);

bool* FunctionFk(bool* textFFK, bool* subkey1);

bool* Switch(bool* textSW);

void GenKey1(bool textG2[], bool* keyG1);

void GenKey2(bool textG2[], bool* keyG2);

bool* getKey(int textType);

int binaryConversion(bool one, bool two);

void decimalConversion(int decimal, bool p4h[]);


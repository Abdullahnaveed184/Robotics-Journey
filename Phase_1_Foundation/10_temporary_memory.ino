Arduino temporary memory:-
--Robots work by storing their memory.
--They could perform work without any mistake when the remember what have they done before.
--For instance if a machines know which mistake is committed, it will correct it next time.
--Memory is stored temporarily by variables such as: 'int' and 'bool'.
----int
    It stores memory which can be changed over time. 
    When we need it to change we or robot will change it in the loop().
----bool
    As used early in my previous update, this is used for only two decisions(True/False).
--Memory is mainly used for the following purposes in advanced machines.
>>Toggling
>>Counting
>>Decisions based on past
--Following is some code for memory storing purpose:
 int score = 0;
 score = 1;
 score = 2;
And, following is how memory changed in loop
 int count = 0;

void loop() {
  count = count + 1;
}

 

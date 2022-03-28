# TEST PLAN and Corresponding Output
## High Level Test Plan
| Test ID | Description | Exp.i/p | Exp.o/p | Actual o/p | Type of Test |
|---------|:------------|:--------|:--------|:-----------|:-------------|
| H_01 | Check if the welcoming page is displayed properly | Program Execution | Formated Welcome Page | Formated Welcome Page | Requirement |
| H_02 | Check if the menu is displayed properly | Login Credentials | Formated Menu Page | Formated Menu Page | Requirement |
| H_03 | Not stuck inside any function | Function Call | Proper Function Execution With Return type and Message | Proper Function Execution With Return type and Message | Requirement |
## Low Level Test Plan
| Test ID | Description | Exp.i/p | Exp.o/p | Actual o/p | Type of Test |
|---------|:------------|:--------|:--------|:-----------|:-------------|
| L_01 | Verify Player Credential | Player Name | Success -> Menu; Failure -> Exit | Success -> Menu; Failure -> Exit | Scenario |
| L_02 | Adding Entry to the File | Details of Individual | Details added successfully | Details added successfully | Technical |
| L_03 | Scoring Entry | Name of the individual | Name Present -> Score; Name absent -> not found |  Name Present -> Score; Name absent -> not found | Technical |
| L_04 | Modify Entry | Name of the individual | Name Present -> Modify; Name Absent -> Not found | Name Present -> Modify; Name Absent -> Not found | Technical |
| L_05 | Display All | - | If entry present -> Display them; else Display "Empty File" | If entry present -> Display them; else Display "Empty File" | Technical |
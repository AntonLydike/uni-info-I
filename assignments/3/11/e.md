
| A | B | C | (B && C) | A && (B && C) | (A && B) | (A && B) && C |
|---|---|---|----------|---------------|----------|---------------|
| T | T | T | T        | T             | T        | T             |
| T | T | F | F        | F             | T        | F             |
| T | F | T | F        | F             | F        | F             |
| T | F | F | F        | F             | F        | F             |
| F | T | T | T        | F             | F        | F             |
| F | T | F | F        | F             | F        | F             |
| F | F | T | F        | F             | F        | F             |
| F | F | F | F        | F             | F        | F             |

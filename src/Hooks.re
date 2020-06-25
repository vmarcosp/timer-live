type useTimerResult = {
  minutes: string,
  seconds: string,
  start: unit => unit,
};

[@bs.module "@fdaciuk/use-timer"]
external useTimer: (string) => useTimerResult = "default";

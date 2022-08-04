class StrategyManager{
    constructor(){
        this._strategies = [];
    }
    addStrategy(strategy){
        this._strategies = [...this._strategies, strategy];
    }
    doAction(combination){
        let strategy = this._strategies.find(str => str.getStrategy() == combination);
        if(strategy) return strategy.doAction();
        else return "NO STRATEGY FOUND";
    }
}

class StrategyRockRock{
    getStrategy(){
        return "rockrock";
    }
    doAction(){
        return "IT'S A DRAW!";
    }
}

class StrategyPaperPaper{
    getStrategy(){
        return "paperpaper";
    }
    doAction(){
        return "IT'S A DRAW!";
    }
}

class StrategyScissorsScissors{
    getStrategy(){
        return "scissorsscissors";
    }
    doAction(){
        return "IT'S A DRAW!";
    }
}

class StrategyRockScissors{
    getStrategy(){
        return "rockscissors";
    }
    doAction(){
        return "YOU WIN!";
    }
}

class StrategyScissorsPaper{
    getStrategy(){
        return "scissorspaper";
    }
    doAction(){
        return "YOU WIN!";
    }
}

class StrategyPaperRock{
    getStrategy(){
        return "paperrock";
    }
    doAction(){
        return "YOU WIN!";
    }
}

class StrategyScissorsRock{
    getStrategy(){
        return "scissorsrock";
    }
    doAction(){
        return "YOU LOSE!";
    }
}

class StrategyPaperScissors{
    getStrategy(){
        return "paperscissors";
    }
    doAction(){
        return "YOU LOSE!";
    }
}

class StrategyRockPaper{
    getStrategy(){
        return "rockpaper";
    }
    doAction(){
        return "YOU LOSE!";
    }
}

let Strategy = new StrategyManager();
Strategy.addStrategy(new StrategyPaperPaper());
Strategy.addStrategy(new StrategyPaperRock());
Strategy.addStrategy(new StrategyPaperScissors());
Strategy.addStrategy(new StrategyRockPaper());
Strategy.addStrategy(new StrategyRockRock());
Strategy.addStrategy(new StrategyRockScissors());
Strategy.addStrategy(new StrategyScissorsPaper());
Strategy.addStrategy(new StrategyScissorsRock());
Strategy.addStrategy(new StrategyScissorsScissors());
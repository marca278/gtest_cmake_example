pipeline {
    agent { label 'agent_002 || linux' }
    stages {
        stage('Print Greating') {
            steps {
                echo 'Hello'
            }
        }
        stage('Build main') {
            steps {
                sh(script: 'echo "Building main"', returnStdout: true)
                sh(script: 'cmake -S . -B build', returnStdout: true)
                sh(script: './build/ninja -C ./build mainapp', returnStdout: true)
            }
        }
        stage('Print Exit') {
            steps {
                echo 'Bye'
            }
        }
    }
}

pipeline {
    agent any
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
                sh(script: 'ninja -C mainapp', returnStdout: true)
            }
        }
        stage('Print Exit') {
            steps {
                echo 'Bye'
            }
        }
    }
}

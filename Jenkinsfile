pipeline {
    agent { label 'agent_002 || linux' }
    stages {
        stage('Print Greating') {
            steps {
                echo 'Hello'
            }
        }
        stage('Configure Build') {
            steps{
                sh(script: 'cmake -S . -B build', returnStdout: true)
            }
        }   
        stage('Build main') {
            steps {
                sh(script: 'ninja -C ./build mainapp', returnStdout: true)
            }
        }
        stage('Print Exit') {
            steps {
                echo 'Bye'
            }
        }
    }
}

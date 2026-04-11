#!/bin/bash
while true
do
  git add .
  git commit -m "Auto-save: $(date)"
  git push origin main
  echo "Progresso salvo às $(date)"
  sleep 600  # Tempo em segundos (600 = 10 minutos)
done

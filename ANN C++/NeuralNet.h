#pragma once

#include <vector>
#include "Layer.h"
#include "TrainingSet.h"

namespace GenAI
{
	class NeuralNet
	{
		std::vector<Layer*> layers;
		TrainingSet* trainingSet;
	public:
		NeuralNet()
		{
		}

		~NeuralNet()
		{
		}

		void Init(int inputNeuronCount, int trainingBatchSize, int OutputNeuronCount)
		{
		}

		void AddLayer(int neuronCount)
		{
		}

		void FeedForward()
		{
		}

		void BackProp()
		{
		}
	private:

	};

	NeuralNet::NeuralNet()
	{
	}

	NeuralNet::~NeuralNet()
	{
	}
}
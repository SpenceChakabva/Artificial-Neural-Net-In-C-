#pragma once

#include "Matrix.h"

namespace GenAI
{
	class Layer
	{
		Matrix* activations;
		Matrix* sums;
		Matrix* weights;
		Matrix* bias;

		Matrix* deltaActivations;
		Matrix* deltaSums;
		Matrix* deltaWeights;
		Matrix* deltaBias;

		int neuroCount;

		Layer* prevLayer;
		Layer* nextLayer;
	public:
		Layer(int neuronCount)
		{
			this->neuroCount = neuroCount;
		}

		~Layer()
		{
		}

		void SetPreviousLayer(Layer* prevLayer)
		{
		}

		void FeedForward()
		{
		}

		void BackProp()
		{
		}
	};
}
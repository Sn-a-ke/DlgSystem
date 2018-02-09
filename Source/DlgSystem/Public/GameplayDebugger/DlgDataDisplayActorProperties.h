// Copyright 2017-2018 Csaba Molnar, Daniel Butum
#pragma once

#include "CoreMinimal.h"

#include "TreeViewHelpers/DlgTreeViewParticipantProperties.h"
#include "TreeViewHelpers/DlgTreeViewVariableProperties.h"


/** Used as a key for the variable property */
class FDlgDataDisplayVariableProperties : public FDlgTreeViewVariableProperties
{
	typedef FDlgTreeViewVariableProperties Super;

public:
	FDlgDataDisplayVariableProperties(const TSet<TWeakObjectPtr<UDlgDialogue>>& InDialogues) : Super(InDialogues) {}
	FDlgDataDisplayVariableProperties(const TSet<TWeakObjectPtr<UDlgDialogue>>&& InDialogues) : Super(InDialogues) {}

protected:
	// TODO Value template
	int a = 32;
};

/** Used as a key for the Actor in the fast lookup table. */
class FDlgDataDisplayActorProperties : public FDlgTreeViewParticipantProperties<FDlgDataDisplayVariableProperties>
{
	typedef FDlgTreeViewParticipantProperties Super;

public:
	FDlgDataDisplayActorProperties(const TSet<TWeakObjectPtr<UDlgDialogue>>& InDialogues) : Super(InDialogues) {}
	FDlgDataDisplayActorProperties(const TSet<TWeakObjectPtr<UDlgDialogue>>&& InDialogues) : Super(InDialogues) {}
};
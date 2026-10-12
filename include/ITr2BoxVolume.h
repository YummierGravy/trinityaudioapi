// Copyright © 2026 CCP ehf.
//
//    Description:
//      An interface for placing a box volume in the world.

#pragma once

#ifndef ITr2BoxVolume_h_
#define ITr2BoxVolume_h_

BLUE_INTERFACE( ITr2BoxVolume ) :
	public IRoot
{
	/**
	 * @brief Places the unit box in the world. Creates the volume on the first call and updates it afterwards.
	 *
	 * @param unitBoxToWorld Maps the unit box [-0.5, 0.5]^3 to world space. Right-handed, metres,
	 *                       relative to the current floating origin. Scale encodes the box size.
	 */
	virtual void SetTransform( const Matrix& unitBoxToWorld ) = 0;

	/**
	 * @brief Enables or disables the volume without forgetting its placement.
	 *
	 * A volume starts enabled. Call this before the first SetTransform when the owner is disabled,
	 * so the volume is never briefly active.
	 */
	virtual void SetEnabled( bool enabled ) = 0;

	/**
	 * @brief Removes the volume. The object can be placed again with SetTransform.
	 */
	virtual void Remove() = 0;
};

#endif

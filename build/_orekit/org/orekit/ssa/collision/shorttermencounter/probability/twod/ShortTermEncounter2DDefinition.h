#ifndef org_orekit_ssa_collision_shorttermencounter_probability_twod_ShortTermEncounter2DDefinition_H
#define org_orekit_ssa_collision_shorttermencounter_probability_twod_ShortTermEncounter2DDefinition_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
    namespace utils {
      class PVCoordinates;
    }
    namespace propagation {
      class StateCovariance;
    }
    namespace frames {
      namespace encounter {
        class EncounterLOF;
        class EncounterLOFType;
      }
    }
    namespace orbits {
      class Orbit;
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {
          class Vector2D;
        }
      }
    }
    namespace linear {
      class RealMatrix;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {

              class ShortTermEncounter2DDefinition : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_89ecd735eb1431e7,
                  mid_init$_89547db4e26ecd2c,
                  mid_init$_c1fc1d796144a032,
                  mid_init$_f25406ca20426d56,
                  mid_computeCombinedCovarianceInEncounterFrame_50fcd7d28a171699,
                  mid_computeCombinedCovarianceInReferenceTNW_50fcd7d28a171699,
                  mid_computeCoppolaEncounterDuration_9981f74b2d109da6,
                  mid_computeMahalanobisDistance_9981f74b2d109da6,
                  mid_computeMahalanobisDistance_bf28ed64d6e8576b,
                  mid_computeMissDistance_9981f74b2d109da6,
                  mid_computeOtherPositionInCollisionPlane_0490d0574aafb07c,
                  mid_computeOtherPositionInRotatedCollisionPlane_0490d0574aafb07c,
                  mid_computeOtherPositionInRotatedCollisionPlane_22e63043f272734b,
                  mid_computeOtherRelativeToReferencePVInReferenceInertial_78e01095d7eced90,
                  mid_computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix_b2eebabce70526d8,
                  mid_computeProjectedCombinedPositionalCovarianceMatrix_b2eebabce70526d8,
                  mid_computeReferenceInertialToCollisionPlaneProjectionMatrix_b2eebabce70526d8,
                  mid_computeSquaredMahalanobisDistance_9981f74b2d109da6,
                  mid_computeSquaredMahalanobisDistance_bf28ed64d6e8576b,
                  mid_computeSquaredMahalanobisDistance_5a724479b3e5ac60,
                  mid_computeSquaredMahalanobisDistance_45d926aea7231320,
                  mid_getCombinedRadius_9981f74b2d109da6,
                  mid_getEncounterFrame_b6d8b1833bbc692c,
                  mid_getOtherAtTCA_fb241cd44f6e41bc,
                  mid_getOtherCovariance_50fcd7d28a171699,
                  mid_getReferenceAtTCA_fb241cd44f6e41bc,
                  mid_getReferenceCovariance_50fcd7d28a171699,
                  mid_getTca_80e11148db499dda,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit ShortTermEncounter2DDefinition(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                ShortTermEncounter2DDefinition(const ShortTermEncounter2DDefinition& obj) : ::java::lang::Object(obj) {}

                ShortTermEncounter2DDefinition(const ::org::orekit::orbits::Orbit &, const ::org::orekit::propagation::StateCovariance &, const ::org::orekit::orbits::Orbit &, const ::org::orekit::propagation::StateCovariance &, jdouble);
                ShortTermEncounter2DDefinition(const ::org::orekit::orbits::Orbit &, const ::org::orekit::propagation::StateCovariance &, jdouble, const ::org::orekit::orbits::Orbit &, const ::org::orekit::propagation::StateCovariance &, jdouble);
                ShortTermEncounter2DDefinition(const ::org::orekit::orbits::Orbit &, const ::org::orekit::propagation::StateCovariance &, const ::org::orekit::orbits::Orbit &, const ::org::orekit::propagation::StateCovariance &, jdouble, const ::org::orekit::frames::encounter::EncounterLOFType &, jdouble);
                ShortTermEncounter2DDefinition(const ::org::orekit::orbits::Orbit &, const ::org::orekit::propagation::StateCovariance &, jdouble, const ::org::orekit::orbits::Orbit &, const ::org::orekit::propagation::StateCovariance &, jdouble, const ::org::orekit::frames::encounter::EncounterLOFType &, jdouble);

                ::org::orekit::propagation::StateCovariance computeCombinedCovarianceInEncounterFrame() const;
                ::org::orekit::propagation::StateCovariance computeCombinedCovarianceInReferenceTNW() const;
                jdouble computeCoppolaEncounterDuration() const;
                jdouble computeMahalanobisDistance() const;
                jdouble computeMahalanobisDistance(jdouble) const;
                jdouble computeMissDistance() const;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D computeOtherPositionInCollisionPlane() const;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D computeOtherPositionInRotatedCollisionPlane() const;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D computeOtherPositionInRotatedCollisionPlane(jdouble) const;
                ::org::orekit::utils::PVCoordinates computeOtherRelativeToReferencePVInReferenceInertial() const;
                ::org::hipparchus::linear::RealMatrix computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix() const;
                ::org::hipparchus::linear::RealMatrix computeProjectedCombinedPositionalCovarianceMatrix() const;
                ::org::hipparchus::linear::RealMatrix computeReferenceInertialToCollisionPlaneProjectionMatrix() const;
                jdouble computeSquaredMahalanobisDistance() const;
                jdouble computeSquaredMahalanobisDistance(jdouble) const;
                static jdouble computeSquaredMahalanobisDistance(const ::org::hipparchus::geometry::euclidean::twod::Vector2D &, const ::org::hipparchus::linear::RealMatrix &);
                static jdouble computeSquaredMahalanobisDistance(jdouble, jdouble, jdouble, jdouble);
                jdouble getCombinedRadius() const;
                ::org::orekit::frames::encounter::EncounterLOF getEncounterFrame() const;
                ::org::orekit::orbits::Orbit getOtherAtTCA() const;
                ::org::orekit::propagation::StateCovariance getOtherCovariance() const;
                ::org::orekit::orbits::Orbit getReferenceAtTCA() const;
                ::org::orekit::propagation::StateCovariance getReferenceCovariance() const;
                ::org::orekit::time::AbsoluteDate getTca() const;
              };
            }
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {
              extern PyType_Def PY_TYPE_DEF(ShortTermEncounter2DDefinition);
              extern PyTypeObject *PY_TYPE(ShortTermEncounter2DDefinition);

              class t_ShortTermEncounter2DDefinition {
              public:
                PyObject_HEAD
                ShortTermEncounter2DDefinition object;
                static PyObject *wrap_Object(const ShortTermEncounter2DDefinition&);
                static PyObject *wrap_jobject(const jobject&);
                static void install(PyObject *module);
                static void initialize(PyObject *module);
              };
            }
          }
        }
      }
    }
  }
}

#endif

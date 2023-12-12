#ifndef org_orekit_ssa_collision_shorttermencounter_probability_twod_ShortTermEncounter2DDefinition_H
#define org_orekit_ssa_collision_shorttermencounter_probability_twod_ShortTermEncounter2DDefinition_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace frames {
      namespace encounter {
        class EncounterLOF;
        class EncounterLOFType;
      }
    }
    namespace utils {
      class PVCoordinates;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace orbits {
      class Orbit;
    }
    namespace propagation {
      class StateCovariance;
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
                  mid_init$_45b4ee740e8d45ab,
                  mid_init$_c946a44e40dff7f4,
                  mid_init$_fe93df6ed6c46598,
                  mid_init$_4f9dd48a8d0a9867,
                  mid_computeCombinedCovarianceInEncounterFrame_8e9af39b29713242,
                  mid_computeCombinedCovarianceInReferenceTNW_8e9af39b29713242,
                  mid_computeCoppolaEncounterDuration_557b8123390d8d0c,
                  mid_computeMahalanobisDistance_557b8123390d8d0c,
                  mid_computeMahalanobisDistance_7e960cd6eee376d8,
                  mid_computeMissDistance_557b8123390d8d0c,
                  mid_computeOtherPositionInCollisionPlane_f681f2fc9cdfab57,
                  mid_computeOtherPositionInRotatedCollisionPlane_f681f2fc9cdfab57,
                  mid_computeOtherPositionInRotatedCollisionPlane_1b4c0a5fd68f3ffb,
                  mid_computeOtherRelativeToReferencePVInReferenceInertial_77bd7b3cdab2713e,
                  mid_computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix_70a207fcbc031df2,
                  mid_computeProjectedCombinedPositionalCovarianceMatrix_70a207fcbc031df2,
                  mid_computeReferenceInertialToCollisionPlaneProjectionMatrix_70a207fcbc031df2,
                  mid_computeSquaredMahalanobisDistance_557b8123390d8d0c,
                  mid_computeSquaredMahalanobisDistance_7e960cd6eee376d8,
                  mid_computeSquaredMahalanobisDistance_ee5b345ac15668c2,
                  mid_computeSquaredMahalanobisDistance_79d60f5d1a9d8623,
                  mid_getCombinedRadius_557b8123390d8d0c,
                  mid_getEncounterFrame_ebfb39c00facd535,
                  mid_getOtherAtTCA_71f9c54b5f482a59,
                  mid_getOtherCovariance_8e9af39b29713242,
                  mid_getReferenceAtTCA_71f9c54b5f482a59,
                  mid_getReferenceCovariance_8e9af39b29713242,
                  mid_getTca_7a97f7e149e79afb,
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

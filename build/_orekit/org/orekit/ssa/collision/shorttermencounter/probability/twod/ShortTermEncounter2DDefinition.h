#ifndef org_orekit_ssa_collision_shorttermencounter_probability_twod_ShortTermEncounter2DDefinition_H
#define org_orekit_ssa_collision_shorttermencounter_probability_twod_ShortTermEncounter2DDefinition_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class StateCovariance;
    }
    namespace utils {
      class PVCoordinates;
    }
    namespace frames {
      namespace encounter {
        class EncounterLOFType;
        class EncounterLOF;
      }
    }
    namespace orbits {
      class Orbit;
    }
    namespace time {
      class AbsoluteDate;
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
                  mid_init$_c16f3fbbc2906c3c,
                  mid_init$_effc98295e30aefd,
                  mid_init$_4ba70162c0a6539e,
                  mid_init$_d7c53fff20df3c61,
                  mid_computeCombinedCovarianceInEncounterFrame_79b153af3bb7e103,
                  mid_computeCombinedCovarianceInReferenceTNW_79b153af3bb7e103,
                  mid_computeCoppolaEncounterDuration_456d9a2f64d6b28d,
                  mid_computeMahalanobisDistance_456d9a2f64d6b28d,
                  mid_computeMahalanobisDistance_0ba5fed9597b693e,
                  mid_computeMissDistance_456d9a2f64d6b28d,
                  mid_computeOtherPositionInCollisionPlane_6d781af269bebe5e,
                  mid_computeOtherPositionInRotatedCollisionPlane_6d781af269bebe5e,
                  mid_computeOtherPositionInRotatedCollisionPlane_395c0d14fc31fa5e,
                  mid_computeOtherRelativeToReferencePVInReferenceInertial_6761e3f334368d44,
                  mid_computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix_7116bbecdd8ceb21,
                  mid_computeProjectedCombinedPositionalCovarianceMatrix_7116bbecdd8ceb21,
                  mid_computeReferenceInertialToCollisionPlaneProjectionMatrix_7116bbecdd8ceb21,
                  mid_computeSquaredMahalanobisDistance_456d9a2f64d6b28d,
                  mid_computeSquaredMahalanobisDistance_0ba5fed9597b693e,
                  mid_computeSquaredMahalanobisDistance_6932b995984a06db,
                  mid_computeSquaredMahalanobisDistance_04175aacb25dae17,
                  mid_getCombinedRadius_456d9a2f64d6b28d,
                  mid_getEncounterFrame_b6be411bef36c8d5,
                  mid_getOtherAtTCA_551bf685780e3c1f,
                  mid_getOtherCovariance_79b153af3bb7e103,
                  mid_getReferenceAtTCA_551bf685780e3c1f,
                  mid_getReferenceCovariance_79b153af3bb7e103,
                  mid_getTca_aaa854c403487cf3,
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

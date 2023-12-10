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
    namespace time {
      class AbsoluteDate;
    }
    namespace orbits {
      class Orbit;
    }
  }
  namespace hipparchus {
    namespace linear {
      class RealMatrix;
    }
    namespace geometry {
      namespace euclidean {
        namespace twod {
          class Vector2D;
        }
      }
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
                  mid_init$_4fe13521304776f7,
                  mid_init$_13af9ca71f8687fc,
                  mid_init$_e1546d8682430186,
                  mid_init$_ca18786c1f4c729b,
                  mid_computeCombinedCovarianceInEncounterFrame_9114b59f891867ba,
                  mid_computeCombinedCovarianceInReferenceTNW_9114b59f891867ba,
                  mid_computeCoppolaEncounterDuration_dff5885c2c873297,
                  mid_computeMahalanobisDistance_dff5885c2c873297,
                  mid_computeMahalanobisDistance_dcbc7ce2902fa136,
                  mid_computeMissDistance_dff5885c2c873297,
                  mid_computeOtherPositionInCollisionPlane_73f627838730c264,
                  mid_computeOtherPositionInRotatedCollisionPlane_73f627838730c264,
                  mid_computeOtherPositionInRotatedCollisionPlane_1d94587a4ec1fe0f,
                  mid_computeOtherRelativeToReferencePVInReferenceInertial_9b7c658c14883c84,
                  mid_computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix_688b496048ff947b,
                  mid_computeProjectedCombinedPositionalCovarianceMatrix_688b496048ff947b,
                  mid_computeReferenceInertialToCollisionPlaneProjectionMatrix_688b496048ff947b,
                  mid_computeSquaredMahalanobisDistance_dff5885c2c873297,
                  mid_computeSquaredMahalanobisDistance_dcbc7ce2902fa136,
                  mid_computeSquaredMahalanobisDistance_998d433b20cbd8ab,
                  mid_computeSquaredMahalanobisDistance_0f015b8be9d2dc40,
                  mid_getCombinedRadius_dff5885c2c873297,
                  mid_getEncounterFrame_6568301d8415835c,
                  mid_getOtherAtTCA_cde5690bfa4f9649,
                  mid_getOtherCovariance_9114b59f891867ba,
                  mid_getReferenceAtTCA_cde5690bfa4f9649,
                  mid_getReferenceCovariance_9114b59f891867ba,
                  mid_getTca_85703d13e302437e,
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

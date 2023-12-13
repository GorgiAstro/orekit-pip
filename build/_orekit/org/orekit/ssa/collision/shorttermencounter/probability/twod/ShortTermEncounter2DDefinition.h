#ifndef org_orekit_ssa_collision_shorttermencounter_probability_twod_ShortTermEncounter2DDefinition_H
#define org_orekit_ssa_collision_shorttermencounter_probability_twod_ShortTermEncounter2DDefinition_H

#include "java/lang/Object.h"

namespace org {
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
  namespace orekit {
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
    namespace time {
      class AbsoluteDate;
    }
    namespace utils {
      class PVCoordinates;
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
                  mid_init$_6e070423a9774ddb,
                  mid_init$_16bbc50d7e41fe28,
                  mid_init$_86821b70ee5fe2a3,
                  mid_init$_916cb8d64b395e25,
                  mid_computeCombinedCovarianceInEncounterFrame_6c7ec62384a674b1,
                  mid_computeCombinedCovarianceInReferenceTNW_6c7ec62384a674b1,
                  mid_computeCoppolaEncounterDuration_b74f83833fdad017,
                  mid_computeMahalanobisDistance_b74f83833fdad017,
                  mid_computeMahalanobisDistance_04fd0666b613d2ab,
                  mid_computeMissDistance_b74f83833fdad017,
                  mid_computeOtherPositionInCollisionPlane_9cb1572c1d4936cf,
                  mid_computeOtherPositionInRotatedCollisionPlane_9cb1572c1d4936cf,
                  mid_computeOtherPositionInRotatedCollisionPlane_32a32febf6739dcf,
                  mid_computeOtherRelativeToReferencePVInReferenceInertial_180fb117720acb76,
                  mid_computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix_f77d745f2128c391,
                  mid_computeProjectedCombinedPositionalCovarianceMatrix_f77d745f2128c391,
                  mid_computeReferenceInertialToCollisionPlaneProjectionMatrix_f77d745f2128c391,
                  mid_computeSquaredMahalanobisDistance_b74f83833fdad017,
                  mid_computeSquaredMahalanobisDistance_04fd0666b613d2ab,
                  mid_computeSquaredMahalanobisDistance_db335e3aaf683d13,
                  mid_computeSquaredMahalanobisDistance_08eba2463884b341,
                  mid_getCombinedRadius_b74f83833fdad017,
                  mid_getEncounterFrame_b4b6e345de2c2267,
                  mid_getOtherAtTCA_b6e68c5f730fb347,
                  mid_getOtherCovariance_6c7ec62384a674b1,
                  mid_getReferenceAtTCA_b6e68c5f730fb347,
                  mid_getReferenceCovariance_6c7ec62384a674b1,
                  mid_getTca_c325492395d89b24,
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

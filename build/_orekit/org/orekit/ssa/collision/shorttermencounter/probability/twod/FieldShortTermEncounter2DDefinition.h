#ifndef org_orekit_ssa_collision_shorttermencounter_probability_twod_FieldShortTermEncounter2DDefinition_H
#define org_orekit_ssa_collision_shorttermencounter_probability_twod_FieldShortTermEncounter2DDefinition_H

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
      class FieldPVCoordinates;
    }
    namespace time {
      class FieldAbsoluteDate;
    }
    namespace propagation {
      class FieldStateCovariance;
    }
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {
              class ShortTermEncounter2DDefinition;
            }
          }
        }
      }
    }
    namespace orbits {
      class FieldOrbit;
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {
          class FieldVector2D;
        }
      }
    }
    namespace linear {
      class FieldMatrix;
    }
    class CalculusFieldElement;
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

              class FieldShortTermEncounter2DDefinition : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_d9f5ca49b22816bb,
                  mid_init$_2cb9853012a21226,
                  mid_init$_d4b5116272f364f5,
                  mid_init$_8fe564b16348fc31,
                  mid_computeCombinedCovarianceInEncounterFrame_e5e5b1755d0e9181,
                  mid_computeCombinedCovarianceInReferenceTNW_e5e5b1755d0e9181,
                  mid_computeCoppolaEncounterDuration_613c8f46c659f636,
                  mid_computeMahalanobisDistance_613c8f46c659f636,
                  mid_computeMahalanobisDistance_94d37e81a3238af8,
                  mid_computeMissDistance_613c8f46c659f636,
                  mid_computeOtherPositionInCollisionPlane_71d34b83d8e1fc5a,
                  mid_computeOtherPositionInRotatedCollisionPlane_71d34b83d8e1fc5a,
                  mid_computeOtherPositionInRotatedCollisionPlane_fd7065394a41d234,
                  mid_computeOtherRelativeToReferencePVInReferenceInertial_950575861e9716b3,
                  mid_computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix_1d6b27621d7bea96,
                  mid_computeProjectedCombinedPositionalCovarianceMatrix_1d6b27621d7bea96,
                  mid_computeReferenceInertialToCollisionPlaneProjectionMatrix_1d6b27621d7bea96,
                  mid_computeSquaredMahalanobisDistance_613c8f46c659f636,
                  mid_computeSquaredMahalanobisDistance_94d37e81a3238af8,
                  mid_computeSquaredMahalanobisDistance_1f7ef768a2ea78a9,
                  mid_computeSquaredMahalanobisDistance_b36bbc15a8c16f64,
                  mid_getCombinedRadius_613c8f46c659f636,
                  mid_getEncounterFrame_ebfb39c00facd535,
                  mid_getOtherAtTCA_507d8b7ad2a799b5,
                  mid_getOtherCovariance_e5e5b1755d0e9181,
                  mid_getReferenceAtTCA_507d8b7ad2a799b5,
                  mid_getReferenceCovariance_e5e5b1755d0e9181,
                  mid_getTca_f1fe4daf77c66560,
                  mid_toEncounter_00c5ec74f267cba9,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit FieldShortTermEncounter2DDefinition(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                FieldShortTermEncounter2DDefinition(const FieldShortTermEncounter2DDefinition& obj) : ::java::lang::Object(obj) {}

                FieldShortTermEncounter2DDefinition(const ::org::orekit::orbits::FieldOrbit &, const ::org::orekit::propagation::FieldStateCovariance &, const ::org::orekit::orbits::FieldOrbit &, const ::org::orekit::propagation::FieldStateCovariance &, const ::org::hipparchus::CalculusFieldElement &);
                FieldShortTermEncounter2DDefinition(const ::org::orekit::orbits::FieldOrbit &, const ::org::orekit::propagation::FieldStateCovariance &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::orbits::FieldOrbit &, const ::org::orekit::propagation::FieldStateCovariance &, const ::org::hipparchus::CalculusFieldElement &);
                FieldShortTermEncounter2DDefinition(const ::org::orekit::orbits::FieldOrbit &, const ::org::orekit::propagation::FieldStateCovariance &, const ::org::orekit::orbits::FieldOrbit &, const ::org::orekit::propagation::FieldStateCovariance &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::frames::encounter::EncounterLOFType &, jdouble);
                FieldShortTermEncounter2DDefinition(const ::org::orekit::orbits::FieldOrbit &, const ::org::orekit::propagation::FieldStateCovariance &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::orbits::FieldOrbit &, const ::org::orekit::propagation::FieldStateCovariance &, const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::frames::encounter::EncounterLOFType &, jdouble);

                ::org::orekit::propagation::FieldStateCovariance computeCombinedCovarianceInEncounterFrame() const;
                ::org::orekit::propagation::FieldStateCovariance computeCombinedCovarianceInReferenceTNW() const;
                ::org::hipparchus::CalculusFieldElement computeCoppolaEncounterDuration() const;
                ::org::hipparchus::CalculusFieldElement computeMahalanobisDistance() const;
                ::org::hipparchus::CalculusFieldElement computeMahalanobisDistance(jdouble) const;
                ::org::hipparchus::CalculusFieldElement computeMissDistance() const;
                ::org::hipparchus::geometry::euclidean::twod::FieldVector2D computeOtherPositionInCollisionPlane() const;
                ::org::hipparchus::geometry::euclidean::twod::FieldVector2D computeOtherPositionInRotatedCollisionPlane() const;
                ::org::hipparchus::geometry::euclidean::twod::FieldVector2D computeOtherPositionInRotatedCollisionPlane(jdouble) const;
                ::org::orekit::utils::FieldPVCoordinates computeOtherRelativeToReferencePVInReferenceInertial() const;
                ::org::hipparchus::linear::FieldMatrix computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix() const;
                ::org::hipparchus::linear::FieldMatrix computeProjectedCombinedPositionalCovarianceMatrix() const;
                ::org::hipparchus::linear::FieldMatrix computeReferenceInertialToCollisionPlaneProjectionMatrix() const;
                ::org::hipparchus::CalculusFieldElement computeSquaredMahalanobisDistance() const;
                ::org::hipparchus::CalculusFieldElement computeSquaredMahalanobisDistance(jdouble) const;
                static ::org::hipparchus::CalculusFieldElement computeSquaredMahalanobisDistance(const ::org::hipparchus::geometry::euclidean::twod::FieldVector2D &, const ::org::hipparchus::linear::FieldMatrix &);
                static ::org::hipparchus::CalculusFieldElement computeSquaredMahalanobisDistance(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &);
                ::org::hipparchus::CalculusFieldElement getCombinedRadius() const;
                ::org::orekit::frames::encounter::EncounterLOF getEncounterFrame() const;
                ::org::orekit::orbits::FieldOrbit getOtherAtTCA() const;
                ::org::orekit::propagation::FieldStateCovariance getOtherCovariance() const;
                ::org::orekit::orbits::FieldOrbit getReferenceAtTCA() const;
                ::org::orekit::propagation::FieldStateCovariance getReferenceCovariance() const;
                ::org::orekit::time::FieldAbsoluteDate getTca() const;
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition toEncounter() const;
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
              extern PyType_Def PY_TYPE_DEF(FieldShortTermEncounter2DDefinition);
              extern PyTypeObject *PY_TYPE(FieldShortTermEncounter2DDefinition);

              class t_FieldShortTermEncounter2DDefinition {
              public:
                PyObject_HEAD
                FieldShortTermEncounter2DDefinition object;
                PyTypeObject *parameters[1];
                static PyTypeObject **parameters_(t_FieldShortTermEncounter2DDefinition *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const FieldShortTermEncounter2DDefinition&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const FieldShortTermEncounter2DDefinition&, PyTypeObject *);
                static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
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

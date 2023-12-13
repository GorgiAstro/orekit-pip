#ifndef org_orekit_ssa_collision_shorttermencounter_probability_twod_FieldShortTermEncounter2DDefinition_H
#define org_orekit_ssa_collision_shorttermencounter_probability_twod_FieldShortTermEncounter2DDefinition_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      class FieldPVCoordinates;
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
    namespace time {
      class FieldAbsoluteDate;
    }
    namespace frames {
      namespace encounter {
        class EncounterLOF;
        class EncounterLOFType;
      }
    }
    namespace orbits {
      class FieldOrbit;
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
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
                  mid_init$_ab08e21fdde7feba,
                  mid_init$_c7f3e83cc7e3b100,
                  mid_init$_14ab628f8f31b5f2,
                  mid_init$_b698a38885ad45d3,
                  mid_computeCombinedCovarianceInEncounterFrame_072038cb4e489bd9,
                  mid_computeCombinedCovarianceInReferenceTNW_072038cb4e489bd9,
                  mid_computeCoppolaEncounterDuration_81520b552cb3fa26,
                  mid_computeMahalanobisDistance_81520b552cb3fa26,
                  mid_computeMahalanobisDistance_1d3e368d09a6f8a6,
                  mid_computeMissDistance_81520b552cb3fa26,
                  mid_computeOtherPositionInCollisionPlane_6cf625db6271ad65,
                  mid_computeOtherPositionInRotatedCollisionPlane_6cf625db6271ad65,
                  mid_computeOtherPositionInRotatedCollisionPlane_d397b0a1d0379da7,
                  mid_computeOtherRelativeToReferencePVInReferenceInertial_3bf1e58d8bf42589,
                  mid_computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix_81d49643ce3a3c0b,
                  mid_computeProjectedCombinedPositionalCovarianceMatrix_81d49643ce3a3c0b,
                  mid_computeReferenceInertialToCollisionPlaneProjectionMatrix_81d49643ce3a3c0b,
                  mid_computeSquaredMahalanobisDistance_81520b552cb3fa26,
                  mid_computeSquaredMahalanobisDistance_1d3e368d09a6f8a6,
                  mid_computeSquaredMahalanobisDistance_e333d17d0ed875d5,
                  mid_computeSquaredMahalanobisDistance_0a337cffdfb74cd1,
                  mid_getCombinedRadius_81520b552cb3fa26,
                  mid_getEncounterFrame_b4b6e345de2c2267,
                  mid_getOtherAtTCA_52c9ebac01a11008,
                  mid_getOtherCovariance_072038cb4e489bd9,
                  mid_getReferenceAtTCA_52c9ebac01a11008,
                  mid_getReferenceCovariance_072038cb4e489bd9,
                  mid_getTca_fa23a4301b9c83e7,
                  mid_toEncounter_e24bbfea5786df9c,
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

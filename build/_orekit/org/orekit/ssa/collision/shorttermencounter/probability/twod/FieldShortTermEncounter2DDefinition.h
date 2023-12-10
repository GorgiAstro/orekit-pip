#ifndef org_orekit_ssa_collision_shorttermencounter_probability_twod_FieldShortTermEncounter2DDefinition_H
#define org_orekit_ssa_collision_shorttermencounter_probability_twod_FieldShortTermEncounter2DDefinition_H

#include "java/lang/Object.h"

namespace org {
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
  namespace orekit {
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
    namespace propagation {
      class FieldStateCovariance;
    }
    namespace time {
      class FieldAbsoluteDate;
    }
    namespace frames {
      namespace encounter {
        class EncounterLOFType;
        class EncounterLOF;
      }
    }
    namespace utils {
      class FieldPVCoordinates;
    }
    namespace orbits {
      class FieldOrbit;
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
                  mid_init$_ae8f8ecc20bb037f,
                  mid_init$_c63d77e22ae07039,
                  mid_init$_984dc387b0beff26,
                  mid_init$_99398f0359ac5cc4,
                  mid_computeCombinedCovarianceInEncounterFrame_ebfb488262ed1a46,
                  mid_computeCombinedCovarianceInReferenceTNW_ebfb488262ed1a46,
                  mid_computeCoppolaEncounterDuration_eba8e72a22c984ac,
                  mid_computeMahalanobisDistance_eba8e72a22c984ac,
                  mid_computeMahalanobisDistance_616c74807d7607b4,
                  mid_computeMissDistance_eba8e72a22c984ac,
                  mid_computeOtherPositionInCollisionPlane_a55106adcf9f2022,
                  mid_computeOtherPositionInRotatedCollisionPlane_a55106adcf9f2022,
                  mid_computeOtherPositionInRotatedCollisionPlane_a91b9a6749fb5a00,
                  mid_computeOtherRelativeToReferencePVInReferenceInertial_aae6180d70913ad4,
                  mid_computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix_c992983685c753c5,
                  mid_computeProjectedCombinedPositionalCovarianceMatrix_c992983685c753c5,
                  mid_computeReferenceInertialToCollisionPlaneProjectionMatrix_c992983685c753c5,
                  mid_computeSquaredMahalanobisDistance_eba8e72a22c984ac,
                  mid_computeSquaredMahalanobisDistance_616c74807d7607b4,
                  mid_computeSquaredMahalanobisDistance_e2374fa9196c1e95,
                  mid_computeSquaredMahalanobisDistance_4a66279d01124751,
                  mid_getCombinedRadius_eba8e72a22c984ac,
                  mid_getEncounterFrame_6568301d8415835c,
                  mid_getOtherAtTCA_71338e41eb93eedd,
                  mid_getOtherCovariance_ebfb488262ed1a46,
                  mid_getReferenceAtTCA_71338e41eb93eedd,
                  mid_getReferenceCovariance_ebfb488262ed1a46,
                  mid_getTca_51da00d5b8a3b5df,
                  mid_toEncounter_b27cce090af5c1ba,
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

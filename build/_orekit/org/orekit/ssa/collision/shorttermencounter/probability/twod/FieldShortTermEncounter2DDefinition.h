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
    namespace frames {
      namespace encounter {
        class EncounterLOFType;
        class EncounterLOF;
      }
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
    namespace time {
      class FieldAbsoluteDate;
    }
    namespace utils {
      class FieldPVCoordinates;
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
                  mid_init$_cbf513bc9302670f,
                  mid_init$_15dcfdb5ff14d6af,
                  mid_init$_8359ecda26c1451a,
                  mid_init$_f30a8d41195015cd,
                  mid_computeCombinedCovarianceInEncounterFrame_c95f6876e2bce52e,
                  mid_computeCombinedCovarianceInReferenceTNW_c95f6876e2bce52e,
                  mid_computeCoppolaEncounterDuration_e6d4d3215c30992a,
                  mid_computeMahalanobisDistance_e6d4d3215c30992a,
                  mid_computeMahalanobisDistance_cc0a3d6abf820939,
                  mid_computeMissDistance_e6d4d3215c30992a,
                  mid_computeOtherPositionInCollisionPlane_1f4b20c9530c3106,
                  mid_computeOtherPositionInRotatedCollisionPlane_1f4b20c9530c3106,
                  mid_computeOtherPositionInRotatedCollisionPlane_d585e03ae746190d,
                  mid_computeOtherRelativeToReferencePVInReferenceInertial_239ccd4fbdc5d04d,
                  mid_computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix_cc77900a647586cf,
                  mid_computeProjectedCombinedPositionalCovarianceMatrix_cc77900a647586cf,
                  mid_computeReferenceInertialToCollisionPlaneProjectionMatrix_cc77900a647586cf,
                  mid_computeSquaredMahalanobisDistance_e6d4d3215c30992a,
                  mid_computeSquaredMahalanobisDistance_cc0a3d6abf820939,
                  mid_computeSquaredMahalanobisDistance_4c2be837be7de03e,
                  mid_computeSquaredMahalanobisDistance_0062d53dab8088fa,
                  mid_getCombinedRadius_e6d4d3215c30992a,
                  mid_getEncounterFrame_b6be411bef36c8d5,
                  mid_getOtherAtTCA_2f26cad5f478f007,
                  mid_getOtherCovariance_c95f6876e2bce52e,
                  mid_getReferenceAtTCA_2f26cad5f478f007,
                  mid_getReferenceCovariance_c95f6876e2bce52e,
                  mid_getTca_09b0a926600dfc14,
                  mid_toEncounter_d5da1a7ce212932e,
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

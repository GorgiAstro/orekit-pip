#ifndef org_orekit_ssa_collision_shorttermencounter_probability_twod_FieldShortTermEncounter2DDefinition_H
#define org_orekit_ssa_collision_shorttermencounter_probability_twod_FieldShortTermEncounter2DDefinition_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
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
    namespace utils {
      class FieldPVCoordinates;
    }
  }
  namespace hipparchus {
    namespace linear {
      class FieldMatrix;
    }
    namespace geometry {
      namespace euclidean {
        namespace twod {
          class FieldVector2D;
        }
      }
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
                  mid_init$_08f07ab22d4b435b,
                  mid_init$_ba391950ea4463a5,
                  mid_init$_98b0ba8986570da3,
                  mid_init$_eebdd76ed59e9860,
                  mid_computeCombinedCovarianceInEncounterFrame_af363084ecd31b97,
                  mid_computeCombinedCovarianceInReferenceTNW_af363084ecd31b97,
                  mid_computeCoppolaEncounterDuration_08d37e3f77b7239d,
                  mid_computeMahalanobisDistance_08d37e3f77b7239d,
                  mid_computeMahalanobisDistance_e3d0ff3c0584eadf,
                  mid_computeMissDistance_08d37e3f77b7239d,
                  mid_computeOtherPositionInCollisionPlane_da02c7b325187877,
                  mid_computeOtherPositionInRotatedCollisionPlane_da02c7b325187877,
                  mid_computeOtherPositionInRotatedCollisionPlane_a95623cddc5b1016,
                  mid_computeOtherRelativeToReferencePVInReferenceInertial_345fc9bafd1687ff,
                  mid_computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix_02883dbbe5db44ac,
                  mid_computeProjectedCombinedPositionalCovarianceMatrix_02883dbbe5db44ac,
                  mid_computeReferenceInertialToCollisionPlaneProjectionMatrix_02883dbbe5db44ac,
                  mid_computeSquaredMahalanobisDistance_08d37e3f77b7239d,
                  mid_computeSquaredMahalanobisDistance_e3d0ff3c0584eadf,
                  mid_computeSquaredMahalanobisDistance_3e396511c662586f,
                  mid_computeSquaredMahalanobisDistance_d2c2bcf9f0e55408,
                  mid_getCombinedRadius_08d37e3f77b7239d,
                  mid_getEncounterFrame_b6d8b1833bbc692c,
                  mid_getOtherAtTCA_5b5bea4bdba413a2,
                  mid_getOtherCovariance_af363084ecd31b97,
                  mid_getReferenceAtTCA_5b5bea4bdba413a2,
                  mid_getReferenceCovariance_af363084ecd31b97,
                  mid_getTca_1fea28374011eef5,
                  mid_toEncounter_d2002ff8b0b095ba,
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

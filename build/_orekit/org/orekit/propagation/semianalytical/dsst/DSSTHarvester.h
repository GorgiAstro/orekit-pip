#ifndef org_orekit_propagation_semianalytical_dsst_DSSTHarvester_H
#define org_orekit_propagation_semianalytical_dsst_DSSTHarvester_H

#include "org/orekit/propagation/AbstractMatricesHarvester.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace orbits {
      class OrbitType;
      class PositionAngleType;
    }
    namespace propagation {
      class SpacecraftState;
    }
  }
  namespace hipparchus {
    namespace linear {
      class RealMatrix;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {

          class DSSTHarvester : public ::org::orekit::propagation::AbstractMatricesHarvester {
           public:
            enum {
              mid_freezeColumnsNames_ff7cb6c242604316,
              mid_getB1_b2eebabce70526d8,
              mid_getB2_011bf64ebaa4e018,
              mid_getB3_011bf64ebaa4e018,
              mid_getB4_b2eebabce70526d8,
              mid_getJacobiansColumnsNames_d751c1a57012b438,
              mid_getOrbitType_495f818d3570b7f5,
              mid_getParametersJacobian_011bf64ebaa4e018,
              mid_getPositionAngleType_a6db4e6edefda4be,
              mid_getStateTransitionMatrix_011bf64ebaa4e018,
              mid_initializeFieldShortPeriodTerms_72b846eb87f3af9a,
              mid_setReferenceState_72b846eb87f3af9a,
              mid_updateFieldShortPeriodTerms_72b846eb87f3af9a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DSSTHarvester(jobject obj) : ::org::orekit::propagation::AbstractMatricesHarvester(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DSSTHarvester(const DSSTHarvester& obj) : ::org::orekit::propagation::AbstractMatricesHarvester(obj) {}

            void freezeColumnsNames() const;
            ::org::hipparchus::linear::RealMatrix getB1() const;
            ::org::hipparchus::linear::RealMatrix getB2(const ::org::orekit::propagation::SpacecraftState &) const;
            ::org::hipparchus::linear::RealMatrix getB3(const ::org::orekit::propagation::SpacecraftState &) const;
            ::org::hipparchus::linear::RealMatrix getB4() const;
            ::java::util::List getJacobiansColumnsNames() const;
            ::org::orekit::orbits::OrbitType getOrbitType() const;
            ::org::hipparchus::linear::RealMatrix getParametersJacobian(const ::org::orekit::propagation::SpacecraftState &) const;
            ::org::orekit::orbits::PositionAngleType getPositionAngleType() const;
            ::org::hipparchus::linear::RealMatrix getStateTransitionMatrix(const ::org::orekit::propagation::SpacecraftState &) const;
            void initializeFieldShortPeriodTerms(const ::org::orekit::propagation::SpacecraftState &) const;
            void setReferenceState(const ::org::orekit::propagation::SpacecraftState &) const;
            void updateFieldShortPeriodTerms(const ::org::orekit::propagation::SpacecraftState &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          extern PyType_Def PY_TYPE_DEF(DSSTHarvester);
          extern PyTypeObject *PY_TYPE(DSSTHarvester);

          class t_DSSTHarvester {
          public:
            PyObject_HEAD
            DSSTHarvester object;
            static PyObject *wrap_Object(const DSSTHarvester&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif

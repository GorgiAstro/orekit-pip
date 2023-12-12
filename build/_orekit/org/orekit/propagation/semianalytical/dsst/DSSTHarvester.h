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
      class PositionAngleType;
      class OrbitType;
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
              mid_freezeColumnsNames_0640e6acf969ed28,
              mid_getB1_70a207fcbc031df2,
              mid_getB2_fc9cdfa83c55d6b2,
              mid_getB3_fc9cdfa83c55d6b2,
              mid_getB4_70a207fcbc031df2,
              mid_getJacobiansColumnsNames_0d9551367f7ecdef,
              mid_getOrbitType_2cea2a2cb3e02091,
              mid_getParametersJacobian_fc9cdfa83c55d6b2,
              mid_getPositionAngleType_f4984aee71df4c19,
              mid_getStateTransitionMatrix_fc9cdfa83c55d6b2,
              mid_initializeFieldShortPeriodTerms_8655761ebf04b503,
              mid_setReferenceState_8655761ebf04b503,
              mid_updateFieldShortPeriodTerms_8655761ebf04b503,
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

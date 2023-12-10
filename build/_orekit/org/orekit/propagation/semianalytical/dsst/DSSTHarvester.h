#ifndef org_orekit_propagation_semianalytical_dsst_DSSTHarvester_H
#define org_orekit_propagation_semianalytical_dsst_DSSTHarvester_H

#include "org/orekit/propagation/AbstractMatricesHarvester.h"

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
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class String;
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
              mid_freezeColumnsNames_0fa09c18fee449d5,
              mid_getB1_688b496048ff947b,
              mid_getB2_9483b2ac438718ce,
              mid_getB3_9483b2ac438718ce,
              mid_getB4_688b496048ff947b,
              mid_getJacobiansColumnsNames_2afa36052df4765d,
              mid_getOrbitType_e29360d311dc0e20,
              mid_getParametersJacobian_9483b2ac438718ce,
              mid_getPositionAngleType_8f17e83e5a86217c,
              mid_getStateTransitionMatrix_9483b2ac438718ce,
              mid_initializeFieldShortPeriodTerms_0ee5c56004643a2e,
              mid_setReferenceState_0ee5c56004643a2e,
              mid_updateFieldShortPeriodTerms_0ee5c56004643a2e,
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

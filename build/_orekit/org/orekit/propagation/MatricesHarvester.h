#ifndef org_orekit_propagation_MatricesHarvester_H
#define org_orekit_propagation_MatricesHarvester_H

#include "java/lang/Object.h"

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

      class MatricesHarvester : public ::java::lang::Object {
       public:
        enum {
          mid_getJacobiansColumnsNames_2afa36052df4765d,
          mid_getOrbitType_e29360d311dc0e20,
          mid_getParametersJacobian_9483b2ac438718ce,
          mid_getPositionAngleType_8f17e83e5a86217c,
          mid_getStateTransitionMatrix_9483b2ac438718ce,
          mid_setReferenceState_0ee5c56004643a2e,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit MatricesHarvester(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        MatricesHarvester(const MatricesHarvester& obj) : ::java::lang::Object(obj) {}

        ::java::util::List getJacobiansColumnsNames() const;
        ::org::orekit::orbits::OrbitType getOrbitType() const;
        ::org::hipparchus::linear::RealMatrix getParametersJacobian(const ::org::orekit::propagation::SpacecraftState &) const;
        ::org::orekit::orbits::PositionAngleType getPositionAngleType() const;
        ::org::hipparchus::linear::RealMatrix getStateTransitionMatrix(const ::org::orekit::propagation::SpacecraftState &) const;
        void setReferenceState(const ::org::orekit::propagation::SpacecraftState &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      extern PyType_Def PY_TYPE_DEF(MatricesHarvester);
      extern PyTypeObject *PY_TYPE(MatricesHarvester);

      class t_MatricesHarvester {
      public:
        PyObject_HEAD
        MatricesHarvester object;
        static PyObject *wrap_Object(const MatricesHarvester&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif

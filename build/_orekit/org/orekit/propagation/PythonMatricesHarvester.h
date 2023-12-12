#ifndef org_orekit_propagation_PythonMatricesHarvester_H
#define org_orekit_propagation_PythonMatricesHarvester_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Throwable;
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace propagation {
      class MatricesHarvester;
      class SpacecraftState;
    }
    namespace orbits {
      class OrbitType;
      class PositionAngleType;
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

      class PythonMatricesHarvester : public ::java::lang::Object {
       public:
        enum {
          mid_init$_0640e6acf969ed28,
          mid_finalize_0640e6acf969ed28,
          mid_getJacobiansColumnsNames_0d9551367f7ecdef,
          mid_getOrbitType_2cea2a2cb3e02091,
          mid_getParametersJacobian_fc9cdfa83c55d6b2,
          mid_getPositionAngleType_f4984aee71df4c19,
          mid_getStateTransitionMatrix_fc9cdfa83c55d6b2,
          mid_pythonDecRef_0640e6acf969ed28,
          mid_pythonExtension_9e26256fb0d384a2,
          mid_pythonExtension_3cd6a6b354c6aa22,
          mid_setReferenceState_8655761ebf04b503,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PythonMatricesHarvester(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PythonMatricesHarvester(const PythonMatricesHarvester& obj) : ::java::lang::Object(obj) {}

        PythonMatricesHarvester();

        void finalize() const;
        ::java::util::List getJacobiansColumnsNames() const;
        ::org::orekit::orbits::OrbitType getOrbitType() const;
        ::org::hipparchus::linear::RealMatrix getParametersJacobian(const ::org::orekit::propagation::SpacecraftState &) const;
        ::org::orekit::orbits::PositionAngleType getPositionAngleType() const;
        ::org::hipparchus::linear::RealMatrix getStateTransitionMatrix(const ::org::orekit::propagation::SpacecraftState &) const;
        void pythonDecRef() const;
        jlong pythonExtension() const;
        void pythonExtension(jlong) const;
        void setReferenceState(const ::org::orekit::propagation::SpacecraftState &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      extern PyType_Def PY_TYPE_DEF(PythonMatricesHarvester);
      extern PyTypeObject *PY_TYPE(PythonMatricesHarvester);

      class t_PythonMatricesHarvester {
      public:
        PyObject_HEAD
        PythonMatricesHarvester object;
        static PyObject *wrap_Object(const PythonMatricesHarvester&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif

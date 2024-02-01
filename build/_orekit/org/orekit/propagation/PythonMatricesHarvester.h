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
  namespace hipparchus {
    namespace linear {
      class RealMatrix;
    }
  }
  namespace orekit {
    namespace orbits {
      class OrbitType;
      class PositionAngleType;
    }
    namespace propagation {
      class SpacecraftState;
      class MatricesHarvester;
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
          mid_init$_ff7cb6c242604316,
          mid_finalize_ff7cb6c242604316,
          mid_getJacobiansColumnsNames_d751c1a57012b438,
          mid_getOrbitType_495f818d3570b7f5,
          mid_getParametersJacobian_011bf64ebaa4e018,
          mid_getPositionAngleType_a6db4e6edefda4be,
          mid_getStateTransitionMatrix_011bf64ebaa4e018,
          mid_pythonDecRef_ff7cb6c242604316,
          mid_pythonExtension_42c72b98e3c2e08a,
          mid_pythonExtension_f5bbab7e97879358,
          mid_setReferenceState_72b846eb87f3af9a,
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

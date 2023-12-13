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
      class PositionAngleType;
      class OrbitType;
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
          mid_init$_a1fa5dae97ea5ed2,
          mid_finalize_a1fa5dae97ea5ed2,
          mid_getJacobiansColumnsNames_e62d3bb06d56d7e3,
          mid_getOrbitType_c7d4737d7afca612,
          mid_getParametersJacobian_b7aa5791b069a41f,
          mid_getPositionAngleType_c25055891f180348,
          mid_getStateTransitionMatrix_b7aa5791b069a41f,
          mid_pythonDecRef_a1fa5dae97ea5ed2,
          mid_pythonExtension_6c0ce7e438e5ded4,
          mid_pythonExtension_3d7dd2314a0dd456,
          mid_setReferenceState_280c3390961e0a50,
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

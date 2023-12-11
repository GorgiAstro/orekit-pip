#ifndef org_orekit_propagation_PythonAbstractMatricesHarvester_H
#define org_orekit_propagation_PythonAbstractMatricesHarvester_H

#include "org/orekit/propagation/AbstractMatricesHarvester.h"

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
    namespace utils {
      class DoubleArrayDictionary;
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

      class PythonAbstractMatricesHarvester : public ::org::orekit::propagation::AbstractMatricesHarvester {
       public:
        enum {
          mid_init$_37a7a25250858c8e,
          mid_finalize_0640e6acf969ed28,
          mid_freezeColumnsNames_0640e6acf969ed28,
          mid_getJacobiansColumnsNames_0d9551367f7ecdef,
          mid_getOrbitType_2cea2a2cb3e02091,
          mid_getPositionAngleType_f4984aee71df4c19,
          mid_pythonDecRef_0640e6acf969ed28,
          mid_pythonExtension_9e26256fb0d384a2,
          mid_pythonExtension_3cd6a6b354c6aa22,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PythonAbstractMatricesHarvester(jobject obj) : ::org::orekit::propagation::AbstractMatricesHarvester(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PythonAbstractMatricesHarvester(const PythonAbstractMatricesHarvester& obj) : ::org::orekit::propagation::AbstractMatricesHarvester(obj) {}

        PythonAbstractMatricesHarvester(const ::java::lang::String &, const ::org::hipparchus::linear::RealMatrix &, const ::org::orekit::utils::DoubleArrayDictionary &);

        void finalize() const;
        void freezeColumnsNames() const;
        ::java::util::List getJacobiansColumnsNames() const;
        ::org::orekit::orbits::OrbitType getOrbitType() const;
        ::org::orekit::orbits::PositionAngleType getPositionAngleType() const;
        void pythonDecRef() const;
        jlong pythonExtension() const;
        void pythonExtension(jlong) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      extern PyType_Def PY_TYPE_DEF(PythonAbstractMatricesHarvester);
      extern PyTypeObject *PY_TYPE(PythonAbstractMatricesHarvester);

      class t_PythonAbstractMatricesHarvester {
      public:
        PyObject_HEAD
        PythonAbstractMatricesHarvester object;
        static PyObject *wrap_Object(const PythonAbstractMatricesHarvester&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif

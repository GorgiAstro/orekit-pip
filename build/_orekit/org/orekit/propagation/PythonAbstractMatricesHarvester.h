#ifndef org_orekit_propagation_PythonAbstractMatricesHarvester_H
#define org_orekit_propagation_PythonAbstractMatricesHarvester_H

#include "org/orekit/propagation/AbstractMatricesHarvester.h"

namespace org {
  namespace orekit {
    namespace orbits {
      class PositionAngleType;
      class OrbitType;
    }
    namespace utils {
      class DoubleArrayDictionary;
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
    class Throwable;
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {

      class PythonAbstractMatricesHarvester : public ::org::orekit::propagation::AbstractMatricesHarvester {
       public:
        enum {
          mid_init$_4eed9f37096d374b,
          mid_finalize_0fa09c18fee449d5,
          mid_freezeColumnsNames_0fa09c18fee449d5,
          mid_getJacobiansColumnsNames_2afa36052df4765d,
          mid_getOrbitType_e29360d311dc0e20,
          mid_getPositionAngleType_8f17e83e5a86217c,
          mid_pythonDecRef_0fa09c18fee449d5,
          mid_pythonExtension_492808a339bfa35f,
          mid_pythonExtension_3a8e7649f31fdb20,
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

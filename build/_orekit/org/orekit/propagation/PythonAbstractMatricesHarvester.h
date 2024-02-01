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

      class PythonAbstractMatricesHarvester : public ::org::orekit::propagation::AbstractMatricesHarvester {
       public:
        enum {
          mid_init$_aa25a7bd8018a8a8,
          mid_finalize_ff7cb6c242604316,
          mid_freezeColumnsNames_ff7cb6c242604316,
          mid_getJacobiansColumnsNames_d751c1a57012b438,
          mid_getOrbitType_495f818d3570b7f5,
          mid_getPositionAngleType_a6db4e6edefda4be,
          mid_pythonDecRef_ff7cb6c242604316,
          mid_pythonExtension_42c72b98e3c2e08a,
          mid_pythonExtension_f5bbab7e97879358,
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

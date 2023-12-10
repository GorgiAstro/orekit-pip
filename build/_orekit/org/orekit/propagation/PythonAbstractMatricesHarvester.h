#ifndef org_orekit_propagation_PythonAbstractMatricesHarvester_H
#define org_orekit_propagation_PythonAbstractMatricesHarvester_H

#include "org/orekit/propagation/AbstractMatricesHarvester.h"

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
          mid_init$_a6f986e64780e110,
          mid_finalize_7ae3461a92a43152,
          mid_freezeColumnsNames_7ae3461a92a43152,
          mid_getJacobiansColumnsNames_a6156df500549a58,
          mid_getOrbitType_63ea5cd020bf7bf1,
          mid_getPositionAngleType_2571e8fe1cede425,
          mid_pythonDecRef_7ae3461a92a43152,
          mid_pythonExtension_a27fc9afd27e559d,
          mid_pythonExtension_fefb08975c10f0a1,
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

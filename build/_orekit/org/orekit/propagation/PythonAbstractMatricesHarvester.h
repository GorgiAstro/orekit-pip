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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {

      class PythonAbstractMatricesHarvester : public ::org::orekit::propagation::AbstractMatricesHarvester {
       public:
        enum {
          mid_init$_e716ca6f57d42548,
          mid_finalize_a1fa5dae97ea5ed2,
          mid_freezeColumnsNames_a1fa5dae97ea5ed2,
          mid_getJacobiansColumnsNames_e62d3bb06d56d7e3,
          mid_getOrbitType_c7d4737d7afca612,
          mid_getPositionAngleType_c25055891f180348,
          mid_pythonDecRef_a1fa5dae97ea5ed2,
          mid_pythonExtension_6c0ce7e438e5ded4,
          mid_pythonExtension_3d7dd2314a0dd456,
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

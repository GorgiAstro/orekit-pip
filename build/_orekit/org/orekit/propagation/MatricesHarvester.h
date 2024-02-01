#ifndef org_orekit_propagation_MatricesHarvester_H
#define org_orekit_propagation_MatricesHarvester_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace orbits {
      class OrbitType;
      class PositionAngleType;
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {

      class MatricesHarvester : public ::java::lang::Object {
       public:
        enum {
          mid_getJacobiansColumnsNames_d751c1a57012b438,
          mid_getOrbitType_495f818d3570b7f5,
          mid_getParametersJacobian_011bf64ebaa4e018,
          mid_getPositionAngleType_a6db4e6edefda4be,
          mid_getStateTransitionMatrix_011bf64ebaa4e018,
          mid_setReferenceState_72b846eb87f3af9a,
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

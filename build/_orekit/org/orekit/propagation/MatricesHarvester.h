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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {

      class MatricesHarvester : public ::java::lang::Object {
       public:
        enum {
          mid_getJacobiansColumnsNames_e62d3bb06d56d7e3,
          mid_getOrbitType_c7d4737d7afca612,
          mid_getParametersJacobian_b7aa5791b069a41f,
          mid_getPositionAngleType_c25055891f180348,
          mid_getStateTransitionMatrix_b7aa5791b069a41f,
          mid_setReferenceState_280c3390961e0a50,
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

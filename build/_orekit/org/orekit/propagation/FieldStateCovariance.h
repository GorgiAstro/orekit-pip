#ifndef org_orekit_propagation_FieldStateCovariance_H
#define org_orekit_propagation_FieldStateCovariance_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace frames {
      class LOF;
      class Frame;
    }
    namespace time {
      class FieldAbsoluteDate;
      class FieldTimeStamped;
    }
    namespace orbits {
      class OrbitType;
      class PositionAngleType;
      class FieldOrbit;
    }
    namespace propagation {
      class FieldStateCovariance;
      class StateCovariance;
    }
  }
  namespace hipparchus {
    namespace linear {
      class FieldMatrix;
    }
    class CalculusFieldElement;
    class Field;
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {

      class FieldStateCovariance : public ::java::lang::Object {
       public:
        enum {
          mid_init$_e793e31fd7661d04,
          mid_init$_5d99d74ed1c760dc,
          mid_changeCovarianceFrame_27b207a35c9e1194,
          mid_changeCovarianceFrame_b0e3ac315d7b5d79,
          mid_changeCovarianceType_bbfc7ef621f6c573,
          mid_getDate_f1fe4daf77c66560,
          mid_getFrame_6c9bc0a928c56d4e,
          mid_getLOF_13b82f8eb71f0f31,
          mid_getMatrix_1d6b27621d7bea96,
          mid_getOrbitType_2cea2a2cb3e02091,
          mid_getPositionAngleType_f4984aee71df4c19,
          mid_shiftedBy_af70d7fbde9f1d5c,
          mid_toStateCovariance_8e9af39b29713242,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FieldStateCovariance(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldStateCovariance(const FieldStateCovariance& obj) : ::java::lang::Object(obj) {}

        FieldStateCovariance(const ::org::hipparchus::linear::FieldMatrix &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::frames::LOF &);
        FieldStateCovariance(const ::org::hipparchus::linear::FieldMatrix &, const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::frames::Frame &, const ::org::orekit::orbits::OrbitType &, const ::org::orekit::orbits::PositionAngleType &);

        FieldStateCovariance changeCovarianceFrame(const ::org::orekit::orbits::FieldOrbit &, const ::org::orekit::frames::Frame &) const;
        FieldStateCovariance changeCovarianceFrame(const ::org::orekit::orbits::FieldOrbit &, const ::org::orekit::frames::LOF &) const;
        FieldStateCovariance changeCovarianceType(const ::org::orekit::orbits::FieldOrbit &, const ::org::orekit::orbits::OrbitType &, const ::org::orekit::orbits::PositionAngleType &) const;
        ::org::orekit::time::FieldAbsoluteDate getDate() const;
        ::org::orekit::frames::Frame getFrame() const;
        ::org::orekit::frames::LOF getLOF() const;
        ::org::hipparchus::linear::FieldMatrix getMatrix() const;
        ::org::orekit::orbits::OrbitType getOrbitType() const;
        ::org::orekit::orbits::PositionAngleType getPositionAngleType() const;
        FieldStateCovariance shiftedBy(const ::org::hipparchus::Field &, const ::org::orekit::orbits::FieldOrbit &, const ::org::hipparchus::CalculusFieldElement &) const;
        ::org::orekit::propagation::StateCovariance toStateCovariance() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      extern PyType_Def PY_TYPE_DEF(FieldStateCovariance);
      extern PyTypeObject *PY_TYPE(FieldStateCovariance);

      class t_FieldStateCovariance {
      public:
        PyObject_HEAD
        FieldStateCovariance object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_FieldStateCovariance *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const FieldStateCovariance&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const FieldStateCovariance&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif

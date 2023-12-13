#ifndef org_orekit_propagation_FieldStateCovariance_H
#define org_orekit_propagation_FieldStateCovariance_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class FieldStateCovariance;
      class StateCovariance;
    }
    namespace time {
      class FieldAbsoluteDate;
      class FieldTimeStamped;
    }
    namespace frames {
      class LOF;
      class Frame;
    }
    namespace orbits {
      class OrbitType;
      class PositionAngleType;
      class FieldOrbit;
    }
  }
  namespace hipparchus {
    class Field;
    class CalculusFieldElement;
    namespace linear {
      class FieldMatrix;
    }
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
          mid_init$_2441c6f01a3ea850,
          mid_init$_b4a10c6f7c6d914d,
          mid_changeCovarianceFrame_3dbaa923bdea8ccc,
          mid_changeCovarianceFrame_ec8ad61492c0cb3f,
          mid_changeCovarianceType_7b9dbe8595640301,
          mid_getDate_fa23a4301b9c83e7,
          mid_getFrame_2c51111cc6894ba1,
          mid_getLOF_f6a236b1948152b5,
          mid_getMatrix_81d49643ce3a3c0b,
          mid_getOrbitType_c7d4737d7afca612,
          mid_getPositionAngleType_c25055891f180348,
          mid_shiftedBy_79f4fe4d73401b44,
          mid_toStateCovariance_6c7ec62384a674b1,
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

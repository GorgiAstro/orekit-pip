#ifndef org_orekit_propagation_FieldStateCovariance_H
#define org_orekit_propagation_FieldStateCovariance_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class StateCovariance;
      class FieldStateCovariance;
    }
    namespace orbits {
      class PositionAngleType;
      class OrbitType;
      class FieldOrbit;
    }
    namespace time {
      class FieldTimeStamped;
      class FieldAbsoluteDate;
    }
    namespace frames {
      class Frame;
      class LOF;
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
    class Field;
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
          mid_init$_2eeff210f6495c96,
          mid_init$_f76c0380c93d0193,
          mid_changeCovarianceFrame_f4f5b65c95d1a515,
          mid_changeCovarianceFrame_7fc85fab4fb9f757,
          mid_changeCovarianceType_3109b3511c2d70d9,
          mid_getDate_51da00d5b8a3b5df,
          mid_getFrame_b86f9f61d97a7244,
          mid_getLOF_d1997b828913f65f,
          mid_getMatrix_c992983685c753c5,
          mid_getOrbitType_e29360d311dc0e20,
          mid_getPositionAngleType_8f17e83e5a86217c,
          mid_shiftedBy_dcaf767057f01ca9,
          mid_toStateCovariance_9114b59f891867ba,
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

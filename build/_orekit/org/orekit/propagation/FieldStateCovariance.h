#ifndef org_orekit_propagation_FieldStateCovariance_H
#define org_orekit_propagation_FieldStateCovariance_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class StateCovariance;
      class FieldStateCovariance;
    }
    namespace frames {
      class Frame;
      class LOF;
    }
    namespace time {
      class FieldTimeStamped;
      class FieldAbsoluteDate;
    }
    namespace orbits {
      class PositionAngleType;
      class FieldOrbit;
      class OrbitType;
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
          mid_init$_6864f987223edb24,
          mid_init$_72604ef56d6aab8a,
          mid_changeCovarianceFrame_ed4a16a3aada590f,
          mid_changeCovarianceFrame_46863450506a2a2f,
          mid_changeCovarianceType_19c07e1c103265d1,
          mid_getDate_09b0a926600dfc14,
          mid_getFrame_c8fe21bcdac65bf6,
          mid_getLOF_6131a2ffcdec47e9,
          mid_getMatrix_cc77900a647586cf,
          mid_getOrbitType_63ea5cd020bf7bf1,
          mid_getPositionAngleType_2571e8fe1cede425,
          mid_shiftedBy_f43a586515ae07e7,
          mid_toStateCovariance_79b153af3bb7e103,
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

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
      class FieldTimeStamped;
      class FieldAbsoluteDate;
    }
    namespace orbits {
      class PositionAngleType;
      class FieldOrbit;
      class OrbitType;
    }
    namespace frames {
      class LOF;
      class Frame;
    }
  }
  namespace hipparchus {
    namespace linear {
      class FieldMatrix;
    }
    class Field;
    class CalculusFieldElement;
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
          mid_init$_88d584cdd92a3cae,
          mid_init$_bed6ecd49df5afea,
          mid_changeCovarianceFrame_183f84aead5145f7,
          mid_changeCovarianceFrame_eaed7493158f72eb,
          mid_changeCovarianceType_aa46c995ef728b86,
          mid_getDate_1fea28374011eef5,
          mid_getFrame_cb151471db4570f0,
          mid_getLOF_4b777b7213a5ce76,
          mid_getMatrix_02883dbbe5db44ac,
          mid_getOrbitType_495f818d3570b7f5,
          mid_getPositionAngleType_a6db4e6edefda4be,
          mid_shiftedBy_a8b4349c52e90b99,
          mid_toStateCovariance_50fcd7d28a171699,
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

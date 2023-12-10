#ifndef org_orekit_propagation_FieldSpacecraftStateInterpolator_H
#define org_orekit_propagation_FieldSpacecraftStateInterpolator_H

#include "org/orekit/time/AbstractFieldTimeInterpolator.h"

namespace java {
  namespace util {
    class List;
    class Collection;
    class Optional;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace frames {
      class Frame;
    }
    namespace time {
      class FieldTimeStamped;
      class FieldTimeInterpolator;
      class TimeStampedField;
      class FieldAbsoluteDate;
    }
    namespace utils {
      class AngularDerivativesFilter;
      class CartesianDerivativesFilter;
      class FieldAbsolutePVCoordinates;
    }
    namespace attitudes {
      class FieldAttitude;
    }
    namespace orbits {
      class FieldOrbit;
    }
    namespace propagation {
      class FieldSpacecraftState;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {

      class FieldSpacecraftStateInterpolator : public ::org::orekit::time::AbstractFieldTimeInterpolator {
       public:
        enum {
          mid_init$_b1992bd1bb70f476,
          mid_init$_2ec8e00deddf59e8,
          mid_init$_4806cf42a7c4464d,
          mid_init$_c113313c707bf3d9,
          mid_init$_8874babef770dcb7,
          mid_init$_f5be9a20c1bf69c8,
          mid_getAbsPVAInterpolator_c56b7edc0c3c7d86,
          mid_getAdditionalStateInterpolator_c56b7edc0c3c7d86,
          mid_getAttitudeInterpolator_c56b7edc0c3c7d86,
          mid_getMassInterpolator_c56b7edc0c3c7d86,
          mid_getNbInterpolationPoints_f2f64475e4580546,
          mid_getOrbitInterpolator_c56b7edc0c3c7d86,
          mid_getOutputFrame_c8fe21bcdac65bf6,
          mid_getSubInterpolators_a6156df500549a58,
          mid_interpolate_b85587e735f13c79,
          mid_interpolate_b78e440b930977cb,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FieldSpacecraftStateInterpolator(jobject obj) : ::org::orekit::time::AbstractFieldTimeInterpolator(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldSpacecraftStateInterpolator(const FieldSpacecraftStateInterpolator& obj) : ::org::orekit::time::AbstractFieldTimeInterpolator(obj) {}

        FieldSpacecraftStateInterpolator(const ::org::orekit::frames::Frame &);
        FieldSpacecraftStateInterpolator(jint, const ::org::orekit::frames::Frame &);
        FieldSpacecraftStateInterpolator(jint, const ::org::orekit::frames::Frame &, const ::org::orekit::frames::Frame &);
        FieldSpacecraftStateInterpolator(jint, jdouble, const ::org::orekit::frames::Frame &, const ::org::orekit::frames::Frame &);
        FieldSpacecraftStateInterpolator(jint, jdouble, const ::org::orekit::frames::Frame &, const ::org::orekit::frames::Frame &, const ::org::orekit::utils::CartesianDerivativesFilter &, const ::org::orekit::utils::AngularDerivativesFilter &);
        FieldSpacecraftStateInterpolator(const ::org::orekit::frames::Frame &, const ::org::orekit::time::FieldTimeInterpolator &, const ::org::orekit::time::FieldTimeInterpolator &, const ::org::orekit::time::FieldTimeInterpolator &, const ::org::orekit::time::FieldTimeInterpolator &, const ::org::orekit::time::FieldTimeInterpolator &);

        ::java::util::Optional getAbsPVAInterpolator() const;
        ::java::util::Optional getAdditionalStateInterpolator() const;
        ::java::util::Optional getAttitudeInterpolator() const;
        ::java::util::Optional getMassInterpolator() const;
        jint getNbInterpolationPoints() const;
        ::java::util::Optional getOrbitInterpolator() const;
        ::org::orekit::frames::Frame getOutputFrame() const;
        ::java::util::List getSubInterpolators() const;
        ::org::orekit::propagation::FieldSpacecraftState interpolate(const ::org::orekit::time::FieldAbsoluteDate &, const ::java::util::Collection &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      extern PyType_Def PY_TYPE_DEF(FieldSpacecraftStateInterpolator);
      extern PyTypeObject *PY_TYPE(FieldSpacecraftStateInterpolator);

      class t_FieldSpacecraftStateInterpolator {
      public:
        PyObject_HEAD
        FieldSpacecraftStateInterpolator object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_FieldSpacecraftStateInterpolator *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const FieldSpacecraftStateInterpolator&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const FieldSpacecraftStateInterpolator&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif

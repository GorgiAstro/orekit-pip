#ifndef org_orekit_propagation_FieldSpacecraftStateInterpolator_H
#define org_orekit_propagation_FieldSpacecraftStateInterpolator_H

#include "org/orekit/time/AbstractFieldTimeInterpolator.h"

namespace org {
  namespace orekit {
    namespace time {
      class FieldTimeInterpolator;
      class FieldTimeStamped;
      class FieldAbsoluteDate;
      class TimeStampedField;
    }
    namespace frames {
      class Frame;
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {

      class FieldSpacecraftStateInterpolator : public ::org::orekit::time::AbstractFieldTimeInterpolator {
       public:
        enum {
          mid_init$_b5680f5c30eede66,
          mid_init$_f67f9ac4338cd9bf,
          mid_init$_1be06daec585e1cc,
          mid_init$_6039fdd299a8bef6,
          mid_init$_47d46a6c49da3b1b,
          mid_init$_a37d544e446cc50c,
          mid_getAbsPVAInterpolator_c5e311a9e5531e7d,
          mid_getAdditionalStateInterpolator_c5e311a9e5531e7d,
          mid_getAttitudeInterpolator_c5e311a9e5531e7d,
          mid_getMassInterpolator_c5e311a9e5531e7d,
          mid_getNbInterpolationPoints_570ce0828f81a2c1,
          mid_getOrbitInterpolator_c5e311a9e5531e7d,
          mid_getOutputFrame_b86f9f61d97a7244,
          mid_getSubInterpolators_2afa36052df4765d,
          mid_interpolate_bede014d8db77b67,
          mid_interpolate_1fc44234b9e2bf71,
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

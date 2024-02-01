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
    namespace time {
      class FieldTimeStamped;
      class TimeStampedField;
      class FieldTimeInterpolator;
      class FieldAbsoluteDate;
    }
    namespace utils {
      class CartesianDerivativesFilter;
      class FieldAbsolutePVCoordinates;
      class AngularDerivativesFilter;
    }
    namespace orbits {
      class FieldOrbit;
    }
    namespace attitudes {
      class FieldAttitude;
    }
    namespace frames {
      class Frame;
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
          mid_init$_9725b246c9e25f68,
          mid_init$_b744963488fb11c5,
          mid_init$_b764253cc264c047,
          mid_init$_1567a5431e11bb91,
          mid_init$_0aad11dd3e2442fe,
          mid_init$_8d82f8ecd070a43b,
          mid_getAbsPVAInterpolator_aa56605e3771f379,
          mid_getAdditionalStateInterpolator_aa56605e3771f379,
          mid_getAttitudeInterpolator_aa56605e3771f379,
          mid_getMassInterpolator_aa56605e3771f379,
          mid_getOrbitInterpolator_aa56605e3771f379,
          mid_getOutputFrame_cb151471db4570f0,
          mid_getSubInterpolators_d751c1a57012b438,
          mid_interpolate_e5fc869b7e9ee70d,
          mid_interpolate_675ec4e0c4a0d4a9,
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

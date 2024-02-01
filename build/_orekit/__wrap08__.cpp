#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/FieldSimpsonIntegrator.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {

        ::java::lang::Class *FieldSimpsonIntegrator::class$ = NULL;
        jmethodID *FieldSimpsonIntegrator::mids$ = NULL;
        bool FieldSimpsonIntegrator::live$ = false;
        jint FieldSimpsonIntegrator::SIMPSON_MAX_ITERATIONS_COUNT = (jint) 0;

        jclass FieldSimpsonIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/FieldSimpsonIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a44abdd035f01345] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
            mids$[mid_init$_ddbf374219cf6329] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;II)V");
            mids$[mid_init$_119028fb2475d87b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;DDII)V");
            mids$[mid_doIntegrate_08d37e3f77b7239d] = env->getMethodID(cls, "doIntegrate", "()Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            SIMPSON_MAX_ITERATIONS_COUNT = env->getStaticIntField(cls, "SIMPSON_MAX_ITERATIONS_COUNT");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldSimpsonIntegrator::FieldSimpsonIntegrator(const ::org::hipparchus::Field & a0) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_a44abdd035f01345, a0.this$)) {}

        FieldSimpsonIntegrator::FieldSimpsonIntegrator(const ::org::hipparchus::Field & a0, jint a1, jint a2) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_ddbf374219cf6329, a0.this$, a1, a2)) {}

        FieldSimpsonIntegrator::FieldSimpsonIntegrator(const ::org::hipparchus::Field & a0, jdouble a1, jdouble a2, jint a3, jint a4) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_119028fb2475d87b, a0.this$, a1, a2, a3, a4)) {}
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        static PyObject *t_FieldSimpsonIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldSimpsonIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldSimpsonIntegrator_of_(t_FieldSimpsonIntegrator *self, PyObject *args);
        static int t_FieldSimpsonIntegrator_init_(t_FieldSimpsonIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldSimpsonIntegrator_get__parameters_(t_FieldSimpsonIntegrator *self, void *data);
        static PyGetSetDef t_FieldSimpsonIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_FieldSimpsonIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldSimpsonIntegrator__methods_[] = {
          DECLARE_METHOD(t_FieldSimpsonIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldSimpsonIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldSimpsonIntegrator, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldSimpsonIntegrator)[] = {
          { Py_tp_methods, t_FieldSimpsonIntegrator__methods_ },
          { Py_tp_init, (void *) t_FieldSimpsonIntegrator_init_ },
          { Py_tp_getset, t_FieldSimpsonIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldSimpsonIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator),
          NULL
        };

        DEFINE_TYPE(FieldSimpsonIntegrator, t_FieldSimpsonIntegrator, FieldSimpsonIntegrator);
        PyObject *t_FieldSimpsonIntegrator::wrap_Object(const FieldSimpsonIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldSimpsonIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldSimpsonIntegrator *self = (t_FieldSimpsonIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldSimpsonIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldSimpsonIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldSimpsonIntegrator *self = (t_FieldSimpsonIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldSimpsonIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldSimpsonIntegrator), &PY_TYPE_DEF(FieldSimpsonIntegrator), module, "FieldSimpsonIntegrator", 0);
        }

        void t_FieldSimpsonIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSimpsonIntegrator), "class_", make_descriptor(FieldSimpsonIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSimpsonIntegrator), "wrapfn_", make_descriptor(t_FieldSimpsonIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSimpsonIntegrator), "boxfn_", make_descriptor(boxObject));
          env->getClass(FieldSimpsonIntegrator::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSimpsonIntegrator), "SIMPSON_MAX_ITERATIONS_COUNT", make_descriptor(FieldSimpsonIntegrator::SIMPSON_MAX_ITERATIONS_COUNT));
        }

        static PyObject *t_FieldSimpsonIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldSimpsonIntegrator::initializeClass, 1)))
            return NULL;
          return t_FieldSimpsonIntegrator::wrap_Object(FieldSimpsonIntegrator(((t_FieldSimpsonIntegrator *) arg)->object.this$));
        }
        static PyObject *t_FieldSimpsonIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldSimpsonIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldSimpsonIntegrator_of_(t_FieldSimpsonIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldSimpsonIntegrator_init_(t_FieldSimpsonIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              FieldSimpsonIntegrator object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
              {
                INT_CALL(object = FieldSimpsonIntegrator(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              jint a2;
              FieldSimpsonIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
              {
                INT_CALL(object = FieldSimpsonIntegrator(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jdouble a1;
              jdouble a2;
              jint a3;
              jint a4;
              FieldSimpsonIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KDDII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = FieldSimpsonIntegrator(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
           default:
           err:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }
        static PyObject *t_FieldSimpsonIntegrator_get__parameters_(t_FieldSimpsonIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/definitions/BodyFacade.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/definitions/BodyFacade.h"
#include "org/orekit/files/ccsds/definitions/CenterName.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/bodies/CelestialBodies.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *BodyFacade::class$ = NULL;
          jmethodID *BodyFacade::mids$ = NULL;
          bool BodyFacade::live$ = false;

          jclass BodyFacade::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/BodyFacade");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_64c480fce8d50750] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/bodies/CelestialBody;)V");
              mids$[mid_create_992f0af2f17e9fc3] = env->getStaticMethodID(cls, "create", "(Lorg/orekit/files/ccsds/definitions/CenterName;)Lorg/orekit/files/ccsds/definitions/BodyFacade;");
              mids$[mid_create_1ffe9108b77134ed] = env->getStaticMethodID(cls, "create", "(Lorg/orekit/files/ccsds/definitions/CenterName;Lorg/orekit/bodies/CelestialBodies;)Lorg/orekit/files/ccsds/definitions/BodyFacade;");
              mids$[mid_create_f4e150b0b64b3a10] = env->getStaticMethodID(cls, "create", "(Lorg/orekit/files/ccsds/definitions/CenterName;Lorg/orekit/data/DataContext;)Lorg/orekit/files/ccsds/definitions/BodyFacade;");
              mids$[mid_getBody_a1474f5cfab89b5e] = env->getMethodID(cls, "getBody", "()Lorg/orekit/bodies/CelestialBody;");
              mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          BodyFacade::BodyFacade(const ::java::lang::String & a0, const ::org::orekit::bodies::CelestialBody & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_64c480fce8d50750, a0.this$, a1.this$)) {}

          BodyFacade BodyFacade::create(const ::org::orekit::files::ccsds::definitions::CenterName & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return BodyFacade(env->callStaticObjectMethod(cls, mids$[mid_create_992f0af2f17e9fc3], a0.this$));
          }

          BodyFacade BodyFacade::create(const ::org::orekit::files::ccsds::definitions::CenterName & a0, const ::org::orekit::bodies::CelestialBodies & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return BodyFacade(env->callStaticObjectMethod(cls, mids$[mid_create_1ffe9108b77134ed], a0.this$, a1.this$));
          }

          BodyFacade BodyFacade::create(const ::org::orekit::files::ccsds::definitions::CenterName & a0, const ::org::orekit::data::DataContext & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return BodyFacade(env->callStaticObjectMethod(cls, mids$[mid_create_f4e150b0b64b3a10], a0.this$, a1.this$));
          }

          ::org::orekit::bodies::CelestialBody BodyFacade::getBody() const
          {
            return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getBody_a1474f5cfab89b5e]));
          }

          ::java::lang::String BodyFacade::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {
          static PyObject *t_BodyFacade_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_BodyFacade_instance_(PyTypeObject *type, PyObject *arg);
          static int t_BodyFacade_init_(t_BodyFacade *self, PyObject *args, PyObject *kwds);
          static PyObject *t_BodyFacade_create(PyTypeObject *type, PyObject *args);
          static PyObject *t_BodyFacade_getBody(t_BodyFacade *self);
          static PyObject *t_BodyFacade_getName(t_BodyFacade *self);
          static PyObject *t_BodyFacade_get__body(t_BodyFacade *self, void *data);
          static PyObject *t_BodyFacade_get__name(t_BodyFacade *self, void *data);
          static PyGetSetDef t_BodyFacade__fields_[] = {
            DECLARE_GET_FIELD(t_BodyFacade, body),
            DECLARE_GET_FIELD(t_BodyFacade, name),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_BodyFacade__methods_[] = {
            DECLARE_METHOD(t_BodyFacade, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BodyFacade, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BodyFacade, create, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_BodyFacade, getBody, METH_NOARGS),
            DECLARE_METHOD(t_BodyFacade, getName, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(BodyFacade)[] = {
            { Py_tp_methods, t_BodyFacade__methods_ },
            { Py_tp_init, (void *) t_BodyFacade_init_ },
            { Py_tp_getset, t_BodyFacade__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(BodyFacade)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(BodyFacade, t_BodyFacade, BodyFacade);

          void t_BodyFacade::install(PyObject *module)
          {
            installType(&PY_TYPE(BodyFacade), &PY_TYPE_DEF(BodyFacade), module, "BodyFacade", 0);
          }

          void t_BodyFacade::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(BodyFacade), "class_", make_descriptor(BodyFacade::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BodyFacade), "wrapfn_", make_descriptor(t_BodyFacade::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BodyFacade), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_BodyFacade_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, BodyFacade::initializeClass, 1)))
              return NULL;
            return t_BodyFacade::wrap_Object(BodyFacade(((t_BodyFacade *) arg)->object.this$));
          }
          static PyObject *t_BodyFacade_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, BodyFacade::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_BodyFacade_init_(t_BodyFacade *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::bodies::CelestialBody a1((jobject) NULL);
            BodyFacade object((jobject) NULL);

            if (!parseArgs(args, "sk", ::org::orekit::bodies::CelestialBody::initializeClass, &a0, &a1))
            {
              INT_CALL(object = BodyFacade(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_BodyFacade_create(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::files::ccsds::definitions::CenterName a0((jobject) NULL);
                PyTypeObject **p0;
                BodyFacade result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::orekit::files::ccsds::definitions::CenterName::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::definitions::t_CenterName::parameters_))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::BodyFacade::create(a0));
                  return t_BodyFacade::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                ::org::orekit::files::ccsds::definitions::CenterName a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::bodies::CelestialBodies a1((jobject) NULL);
                BodyFacade result((jobject) NULL);

                if (!parseArgs(args, "Kk", ::org::orekit::files::ccsds::definitions::CenterName::initializeClass, ::org::orekit::bodies::CelestialBodies::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::definitions::t_CenterName::parameters_, &a1))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::BodyFacade::create(a0, a1));
                  return t_BodyFacade::wrap_Object(result);
                }
              }
              {
                ::org::orekit::files::ccsds::definitions::CenterName a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::data::DataContext a1((jobject) NULL);
                BodyFacade result((jobject) NULL);

                if (!parseArgs(args, "Kk", ::org::orekit::files::ccsds::definitions::CenterName::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::definitions::t_CenterName::parameters_, &a1))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::BodyFacade::create(a0, a1));
                  return t_BodyFacade::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "create", args);
            return NULL;
          }

          static PyObject *t_BodyFacade_getBody(t_BodyFacade *self)
          {
            ::org::orekit::bodies::CelestialBody result((jobject) NULL);
            OBJ_CALL(result = self->object.getBody());
            return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
          }

          static PyObject *t_BodyFacade_getName(t_BodyFacade *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_BodyFacade_get__body(t_BodyFacade *self, void *data)
          {
            ::org::orekit::bodies::CelestialBody value((jobject) NULL);
            OBJ_CALL(value = self->object.getBody());
            return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
          }

          static PyObject *t_BodyFacade_get__name(t_BodyFacade *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getName());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CPF$CPFEphemeris.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/util/List.h"
#include "org/orekit/propagation/BoundedPropagator.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "org/orekit/files/ilrs/CPF$CPFEphemeris.h"
#include "org/orekit/files/general/EphemerisFile$EphemerisSegment.h"
#include "org/orekit/files/ilrs/CPF.h"
#include "org/orekit/files/ilrs/CPF$CPFCoordinate.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/String.h"
#include "org/orekit/files/general/EphemerisFile$SatelliteEphemeris.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CPF$CPFEphemeris::class$ = NULL;
        jmethodID *CPF$CPFEphemeris::mids$ = NULL;
        bool CPF$CPFEphemeris::live$ = false;

        jclass CPF$CPFEphemeris::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CPF$CPFEphemeris");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_bd1743e2968161dc] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ilrs/CPF;Ljava/lang/String;)V");
            mids$[mid_getAvailableDerivatives_b9dfc27d8c56b5de] = env->getMethodID(cls, "getAvailableDerivatives", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
            mids$[mid_getCoordinates_d751c1a57012b438] = env->getMethodID(cls, "getCoordinates", "()Ljava/util/List;");
            mids$[mid_getEphemeridesDataLines_d751c1a57012b438] = env->getMethodID(cls, "getEphemeridesDataLines", "()Ljava/util/List;");
            mids$[mid_getFrame_cb151471db4570f0] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getId_d2c8eb4129821f0e] = env->getMethodID(cls, "getId", "()Ljava/lang/String;");
            mids$[mid_getInterpolationSamples_d6ab429752e7c267] = env->getMethodID(cls, "getInterpolationSamples", "()I");
            mids$[mid_getMu_9981f74b2d109da6] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getPropagator_6c7bb9da59d24b03] = env->getMethodID(cls, "getPropagator", "()Lorg/orekit/propagation/BoundedPropagator;");
            mids$[mid_getPropagator_b59efa08d1230cd1] = env->getMethodID(cls, "getPropagator", "(Lorg/orekit/attitudes/AttitudeProvider;)Lorg/orekit/propagation/BoundedPropagator;");
            mids$[mid_getSegments_d751c1a57012b438] = env->getMethodID(cls, "getSegments", "()Ljava/util/List;");
            mids$[mid_getStart_80e11148db499dda] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getStop_80e11148db499dda] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CPF$CPFEphemeris::CPF$CPFEphemeris(const ::org::orekit::files::ilrs::CPF & a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bd1743e2968161dc, a0.this$, a1.this$)) {}

        ::org::orekit::utils::CartesianDerivativesFilter CPF$CPFEphemeris::getAvailableDerivatives() const
        {
          return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAvailableDerivatives_b9dfc27d8c56b5de]));
        }

        ::java::util::List CPF$CPFEphemeris::getCoordinates() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCoordinates_d751c1a57012b438]));
        }

        ::java::util::List CPF$CPFEphemeris::getEphemeridesDataLines() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getEphemeridesDataLines_d751c1a57012b438]));
        }

        ::org::orekit::frames::Frame CPF$CPFEphemeris::getFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_cb151471db4570f0]));
        }

        ::java::lang::String CPF$CPFEphemeris::getId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getId_d2c8eb4129821f0e]));
        }

        jint CPF$CPFEphemeris::getInterpolationSamples() const
        {
          return env->callIntMethod(this$, mids$[mid_getInterpolationSamples_d6ab429752e7c267]);
        }

        jdouble CPF$CPFEphemeris::getMu() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_9981f74b2d109da6]);
        }

        ::org::orekit::propagation::BoundedPropagator CPF$CPFEphemeris::getPropagator() const
        {
          return ::org::orekit::propagation::BoundedPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_6c7bb9da59d24b03]));
        }

        ::org::orekit::propagation::BoundedPropagator CPF$CPFEphemeris::getPropagator(const ::org::orekit::attitudes::AttitudeProvider & a0) const
        {
          return ::org::orekit::propagation::BoundedPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_b59efa08d1230cd1], a0.this$));
        }

        ::java::util::List CPF$CPFEphemeris::getSegments() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSegments_d751c1a57012b438]));
        }

        ::org::orekit::time::AbsoluteDate CPF$CPFEphemeris::getStart() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_80e11148db499dda]));
        }

        ::org::orekit::time::AbsoluteDate CPF$CPFEphemeris::getStop() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_80e11148db499dda]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {
        static PyObject *t_CPF$CPFEphemeris_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CPF$CPFEphemeris_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CPF$CPFEphemeris_init_(t_CPF$CPFEphemeris *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CPF$CPFEphemeris_getAvailableDerivatives(t_CPF$CPFEphemeris *self);
        static PyObject *t_CPF$CPFEphemeris_getCoordinates(t_CPF$CPFEphemeris *self);
        static PyObject *t_CPF$CPFEphemeris_getEphemeridesDataLines(t_CPF$CPFEphemeris *self);
        static PyObject *t_CPF$CPFEphemeris_getFrame(t_CPF$CPFEphemeris *self);
        static PyObject *t_CPF$CPFEphemeris_getId(t_CPF$CPFEphemeris *self);
        static PyObject *t_CPF$CPFEphemeris_getInterpolationSamples(t_CPF$CPFEphemeris *self);
        static PyObject *t_CPF$CPFEphemeris_getMu(t_CPF$CPFEphemeris *self);
        static PyObject *t_CPF$CPFEphemeris_getPropagator(t_CPF$CPFEphemeris *self, PyObject *args);
        static PyObject *t_CPF$CPFEphemeris_getSegments(t_CPF$CPFEphemeris *self);
        static PyObject *t_CPF$CPFEphemeris_getStart(t_CPF$CPFEphemeris *self);
        static PyObject *t_CPF$CPFEphemeris_getStop(t_CPF$CPFEphemeris *self);
        static PyObject *t_CPF$CPFEphemeris_get__availableDerivatives(t_CPF$CPFEphemeris *self, void *data);
        static PyObject *t_CPF$CPFEphemeris_get__coordinates(t_CPF$CPFEphemeris *self, void *data);
        static PyObject *t_CPF$CPFEphemeris_get__ephemeridesDataLines(t_CPF$CPFEphemeris *self, void *data);
        static PyObject *t_CPF$CPFEphemeris_get__frame(t_CPF$CPFEphemeris *self, void *data);
        static PyObject *t_CPF$CPFEphemeris_get__id(t_CPF$CPFEphemeris *self, void *data);
        static PyObject *t_CPF$CPFEphemeris_get__interpolationSamples(t_CPF$CPFEphemeris *self, void *data);
        static PyObject *t_CPF$CPFEphemeris_get__mu(t_CPF$CPFEphemeris *self, void *data);
        static PyObject *t_CPF$CPFEphemeris_get__propagator(t_CPF$CPFEphemeris *self, void *data);
        static PyObject *t_CPF$CPFEphemeris_get__segments(t_CPF$CPFEphemeris *self, void *data);
        static PyObject *t_CPF$CPFEphemeris_get__start(t_CPF$CPFEphemeris *self, void *data);
        static PyObject *t_CPF$CPFEphemeris_get__stop(t_CPF$CPFEphemeris *self, void *data);
        static PyGetSetDef t_CPF$CPFEphemeris__fields_[] = {
          DECLARE_GET_FIELD(t_CPF$CPFEphemeris, availableDerivatives),
          DECLARE_GET_FIELD(t_CPF$CPFEphemeris, coordinates),
          DECLARE_GET_FIELD(t_CPF$CPFEphemeris, ephemeridesDataLines),
          DECLARE_GET_FIELD(t_CPF$CPFEphemeris, frame),
          DECLARE_GET_FIELD(t_CPF$CPFEphemeris, id),
          DECLARE_GET_FIELD(t_CPF$CPFEphemeris, interpolationSamples),
          DECLARE_GET_FIELD(t_CPF$CPFEphemeris, mu),
          DECLARE_GET_FIELD(t_CPF$CPFEphemeris, propagator),
          DECLARE_GET_FIELD(t_CPF$CPFEphemeris, segments),
          DECLARE_GET_FIELD(t_CPF$CPFEphemeris, start),
          DECLARE_GET_FIELD(t_CPF$CPFEphemeris, stop),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CPF$CPFEphemeris__methods_[] = {
          DECLARE_METHOD(t_CPF$CPFEphemeris, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CPF$CPFEphemeris, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CPF$CPFEphemeris, getAvailableDerivatives, METH_NOARGS),
          DECLARE_METHOD(t_CPF$CPFEphemeris, getCoordinates, METH_NOARGS),
          DECLARE_METHOD(t_CPF$CPFEphemeris, getEphemeridesDataLines, METH_NOARGS),
          DECLARE_METHOD(t_CPF$CPFEphemeris, getFrame, METH_NOARGS),
          DECLARE_METHOD(t_CPF$CPFEphemeris, getId, METH_NOARGS),
          DECLARE_METHOD(t_CPF$CPFEphemeris, getInterpolationSamples, METH_NOARGS),
          DECLARE_METHOD(t_CPF$CPFEphemeris, getMu, METH_NOARGS),
          DECLARE_METHOD(t_CPF$CPFEphemeris, getPropagator, METH_VARARGS),
          DECLARE_METHOD(t_CPF$CPFEphemeris, getSegments, METH_NOARGS),
          DECLARE_METHOD(t_CPF$CPFEphemeris, getStart, METH_NOARGS),
          DECLARE_METHOD(t_CPF$CPFEphemeris, getStop, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CPF$CPFEphemeris)[] = {
          { Py_tp_methods, t_CPF$CPFEphemeris__methods_ },
          { Py_tp_init, (void *) t_CPF$CPFEphemeris_init_ },
          { Py_tp_getset, t_CPF$CPFEphemeris__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CPF$CPFEphemeris)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CPF$CPFEphemeris, t_CPF$CPFEphemeris, CPF$CPFEphemeris);

        void t_CPF$CPFEphemeris::install(PyObject *module)
        {
          installType(&PY_TYPE(CPF$CPFEphemeris), &PY_TYPE_DEF(CPF$CPFEphemeris), module, "CPF$CPFEphemeris", 0);
        }

        void t_CPF$CPFEphemeris::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPF$CPFEphemeris), "class_", make_descriptor(CPF$CPFEphemeris::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPF$CPFEphemeris), "wrapfn_", make_descriptor(t_CPF$CPFEphemeris::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPF$CPFEphemeris), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CPF$CPFEphemeris_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CPF$CPFEphemeris::initializeClass, 1)))
            return NULL;
          return t_CPF$CPFEphemeris::wrap_Object(CPF$CPFEphemeris(((t_CPF$CPFEphemeris *) arg)->object.this$));
        }
        static PyObject *t_CPF$CPFEphemeris_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CPF$CPFEphemeris::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CPF$CPFEphemeris_init_(t_CPF$CPFEphemeris *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::files::ilrs::CPF a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          CPF$CPFEphemeris object((jobject) NULL);

          if (!parseArgs(args, "ks", ::org::orekit::files::ilrs::CPF::initializeClass, &a0, &a1))
          {
            INT_CALL(object = CPF$CPFEphemeris(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_CPF$CPFEphemeris_getAvailableDerivatives(t_CPF$CPFEphemeris *self)
        {
          ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
          OBJ_CALL(result = self->object.getAvailableDerivatives());
          return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
        }

        static PyObject *t_CPF$CPFEphemeris_getCoordinates(t_CPF$CPFEphemeris *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getCoordinates());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ilrs::PY_TYPE(CPF$CPFCoordinate));
        }

        static PyObject *t_CPF$CPFEphemeris_getEphemeridesDataLines(t_CPF$CPFEphemeris *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getEphemeridesDataLines());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ilrs::PY_TYPE(CPF$CPFCoordinate));
        }

        static PyObject *t_CPF$CPFEphemeris_getFrame(t_CPF$CPFEphemeris *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_CPF$CPFEphemeris_getId(t_CPF$CPFEphemeris *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getId());
          return j2p(result);
        }

        static PyObject *t_CPF$CPFEphemeris_getInterpolationSamples(t_CPF$CPFEphemeris *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getInterpolationSamples());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CPF$CPFEphemeris_getMu(t_CPF$CPFEphemeris *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMu());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CPF$CPFEphemeris_getPropagator(t_CPF$CPFEphemeris *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::orekit::propagation::BoundedPropagator result((jobject) NULL);
              OBJ_CALL(result = self->object.getPropagator());
              return ::org::orekit::propagation::t_BoundedPropagator::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);
              ::org::orekit::propagation::BoundedPropagator result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getPropagator(a0));
                return ::org::orekit::propagation::t_BoundedPropagator::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getPropagator", args);
          return NULL;
        }

        static PyObject *t_CPF$CPFEphemeris_getSegments(t_CPF$CPFEphemeris *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getSegments());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ilrs::PY_TYPE(CPF$CPFEphemeris));
        }

        static PyObject *t_CPF$CPFEphemeris_getStart(t_CPF$CPFEphemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_CPF$CPFEphemeris_getStop(t_CPF$CPFEphemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStop());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_CPF$CPFEphemeris_get__availableDerivatives(t_CPF$CPFEphemeris *self, void *data)
        {
          ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
          OBJ_CALL(value = self->object.getAvailableDerivatives());
          return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
        }

        static PyObject *t_CPF$CPFEphemeris_get__coordinates(t_CPF$CPFEphemeris *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getCoordinates());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_CPF$CPFEphemeris_get__ephemeridesDataLines(t_CPF$CPFEphemeris *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getEphemeridesDataLines());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_CPF$CPFEphemeris_get__frame(t_CPF$CPFEphemeris *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_CPF$CPFEphemeris_get__id(t_CPF$CPFEphemeris *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getId());
          return j2p(value);
        }

        static PyObject *t_CPF$CPFEphemeris_get__interpolationSamples(t_CPF$CPFEphemeris *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getInterpolationSamples());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CPF$CPFEphemeris_get__mu(t_CPF$CPFEphemeris *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMu());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CPF$CPFEphemeris_get__propagator(t_CPF$CPFEphemeris *self, void *data)
        {
          ::org::orekit::propagation::BoundedPropagator value((jobject) NULL);
          OBJ_CALL(value = self->object.getPropagator());
          return ::org::orekit::propagation::t_BoundedPropagator::wrap_Object(value);
        }

        static PyObject *t_CPF$CPFEphemeris_get__segments(t_CPF$CPFEphemeris *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getSegments());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_CPF$CPFEphemeris_get__start(t_CPF$CPFEphemeris *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_CPF$CPFEphemeris_get__stop(t_CPF$CPFEphemeris *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStop());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/python/PythonFunction.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace python {

      ::java::lang::Class *PythonFunction::class$ = NULL;
      jmethodID *PythonFunction::mids$ = NULL;
      bool PythonFunction::live$ = false;

      jclass PythonFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/python/PythonFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_apply_05290476c26136d7] = env->getMethodID(cls, "apply", "(Ljava/lang/Object;)Ljava/lang/Object;");
          mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonFunction::PythonFunction() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      void PythonFunction::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
      }

      jlong PythonFunction::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
      }

      void PythonFunction::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace python {
      static PyObject *t_PythonFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFunction_of_(t_PythonFunction *self, PyObject *args);
      static int t_PythonFunction_init_(t_PythonFunction *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonFunction_finalize(t_PythonFunction *self);
      static PyObject *t_PythonFunction_pythonExtension(t_PythonFunction *self, PyObject *args);
      static jobject JNICALL t_PythonFunction_apply0(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonFunction_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonFunction_get__self(t_PythonFunction *self, void *data);
      static PyObject *t_PythonFunction_get__parameters_(t_PythonFunction *self, void *data);
      static PyGetSetDef t_PythonFunction__fields_[] = {
        DECLARE_GET_FIELD(t_PythonFunction, self),
        DECLARE_GET_FIELD(t_PythonFunction, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonFunction__methods_[] = {
        DECLARE_METHOD(t_PythonFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFunction, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonFunction, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonFunction, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonFunction)[] = {
        { Py_tp_methods, t_PythonFunction__methods_ },
        { Py_tp_init, (void *) t_PythonFunction_init_ },
        { Py_tp_getset, t_PythonFunction__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonFunction, t_PythonFunction, PythonFunction);
      PyObject *t_PythonFunction::wrap_Object(const PythonFunction& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_PythonFunction::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFunction *self = (t_PythonFunction *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_PythonFunction::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_PythonFunction::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFunction *self = (t_PythonFunction *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_PythonFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonFunction), &PY_TYPE_DEF(PythonFunction), module, "PythonFunction", 1);
      }

      void t_PythonFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFunction), "class_", make_descriptor(PythonFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFunction), "wrapfn_", make_descriptor(t_PythonFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFunction), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonFunction::initializeClass);
        JNINativeMethod methods[] = {
          { "apply", "(Ljava/lang/Object;)Ljava/lang/Object;", (void *) t_PythonFunction_apply0 },
          { "pythonDecRef", "()V", (void *) t_PythonFunction_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonFunction::initializeClass, 1)))
          return NULL;
        return t_PythonFunction::wrap_Object(PythonFunction(((t_PythonFunction *) arg)->object.this$));
      }
      static PyObject *t_PythonFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonFunction_of_(t_PythonFunction *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonFunction_init_(t_PythonFunction *self, PyObject *args, PyObject *kwds)
      {
        PythonFunction object((jobject) NULL);

        INT_CALL(object = PythonFunction());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonFunction_finalize(t_PythonFunction *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonFunction_pythonExtension(t_PythonFunction *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jlong result;
            OBJ_CALL(result = self->object.pythonExtension());
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
          break;
         case 1:
          {
            jlong a0;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(self->object.pythonExtension(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
        return NULL;
      }

      static jobject JNICALL t_PythonFunction_apply0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFunction::mids$[PythonFunction::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::lang::Object value((jobject) NULL);
        PyObject *o0 = ::java::lang::t_Object::wrap_Object(::java::lang::Object(a0));
        PyObject *result = PyObject_CallMethod(obj, "apply", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "o", &value))
        {
          throwTypeError("apply", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static void JNICALL t_PythonFunction_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFunction::mids$[PythonFunction::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonFunction::mids$[PythonFunction::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonFunction_get__self(t_PythonFunction *self, void *data)
      {
        jlong ptr;
        OBJ_CALL(ptr = self->object.pythonExtension());
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          Py_INCREF(obj);
          return obj;
        }
        else
          Py_RETURN_NONE;
      }
      static PyObject *t_PythonFunction_get__parameters_(t_PythonFunction *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/IterativeLegendreFieldGaussIntegrator.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {

        ::java::lang::Class *IterativeLegendreFieldGaussIntegrator::class$ = NULL;
        jmethodID *IterativeLegendreFieldGaussIntegrator::mids$ = NULL;
        bool IterativeLegendreFieldGaussIntegrator::live$ = false;

        jclass IterativeLegendreFieldGaussIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/IterativeLegendreFieldGaussIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a0aa104363595b82] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;IDD)V");
            mids$[mid_init$_e2ca6bcdfe4e6004] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;III)V");
            mids$[mid_init$_97cb888a329f1394] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;IDDII)V");
            mids$[mid_doIntegrate_08d37e3f77b7239d] = env->getMethodID(cls, "doIntegrate", "()Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        IterativeLegendreFieldGaussIntegrator::IterativeLegendreFieldGaussIntegrator(const ::org::hipparchus::Field & a0, jint a1, jdouble a2, jdouble a3) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_a0aa104363595b82, a0.this$, a1, a2, a3)) {}

        IterativeLegendreFieldGaussIntegrator::IterativeLegendreFieldGaussIntegrator(const ::org::hipparchus::Field & a0, jint a1, jint a2, jint a3) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_e2ca6bcdfe4e6004, a0.this$, a1, a2, a3)) {}

        IterativeLegendreFieldGaussIntegrator::IterativeLegendreFieldGaussIntegrator(const ::org::hipparchus::Field & a0, jint a1, jdouble a2, jdouble a3, jint a4, jint a5) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_97cb888a329f1394, a0.this$, a1, a2, a3, a4, a5)) {}
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        static PyObject *t_IterativeLegendreFieldGaussIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IterativeLegendreFieldGaussIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IterativeLegendreFieldGaussIntegrator_of_(t_IterativeLegendreFieldGaussIntegrator *self, PyObject *args);
        static int t_IterativeLegendreFieldGaussIntegrator_init_(t_IterativeLegendreFieldGaussIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_IterativeLegendreFieldGaussIntegrator_get__parameters_(t_IterativeLegendreFieldGaussIntegrator *self, void *data);
        static PyGetSetDef t_IterativeLegendreFieldGaussIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_IterativeLegendreFieldGaussIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_IterativeLegendreFieldGaussIntegrator__methods_[] = {
          DECLARE_METHOD(t_IterativeLegendreFieldGaussIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IterativeLegendreFieldGaussIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IterativeLegendreFieldGaussIntegrator, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(IterativeLegendreFieldGaussIntegrator)[] = {
          { Py_tp_methods, t_IterativeLegendreFieldGaussIntegrator__methods_ },
          { Py_tp_init, (void *) t_IterativeLegendreFieldGaussIntegrator_init_ },
          { Py_tp_getset, t_IterativeLegendreFieldGaussIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(IterativeLegendreFieldGaussIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator),
          NULL
        };

        DEFINE_TYPE(IterativeLegendreFieldGaussIntegrator, t_IterativeLegendreFieldGaussIntegrator, IterativeLegendreFieldGaussIntegrator);
        PyObject *t_IterativeLegendreFieldGaussIntegrator::wrap_Object(const IterativeLegendreFieldGaussIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_IterativeLegendreFieldGaussIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_IterativeLegendreFieldGaussIntegrator *self = (t_IterativeLegendreFieldGaussIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_IterativeLegendreFieldGaussIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_IterativeLegendreFieldGaussIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_IterativeLegendreFieldGaussIntegrator *self = (t_IterativeLegendreFieldGaussIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_IterativeLegendreFieldGaussIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(IterativeLegendreFieldGaussIntegrator), &PY_TYPE_DEF(IterativeLegendreFieldGaussIntegrator), module, "IterativeLegendreFieldGaussIntegrator", 0);
        }

        void t_IterativeLegendreFieldGaussIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(IterativeLegendreFieldGaussIntegrator), "class_", make_descriptor(IterativeLegendreFieldGaussIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IterativeLegendreFieldGaussIntegrator), "wrapfn_", make_descriptor(t_IterativeLegendreFieldGaussIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IterativeLegendreFieldGaussIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_IterativeLegendreFieldGaussIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, IterativeLegendreFieldGaussIntegrator::initializeClass, 1)))
            return NULL;
          return t_IterativeLegendreFieldGaussIntegrator::wrap_Object(IterativeLegendreFieldGaussIntegrator(((t_IterativeLegendreFieldGaussIntegrator *) arg)->object.this$));
        }
        static PyObject *t_IterativeLegendreFieldGaussIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, IterativeLegendreFieldGaussIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_IterativeLegendreFieldGaussIntegrator_of_(t_IterativeLegendreFieldGaussIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_IterativeLegendreFieldGaussIntegrator_init_(t_IterativeLegendreFieldGaussIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              jdouble a2;
              jdouble a3;
              IterativeLegendreFieldGaussIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KIDD", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3))
              {
                INT_CALL(object = IterativeLegendreFieldGaussIntegrator(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              jint a2;
              jint a3;
              IterativeLegendreFieldGaussIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KIII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3))
              {
                INT_CALL(object = IterativeLegendreFieldGaussIntegrator(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            goto err;
           case 6:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              jdouble a2;
              jdouble a3;
              jint a4;
              jint a5;
              IterativeLegendreFieldGaussIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KIDDII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4, &a5))
              {
                INT_CALL(object = IterativeLegendreFieldGaussIntegrator(a0, a1, a2, a3, a4, a5));
                self->object = object;
                break;
              }
            }
           default:
           err:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }
        static PyObject *t_IterativeLegendreFieldGaussIntegrator_get__parameters_(t_IterativeLegendreFieldGaussIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/Fieldifier.h"
#include "org/orekit/propagation/FieldStateCovariance.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "org/orekit/propagation/StateCovariance.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *Fieldifier::class$ = NULL;
      jmethodID *Fieldifier::mids$ = NULL;
      bool Fieldifier::live$ = false;

      jclass Fieldifier::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/Fieldifier");

          mids$ = new jmethodID[max_mid];
          mids$[mid_fieldify_4e961aad065174c6] = env->getStaticMethodID(cls, "fieldify", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;)Lorg/orekit/orbits/FieldOrbit;");
          mids$[mid_fieldify_47ca2dd868ceb718] = env->getStaticMethodID(cls, "fieldify", "(Lorg/hipparchus/Field;Lorg/orekit/propagation/StateCovariance;)Lorg/orekit/propagation/FieldStateCovariance;");
          mids$[mid_fieldify_6e7e6d87786f19a2] = env->getStaticMethodID(cls, "fieldify", "(Lorg/hipparchus/Field;Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/FieldMatrix;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::orbits::FieldOrbit Fieldifier::fieldify(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::orbits::FieldOrbit(env->callStaticObjectMethod(cls, mids$[mid_fieldify_4e961aad065174c6], a0.this$, a1.this$));
      }

      ::org::orekit::propagation::FieldStateCovariance Fieldifier::fieldify(const ::org::hipparchus::Field & a0, const ::org::orekit::propagation::StateCovariance & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::propagation::FieldStateCovariance(env->callStaticObjectMethod(cls, mids$[mid_fieldify_47ca2dd868ceb718], a0.this$, a1.this$));
      }

      ::org::hipparchus::linear::FieldMatrix Fieldifier::fieldify(const ::org::hipparchus::Field & a0, const ::org::hipparchus::linear::RealMatrix & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::FieldMatrix(env->callStaticObjectMethod(cls, mids$[mid_fieldify_6e7e6d87786f19a2], a0.this$, a1.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace utils {
      static PyObject *t_Fieldifier_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Fieldifier_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Fieldifier_fieldify(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_Fieldifier__methods_[] = {
        DECLARE_METHOD(t_Fieldifier, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Fieldifier, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Fieldifier, fieldify, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Fieldifier)[] = {
        { Py_tp_methods, t_Fieldifier__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Fieldifier)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Fieldifier, t_Fieldifier, Fieldifier);

      void t_Fieldifier::install(PyObject *module)
      {
        installType(&PY_TYPE(Fieldifier), &PY_TYPE_DEF(Fieldifier), module, "Fieldifier", 0);
      }

      void t_Fieldifier::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fieldifier), "class_", make_descriptor(Fieldifier::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fieldifier), "wrapfn_", make_descriptor(t_Fieldifier::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fieldifier), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Fieldifier_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Fieldifier::initializeClass, 1)))
          return NULL;
        return t_Fieldifier::wrap_Object(Fieldifier(((t_Fieldifier *) arg)->object.this$));
      }
      static PyObject *t_Fieldifier_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Fieldifier::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Fieldifier_fieldify(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::orbits::Orbit a1((jobject) NULL);
            ::org::orekit::orbits::FieldOrbit result((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::orekit::utils::Fieldifier::fieldify(a0, a1));
              return ::org::orekit::orbits::t_FieldOrbit::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::propagation::StateCovariance a1((jobject) NULL);
            ::org::orekit::propagation::FieldStateCovariance result((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::orekit::utils::Fieldifier::fieldify(a0, a1));
              return ::org::orekit::propagation::t_FieldStateCovariance::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::orekit::utils::Fieldifier::fieldify(a0, a1));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "fieldify", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/FieldBoundedPropagator.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *FieldBoundedPropagator::class$ = NULL;
      jmethodID *FieldBoundedPropagator::mids$ = NULL;
      bool FieldBoundedPropagator::live$ = false;

      jclass FieldBoundedPropagator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/FieldBoundedPropagator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getMaxDate_1fea28374011eef5] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getMinDate_1fea28374011eef5] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/FieldAbsoluteDate;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::time::FieldAbsoluteDate FieldBoundedPropagator::getMaxDate() const
      {
        return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_1fea28374011eef5]));
      }

      ::org::orekit::time::FieldAbsoluteDate FieldBoundedPropagator::getMinDate() const
      {
        return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_1fea28374011eef5]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      static PyObject *t_FieldBoundedPropagator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldBoundedPropagator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldBoundedPropagator_of_(t_FieldBoundedPropagator *self, PyObject *args);
      static PyObject *t_FieldBoundedPropagator_getMaxDate(t_FieldBoundedPropagator *self);
      static PyObject *t_FieldBoundedPropagator_getMinDate(t_FieldBoundedPropagator *self);
      static PyObject *t_FieldBoundedPropagator_get__maxDate(t_FieldBoundedPropagator *self, void *data);
      static PyObject *t_FieldBoundedPropagator_get__minDate(t_FieldBoundedPropagator *self, void *data);
      static PyObject *t_FieldBoundedPropagator_get__parameters_(t_FieldBoundedPropagator *self, void *data);
      static PyGetSetDef t_FieldBoundedPropagator__fields_[] = {
        DECLARE_GET_FIELD(t_FieldBoundedPropagator, maxDate),
        DECLARE_GET_FIELD(t_FieldBoundedPropagator, minDate),
        DECLARE_GET_FIELD(t_FieldBoundedPropagator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldBoundedPropagator__methods_[] = {
        DECLARE_METHOD(t_FieldBoundedPropagator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldBoundedPropagator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldBoundedPropagator, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldBoundedPropagator, getMaxDate, METH_NOARGS),
        DECLARE_METHOD(t_FieldBoundedPropagator, getMinDate, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldBoundedPropagator)[] = {
        { Py_tp_methods, t_FieldBoundedPropagator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldBoundedPropagator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldBoundedPropagator)[] = {
        &PY_TYPE_DEF(::org::orekit::propagation::FieldPropagator),
        NULL
      };

      DEFINE_TYPE(FieldBoundedPropagator, t_FieldBoundedPropagator, FieldBoundedPropagator);
      PyObject *t_FieldBoundedPropagator::wrap_Object(const FieldBoundedPropagator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldBoundedPropagator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldBoundedPropagator *self = (t_FieldBoundedPropagator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldBoundedPropagator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldBoundedPropagator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldBoundedPropagator *self = (t_FieldBoundedPropagator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldBoundedPropagator::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldBoundedPropagator), &PY_TYPE_DEF(FieldBoundedPropagator), module, "FieldBoundedPropagator", 0);
      }

      void t_FieldBoundedPropagator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBoundedPropagator), "class_", make_descriptor(FieldBoundedPropagator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBoundedPropagator), "wrapfn_", make_descriptor(t_FieldBoundedPropagator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBoundedPropagator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldBoundedPropagator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldBoundedPropagator::initializeClass, 1)))
          return NULL;
        return t_FieldBoundedPropagator::wrap_Object(FieldBoundedPropagator(((t_FieldBoundedPropagator *) arg)->object.this$));
      }
      static PyObject *t_FieldBoundedPropagator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldBoundedPropagator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldBoundedPropagator_of_(t_FieldBoundedPropagator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldBoundedPropagator_getMaxDate(t_FieldBoundedPropagator *self)
      {
        ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getMaxDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldBoundedPropagator_getMinDate(t_FieldBoundedPropagator *self)
      {
        ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getMinDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
      }
      static PyObject *t_FieldBoundedPropagator_get__parameters_(t_FieldBoundedPropagator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldBoundedPropagator_get__maxDate(t_FieldBoundedPropagator *self, void *data)
      {
        ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getMaxDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_FieldBoundedPropagator_get__minDate(t_FieldBoundedPropagator *self, void *data)
      {
        ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getMinDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/events/FieldEventState.h"
#include "org/hipparchus/ode/events/FieldEventOccurrence.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/ode/sampling/FieldODEStateInterpolator.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *FieldEventState::class$ = NULL;
        jmethodID *FieldEventState::mids$ = NULL;
        bool FieldEventState::live$ = false;

        jclass FieldEventState::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/FieldEventState");

            mids$ = new jmethodID[max_mid];
            mids$[mid_doEvent_bb679c793e33809e] = env->getMethodID(cls, "doEvent", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;)Lorg/hipparchus/ode/events/FieldEventOccurrence;");
            mids$[mid_evaluateStep_0c45e83e8206e2a1] = env->getMethodID(cls, "evaluateStep", "(Lorg/hipparchus/ode/sampling/FieldODEStateInterpolator;)Z");
            mids$[mid_getEventTime_08d37e3f77b7239d] = env->getMethodID(cls, "getEventTime", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_init_2a077928ff78cfcb] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/CalculusFieldElement;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::ode::events::FieldEventOccurrence FieldEventState::doEvent(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0) const
        {
          return ::org::hipparchus::ode::events::FieldEventOccurrence(env->callObjectMethod(this$, mids$[mid_doEvent_bb679c793e33809e], a0.this$));
        }

        jboolean FieldEventState::evaluateStep(const ::org::hipparchus::ode::sampling::FieldODEStateInterpolator & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_evaluateStep_0c45e83e8206e2a1], a0.this$);
        }

        ::org::hipparchus::CalculusFieldElement FieldEventState::getEventTime() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEventTime_08d37e3f77b7239d]));
        }

        void FieldEventState::init(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_2a077928ff78cfcb], a0.this$, a1.this$);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {
        static PyObject *t_FieldEventState_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventState_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventState_of_(t_FieldEventState *self, PyObject *args);
        static PyObject *t_FieldEventState_doEvent(t_FieldEventState *self, PyObject *arg);
        static PyObject *t_FieldEventState_evaluateStep(t_FieldEventState *self, PyObject *arg);
        static PyObject *t_FieldEventState_getEventTime(t_FieldEventState *self);
        static PyObject *t_FieldEventState_init(t_FieldEventState *self, PyObject *args);
        static PyObject *t_FieldEventState_get__eventTime(t_FieldEventState *self, void *data);
        static PyObject *t_FieldEventState_get__parameters_(t_FieldEventState *self, void *data);
        static PyGetSetDef t_FieldEventState__fields_[] = {
          DECLARE_GET_FIELD(t_FieldEventState, eventTime),
          DECLARE_GET_FIELD(t_FieldEventState, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldEventState__methods_[] = {
          DECLARE_METHOD(t_FieldEventState, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventState, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventState, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldEventState, doEvent, METH_O),
          DECLARE_METHOD(t_FieldEventState, evaluateStep, METH_O),
          DECLARE_METHOD(t_FieldEventState, getEventTime, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventState, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldEventState)[] = {
          { Py_tp_methods, t_FieldEventState__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldEventState__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldEventState)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldEventState, t_FieldEventState, FieldEventState);
        PyObject *t_FieldEventState::wrap_Object(const FieldEventState& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEventState::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventState *self = (t_FieldEventState *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldEventState::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEventState::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventState *self = (t_FieldEventState *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldEventState::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldEventState), &PY_TYPE_DEF(FieldEventState), module, "FieldEventState", 0);
        }

        void t_FieldEventState::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventState), "class_", make_descriptor(FieldEventState::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventState), "wrapfn_", make_descriptor(t_FieldEventState::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventState), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldEventState_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldEventState::initializeClass, 1)))
            return NULL;
          return t_FieldEventState::wrap_Object(FieldEventState(((t_FieldEventState *) arg)->object.this$));
        }
        static PyObject *t_FieldEventState_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldEventState::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldEventState_of_(t_FieldEventState *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldEventState_doEvent(t_FieldEventState *self, PyObject *arg)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::ode::events::FieldEventOccurrence result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_))
          {
            OBJ_CALL(result = self->object.doEvent(a0));
            return ::org::hipparchus::ode::events::t_FieldEventOccurrence::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "doEvent", arg);
          return NULL;
        }

        static PyObject *t_FieldEventState_evaluateStep(t_FieldEventState *self, PyObject *arg)
        {
          ::org::hipparchus::ode::sampling::FieldODEStateInterpolator a0((jobject) NULL);
          PyTypeObject **p0;
          jboolean result;

          if (!parseArg(arg, "K", ::org::hipparchus::ode::sampling::FieldODEStateInterpolator::initializeClass, &a0, &p0, ::org::hipparchus::ode::sampling::t_FieldODEStateInterpolator::parameters_))
          {
            OBJ_CALL(result = self->object.evaluateStep(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "evaluateStep", arg);
          return NULL;
        }

        static PyObject *t_FieldEventState_getEventTime(t_FieldEventState *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getEventTime());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldEventState_init(t_FieldEventState *self, PyObject *args)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "KK", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }
        static PyObject *t_FieldEventState_get__parameters_(t_FieldEventState *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldEventState_get__eventTime(t_FieldEventState *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventTime());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/EarthStandardAtmosphereRefraction.h"
#include "org/orekit/models/AtmosphericRefractionModel.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {

        ::java::lang::Class *EarthStandardAtmosphereRefraction::class$ = NULL;
        jmethodID *EarthStandardAtmosphereRefraction::mids$ = NULL;
        bool EarthStandardAtmosphereRefraction::live$ = false;
        jdouble EarthStandardAtmosphereRefraction::DEFAULT_CORRECTION_FACTOR = (jdouble) 0;
        jdouble EarthStandardAtmosphereRefraction::DEFAULT_PRESSURE = (jdouble) 0;
        jdouble EarthStandardAtmosphereRefraction::DEFAULT_TEMPERATURE = (jdouble) 0;
        jdouble EarthStandardAtmosphereRefraction::STANDARD_ATM_PRESSURE = (jdouble) 0;
        jdouble EarthStandardAtmosphereRefraction::STANDARD_ATM_TEMPERATURE = (jdouble) 0;

        jclass EarthStandardAtmosphereRefraction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/models/earth/EarthStandardAtmosphereRefraction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_13edac039e8cc967] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_getPressure_9981f74b2d109da6] = env->getMethodID(cls, "getPressure", "()D");
            mids$[mid_getRefraction_bf28ed64d6e8576b] = env->getMethodID(cls, "getRefraction", "(D)D");
            mids$[mid_getTemperature_9981f74b2d109da6] = env->getMethodID(cls, "getTemperature", "()D");
            mids$[mid_setPressure_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setPressure", "(D)V");
            mids$[mid_setTemperature_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setTemperature", "(D)V");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_CORRECTION_FACTOR = env->getStaticDoubleField(cls, "DEFAULT_CORRECTION_FACTOR");
            DEFAULT_PRESSURE = env->getStaticDoubleField(cls, "DEFAULT_PRESSURE");
            DEFAULT_TEMPERATURE = env->getStaticDoubleField(cls, "DEFAULT_TEMPERATURE");
            STANDARD_ATM_PRESSURE = env->getStaticDoubleField(cls, "STANDARD_ATM_PRESSURE");
            STANDARD_ATM_TEMPERATURE = env->getStaticDoubleField(cls, "STANDARD_ATM_TEMPERATURE");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EarthStandardAtmosphereRefraction::EarthStandardAtmosphereRefraction() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        EarthStandardAtmosphereRefraction::EarthStandardAtmosphereRefraction(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_13edac039e8cc967, a0, a1)) {}

        jdouble EarthStandardAtmosphereRefraction::getPressure() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPressure_9981f74b2d109da6]);
        }

        jdouble EarthStandardAtmosphereRefraction::getRefraction(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRefraction_bf28ed64d6e8576b], a0);
        }

        jdouble EarthStandardAtmosphereRefraction::getTemperature() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTemperature_9981f74b2d109da6]);
        }

        void EarthStandardAtmosphereRefraction::setPressure(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setPressure_1ad26e8c8c0cd65b], a0);
        }

        void EarthStandardAtmosphereRefraction::setTemperature(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTemperature_1ad26e8c8c0cd65b], a0);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        static PyObject *t_EarthStandardAtmosphereRefraction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EarthStandardAtmosphereRefraction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_EarthStandardAtmosphereRefraction_init_(t_EarthStandardAtmosphereRefraction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EarthStandardAtmosphereRefraction_getPressure(t_EarthStandardAtmosphereRefraction *self);
        static PyObject *t_EarthStandardAtmosphereRefraction_getRefraction(t_EarthStandardAtmosphereRefraction *self, PyObject *arg);
        static PyObject *t_EarthStandardAtmosphereRefraction_getTemperature(t_EarthStandardAtmosphereRefraction *self);
        static PyObject *t_EarthStandardAtmosphereRefraction_setPressure(t_EarthStandardAtmosphereRefraction *self, PyObject *arg);
        static PyObject *t_EarthStandardAtmosphereRefraction_setTemperature(t_EarthStandardAtmosphereRefraction *self, PyObject *arg);
        static PyObject *t_EarthStandardAtmosphereRefraction_get__pressure(t_EarthStandardAtmosphereRefraction *self, void *data);
        static int t_EarthStandardAtmosphereRefraction_set__pressure(t_EarthStandardAtmosphereRefraction *self, PyObject *arg, void *data);
        static PyObject *t_EarthStandardAtmosphereRefraction_get__temperature(t_EarthStandardAtmosphereRefraction *self, void *data);
        static int t_EarthStandardAtmosphereRefraction_set__temperature(t_EarthStandardAtmosphereRefraction *self, PyObject *arg, void *data);
        static PyGetSetDef t_EarthStandardAtmosphereRefraction__fields_[] = {
          DECLARE_GETSET_FIELD(t_EarthStandardAtmosphereRefraction, pressure),
          DECLARE_GETSET_FIELD(t_EarthStandardAtmosphereRefraction, temperature),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EarthStandardAtmosphereRefraction__methods_[] = {
          DECLARE_METHOD(t_EarthStandardAtmosphereRefraction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EarthStandardAtmosphereRefraction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EarthStandardAtmosphereRefraction, getPressure, METH_NOARGS),
          DECLARE_METHOD(t_EarthStandardAtmosphereRefraction, getRefraction, METH_O),
          DECLARE_METHOD(t_EarthStandardAtmosphereRefraction, getTemperature, METH_NOARGS),
          DECLARE_METHOD(t_EarthStandardAtmosphereRefraction, setPressure, METH_O),
          DECLARE_METHOD(t_EarthStandardAtmosphereRefraction, setTemperature, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EarthStandardAtmosphereRefraction)[] = {
          { Py_tp_methods, t_EarthStandardAtmosphereRefraction__methods_ },
          { Py_tp_init, (void *) t_EarthStandardAtmosphereRefraction_init_ },
          { Py_tp_getset, t_EarthStandardAtmosphereRefraction__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EarthStandardAtmosphereRefraction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EarthStandardAtmosphereRefraction, t_EarthStandardAtmosphereRefraction, EarthStandardAtmosphereRefraction);

        void t_EarthStandardAtmosphereRefraction::install(PyObject *module)
        {
          installType(&PY_TYPE(EarthStandardAtmosphereRefraction), &PY_TYPE_DEF(EarthStandardAtmosphereRefraction), module, "EarthStandardAtmosphereRefraction", 0);
        }

        void t_EarthStandardAtmosphereRefraction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EarthStandardAtmosphereRefraction), "class_", make_descriptor(EarthStandardAtmosphereRefraction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EarthStandardAtmosphereRefraction), "wrapfn_", make_descriptor(t_EarthStandardAtmosphereRefraction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EarthStandardAtmosphereRefraction), "boxfn_", make_descriptor(boxObject));
          env->getClass(EarthStandardAtmosphereRefraction::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(EarthStandardAtmosphereRefraction), "DEFAULT_CORRECTION_FACTOR", make_descriptor(EarthStandardAtmosphereRefraction::DEFAULT_CORRECTION_FACTOR));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EarthStandardAtmosphereRefraction), "DEFAULT_PRESSURE", make_descriptor(EarthStandardAtmosphereRefraction::DEFAULT_PRESSURE));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EarthStandardAtmosphereRefraction), "DEFAULT_TEMPERATURE", make_descriptor(EarthStandardAtmosphereRefraction::DEFAULT_TEMPERATURE));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EarthStandardAtmosphereRefraction), "STANDARD_ATM_PRESSURE", make_descriptor(EarthStandardAtmosphereRefraction::STANDARD_ATM_PRESSURE));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EarthStandardAtmosphereRefraction), "STANDARD_ATM_TEMPERATURE", make_descriptor(EarthStandardAtmosphereRefraction::STANDARD_ATM_TEMPERATURE));
        }

        static PyObject *t_EarthStandardAtmosphereRefraction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EarthStandardAtmosphereRefraction::initializeClass, 1)))
            return NULL;
          return t_EarthStandardAtmosphereRefraction::wrap_Object(EarthStandardAtmosphereRefraction(((t_EarthStandardAtmosphereRefraction *) arg)->object.this$));
        }
        static PyObject *t_EarthStandardAtmosphereRefraction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EarthStandardAtmosphereRefraction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_EarthStandardAtmosphereRefraction_init_(t_EarthStandardAtmosphereRefraction *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              EarthStandardAtmosphereRefraction object((jobject) NULL);

              INT_CALL(object = EarthStandardAtmosphereRefraction());
              self->object = object;
              break;
            }
           case 2:
            {
              jdouble a0;
              jdouble a1;
              EarthStandardAtmosphereRefraction object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = EarthStandardAtmosphereRefraction(a0, a1));
                self->object = object;
                break;
              }
            }
           default:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_EarthStandardAtmosphereRefraction_getPressure(t_EarthStandardAtmosphereRefraction *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getPressure());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EarthStandardAtmosphereRefraction_getRefraction(t_EarthStandardAtmosphereRefraction *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getRefraction(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getRefraction", arg);
          return NULL;
        }

        static PyObject *t_EarthStandardAtmosphereRefraction_getTemperature(t_EarthStandardAtmosphereRefraction *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTemperature());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EarthStandardAtmosphereRefraction_setPressure(t_EarthStandardAtmosphereRefraction *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setPressure(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setPressure", arg);
          return NULL;
        }

        static PyObject *t_EarthStandardAtmosphereRefraction_setTemperature(t_EarthStandardAtmosphereRefraction *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setTemperature(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTemperature", arg);
          return NULL;
        }

        static PyObject *t_EarthStandardAtmosphereRefraction_get__pressure(t_EarthStandardAtmosphereRefraction *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getPressure());
          return PyFloat_FromDouble((double) value);
        }
        static int t_EarthStandardAtmosphereRefraction_set__pressure(t_EarthStandardAtmosphereRefraction *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setPressure(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "pressure", arg);
          return -1;
        }

        static PyObject *t_EarthStandardAtmosphereRefraction_get__temperature(t_EarthStandardAtmosphereRefraction *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTemperature());
          return PyFloat_FromDouble((double) value);
        }
        static int t_EarthStandardAtmosphereRefraction_set__temperature(t_EarthStandardAtmosphereRefraction *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setTemperature(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "temperature", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/SingleBodyRelativeAttraction.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/util/List.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/forces/ForceModel.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {

        ::java::lang::Class *SingleBodyRelativeAttraction::class$ = NULL;
        jmethodID *SingleBodyRelativeAttraction::mids$ = NULL;
        bool SingleBodyRelativeAttraction::live$ = false;
        ::java::lang::String *SingleBodyRelativeAttraction::ATTRACTION_COEFFICIENT_SUFFIX = NULL;

        jclass SingleBodyRelativeAttraction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/SingleBodyRelativeAttraction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_3892f9945e7aba0a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CelestialBody;)V");
            mids$[mid_acceleration_5e147f44c28a35c9] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_acceleration_9816b8f76e94356a] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_dependsOnPositionOnly_eee3de00fe971136] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            ATTRACTION_COEFFICIENT_SUFFIX = new ::java::lang::String(env->getStaticObjectField(cls, "ATTRACTION_COEFFICIENT_SUFFIX", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SingleBodyRelativeAttraction::SingleBodyRelativeAttraction(const ::org::orekit::bodies::CelestialBody & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3892f9945e7aba0a, a0.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D SingleBodyRelativeAttraction::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_5e147f44c28a35c9], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D SingleBodyRelativeAttraction::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_9816b8f76e94356a], a0.this$, a1.this$));
        }

        jboolean SingleBodyRelativeAttraction::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_eee3de00fe971136]);
        }

        ::java::util::List SingleBodyRelativeAttraction::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        static PyObject *t_SingleBodyRelativeAttraction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SingleBodyRelativeAttraction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SingleBodyRelativeAttraction_init_(t_SingleBodyRelativeAttraction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SingleBodyRelativeAttraction_acceleration(t_SingleBodyRelativeAttraction *self, PyObject *args);
        static PyObject *t_SingleBodyRelativeAttraction_dependsOnPositionOnly(t_SingleBodyRelativeAttraction *self);
        static PyObject *t_SingleBodyRelativeAttraction_getParametersDrivers(t_SingleBodyRelativeAttraction *self);
        static PyObject *t_SingleBodyRelativeAttraction_get__parametersDrivers(t_SingleBodyRelativeAttraction *self, void *data);
        static PyGetSetDef t_SingleBodyRelativeAttraction__fields_[] = {
          DECLARE_GET_FIELD(t_SingleBodyRelativeAttraction, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SingleBodyRelativeAttraction__methods_[] = {
          DECLARE_METHOD(t_SingleBodyRelativeAttraction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SingleBodyRelativeAttraction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SingleBodyRelativeAttraction, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_SingleBodyRelativeAttraction, dependsOnPositionOnly, METH_NOARGS),
          DECLARE_METHOD(t_SingleBodyRelativeAttraction, getParametersDrivers, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SingleBodyRelativeAttraction)[] = {
          { Py_tp_methods, t_SingleBodyRelativeAttraction__methods_ },
          { Py_tp_init, (void *) t_SingleBodyRelativeAttraction_init_ },
          { Py_tp_getset, t_SingleBodyRelativeAttraction__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SingleBodyRelativeAttraction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SingleBodyRelativeAttraction, t_SingleBodyRelativeAttraction, SingleBodyRelativeAttraction);

        void t_SingleBodyRelativeAttraction::install(PyObject *module)
        {
          installType(&PY_TYPE(SingleBodyRelativeAttraction), &PY_TYPE_DEF(SingleBodyRelativeAttraction), module, "SingleBodyRelativeAttraction", 0);
        }

        void t_SingleBodyRelativeAttraction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SingleBodyRelativeAttraction), "class_", make_descriptor(SingleBodyRelativeAttraction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SingleBodyRelativeAttraction), "wrapfn_", make_descriptor(t_SingleBodyRelativeAttraction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SingleBodyRelativeAttraction), "boxfn_", make_descriptor(boxObject));
          env->getClass(SingleBodyRelativeAttraction::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(SingleBodyRelativeAttraction), "ATTRACTION_COEFFICIENT_SUFFIX", make_descriptor(j2p(*SingleBodyRelativeAttraction::ATTRACTION_COEFFICIENT_SUFFIX)));
        }

        static PyObject *t_SingleBodyRelativeAttraction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SingleBodyRelativeAttraction::initializeClass, 1)))
            return NULL;
          return t_SingleBodyRelativeAttraction::wrap_Object(SingleBodyRelativeAttraction(((t_SingleBodyRelativeAttraction *) arg)->object.this$));
        }
        static PyObject *t_SingleBodyRelativeAttraction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SingleBodyRelativeAttraction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SingleBodyRelativeAttraction_init_(t_SingleBodyRelativeAttraction *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::bodies::CelestialBody a0((jobject) NULL);
          SingleBodyRelativeAttraction object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &a0))
          {
            INT_CALL(object = SingleBodyRelativeAttraction(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_SingleBodyRelativeAttraction_acceleration(t_SingleBodyRelativeAttraction *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "K[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.acceleration(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.acceleration(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "acceleration", args);
          return NULL;
        }

        static PyObject *t_SingleBodyRelativeAttraction_dependsOnPositionOnly(t_SingleBodyRelativeAttraction *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.dependsOnPositionOnly());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_SingleBodyRelativeAttraction_getParametersDrivers(t_SingleBodyRelativeAttraction *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_SingleBodyRelativeAttraction_get__parametersDrivers(t_SingleBodyRelativeAttraction *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/AlignmentDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/propagation/events/AlignmentDetector.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *AlignmentDetector::class$ = NULL;
        jmethodID *AlignmentDetector::mids$ = NULL;
        bool AlignmentDetector::live$ = false;

        jclass AlignmentDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/AlignmentDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_97d3e3204146d0a6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/utils/PVCoordinatesProvider;D)V");
            mids$[mid_init$_1ecf54252e404e23] = env->getMethodID(cls, "<init>", "(DLorg/orekit/orbits/Orbit;Lorg/orekit/utils/PVCoordinatesProvider;D)V");
            mids$[mid_init$_16205098a1d90a78] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/utils/PVCoordinatesProvider;D)V");
            mids$[mid_g_b443ba1cc794b916] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getAlignAngle_9981f74b2d109da6] = env->getMethodID(cls, "getAlignAngle", "()D");
            mids$[mid_getPVCoordinatesProvider_781ab98286dad7d5] = env->getMethodID(cls, "getPVCoordinatesProvider", "()Lorg/orekit/utils/PVCoordinatesProvider;");
            mids$[mid_create_b9628636bdd19658] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/AlignmentDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AlignmentDetector::AlignmentDetector(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1, jdouble a2) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_97d3e3204146d0a6, a0.this$, a1.this$, a2)) {}

        AlignmentDetector::AlignmentDetector(jdouble a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::utils::PVCoordinatesProvider & a2, jdouble a3) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_1ecf54252e404e23, a0, a1.this$, a2.this$, a3)) {}

        AlignmentDetector::AlignmentDetector(jdouble a0, jdouble a1, const ::org::orekit::utils::PVCoordinatesProvider & a2, jdouble a3) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_16205098a1d90a78, a0, a1, a2.this$, a3)) {}

        jdouble AlignmentDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_b443ba1cc794b916], a0.this$);
        }

        jdouble AlignmentDetector::getAlignAngle() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAlignAngle_9981f74b2d109da6]);
        }

        ::org::orekit::utils::PVCoordinatesProvider AlignmentDetector::getPVCoordinatesProvider() const
        {
          return ::org::orekit::utils::PVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_getPVCoordinatesProvider_781ab98286dad7d5]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        static PyObject *t_AlignmentDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AlignmentDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AlignmentDetector_of_(t_AlignmentDetector *self, PyObject *args);
        static int t_AlignmentDetector_init_(t_AlignmentDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AlignmentDetector_g(t_AlignmentDetector *self, PyObject *args);
        static PyObject *t_AlignmentDetector_getAlignAngle(t_AlignmentDetector *self);
        static PyObject *t_AlignmentDetector_getPVCoordinatesProvider(t_AlignmentDetector *self);
        static PyObject *t_AlignmentDetector_get__alignAngle(t_AlignmentDetector *self, void *data);
        static PyObject *t_AlignmentDetector_get__pVCoordinatesProvider(t_AlignmentDetector *self, void *data);
        static PyObject *t_AlignmentDetector_get__parameters_(t_AlignmentDetector *self, void *data);
        static PyGetSetDef t_AlignmentDetector__fields_[] = {
          DECLARE_GET_FIELD(t_AlignmentDetector, alignAngle),
          DECLARE_GET_FIELD(t_AlignmentDetector, pVCoordinatesProvider),
          DECLARE_GET_FIELD(t_AlignmentDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AlignmentDetector__methods_[] = {
          DECLARE_METHOD(t_AlignmentDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AlignmentDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AlignmentDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_AlignmentDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_AlignmentDetector, getAlignAngle, METH_NOARGS),
          DECLARE_METHOD(t_AlignmentDetector, getPVCoordinatesProvider, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AlignmentDetector)[] = {
          { Py_tp_methods, t_AlignmentDetector__methods_ },
          { Py_tp_init, (void *) t_AlignmentDetector_init_ },
          { Py_tp_getset, t_AlignmentDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AlignmentDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(AlignmentDetector, t_AlignmentDetector, AlignmentDetector);
        PyObject *t_AlignmentDetector::wrap_Object(const AlignmentDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AlignmentDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AlignmentDetector *self = (t_AlignmentDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AlignmentDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AlignmentDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AlignmentDetector *self = (t_AlignmentDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AlignmentDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(AlignmentDetector), &PY_TYPE_DEF(AlignmentDetector), module, "AlignmentDetector", 0);
        }

        void t_AlignmentDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlignmentDetector), "class_", make_descriptor(AlignmentDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlignmentDetector), "wrapfn_", make_descriptor(t_AlignmentDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlignmentDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AlignmentDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AlignmentDetector::initializeClass, 1)))
            return NULL;
          return t_AlignmentDetector::wrap_Object(AlignmentDetector(((t_AlignmentDetector *) arg)->object.this$));
        }
        static PyObject *t_AlignmentDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AlignmentDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AlignmentDetector_of_(t_AlignmentDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_AlignmentDetector_init_(t_AlignmentDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
              jdouble a2;
              AlignmentDetector object((jobject) NULL);

              if (!parseArgs(args, "kkD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = AlignmentDetector(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(AlignmentDetector);
                break;
              }
            }
            goto err;
           case 4:
            {
              jdouble a0;
              ::org::orekit::orbits::Orbit a1((jobject) NULL);
              ::org::orekit::utils::PVCoordinatesProvider a2((jobject) NULL);
              jdouble a3;
              AlignmentDetector object((jobject) NULL);

              if (!parseArgs(args, "DkkD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = AlignmentDetector(a0, a1, a2, a3));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(AlignmentDetector);
                break;
              }
            }
            {
              jdouble a0;
              jdouble a1;
              ::org::orekit::utils::PVCoordinatesProvider a2((jobject) NULL);
              jdouble a3;
              AlignmentDetector object((jobject) NULL);

              if (!parseArgs(args, "DDkD", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = AlignmentDetector(a0, a1, a2, a3));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(AlignmentDetector);
                break;
              }
            }
           default:
           err:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_AlignmentDetector_g(t_AlignmentDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(AlignmentDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_AlignmentDetector_getAlignAngle(t_AlignmentDetector *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getAlignAngle());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AlignmentDetector_getPVCoordinatesProvider(t_AlignmentDetector *self)
        {
          ::org::orekit::utils::PVCoordinatesProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getPVCoordinatesProvider());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(result);
        }
        static PyObject *t_AlignmentDetector_get__parameters_(t_AlignmentDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_AlignmentDetector_get__alignAngle(t_AlignmentDetector *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getAlignAngle());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_AlignmentDetector_get__pVCoordinatesProvider(t_AlignmentDetector *self, void *data)
        {
          ::org::orekit::utils::PVCoordinatesProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getPVCoordinatesProvider());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/utils/DerivativeGenerator.h"
#include "java/util/List.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace utils {

        ::java::lang::Class *DerivativeGenerator::class$ = NULL;
        jmethodID *DerivativeGenerator::mids$ = NULL;
        bool DerivativeGenerator::live$ = false;

        jclass DerivativeGenerator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/utils/DerivativeGenerator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_constant_4b4caf8b2e5f103f] = env->getMethodID(cls, "constant", "(D)Lorg/hipparchus/analysis/differentiation/Derivative;");
            mids$[mid_getField_577649682b9910c1] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
            mids$[mid_getSelected_d751c1a57012b438] = env->getMethodID(cls, "getSelected", "()Ljava/util/List;");
            mids$[mid_variable_5105964eed6b48bf] = env->getMethodID(cls, "variable", "(Lorg/orekit/utils/ParameterDriver;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::analysis::differentiation::Derivative DerivativeGenerator::constant(jdouble a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_constant_4b4caf8b2e5f103f], a0));
        }

        ::org::hipparchus::Field DerivativeGenerator::getField() const
        {
          return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_577649682b9910c1]));
        }

        ::java::util::List DerivativeGenerator::getSelected() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSelected_d751c1a57012b438]));
        }

        ::org::hipparchus::analysis::differentiation::Derivative DerivativeGenerator::variable(const ::org::orekit::utils::ParameterDriver & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_variable_5105964eed6b48bf], a0.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace utils {
        static PyObject *t_DerivativeGenerator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DerivativeGenerator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DerivativeGenerator_of_(t_DerivativeGenerator *self, PyObject *args);
        static PyObject *t_DerivativeGenerator_constant(t_DerivativeGenerator *self, PyObject *arg);
        static PyObject *t_DerivativeGenerator_getField(t_DerivativeGenerator *self);
        static PyObject *t_DerivativeGenerator_getSelected(t_DerivativeGenerator *self);
        static PyObject *t_DerivativeGenerator_variable(t_DerivativeGenerator *self, PyObject *arg);
        static PyObject *t_DerivativeGenerator_get__field(t_DerivativeGenerator *self, void *data);
        static PyObject *t_DerivativeGenerator_get__selected(t_DerivativeGenerator *self, void *data);
        static PyObject *t_DerivativeGenerator_get__parameters_(t_DerivativeGenerator *self, void *data);
        static PyGetSetDef t_DerivativeGenerator__fields_[] = {
          DECLARE_GET_FIELD(t_DerivativeGenerator, field),
          DECLARE_GET_FIELD(t_DerivativeGenerator, selected),
          DECLARE_GET_FIELD(t_DerivativeGenerator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DerivativeGenerator__methods_[] = {
          DECLARE_METHOD(t_DerivativeGenerator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DerivativeGenerator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DerivativeGenerator, of_, METH_VARARGS),
          DECLARE_METHOD(t_DerivativeGenerator, constant, METH_O),
          DECLARE_METHOD(t_DerivativeGenerator, getField, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeGenerator, getSelected, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeGenerator, variable, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DerivativeGenerator)[] = {
          { Py_tp_methods, t_DerivativeGenerator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_DerivativeGenerator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DerivativeGenerator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DerivativeGenerator, t_DerivativeGenerator, DerivativeGenerator);
        PyObject *t_DerivativeGenerator::wrap_Object(const DerivativeGenerator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_DerivativeGenerator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_DerivativeGenerator *self = (t_DerivativeGenerator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_DerivativeGenerator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_DerivativeGenerator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_DerivativeGenerator *self = (t_DerivativeGenerator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_DerivativeGenerator::install(PyObject *module)
        {
          installType(&PY_TYPE(DerivativeGenerator), &PY_TYPE_DEF(DerivativeGenerator), module, "DerivativeGenerator", 0);
        }

        void t_DerivativeGenerator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DerivativeGenerator), "class_", make_descriptor(DerivativeGenerator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DerivativeGenerator), "wrapfn_", make_descriptor(t_DerivativeGenerator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DerivativeGenerator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DerivativeGenerator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DerivativeGenerator::initializeClass, 1)))
            return NULL;
          return t_DerivativeGenerator::wrap_Object(DerivativeGenerator(((t_DerivativeGenerator *) arg)->object.this$));
        }
        static PyObject *t_DerivativeGenerator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DerivativeGenerator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_DerivativeGenerator_of_(t_DerivativeGenerator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_DerivativeGenerator_constant(t_DerivativeGenerator *self, PyObject *arg)
        {
          jdouble a0;
          ::org::hipparchus::analysis::differentiation::Derivative result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.constant(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::analysis::differentiation::t_Derivative::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "constant", arg);
          return NULL;
        }

        static PyObject *t_DerivativeGenerator_getField(t_DerivativeGenerator *self)
        {
          ::org::hipparchus::Field result((jobject) NULL);
          OBJ_CALL(result = self->object.getField());
          return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_DerivativeGenerator_getSelected(t_DerivativeGenerator *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getSelected());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_DerivativeGenerator_variable(t_DerivativeGenerator *self, PyObject *arg)
        {
          ::org::orekit::utils::ParameterDriver a0((jobject) NULL);
          ::org::hipparchus::analysis::differentiation::Derivative result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::utils::ParameterDriver::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.variable(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::analysis::differentiation::t_Derivative::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "variable", arg);
          return NULL;
        }
        static PyObject *t_DerivativeGenerator_get__parameters_(t_DerivativeGenerator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_DerivativeGenerator_get__field(t_DerivativeGenerator *self, void *data)
        {
          ::org::hipparchus::Field value((jobject) NULL);
          OBJ_CALL(value = self->object.getField());
          return ::org::hipparchus::t_Field::wrap_Object(value);
        }

        static PyObject *t_DerivativeGenerator_get__selected(t_DerivativeGenerator *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getSelected());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/PythonEventDetector.h"
#include "org/orekit/propagation/events/handlers/EventHandler.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/AdaptableInterval.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *PythonEventDetector::class$ = NULL;
        jmethodID *PythonEventDetector::mids$ = NULL;
        bool PythonEventDetector::live$ = false;

        jclass PythonEventDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/PythonEventDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_g_b443ba1cc794b916] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getHandler_0e9e72f635f03ea9] = env->getMethodID(cls, "getHandler", "()Lorg/orekit/propagation/events/handlers/EventHandler;");
            mids$[mid_getMaxCheckInterval_11bc47e1cbec1a87] = env->getMethodID(cls, "getMaxCheckInterval", "()Lorg/orekit/propagation/events/AdaptableInterval;");
            mids$[mid_getMaxIterationCount_d6ab429752e7c267] = env->getMethodID(cls, "getMaxIterationCount", "()I");
            mids$[mid_getThreshold_9981f74b2d109da6] = env->getMethodID(cls, "getThreshold", "()D");
            mids$[mid_init_14deaae988292d42] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonEventDetector::PythonEventDetector() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        void PythonEventDetector::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonEventDetector::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonEventDetector::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        static PyObject *t_PythonEventDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonEventDetector_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonEventDetector_init_(t_PythonEventDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonEventDetector_finalize(t_PythonEventDetector *self);
        static PyObject *t_PythonEventDetector_pythonExtension(t_PythonEventDetector *self, PyObject *args);
        static jdouble JNICALL t_PythonEventDetector_g0(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonEventDetector_getHandler1(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonEventDetector_getMaxCheckInterval2(JNIEnv *jenv, jobject jobj);
        static jint JNICALL t_PythonEventDetector_getMaxIterationCount3(JNIEnv *jenv, jobject jobj);
        static jdouble JNICALL t_PythonEventDetector_getThreshold4(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonEventDetector_init5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static void JNICALL t_PythonEventDetector_pythonDecRef6(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonEventDetector_get__self(t_PythonEventDetector *self, void *data);
        static PyGetSetDef t_PythonEventDetector__fields_[] = {
          DECLARE_GET_FIELD(t_PythonEventDetector, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonEventDetector__methods_[] = {
          DECLARE_METHOD(t_PythonEventDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEventDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEventDetector, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonEventDetector, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonEventDetector)[] = {
          { Py_tp_methods, t_PythonEventDetector__methods_ },
          { Py_tp_init, (void *) t_PythonEventDetector_init_ },
          { Py_tp_getset, t_PythonEventDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonEventDetector)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonEventDetector, t_PythonEventDetector, PythonEventDetector);

        void t_PythonEventDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonEventDetector), &PY_TYPE_DEF(PythonEventDetector), module, "PythonEventDetector", 1);
        }

        void t_PythonEventDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEventDetector), "class_", make_descriptor(PythonEventDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEventDetector), "wrapfn_", make_descriptor(t_PythonEventDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEventDetector), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonEventDetector::initializeClass);
          JNINativeMethod methods[] = {
            { "g", "(Lorg/orekit/propagation/SpacecraftState;)D", (void *) t_PythonEventDetector_g0 },
            { "getHandler", "()Lorg/orekit/propagation/events/handlers/EventHandler;", (void *) t_PythonEventDetector_getHandler1 },
            { "getMaxCheckInterval", "()Lorg/orekit/propagation/events/AdaptableInterval;", (void *) t_PythonEventDetector_getMaxCheckInterval2 },
            { "getMaxIterationCount", "()I", (void *) t_PythonEventDetector_getMaxIterationCount3 },
            { "getThreshold", "()D", (void *) t_PythonEventDetector_getThreshold4 },
            { "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V", (void *) t_PythonEventDetector_init5 },
            { "pythonDecRef", "()V", (void *) t_PythonEventDetector_pythonDecRef6 },
          };
          env->registerNatives(cls, methods, 7);
        }

        static PyObject *t_PythonEventDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonEventDetector::initializeClass, 1)))
            return NULL;
          return t_PythonEventDetector::wrap_Object(PythonEventDetector(((t_PythonEventDetector *) arg)->object.this$));
        }
        static PyObject *t_PythonEventDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonEventDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonEventDetector_init_(t_PythonEventDetector *self, PyObject *args, PyObject *kwds)
        {
          PythonEventDetector object((jobject) NULL);

          INT_CALL(object = PythonEventDetector());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonEventDetector_finalize(t_PythonEventDetector *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonEventDetector_pythonExtension(t_PythonEventDetector *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jlong result;
              OBJ_CALL(result = self->object.pythonExtension());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
            break;
           case 1:
            {
              jlong a0;

              if (!parseArgs(args, "J", &a0))
              {
                OBJ_CALL(self->object.pythonExtension(a0));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
          return NULL;
        }

        static jdouble JNICALL t_PythonEventDetector_g0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEventDetector::mids$[PythonEventDetector::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jdouble value;
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "g", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "D", &value))
          {
            throwTypeError("g", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jdouble) 0;
        }

        static jobject JNICALL t_PythonEventDetector_getHandler1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEventDetector::mids$[PythonEventDetector::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::events::handlers::EventHandler value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getHandler", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::events::handlers::EventHandler::initializeClass, &value))
          {
            throwTypeError("getHandler", result);
            Py_DECREF(result);
          }
          else
          {
            jobj = jenv->NewLocalRef(value.this$);
            Py_DECREF(result);
            return jobj;
          }

          return (jobject) NULL;
        }

        static jobject JNICALL t_PythonEventDetector_getMaxCheckInterval2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEventDetector::mids$[PythonEventDetector::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::events::AdaptableInterval value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getMaxCheckInterval", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::events::AdaptableInterval::initializeClass, &value))
          {
            throwTypeError("getMaxCheckInterval", result);
            Py_DECREF(result);
          }
          else
          {
            jobj = jenv->NewLocalRef(value.this$);
            Py_DECREF(result);
            return jobj;
          }

          return (jobject) NULL;
        }

        static jint JNICALL t_PythonEventDetector_getMaxIterationCount3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEventDetector::mids$[PythonEventDetector::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jint value;
          PyObject *result = PyObject_CallMethod(obj, "getMaxIterationCount", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "I", &value))
          {
            throwTypeError("getMaxIterationCount", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jint) 0;
        }

        static jdouble JNICALL t_PythonEventDetector_getThreshold4(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEventDetector::mids$[PythonEventDetector::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jdouble value;
          PyObject *result = PyObject_CallMethod(obj, "getThreshold", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "D", &value))
          {
            throwTypeError("getThreshold", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jdouble) 0;
        }

        static void JNICALL t_PythonEventDetector_init5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEventDetector::mids$[PythonEventDetector::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
          PyObject *result = PyObject_CallMethod(obj, "init", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonEventDetector_pythonDecRef6(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEventDetector::mids$[PythonEventDetector::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonEventDetector::mids$[PythonEventDetector::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonEventDetector_get__self(t_PythonEventDetector *self, void *data)
        {
          jlong ptr;
          OBJ_CALL(ptr = self->object.pythonExtension());
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            Py_INCREF(obj);
            return obj;
          }
          else
            Py_RETURN_NONE;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/PythonAttitudeProvider.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *PythonAttitudeProvider::class$ = NULL;
      jmethodID *PythonAttitudeProvider::mids$ = NULL;
      bool PythonAttitudeProvider::live$ = false;

      jclass PythonAttitudeProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/PythonAttitudeProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getAttitude_aab1c6ab68ffdcbb] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getAttitude_a02177519e1b6a45] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonAttitudeProvider::PythonAttitudeProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      void PythonAttitudeProvider::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
      }

      jlong PythonAttitudeProvider::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
      }

      void PythonAttitudeProvider::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      static PyObject *t_PythonAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonAttitudeProvider_init_(t_PythonAttitudeProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonAttitudeProvider_finalize(t_PythonAttitudeProvider *self);
      static PyObject *t_PythonAttitudeProvider_pythonExtension(t_PythonAttitudeProvider *self, PyObject *args);
      static jobject JNICALL t_PythonAttitudeProvider_getAttitude0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
      static jobject JNICALL t_PythonAttitudeProvider_getAttitude1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
      static void JNICALL t_PythonAttitudeProvider_pythonDecRef2(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonAttitudeProvider_get__self(t_PythonAttitudeProvider *self, void *data);
      static PyGetSetDef t_PythonAttitudeProvider__fields_[] = {
        DECLARE_GET_FIELD(t_PythonAttitudeProvider, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonAttitudeProvider__methods_[] = {
        DECLARE_METHOD(t_PythonAttitudeProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAttitudeProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAttitudeProvider, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonAttitudeProvider, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonAttitudeProvider)[] = {
        { Py_tp_methods, t_PythonAttitudeProvider__methods_ },
        { Py_tp_init, (void *) t_PythonAttitudeProvider_init_ },
        { Py_tp_getset, t_PythonAttitudeProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonAttitudeProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonAttitudeProvider, t_PythonAttitudeProvider, PythonAttitudeProvider);

      void t_PythonAttitudeProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonAttitudeProvider), &PY_TYPE_DEF(PythonAttitudeProvider), module, "PythonAttitudeProvider", 1);
      }

      void t_PythonAttitudeProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeProvider), "class_", make_descriptor(PythonAttitudeProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeProvider), "wrapfn_", make_descriptor(t_PythonAttitudeProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeProvider), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonAttitudeProvider::initializeClass);
        JNINativeMethod methods[] = {
          { "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;", (void *) t_PythonAttitudeProvider_getAttitude0 },
          { "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;", (void *) t_PythonAttitudeProvider_getAttitude1 },
          { "pythonDecRef", "()V", (void *) t_PythonAttitudeProvider_pythonDecRef2 },
        };
        env->registerNatives(cls, methods, 3);
      }

      static PyObject *t_PythonAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonAttitudeProvider::initializeClass, 1)))
          return NULL;
        return t_PythonAttitudeProvider::wrap_Object(PythonAttitudeProvider(((t_PythonAttitudeProvider *) arg)->object.this$));
      }
      static PyObject *t_PythonAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonAttitudeProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonAttitudeProvider_init_(t_PythonAttitudeProvider *self, PyObject *args, PyObject *kwds)
      {
        PythonAttitudeProvider object((jobject) NULL);

        INT_CALL(object = PythonAttitudeProvider());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonAttitudeProvider_finalize(t_PythonAttitudeProvider *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonAttitudeProvider_pythonExtension(t_PythonAttitudeProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jlong result;
            OBJ_CALL(result = self->object.pythonExtension());
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
          break;
         case 1:
          {
            jlong a0;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(self->object.pythonExtension(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
        return NULL;
      }

      static jobject JNICALL t_PythonAttitudeProvider_getAttitude0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeProvider::mids$[PythonAttitudeProvider::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::attitudes::Attitude value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(::org::orekit::utils::PVCoordinatesProvider(a0));
        PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
        PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
        PyObject *result = PyObject_CallMethod(obj, "getAttitude", "OOO", o0, o1, o2);
        Py_DECREF(o0);
        Py_DECREF(o1);
        Py_DECREF(o2);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::attitudes::Attitude::initializeClass, &value))
        {
          throwTypeError("getAttitude", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonAttitudeProvider_getAttitude1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeProvider::mids$[PythonAttitudeProvider::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::attitudes::FieldAttitude value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_FieldPVCoordinatesProvider::wrap_Object(::org::orekit::utils::FieldPVCoordinatesProvider(a0));
        PyObject *o1 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a1));
        PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
        PyObject *result = PyObject_CallMethod(obj, "getAttitude", "OOO", o0, o1, o2);
        Py_DECREF(o0);
        Py_DECREF(o1);
        Py_DECREF(o2);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::attitudes::FieldAttitude::initializeClass, &value))
        {
          throwTypeError("getAttitude", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static void JNICALL t_PythonAttitudeProvider_pythonDecRef2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeProvider::mids$[PythonAttitudeProvider::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonAttitudeProvider::mids$[PythonAttitudeProvider::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonAttitudeProvider_get__self(t_PythonAttitudeProvider *self, void *data)
      {
        jlong ptr;
        OBJ_CALL(ptr = self->object.pythonExtension());
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          Py_INCREF(obj);
          return obj;
        }
        else
          Py_RETURN_NONE;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/interpolation/LinearInterpolator.h"
#include "org/hipparchus/analysis/interpolation/UnivariateInterpolator.h"
#include "org/hipparchus/analysis/polynomials/FieldPolynomialSplineFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/polynomials/PolynomialSplineFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/interpolation/FieldUnivariateInterpolator.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *LinearInterpolator::class$ = NULL;
        jmethodID *LinearInterpolator::mids$ = NULL;
        bool LinearInterpolator::live$ = false;

        jclass LinearInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/LinearInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_interpolate_d112b93e44ec98b7] = env->getMethodID(cls, "interpolate", "([D[D)Lorg/hipparchus/analysis/polynomials/PolynomialSplineFunction;");
            mids$[mid_interpolate_675f76d3ea97467b] = env->getMethodID(cls, "interpolate", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/polynomials/FieldPolynomialSplineFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LinearInterpolator::LinearInterpolator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        ::org::hipparchus::analysis::polynomials::PolynomialSplineFunction LinearInterpolator::interpolate(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::analysis::polynomials::PolynomialSplineFunction(env->callObjectMethod(this$, mids$[mid_interpolate_d112b93e44ec98b7], a0.this$, a1.this$));
        }

        ::org::hipparchus::analysis::polynomials::FieldPolynomialSplineFunction LinearInterpolator::interpolate(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::analysis::polynomials::FieldPolynomialSplineFunction(env->callObjectMethod(this$, mids$[mid_interpolate_675f76d3ea97467b], a0.this$, a1.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {
        static PyObject *t_LinearInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LinearInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_LinearInterpolator_init_(t_LinearInterpolator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LinearInterpolator_interpolate(t_LinearInterpolator *self, PyObject *args);

        static PyMethodDef t_LinearInterpolator__methods_[] = {
          DECLARE_METHOD(t_LinearInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LinearInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LinearInterpolator, interpolate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LinearInterpolator)[] = {
          { Py_tp_methods, t_LinearInterpolator__methods_ },
          { Py_tp_init, (void *) t_LinearInterpolator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LinearInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(LinearInterpolator, t_LinearInterpolator, LinearInterpolator);

        void t_LinearInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(LinearInterpolator), &PY_TYPE_DEF(LinearInterpolator), module, "LinearInterpolator", 0);
        }

        void t_LinearInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LinearInterpolator), "class_", make_descriptor(LinearInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LinearInterpolator), "wrapfn_", make_descriptor(t_LinearInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LinearInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LinearInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LinearInterpolator::initializeClass, 1)))
            return NULL;
          return t_LinearInterpolator::wrap_Object(LinearInterpolator(((t_LinearInterpolator *) arg)->object.this$));
        }
        static PyObject *t_LinearInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LinearInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_LinearInterpolator_init_(t_LinearInterpolator *self, PyObject *args, PyObject *kwds)
        {
          LinearInterpolator object((jobject) NULL);

          INT_CALL(object = LinearInterpolator());
          self->object = object;

          return 0;
        }

        static PyObject *t_LinearInterpolator_interpolate(t_LinearInterpolator *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              ::org::hipparchus::analysis::polynomials::PolynomialSplineFunction result((jobject) NULL);

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.interpolate(a0, a1));
                return ::org::hipparchus::analysis::polynomials::t_PolynomialSplineFunction::wrap_Object(result);
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::analysis::polynomials::FieldPolynomialSplineFunction result((jobject) NULL);

              if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.interpolate(a0, a1));
                return ::org::hipparchus::analysis::polynomials::t_FieldPolynomialSplineFunction::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "interpolate", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/PythonTimeScale.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *PythonTimeScale::class$ = NULL;
      jmethodID *PythonTimeScale::mids$ = NULL;
      bool PythonTimeScale::live$ = false;

      jclass PythonTimeScale::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/PythonTimeScale");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_offsetFromTAI_209f08246d708042] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_offsetFromTAI_cf010978f3c5a913] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonTimeScale::PythonTimeScale() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      void PythonTimeScale::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
      }

      jlong PythonTimeScale::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
      }

      void PythonTimeScale::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace time {
      static PyObject *t_PythonTimeScale_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonTimeScale_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonTimeScale_init_(t_PythonTimeScale *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonTimeScale_finalize(t_PythonTimeScale *self);
      static PyObject *t_PythonTimeScale_pythonExtension(t_PythonTimeScale *self, PyObject *args);
      static jobject JNICALL t_PythonTimeScale_getName0(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonTimeScale_offsetFromTAI1(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonTimeScale_offsetFromTAI2(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonTimeScale_pythonDecRef3(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonTimeScale_get__self(t_PythonTimeScale *self, void *data);
      static PyGetSetDef t_PythonTimeScale__fields_[] = {
        DECLARE_GET_FIELD(t_PythonTimeScale, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonTimeScale__methods_[] = {
        DECLARE_METHOD(t_PythonTimeScale, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeScale, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeScale, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonTimeScale, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonTimeScale)[] = {
        { Py_tp_methods, t_PythonTimeScale__methods_ },
        { Py_tp_init, (void *) t_PythonTimeScale_init_ },
        { Py_tp_getset, t_PythonTimeScale__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonTimeScale)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonTimeScale, t_PythonTimeScale, PythonTimeScale);

      void t_PythonTimeScale::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonTimeScale), &PY_TYPE_DEF(PythonTimeScale), module, "PythonTimeScale", 1);
      }

      void t_PythonTimeScale::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeScale), "class_", make_descriptor(PythonTimeScale::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeScale), "wrapfn_", make_descriptor(t_PythonTimeScale::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeScale), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonTimeScale::initializeClass);
        JNINativeMethod methods[] = {
          { "getName", "()Ljava/lang/String;", (void *) t_PythonTimeScale_getName0 },
          { "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonTimeScale_offsetFromTAI1 },
          { "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonTimeScale_offsetFromTAI2 },
          { "pythonDecRef", "()V", (void *) t_PythonTimeScale_pythonDecRef3 },
        };
        env->registerNatives(cls, methods, 4);
      }

      static PyObject *t_PythonTimeScale_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonTimeScale::initializeClass, 1)))
          return NULL;
        return t_PythonTimeScale::wrap_Object(PythonTimeScale(((t_PythonTimeScale *) arg)->object.this$));
      }
      static PyObject *t_PythonTimeScale_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonTimeScale::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonTimeScale_init_(t_PythonTimeScale *self, PyObject *args, PyObject *kwds)
      {
        PythonTimeScale object((jobject) NULL);

        INT_CALL(object = PythonTimeScale());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonTimeScale_finalize(t_PythonTimeScale *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonTimeScale_pythonExtension(t_PythonTimeScale *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jlong result;
            OBJ_CALL(result = self->object.pythonExtension());
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
          break;
         case 1:
          {
            jlong a0;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(self->object.pythonExtension(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
        return NULL;
      }

      static jobject JNICALL t_PythonTimeScale_getName0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScale::mids$[PythonTimeScale::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::lang::String value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getName", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "s", &value))
        {
          throwTypeError("getName", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jdouble JNICALL t_PythonTimeScale_offsetFromTAI1(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScale::mids$[PythonTimeScale::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "offsetFromTAI", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("offsetFromTAI", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jobject JNICALL t_PythonTimeScale_offsetFromTAI2(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScale::mids$[PythonTimeScale::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "offsetFromTAI", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
        {
          throwTypeError("offsetFromTAI", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static void JNICALL t_PythonTimeScale_pythonDecRef3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScale::mids$[PythonTimeScale::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonTimeScale::mids$[PythonTimeScale::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonTimeScale_get__self(t_PythonTimeScale *self, void *data)
      {
        jlong ptr;
        OBJ_CALL(ptr = self->object.pythonExtension());
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          Py_INCREF(obj);
          return obj;
        }
        else
          Py_RETURN_NONE;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/BaseAbstractUnivariateIntegrator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/integration/UnivariateIntegrator.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {

        ::java::lang::Class *BaseAbstractUnivariateIntegrator::class$ = NULL;
        jmethodID *BaseAbstractUnivariateIntegrator::mids$ = NULL;
        bool BaseAbstractUnivariateIntegrator::live$ = false;
        jdouble BaseAbstractUnivariateIntegrator::DEFAULT_ABSOLUTE_ACCURACY = (jdouble) 0;
        jint BaseAbstractUnivariateIntegrator::DEFAULT_MAX_ITERATIONS_COUNT = (jint) 0;
        jint BaseAbstractUnivariateIntegrator::DEFAULT_MIN_ITERATIONS_COUNT = (jint) 0;
        jdouble BaseAbstractUnivariateIntegrator::DEFAULT_RELATIVE_ACCURACY = (jdouble) 0;

        jclass BaseAbstractUnivariateIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/BaseAbstractUnivariateIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getAbsoluteAccuracy_9981f74b2d109da6] = env->getMethodID(cls, "getAbsoluteAccuracy", "()D");
            mids$[mid_getEvaluations_d6ab429752e7c267] = env->getMethodID(cls, "getEvaluations", "()I");
            mids$[mid_getIterations_d6ab429752e7c267] = env->getMethodID(cls, "getIterations", "()I");
            mids$[mid_getMaximalIterationCount_d6ab429752e7c267] = env->getMethodID(cls, "getMaximalIterationCount", "()I");
            mids$[mid_getMinimalIterationCount_d6ab429752e7c267] = env->getMethodID(cls, "getMinimalIterationCount", "()I");
            mids$[mid_getRelativeAccuracy_9981f74b2d109da6] = env->getMethodID(cls, "getRelativeAccuracy", "()D");
            mids$[mid_integrate_f8d9b8fc210a2541] = env->getMethodID(cls, "integrate", "(ILorg/hipparchus/analysis/UnivariateFunction;DD)D");
            mids$[mid_getMin_9981f74b2d109da6] = env->getMethodID(cls, "getMin", "()D");
            mids$[mid_getMax_9981f74b2d109da6] = env->getMethodID(cls, "getMax", "()D");
            mids$[mid_computeObjectiveValue_bf28ed64d6e8576b] = env->getMethodID(cls, "computeObjectiveValue", "(D)D");
            mids$[mid_doIntegrate_9981f74b2d109da6] = env->getMethodID(cls, "doIntegrate", "()D");
            mids$[mid_setup_f7f272ee373a6deb] = env->getMethodID(cls, "setup", "(ILorg/hipparchus/analysis/UnivariateFunction;DD)V");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_ABSOLUTE_ACCURACY = env->getStaticDoubleField(cls, "DEFAULT_ABSOLUTE_ACCURACY");
            DEFAULT_MAX_ITERATIONS_COUNT = env->getStaticIntField(cls, "DEFAULT_MAX_ITERATIONS_COUNT");
            DEFAULT_MIN_ITERATIONS_COUNT = env->getStaticIntField(cls, "DEFAULT_MIN_ITERATIONS_COUNT");
            DEFAULT_RELATIVE_ACCURACY = env->getStaticDoubleField(cls, "DEFAULT_RELATIVE_ACCURACY");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble BaseAbstractUnivariateIntegrator::getAbsoluteAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAbsoluteAccuracy_9981f74b2d109da6]);
        }

        jint BaseAbstractUnivariateIntegrator::getEvaluations() const
        {
          return env->callIntMethod(this$, mids$[mid_getEvaluations_d6ab429752e7c267]);
        }

        jint BaseAbstractUnivariateIntegrator::getIterations() const
        {
          return env->callIntMethod(this$, mids$[mid_getIterations_d6ab429752e7c267]);
        }

        jint BaseAbstractUnivariateIntegrator::getMaximalIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaximalIterationCount_d6ab429752e7c267]);
        }

        jint BaseAbstractUnivariateIntegrator::getMinimalIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMinimalIterationCount_d6ab429752e7c267]);
        }

        jdouble BaseAbstractUnivariateIntegrator::getRelativeAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRelativeAccuracy_9981f74b2d109da6]);
        }

        jdouble BaseAbstractUnivariateIntegrator::integrate(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3) const
        {
          return env->callDoubleMethod(this$, mids$[mid_integrate_f8d9b8fc210a2541], a0, a1.this$, a2, a3);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        static PyObject *t_BaseAbstractUnivariateIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BaseAbstractUnivariateIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BaseAbstractUnivariateIntegrator_getAbsoluteAccuracy(t_BaseAbstractUnivariateIntegrator *self);
        static PyObject *t_BaseAbstractUnivariateIntegrator_getEvaluations(t_BaseAbstractUnivariateIntegrator *self);
        static PyObject *t_BaseAbstractUnivariateIntegrator_getIterations(t_BaseAbstractUnivariateIntegrator *self);
        static PyObject *t_BaseAbstractUnivariateIntegrator_getMaximalIterationCount(t_BaseAbstractUnivariateIntegrator *self);
        static PyObject *t_BaseAbstractUnivariateIntegrator_getMinimalIterationCount(t_BaseAbstractUnivariateIntegrator *self);
        static PyObject *t_BaseAbstractUnivariateIntegrator_getRelativeAccuracy(t_BaseAbstractUnivariateIntegrator *self);
        static PyObject *t_BaseAbstractUnivariateIntegrator_integrate(t_BaseAbstractUnivariateIntegrator *self, PyObject *args);
        static PyObject *t_BaseAbstractUnivariateIntegrator_get__absoluteAccuracy(t_BaseAbstractUnivariateIntegrator *self, void *data);
        static PyObject *t_BaseAbstractUnivariateIntegrator_get__evaluations(t_BaseAbstractUnivariateIntegrator *self, void *data);
        static PyObject *t_BaseAbstractUnivariateIntegrator_get__iterations(t_BaseAbstractUnivariateIntegrator *self, void *data);
        static PyObject *t_BaseAbstractUnivariateIntegrator_get__maximalIterationCount(t_BaseAbstractUnivariateIntegrator *self, void *data);
        static PyObject *t_BaseAbstractUnivariateIntegrator_get__minimalIterationCount(t_BaseAbstractUnivariateIntegrator *self, void *data);
        static PyObject *t_BaseAbstractUnivariateIntegrator_get__relativeAccuracy(t_BaseAbstractUnivariateIntegrator *self, void *data);
        static PyGetSetDef t_BaseAbstractUnivariateIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_BaseAbstractUnivariateIntegrator, absoluteAccuracy),
          DECLARE_GET_FIELD(t_BaseAbstractUnivariateIntegrator, evaluations),
          DECLARE_GET_FIELD(t_BaseAbstractUnivariateIntegrator, iterations),
          DECLARE_GET_FIELD(t_BaseAbstractUnivariateIntegrator, maximalIterationCount),
          DECLARE_GET_FIELD(t_BaseAbstractUnivariateIntegrator, minimalIterationCount),
          DECLARE_GET_FIELD(t_BaseAbstractUnivariateIntegrator, relativeAccuracy),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BaseAbstractUnivariateIntegrator__methods_[] = {
          DECLARE_METHOD(t_BaseAbstractUnivariateIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BaseAbstractUnivariateIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BaseAbstractUnivariateIntegrator, getAbsoluteAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractUnivariateIntegrator, getEvaluations, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractUnivariateIntegrator, getIterations, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractUnivariateIntegrator, getMaximalIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractUnivariateIntegrator, getMinimalIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractUnivariateIntegrator, getRelativeAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractUnivariateIntegrator, integrate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BaseAbstractUnivariateIntegrator)[] = {
          { Py_tp_methods, t_BaseAbstractUnivariateIntegrator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_BaseAbstractUnivariateIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BaseAbstractUnivariateIntegrator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BaseAbstractUnivariateIntegrator, t_BaseAbstractUnivariateIntegrator, BaseAbstractUnivariateIntegrator);

        void t_BaseAbstractUnivariateIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(BaseAbstractUnivariateIntegrator), &PY_TYPE_DEF(BaseAbstractUnivariateIntegrator), module, "BaseAbstractUnivariateIntegrator", 0);
        }

        void t_BaseAbstractUnivariateIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractUnivariateIntegrator), "class_", make_descriptor(BaseAbstractUnivariateIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractUnivariateIntegrator), "wrapfn_", make_descriptor(t_BaseAbstractUnivariateIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractUnivariateIntegrator), "boxfn_", make_descriptor(boxObject));
          env->getClass(BaseAbstractUnivariateIntegrator::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractUnivariateIntegrator), "DEFAULT_ABSOLUTE_ACCURACY", make_descriptor(BaseAbstractUnivariateIntegrator::DEFAULT_ABSOLUTE_ACCURACY));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractUnivariateIntegrator), "DEFAULT_MAX_ITERATIONS_COUNT", make_descriptor(BaseAbstractUnivariateIntegrator::DEFAULT_MAX_ITERATIONS_COUNT));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractUnivariateIntegrator), "DEFAULT_MIN_ITERATIONS_COUNT", make_descriptor(BaseAbstractUnivariateIntegrator::DEFAULT_MIN_ITERATIONS_COUNT));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractUnivariateIntegrator), "DEFAULT_RELATIVE_ACCURACY", make_descriptor(BaseAbstractUnivariateIntegrator::DEFAULT_RELATIVE_ACCURACY));
        }

        static PyObject *t_BaseAbstractUnivariateIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BaseAbstractUnivariateIntegrator::initializeClass, 1)))
            return NULL;
          return t_BaseAbstractUnivariateIntegrator::wrap_Object(BaseAbstractUnivariateIntegrator(((t_BaseAbstractUnivariateIntegrator *) arg)->object.this$));
        }
        static PyObject *t_BaseAbstractUnivariateIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BaseAbstractUnivariateIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BaseAbstractUnivariateIntegrator_getAbsoluteAccuracy(t_BaseAbstractUnivariateIntegrator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getAbsoluteAccuracy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BaseAbstractUnivariateIntegrator_getEvaluations(t_BaseAbstractUnivariateIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getEvaluations());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BaseAbstractUnivariateIntegrator_getIterations(t_BaseAbstractUnivariateIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getIterations());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BaseAbstractUnivariateIntegrator_getMaximalIterationCount(t_BaseAbstractUnivariateIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaximalIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BaseAbstractUnivariateIntegrator_getMinimalIterationCount(t_BaseAbstractUnivariateIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMinimalIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BaseAbstractUnivariateIntegrator_getRelativeAccuracy(t_BaseAbstractUnivariateIntegrator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRelativeAccuracy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BaseAbstractUnivariateIntegrator_integrate(t_BaseAbstractUnivariateIntegrator *self, PyObject *args)
        {
          jint a0;
          ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
          jdouble a2;
          jdouble a3;
          jdouble result;

          if (!parseArgs(args, "IkDD", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.integrate(a0, a1, a2, a3));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "integrate", args);
          return NULL;
        }

        static PyObject *t_BaseAbstractUnivariateIntegrator_get__absoluteAccuracy(t_BaseAbstractUnivariateIntegrator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getAbsoluteAccuracy());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BaseAbstractUnivariateIntegrator_get__evaluations(t_BaseAbstractUnivariateIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getEvaluations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BaseAbstractUnivariateIntegrator_get__iterations(t_BaseAbstractUnivariateIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getIterations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BaseAbstractUnivariateIntegrator_get__maximalIterationCount(t_BaseAbstractUnivariateIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaximalIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BaseAbstractUnivariateIntegrator_get__minimalIterationCount(t_BaseAbstractUnivariateIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMinimalIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BaseAbstractUnivariateIntegrator_get__relativeAccuracy(t_BaseAbstractUnivariateIntegrator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRelativeAccuracy());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/HaloOrbit.h"
#include "org/orekit/orbits/RichardsonExpansion.h"
#include "org/orekit/bodies/CR3BPSystem.h"
#include "org/orekit/orbits/LibrationOrbitFamily.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *HaloOrbit::class$ = NULL;
      jmethodID *HaloOrbit::mids$ = NULL;
      bool HaloOrbit::live$ = false;

      jclass HaloOrbit::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/HaloOrbit");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_77d7e81f8f5ef089] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/RichardsonExpansion;DLorg/orekit/orbits/LibrationOrbitFamily;)V");
          mids$[mid_init$_2ace0c1a76c4c810] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CR3BPSystem;Lorg/orekit/utils/PVCoordinates;D)V");
          mids$[mid_applyCorrectionOnPV_6705c201ee6823b5] = env->getMethodID(cls, "applyCorrectionOnPV", "(Lorg/orekit/orbits/CR3BPDifferentialCorrection;)Lorg/orekit/utils/PVCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      HaloOrbit::HaloOrbit(const ::org::orekit::orbits::RichardsonExpansion & a0, jdouble a1, const ::org::orekit::orbits::LibrationOrbitFamily & a2) : ::org::orekit::orbits::LibrationOrbit(env->newObject(initializeClass, &mids$, mid_init$_77d7e81f8f5ef089, a0.this$, a1, a2.this$)) {}

      HaloOrbit::HaloOrbit(const ::org::orekit::bodies::CR3BPSystem & a0, const ::org::orekit::utils::PVCoordinates & a1, jdouble a2) : ::org::orekit::orbits::LibrationOrbit(env->newObject(initializeClass, &mids$, mid_init$_2ace0c1a76c4c810, a0.this$, a1.this$, a2)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace orbits {
      static PyObject *t_HaloOrbit_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_HaloOrbit_instance_(PyTypeObject *type, PyObject *arg);
      static int t_HaloOrbit_init_(t_HaloOrbit *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_HaloOrbit__methods_[] = {
        DECLARE_METHOD(t_HaloOrbit, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_HaloOrbit, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(HaloOrbit)[] = {
        { Py_tp_methods, t_HaloOrbit__methods_ },
        { Py_tp_init, (void *) t_HaloOrbit_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(HaloOrbit)[] = {
        &PY_TYPE_DEF(::org::orekit::orbits::LibrationOrbit),
        NULL
      };

      DEFINE_TYPE(HaloOrbit, t_HaloOrbit, HaloOrbit);

      void t_HaloOrbit::install(PyObject *module)
      {
        installType(&PY_TYPE(HaloOrbit), &PY_TYPE_DEF(HaloOrbit), module, "HaloOrbit", 0);
      }

      void t_HaloOrbit::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(HaloOrbit), "class_", make_descriptor(HaloOrbit::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HaloOrbit), "wrapfn_", make_descriptor(t_HaloOrbit::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HaloOrbit), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_HaloOrbit_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, HaloOrbit::initializeClass, 1)))
          return NULL;
        return t_HaloOrbit::wrap_Object(HaloOrbit(((t_HaloOrbit *) arg)->object.this$));
      }
      static PyObject *t_HaloOrbit_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, HaloOrbit::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_HaloOrbit_init_(t_HaloOrbit *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::orbits::RichardsonExpansion a0((jobject) NULL);
            jdouble a1;
            ::org::orekit::orbits::LibrationOrbitFamily a2((jobject) NULL);
            PyTypeObject **p2;
            HaloOrbit object((jobject) NULL);

            if (!parseArgs(args, "kDK", ::org::orekit::orbits::RichardsonExpansion::initializeClass, ::org::orekit::orbits::LibrationOrbitFamily::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::orbits::t_LibrationOrbitFamily::parameters_))
            {
              INT_CALL(object = HaloOrbit(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::bodies::CR3BPSystem a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            jdouble a2;
            HaloOrbit object((jobject) NULL);

            if (!parseArgs(args, "kkD", ::org::orekit::bodies::CR3BPSystem::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = HaloOrbit(a0, a1, a2));
              self->object = object;
              break;
            }
          }
         default:
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/twod/SubLine.h"
#include "org/hipparchus/geometry/euclidean/twod/Segment.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "org/hipparchus/geometry/euclidean/twod/Euclidean2D.h"
#include "org/hipparchus/geometry/euclidean/twod/SubLine.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane$SplitSubHyperplane.h"
#include "org/hipparchus/geometry/partitioning/Region.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/oned/Euclidean1D.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {

          ::java::lang::Class *SubLine::class$ = NULL;
          jmethodID *SubLine::mids$ = NULL;
          bool SubLine::live$ = false;

          jclass SubLine::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/twod/SubLine");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_5e3e37b9bfc2bdc3] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/twod/Segment;)V");
              mids$[mid_init$_5428b0a00a62bde3] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;Lorg/hipparchus/geometry/partitioning/Region;)V");
              mids$[mid_init$_7f7842afd4d898dc] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;D)V");
              mids$[mid_getSegments_d751c1a57012b438] = env->getMethodID(cls, "getSegments", "()Ljava/util/List;");
              mids$[mid_intersection_b7cab121feeb7e2e] = env->getMethodID(cls, "intersection", "(Lorg/hipparchus/geometry/euclidean/twod/SubLine;Z)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_split_b587049e19682418] = env->getMethodID(cls, "split", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;)Lorg/hipparchus/geometry/partitioning/SubHyperplane$SplitSubHyperplane;");
              mids$[mid_buildNew_35b28ef87fdef21f] = env->getMethodID(cls, "buildNew", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;Lorg/hipparchus/geometry/partitioning/Region;)Lorg/hipparchus/geometry/partitioning/AbstractSubHyperplane;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SubLine::SubLine(const ::org::hipparchus::geometry::euclidean::twod::Segment & a0) : ::org::hipparchus::geometry::partitioning::AbstractSubHyperplane(env->newObject(initializeClass, &mids$, mid_init$_5e3e37b9bfc2bdc3, a0.this$)) {}

          SubLine::SubLine(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0, const ::org::hipparchus::geometry::partitioning::Region & a1) : ::org::hipparchus::geometry::partitioning::AbstractSubHyperplane(env->newObject(initializeClass, &mids$, mid_init$_5428b0a00a62bde3, a0.this$, a1.this$)) {}

          SubLine::SubLine(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1, jdouble a2) : ::org::hipparchus::geometry::partitioning::AbstractSubHyperplane(env->newObject(initializeClass, &mids$, mid_init$_7f7842afd4d898dc, a0.this$, a1.this$, a2)) {}

          ::java::util::List SubLine::getSegments() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSegments_d751c1a57012b438]));
          }

          ::org::hipparchus::geometry::euclidean::twod::Vector2D SubLine::intersection(const SubLine & a0, jboolean a1) const
          {
            return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_intersection_b7cab121feeb7e2e], a0.this$, a1));
          }

          ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane SubLine::split(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0) const
          {
            return ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane(env->callObjectMethod(this$, mids$[mid_split_b587049e19682418], a0.this$));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {
          static PyObject *t_SubLine_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubLine_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubLine_of_(t_SubLine *self, PyObject *args);
          static int t_SubLine_init_(t_SubLine *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SubLine_getSegments(t_SubLine *self);
          static PyObject *t_SubLine_intersection(t_SubLine *self, PyObject *args);
          static PyObject *t_SubLine_split(t_SubLine *self, PyObject *args);
          static PyObject *t_SubLine_get__segments(t_SubLine *self, void *data);
          static PyObject *t_SubLine_get__parameters_(t_SubLine *self, void *data);
          static PyGetSetDef t_SubLine__fields_[] = {
            DECLARE_GET_FIELD(t_SubLine, segments),
            DECLARE_GET_FIELD(t_SubLine, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SubLine__methods_[] = {
            DECLARE_METHOD(t_SubLine, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubLine, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubLine, of_, METH_VARARGS),
            DECLARE_METHOD(t_SubLine, getSegments, METH_NOARGS),
            DECLARE_METHOD(t_SubLine, intersection, METH_VARARGS),
            DECLARE_METHOD(t_SubLine, split, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubLine)[] = {
            { Py_tp_methods, t_SubLine__methods_ },
            { Py_tp_init, (void *) t_SubLine_init_ },
            { Py_tp_getset, t_SubLine__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubLine)[] = {
            &PY_TYPE_DEF(::org::hipparchus::geometry::partitioning::AbstractSubHyperplane),
            NULL
          };

          DEFINE_TYPE(SubLine, t_SubLine, SubLine);
          PyObject *t_SubLine::wrap_Object(const SubLine& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_SubLine::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SubLine *self = (t_SubLine *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_SubLine::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_SubLine::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SubLine *self = (t_SubLine *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_SubLine::install(PyObject *module)
          {
            installType(&PY_TYPE(SubLine), &PY_TYPE_DEF(SubLine), module, "SubLine", 0);
          }

          void t_SubLine::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubLine), "class_", make_descriptor(SubLine::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubLine), "wrapfn_", make_descriptor(t_SubLine::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubLine), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SubLine_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubLine::initializeClass, 1)))
              return NULL;
            return t_SubLine::wrap_Object(SubLine(((t_SubLine *) arg)->object.this$));
          }
          static PyObject *t_SubLine_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubLine::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SubLine_of_(t_SubLine *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_SubLine_init_(t_SubLine *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::euclidean::twod::Segment a0((jobject) NULL);
                SubLine object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::twod::Segment::initializeClass, &a0))
                {
                  INT_CALL(object = SubLine(a0));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
                  break;
                }
              }
              goto err;
             case 2:
              {
                ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::partitioning::Region a1((jobject) NULL);
                PyTypeObject **p1;
                SubLine object((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, ::org::hipparchus::geometry::partitioning::Region::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_, &a1, &p1, ::org::hipparchus::geometry::partitioning::t_Region::parameters_))
                {
                  INT_CALL(object = SubLine(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                jdouble a2;
                SubLine object((jobject) NULL);

                if (!parseArgs(args, "kkD", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = SubLine(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
                  break;
                }
              }
             default:
             err:
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_SubLine_getSegments(t_SubLine *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getSegments());
            return ::java::util::t_List::wrap_Object(result, ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Segment));
          }

          static PyObject *t_SubLine_intersection(t_SubLine *self, PyObject *args)
          {
            SubLine a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean a1;
            ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);

            if (!parseArgs(args, "KZ", SubLine::initializeClass, &a0, &p0, t_SubLine::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.intersection(a0, a1));
              return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "intersection", args);
            return NULL;
          }

          static PyObject *t_SubLine_split(t_SubLine *self, PyObject *args)
          {
            ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_))
            {
              OBJ_CALL(result = self->object.split(a0));
              return ::org::hipparchus::geometry::partitioning::t_SubHyperplane$SplitSubHyperplane::wrap_Object(result, ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D));
            }

            return callSuper(PY_TYPE(SubLine), (PyObject *) self, "split", args, 2);
          }
          static PyObject *t_SubLine_get__parameters_(t_SubLine *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_SubLine_get__segments(t_SubLine *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getSegments());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/integration/FieldStateMapper.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *FieldStateMapper::class$ = NULL;
        jmethodID *FieldStateMapper::mids$ = NULL;
        bool FieldStateMapper::live$ = false;

        jclass FieldStateMapper::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/FieldStateMapper");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getAttitudeProvider_2f73d1f4460b8d6c] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");
            mids$[mid_getFrame_cb151471db4570f0] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getMu_08d37e3f77b7239d] = env->getMethodID(cls, "getMu", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getOrbitType_495f818d3570b7f5] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
            mids$[mid_getPositionAngleType_a6db4e6edefda4be] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
            mids$[mid_getReferenceDate_1fea28374011eef5] = env->getMethodID(cls, "getReferenceDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
            mids$[mid_mapArrayToState_0dd5c63fffcaab3c] = env->getMethodID(cls, "mapArrayToState", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/propagation/PropagationType;)Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_mapArrayToState_6dd6cd4ddfbb19d2] = env->getMethodID(cls, "mapArrayToState", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/propagation/PropagationType;)Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_mapDateToDouble_cf010978f3c5a913] = env->getMethodID(cls, "mapDateToDouble", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_mapDoubleToDate_7e3a2932d2ce0a9d] = env->getMethodID(cls, "mapDoubleToDate", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/time/FieldAbsoluteDate;");
            mids$[mid_mapDoubleToDate_41b4f1e9c37882e9] = env->getMethodID(cls, "mapDoubleToDate", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/time/FieldAbsoluteDate;");
            mids$[mid_mapStateToArray_0924dbbee225355c] = env->getMethodID(cls, "mapStateToArray", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_setPositionAngleType_ff7cb6c242604316] = env->getMethodID(cls, "setPositionAngleType", "()V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::attitudes::AttitudeProvider FieldStateMapper::getAttitudeProvider() const
        {
          return ::org::orekit::attitudes::AttitudeProvider(env->callObjectMethod(this$, mids$[mid_getAttitudeProvider_2f73d1f4460b8d6c]));
        }

        ::org::orekit::frames::Frame FieldStateMapper::getFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_cb151471db4570f0]));
        }

        ::org::hipparchus::CalculusFieldElement FieldStateMapper::getMu() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMu_08d37e3f77b7239d]));
        }

        ::org::orekit::orbits::OrbitType FieldStateMapper::getOrbitType() const
        {
          return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getOrbitType_495f818d3570b7f5]));
        }

        ::org::orekit::orbits::PositionAngleType FieldStateMapper::getPositionAngleType() const
        {
          return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getPositionAngleType_a6db4e6edefda4be]));
        }

        ::org::orekit::time::FieldAbsoluteDate FieldStateMapper::getReferenceDate() const
        {
          return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getReferenceDate_1fea28374011eef5]));
        }

        ::org::orekit::propagation::FieldSpacecraftState FieldStateMapper::mapArrayToState(const ::org::orekit::time::FieldAbsoluteDate & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const ::org::orekit::propagation::PropagationType & a3) const
        {
          return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_mapArrayToState_0dd5c63fffcaab3c], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::propagation::FieldSpacecraftState FieldStateMapper::mapArrayToState(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const ::org::orekit::propagation::PropagationType & a3) const
        {
          return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_mapArrayToState_6dd6cd4ddfbb19d2], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::hipparchus::CalculusFieldElement FieldStateMapper::mapDateToDouble(const ::org::orekit::time::FieldAbsoluteDate & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_mapDateToDouble_cf010978f3c5a913], a0.this$));
        }

        ::org::orekit::time::FieldAbsoluteDate FieldStateMapper::mapDoubleToDate(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_mapDoubleToDate_7e3a2932d2ce0a9d], a0.this$));
        }

        ::org::orekit::time::FieldAbsoluteDate FieldStateMapper::mapDoubleToDate(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_mapDoubleToDate_41b4f1e9c37882e9], a0.this$, a1.this$));
        }

        void FieldStateMapper::mapStateToArray(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
        {
          env->callVoidMethod(this$, mids$[mid_mapStateToArray_0924dbbee225355c], a0.this$, a1.this$, a2.this$);
        }

        void FieldStateMapper::setPositionAngleType() const
        {
          env->callVoidMethod(this$, mids$[mid_setPositionAngleType_ff7cb6c242604316]);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {
        static PyObject *t_FieldStateMapper_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldStateMapper_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldStateMapper_of_(t_FieldStateMapper *self, PyObject *args);
        static PyObject *t_FieldStateMapper_getAttitudeProvider(t_FieldStateMapper *self);
        static PyObject *t_FieldStateMapper_getFrame(t_FieldStateMapper *self);
        static PyObject *t_FieldStateMapper_getMu(t_FieldStateMapper *self);
        static PyObject *t_FieldStateMapper_getOrbitType(t_FieldStateMapper *self);
        static PyObject *t_FieldStateMapper_getPositionAngleType(t_FieldStateMapper *self);
        static PyObject *t_FieldStateMapper_getReferenceDate(t_FieldStateMapper *self);
        static PyObject *t_FieldStateMapper_mapArrayToState(t_FieldStateMapper *self, PyObject *args);
        static PyObject *t_FieldStateMapper_mapDateToDouble(t_FieldStateMapper *self, PyObject *arg);
        static PyObject *t_FieldStateMapper_mapDoubleToDate(t_FieldStateMapper *self, PyObject *args);
        static PyObject *t_FieldStateMapper_mapStateToArray(t_FieldStateMapper *self, PyObject *args);
        static PyObject *t_FieldStateMapper_setPositionAngleType(t_FieldStateMapper *self);
        static PyObject *t_FieldStateMapper_get__attitudeProvider(t_FieldStateMapper *self, void *data);
        static PyObject *t_FieldStateMapper_get__frame(t_FieldStateMapper *self, void *data);
        static PyObject *t_FieldStateMapper_get__mu(t_FieldStateMapper *self, void *data);
        static PyObject *t_FieldStateMapper_get__orbitType(t_FieldStateMapper *self, void *data);
        static PyObject *t_FieldStateMapper_get__positionAngleType(t_FieldStateMapper *self, void *data);
        static PyObject *t_FieldStateMapper_get__referenceDate(t_FieldStateMapper *self, void *data);
        static PyObject *t_FieldStateMapper_get__parameters_(t_FieldStateMapper *self, void *data);
        static PyGetSetDef t_FieldStateMapper__fields_[] = {
          DECLARE_GET_FIELD(t_FieldStateMapper, attitudeProvider),
          DECLARE_GET_FIELD(t_FieldStateMapper, frame),
          DECLARE_GET_FIELD(t_FieldStateMapper, mu),
          DECLARE_GET_FIELD(t_FieldStateMapper, orbitType),
          DECLARE_GET_FIELD(t_FieldStateMapper, positionAngleType),
          DECLARE_GET_FIELD(t_FieldStateMapper, referenceDate),
          DECLARE_GET_FIELD(t_FieldStateMapper, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldStateMapper__methods_[] = {
          DECLARE_METHOD(t_FieldStateMapper, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldStateMapper, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldStateMapper, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldStateMapper, getAttitudeProvider, METH_NOARGS),
          DECLARE_METHOD(t_FieldStateMapper, getFrame, METH_NOARGS),
          DECLARE_METHOD(t_FieldStateMapper, getMu, METH_NOARGS),
          DECLARE_METHOD(t_FieldStateMapper, getOrbitType, METH_NOARGS),
          DECLARE_METHOD(t_FieldStateMapper, getPositionAngleType, METH_NOARGS),
          DECLARE_METHOD(t_FieldStateMapper, getReferenceDate, METH_NOARGS),
          DECLARE_METHOD(t_FieldStateMapper, mapArrayToState, METH_VARARGS),
          DECLARE_METHOD(t_FieldStateMapper, mapDateToDouble, METH_O),
          DECLARE_METHOD(t_FieldStateMapper, mapDoubleToDate, METH_VARARGS),
          DECLARE_METHOD(t_FieldStateMapper, mapStateToArray, METH_VARARGS),
          DECLARE_METHOD(t_FieldStateMapper, setPositionAngleType, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldStateMapper)[] = {
          { Py_tp_methods, t_FieldStateMapper__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldStateMapper__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldStateMapper)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldStateMapper, t_FieldStateMapper, FieldStateMapper);
        PyObject *t_FieldStateMapper::wrap_Object(const FieldStateMapper& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldStateMapper::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldStateMapper *self = (t_FieldStateMapper *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldStateMapper::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldStateMapper::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldStateMapper *self = (t_FieldStateMapper *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldStateMapper::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldStateMapper), &PY_TYPE_DEF(FieldStateMapper), module, "FieldStateMapper", 0);
        }

        void t_FieldStateMapper::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStateMapper), "class_", make_descriptor(FieldStateMapper::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStateMapper), "wrapfn_", make_descriptor(t_FieldStateMapper::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStateMapper), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldStateMapper_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldStateMapper::initializeClass, 1)))
            return NULL;
          return t_FieldStateMapper::wrap_Object(FieldStateMapper(((t_FieldStateMapper *) arg)->object.this$));
        }
        static PyObject *t_FieldStateMapper_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldStateMapper::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldStateMapper_of_(t_FieldStateMapper *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldStateMapper_getAttitudeProvider(t_FieldStateMapper *self)
        {
          ::org::orekit::attitudes::AttitudeProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getAttitudeProvider());
          return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(result);
        }

        static PyObject *t_FieldStateMapper_getFrame(t_FieldStateMapper *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_FieldStateMapper_getMu(t_FieldStateMapper *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getMu());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldStateMapper_getOrbitType(t_FieldStateMapper *self)
        {
          ::org::orekit::orbits::OrbitType result((jobject) NULL);
          OBJ_CALL(result = self->object.getOrbitType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
        }

        static PyObject *t_FieldStateMapper_getPositionAngleType(t_FieldStateMapper *self)
        {
          ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
          OBJ_CALL(result = self->object.getPositionAngleType());
          return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
        }

        static PyObject *t_FieldStateMapper_getReferenceDate(t_FieldStateMapper *self)
        {
          ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getReferenceDate());
          return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldStateMapper_mapArrayToState(t_FieldStateMapper *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::propagation::PropagationType a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);

              if (!parseArgs(args, "K[K[KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::orekit::propagation::t_PropagationType::parameters_))
              {
                OBJ_CALL(result = self->object.mapArrayToState(a0, a1, a2, a3));
                return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::propagation::PropagationType a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);

              if (!parseArgs(args, "K[K[KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::orekit::propagation::t_PropagationType::parameters_))
              {
                OBJ_CALL(result = self->object.mapArrayToState(a0, a1, a2, a3));
                return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "mapArrayToState", args);
          return NULL;
        }

        static PyObject *t_FieldStateMapper_mapDateToDouble(t_FieldStateMapper *self, PyObject *arg)
        {
          ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
          {
            OBJ_CALL(result = self->object.mapDateToDouble(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "mapDateToDouble", arg);
          return NULL;
        }

        static PyObject *t_FieldStateMapper_mapDoubleToDate(t_FieldStateMapper *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.mapDoubleToDate(a0));
                return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 2:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
              {
                OBJ_CALL(result = self->object.mapDoubleToDate(a0, a1));
                return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "mapDoubleToDate", args);
          return NULL;
        }

        static PyObject *t_FieldStateMapper_mapStateToArray(t_FieldStateMapper *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
          PyTypeObject **p1;
          JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
          PyTypeObject **p2;

          if (!parseArgs(args, "K[K[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(self->object.mapStateToArray(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "mapStateToArray", args);
          return NULL;
        }

        static PyObject *t_FieldStateMapper_setPositionAngleType(t_FieldStateMapper *self)
        {
          OBJ_CALL(self->object.setPositionAngleType());
          Py_RETURN_NONE;
        }
        static PyObject *t_FieldStateMapper_get__parameters_(t_FieldStateMapper *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldStateMapper_get__attitudeProvider(t_FieldStateMapper *self, void *data)
        {
          ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getAttitudeProvider());
          return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(value);
        }

        static PyObject *t_FieldStateMapper_get__frame(t_FieldStateMapper *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_FieldStateMapper_get__mu(t_FieldStateMapper *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getMu());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_FieldStateMapper_get__orbitType(t_FieldStateMapper *self, void *data)
        {
          ::org::orekit::orbits::OrbitType value((jobject) NULL);
          OBJ_CALL(value = self->object.getOrbitType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
        }

        static PyObject *t_FieldStateMapper_get__positionAngleType(t_FieldStateMapper *self, void *data)
        {
          ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
          OBJ_CALL(value = self->object.getPositionAngleType());
          return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
        }

        static PyObject *t_FieldStateMapper_get__referenceDate(t_FieldStateMapper *self, void *data)
        {
          ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getReferenceDate());
          return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/tle/TLE.h"
#include "org/orekit/utils/ParameterDriversProvider.h"
#include "java/util/List.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/io/Serializable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/analytical/tle/generation/TleGenerationAlgorithm.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/analytical/tle/TLE.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {

          ::java::lang::Class *TLE::class$ = NULL;
          jmethodID *TLE::mids$ = NULL;
          bool TLE::live$ = false;
          ::java::lang::String *TLE::B_STAR = NULL;
          jint TLE::DEFAULT = (jint) 0;
          jint TLE::SDP4 = (jint) 0;
          jint TLE::SDP8 = (jint) 0;
          jint TLE::SGP = (jint) 0;
          jint TLE::SGP4 = (jint) 0;
          jint TLE::SGP8 = (jint) 0;

          jclass TLE::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/TLE");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_771aee6c143cc92a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
              mids$[mid_init$_1eedf1e919bbadca] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/time/TimeScale;)V");
              mids$[mid_init$_b09cbb0506b96195] = env->getMethodID(cls, "<init>", "(ICIILjava/lang/String;IILorg/orekit/time/AbsoluteDate;DDDDDDDDID)V");
              mids$[mid_init$_9c186c78af2acae0] = env->getMethodID(cls, "<init>", "(ICIILjava/lang/String;IILorg/orekit/time/AbsoluteDate;DDDDDDDDIDLorg/orekit/time/TimeScale;)V");
              mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
              mids$[mid_getBStar_9981f74b2d109da6] = env->getMethodID(cls, "getBStar", "()D");
              mids$[mid_getBStar_209f08246d708042] = env->getMethodID(cls, "getBStar", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getClassification_153df32fe8b51cb6] = env->getMethodID(cls, "getClassification", "()C");
              mids$[mid_getDate_80e11148db499dda] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getE_9981f74b2d109da6] = env->getMethodID(cls, "getE", "()D");
              mids$[mid_getElementNumber_d6ab429752e7c267] = env->getMethodID(cls, "getElementNumber", "()I");
              mids$[mid_getEphemerisType_d6ab429752e7c267] = env->getMethodID(cls, "getEphemerisType", "()I");
              mids$[mid_getI_9981f74b2d109da6] = env->getMethodID(cls, "getI", "()D");
              mids$[mid_getLaunchNumber_d6ab429752e7c267] = env->getMethodID(cls, "getLaunchNumber", "()I");
              mids$[mid_getLaunchPiece_d2c8eb4129821f0e] = env->getMethodID(cls, "getLaunchPiece", "()Ljava/lang/String;");
              mids$[mid_getLaunchYear_d6ab429752e7c267] = env->getMethodID(cls, "getLaunchYear", "()I");
              mids$[mid_getLine1_d2c8eb4129821f0e] = env->getMethodID(cls, "getLine1", "()Ljava/lang/String;");
              mids$[mid_getLine2_d2c8eb4129821f0e] = env->getMethodID(cls, "getLine2", "()Ljava/lang/String;");
              mids$[mid_getMeanAnomaly_9981f74b2d109da6] = env->getMethodID(cls, "getMeanAnomaly", "()D");
              mids$[mid_getMeanMotion_9981f74b2d109da6] = env->getMethodID(cls, "getMeanMotion", "()D");
              mids$[mid_getMeanMotionFirstDerivative_9981f74b2d109da6] = env->getMethodID(cls, "getMeanMotionFirstDerivative", "()D");
              mids$[mid_getMeanMotionSecondDerivative_9981f74b2d109da6] = env->getMethodID(cls, "getMeanMotionSecondDerivative", "()D");
              mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_getPerigeeArgument_9981f74b2d109da6] = env->getMethodID(cls, "getPerigeeArgument", "()D");
              mids$[mid_getRaan_9981f74b2d109da6] = env->getMethodID(cls, "getRaan", "()D");
              mids$[mid_getRevolutionNumberAtEpoch_d6ab429752e7c267] = env->getMethodID(cls, "getRevolutionNumberAtEpoch", "()I");
              mids$[mid_getSatelliteNumber_d6ab429752e7c267] = env->getMethodID(cls, "getSatelliteNumber", "()I");
              mids$[mid_getUtc_5e2cac12ab8da943] = env->getMethodID(cls, "getUtc", "()Lorg/orekit/time/TimeScale;");
              mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
              mids$[mid_isFormatOK_15b8a96a7eadea1e] = env->getStaticMethodID(cls, "isFormatOK", "(Ljava/lang/String;Ljava/lang/String;)Z");
              mids$[mid_stateToTLE_9dc971ea76a5b73a] = env->getStaticMethodID(cls, "stateToTLE", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/analytical/tle/TLE;Lorg/orekit/propagation/analytical/tle/generation/TleGenerationAlgorithm;)Lorg/orekit/propagation/analytical/tle/TLE;");
              mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              B_STAR = new ::java::lang::String(env->getStaticObjectField(cls, "B_STAR", "Ljava/lang/String;"));
              DEFAULT = env->getStaticIntField(cls, "DEFAULT");
              SDP4 = env->getStaticIntField(cls, "SDP4");
              SDP8 = env->getStaticIntField(cls, "SDP8");
              SGP = env->getStaticIntField(cls, "SGP");
              SGP4 = env->getStaticIntField(cls, "SGP4");
              SGP8 = env->getStaticIntField(cls, "SGP8");
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          TLE::TLE(const ::java::lang::String & a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_771aee6c143cc92a, a0.this$, a1.this$)) {}

          TLE::TLE(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::org::orekit::time::TimeScale & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1eedf1e919bbadca, a0.this$, a1.this$, a2.this$)) {}

          TLE::TLE(jint a0, jchar a1, jint a2, jint a3, const ::java::lang::String & a4, jint a5, jint a6, const ::org::orekit::time::AbsoluteDate & a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11, jdouble a12, jdouble a13, jdouble a14, jdouble a15, jint a16, jdouble a17) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b09cbb0506b96195, a0, a1, a2, a3, a4.this$, a5, a6, a7.this$, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17)) {}

          TLE::TLE(jint a0, jchar a1, jint a2, jint a3, const ::java::lang::String & a4, jint a5, jint a6, const ::org::orekit::time::AbsoluteDate & a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11, jdouble a12, jdouble a13, jdouble a14, jdouble a15, jint a16, jdouble a17, const ::org::orekit::time::TimeScale & a18) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9c186c78af2acae0, a0, a1, a2, a3, a4.this$, a5, a6, a7.this$, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18.this$)) {}

          jboolean TLE::equals(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
          }

          jdouble TLE::getBStar() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getBStar_9981f74b2d109da6]);
          }

          jdouble TLE::getBStar(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getBStar_209f08246d708042], a0.this$);
          }

          jchar TLE::getClassification() const
          {
            return env->callCharMethod(this$, mids$[mid_getClassification_153df32fe8b51cb6]);
          }

          ::org::orekit::time::AbsoluteDate TLE::getDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_80e11148db499dda]));
          }

          jdouble TLE::getE() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getE_9981f74b2d109da6]);
          }

          jint TLE::getElementNumber() const
          {
            return env->callIntMethod(this$, mids$[mid_getElementNumber_d6ab429752e7c267]);
          }

          jint TLE::getEphemerisType() const
          {
            return env->callIntMethod(this$, mids$[mid_getEphemerisType_d6ab429752e7c267]);
          }

          jdouble TLE::getI() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getI_9981f74b2d109da6]);
          }

          jint TLE::getLaunchNumber() const
          {
            return env->callIntMethod(this$, mids$[mid_getLaunchNumber_d6ab429752e7c267]);
          }

          ::java::lang::String TLE::getLaunchPiece() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLaunchPiece_d2c8eb4129821f0e]));
          }

          jint TLE::getLaunchYear() const
          {
            return env->callIntMethod(this$, mids$[mid_getLaunchYear_d6ab429752e7c267]);
          }

          ::java::lang::String TLE::getLine1() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLine1_d2c8eb4129821f0e]));
          }

          ::java::lang::String TLE::getLine2() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLine2_d2c8eb4129821f0e]));
          }

          jdouble TLE::getMeanAnomaly() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMeanAnomaly_9981f74b2d109da6]);
          }

          jdouble TLE::getMeanMotion() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMeanMotion_9981f74b2d109da6]);
          }

          jdouble TLE::getMeanMotionFirstDerivative() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMeanMotionFirstDerivative_9981f74b2d109da6]);
          }

          jdouble TLE::getMeanMotionSecondDerivative() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMeanMotionSecondDerivative_9981f74b2d109da6]);
          }

          ::java::util::List TLE::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
          }

          jdouble TLE::getPerigeeArgument() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getPerigeeArgument_9981f74b2d109da6]);
          }

          jdouble TLE::getRaan() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getRaan_9981f74b2d109da6]);
          }

          jint TLE::getRevolutionNumberAtEpoch() const
          {
            return env->callIntMethod(this$, mids$[mid_getRevolutionNumberAtEpoch_d6ab429752e7c267]);
          }

          jint TLE::getSatelliteNumber() const
          {
            return env->callIntMethod(this$, mids$[mid_getSatelliteNumber_d6ab429752e7c267]);
          }

          ::org::orekit::time::TimeScale TLE::getUtc() const
          {
            return ::org::orekit::time::TimeScale(env->callObjectMethod(this$, mids$[mid_getUtc_5e2cac12ab8da943]));
          }

          jint TLE::hashCode() const
          {
            return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
          }

          jboolean TLE::isFormatOK(const ::java::lang::String & a0, const ::java::lang::String & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticBooleanMethod(cls, mids$[mid_isFormatOK_15b8a96a7eadea1e], a0.this$, a1.this$);
          }

          TLE TLE::stateToTLE(const ::org::orekit::propagation::SpacecraftState & a0, const TLE & a1, const ::org::orekit::propagation::analytical::tle::generation::TleGenerationAlgorithm & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return TLE(env->callStaticObjectMethod(cls, mids$[mid_stateToTLE_9dc971ea76a5b73a], a0.this$, a1.this$, a2.this$));
          }

          ::java::lang::String TLE::toString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {
          static PyObject *t_TLE_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TLE_instance_(PyTypeObject *type, PyObject *arg);
          static int t_TLE_init_(t_TLE *self, PyObject *args, PyObject *kwds);
          static PyObject *t_TLE_equals(t_TLE *self, PyObject *args);
          static PyObject *t_TLE_getBStar(t_TLE *self, PyObject *args);
          static PyObject *t_TLE_getClassification(t_TLE *self);
          static PyObject *t_TLE_getDate(t_TLE *self);
          static PyObject *t_TLE_getE(t_TLE *self);
          static PyObject *t_TLE_getElementNumber(t_TLE *self);
          static PyObject *t_TLE_getEphemerisType(t_TLE *self);
          static PyObject *t_TLE_getI(t_TLE *self);
          static PyObject *t_TLE_getLaunchNumber(t_TLE *self);
          static PyObject *t_TLE_getLaunchPiece(t_TLE *self);
          static PyObject *t_TLE_getLaunchYear(t_TLE *self);
          static PyObject *t_TLE_getLine1(t_TLE *self);
          static PyObject *t_TLE_getLine2(t_TLE *self);
          static PyObject *t_TLE_getMeanAnomaly(t_TLE *self);
          static PyObject *t_TLE_getMeanMotion(t_TLE *self);
          static PyObject *t_TLE_getMeanMotionFirstDerivative(t_TLE *self);
          static PyObject *t_TLE_getMeanMotionSecondDerivative(t_TLE *self);
          static PyObject *t_TLE_getParametersDrivers(t_TLE *self);
          static PyObject *t_TLE_getPerigeeArgument(t_TLE *self);
          static PyObject *t_TLE_getRaan(t_TLE *self);
          static PyObject *t_TLE_getRevolutionNumberAtEpoch(t_TLE *self);
          static PyObject *t_TLE_getSatelliteNumber(t_TLE *self);
          static PyObject *t_TLE_getUtc(t_TLE *self);
          static PyObject *t_TLE_hashCode(t_TLE *self, PyObject *args);
          static PyObject *t_TLE_isFormatOK(PyTypeObject *type, PyObject *args);
          static PyObject *t_TLE_stateToTLE(PyTypeObject *type, PyObject *args);
          static PyObject *t_TLE_toString(t_TLE *self, PyObject *args);
          static PyObject *t_TLE_get__bStar(t_TLE *self, void *data);
          static PyObject *t_TLE_get__classification(t_TLE *self, void *data);
          static PyObject *t_TLE_get__date(t_TLE *self, void *data);
          static PyObject *t_TLE_get__e(t_TLE *self, void *data);
          static PyObject *t_TLE_get__elementNumber(t_TLE *self, void *data);
          static PyObject *t_TLE_get__ephemerisType(t_TLE *self, void *data);
          static PyObject *t_TLE_get__i(t_TLE *self, void *data);
          static PyObject *t_TLE_get__launchNumber(t_TLE *self, void *data);
          static PyObject *t_TLE_get__launchPiece(t_TLE *self, void *data);
          static PyObject *t_TLE_get__launchYear(t_TLE *self, void *data);
          static PyObject *t_TLE_get__line1(t_TLE *self, void *data);
          static PyObject *t_TLE_get__line2(t_TLE *self, void *data);
          static PyObject *t_TLE_get__meanAnomaly(t_TLE *self, void *data);
          static PyObject *t_TLE_get__meanMotion(t_TLE *self, void *data);
          static PyObject *t_TLE_get__meanMotionFirstDerivative(t_TLE *self, void *data);
          static PyObject *t_TLE_get__meanMotionSecondDerivative(t_TLE *self, void *data);
          static PyObject *t_TLE_get__parametersDrivers(t_TLE *self, void *data);
          static PyObject *t_TLE_get__perigeeArgument(t_TLE *self, void *data);
          static PyObject *t_TLE_get__raan(t_TLE *self, void *data);
          static PyObject *t_TLE_get__revolutionNumberAtEpoch(t_TLE *self, void *data);
          static PyObject *t_TLE_get__satelliteNumber(t_TLE *self, void *data);
          static PyObject *t_TLE_get__utc(t_TLE *self, void *data);
          static PyGetSetDef t_TLE__fields_[] = {
            DECLARE_GET_FIELD(t_TLE, bStar),
            DECLARE_GET_FIELD(t_TLE, classification),
            DECLARE_GET_FIELD(t_TLE, date),
            DECLARE_GET_FIELD(t_TLE, e),
            DECLARE_GET_FIELD(t_TLE, elementNumber),
            DECLARE_GET_FIELD(t_TLE, ephemerisType),
            DECLARE_GET_FIELD(t_TLE, i),
            DECLARE_GET_FIELD(t_TLE, launchNumber),
            DECLARE_GET_FIELD(t_TLE, launchPiece),
            DECLARE_GET_FIELD(t_TLE, launchYear),
            DECLARE_GET_FIELD(t_TLE, line1),
            DECLARE_GET_FIELD(t_TLE, line2),
            DECLARE_GET_FIELD(t_TLE, meanAnomaly),
            DECLARE_GET_FIELD(t_TLE, meanMotion),
            DECLARE_GET_FIELD(t_TLE, meanMotionFirstDerivative),
            DECLARE_GET_FIELD(t_TLE, meanMotionSecondDerivative),
            DECLARE_GET_FIELD(t_TLE, parametersDrivers),
            DECLARE_GET_FIELD(t_TLE, perigeeArgument),
            DECLARE_GET_FIELD(t_TLE, raan),
            DECLARE_GET_FIELD(t_TLE, revolutionNumberAtEpoch),
            DECLARE_GET_FIELD(t_TLE, satelliteNumber),
            DECLARE_GET_FIELD(t_TLE, utc),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_TLE__methods_[] = {
            DECLARE_METHOD(t_TLE, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TLE, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TLE, equals, METH_VARARGS),
            DECLARE_METHOD(t_TLE, getBStar, METH_VARARGS),
            DECLARE_METHOD(t_TLE, getClassification, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getDate, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getE, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getElementNumber, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getEphemerisType, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getI, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getLaunchNumber, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getLaunchPiece, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getLaunchYear, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getLine1, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getLine2, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getMeanAnomaly, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getMeanMotion, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getMeanMotionFirstDerivative, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getMeanMotionSecondDerivative, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getPerigeeArgument, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getRaan, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getRevolutionNumberAtEpoch, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getSatelliteNumber, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getUtc, METH_NOARGS),
            DECLARE_METHOD(t_TLE, hashCode, METH_VARARGS),
            DECLARE_METHOD(t_TLE, isFormatOK, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_TLE, stateToTLE, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_TLE, toString, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TLE)[] = {
            { Py_tp_methods, t_TLE__methods_ },
            { Py_tp_init, (void *) t_TLE_init_ },
            { Py_tp_getset, t_TLE__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TLE)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(TLE, t_TLE, TLE);

          void t_TLE::install(PyObject *module)
          {
            installType(&PY_TYPE(TLE), &PY_TYPE_DEF(TLE), module, "TLE", 0);
          }

          void t_TLE::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLE), "class_", make_descriptor(TLE::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLE), "wrapfn_", make_descriptor(t_TLE::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLE), "boxfn_", make_descriptor(boxObject));
            env->getClass(TLE::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLE), "B_STAR", make_descriptor(j2p(*TLE::B_STAR)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLE), "DEFAULT", make_descriptor(TLE::DEFAULT));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLE), "SDP4", make_descriptor(TLE::SDP4));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLE), "SDP8", make_descriptor(TLE::SDP8));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLE), "SGP", make_descriptor(TLE::SGP));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLE), "SGP4", make_descriptor(TLE::SGP4));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLE), "SGP8", make_descriptor(TLE::SGP8));
          }

          static PyObject *t_TLE_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TLE::initializeClass, 1)))
              return NULL;
            return t_TLE::wrap_Object(TLE(((t_TLE *) arg)->object.this$));
          }
          static PyObject *t_TLE_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TLE::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_TLE_init_(t_TLE *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::lang::String a1((jobject) NULL);
                TLE object((jobject) NULL);

                if (!parseArgs(args, "ss", &a0, &a1))
                {
                  INT_CALL(object = TLE(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::lang::String a1((jobject) NULL);
                ::org::orekit::time::TimeScale a2((jobject) NULL);
                TLE object((jobject) NULL);

                if (!parseArgs(args, "ssk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = TLE(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 18:
              {
                jint a0;
                jchar a1;
                jint a2;
                jint a3;
                ::java::lang::String a4((jobject) NULL);
                jint a5;
                jint a6;
                ::org::orekit::time::AbsoluteDate a7((jobject) NULL);
                jdouble a8;
                jdouble a9;
                jdouble a10;
                jdouble a11;
                jdouble a12;
                jdouble a13;
                jdouble a14;
                jdouble a15;
                jint a16;
                jdouble a17;
                TLE object((jobject) NULL);

                if (!parseArgs(args, "ICIIsIIkDDDDDDDDID", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13, &a14, &a15, &a16, &a17))
                {
                  INT_CALL(object = TLE(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 19:
              {
                jint a0;
                jchar a1;
                jint a2;
                jint a3;
                ::java::lang::String a4((jobject) NULL);
                jint a5;
                jint a6;
                ::org::orekit::time::AbsoluteDate a7((jobject) NULL);
                jdouble a8;
                jdouble a9;
                jdouble a10;
                jdouble a11;
                jdouble a12;
                jdouble a13;
                jdouble a14;
                jdouble a15;
                jint a16;
                jdouble a17;
                ::org::orekit::time::TimeScale a18((jobject) NULL);
                TLE object((jobject) NULL);

                if (!parseArgs(args, "ICIIsIIkDDDDDDDDIDk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13, &a14, &a15, &a16, &a17, &a18))
                {
                  INT_CALL(object = TLE(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18));
                  self->object = object;
                  break;
                }
              }
             default:
             err:
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_TLE_equals(t_TLE *self, PyObject *args)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "o", &a0))
            {
              OBJ_CALL(result = self->object.equals(a0));
              Py_RETURN_BOOL(result);
            }

            return callSuper(PY_TYPE(TLE), (PyObject *) self, "equals", args, 2);
          }

          static PyObject *t_TLE_getBStar(t_TLE *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                jdouble result;
                OBJ_CALL(result = self->object.getBStar());
                return PyFloat_FromDouble((double) result);
              }
              break;
             case 1:
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getBStar(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getBStar", args);
            return NULL;
          }

          static PyObject *t_TLE_getClassification(t_TLE *self)
          {
            jchar result;
            OBJ_CALL(result = self->object.getClassification());
            return c2p(result);
          }

          static PyObject *t_TLE_getDate(t_TLE *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_TLE_getE(t_TLE *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getE());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_TLE_getElementNumber(t_TLE *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getElementNumber());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_TLE_getEphemerisType(t_TLE *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getEphemerisType());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_TLE_getI(t_TLE *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getI());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_TLE_getLaunchNumber(t_TLE *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getLaunchNumber());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_TLE_getLaunchPiece(t_TLE *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getLaunchPiece());
            return j2p(result);
          }

          static PyObject *t_TLE_getLaunchYear(t_TLE *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getLaunchYear());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_TLE_getLine1(t_TLE *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getLine1());
            return j2p(result);
          }

          static PyObject *t_TLE_getLine2(t_TLE *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getLine2());
            return j2p(result);
          }

          static PyObject *t_TLE_getMeanAnomaly(t_TLE *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getMeanAnomaly());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_TLE_getMeanMotion(t_TLE *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getMeanMotion());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_TLE_getMeanMotionFirstDerivative(t_TLE *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getMeanMotionFirstDerivative());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_TLE_getMeanMotionSecondDerivative(t_TLE *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getMeanMotionSecondDerivative());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_TLE_getParametersDrivers(t_TLE *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_TLE_getPerigeeArgument(t_TLE *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getPerigeeArgument());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_TLE_getRaan(t_TLE *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getRaan());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_TLE_getRevolutionNumberAtEpoch(t_TLE *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getRevolutionNumberAtEpoch());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_TLE_getSatelliteNumber(t_TLE *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getSatelliteNumber());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_TLE_getUtc(t_TLE *self)
          {
            ::org::orekit::time::TimeScale result((jobject) NULL);
            OBJ_CALL(result = self->object.getUtc());
            return ::org::orekit::time::t_TimeScale::wrap_Object(result);
          }

          static PyObject *t_TLE_hashCode(t_TLE *self, PyObject *args)
          {
            jint result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.hashCode());
              return PyLong_FromLong((long) result);
            }

            return callSuper(PY_TYPE(TLE), (PyObject *) self, "hashCode", args, 2);
          }

          static PyObject *t_TLE_isFormatOK(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "ss", &a0, &a1))
            {
              OBJ_CALL(result = ::org::orekit::propagation::analytical::tle::TLE::isFormatOK(a0, a1));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError(type, "isFormatOK", args);
            return NULL;
          }

          static PyObject *t_TLE_stateToTLE(PyTypeObject *type, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            TLE a1((jobject) NULL);
            ::org::orekit::propagation::analytical::tle::generation::TleGenerationAlgorithm a2((jobject) NULL);
            TLE result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::propagation::SpacecraftState::initializeClass, TLE::initializeClass, ::org::orekit::propagation::analytical::tle::generation::TleGenerationAlgorithm::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::orekit::propagation::analytical::tle::TLE::stateToTLE(a0, a1, a2));
              return t_TLE::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "stateToTLE", args);
            return NULL;
          }

          static PyObject *t_TLE_toString(t_TLE *self, PyObject *args)
          {
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.toString());
              return j2p(result);
            }

            return callSuper(PY_TYPE(TLE), (PyObject *) self, "toString", args, 2);
          }

          static PyObject *t_TLE_get__bStar(t_TLE *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getBStar());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_TLE_get__classification(t_TLE *self, void *data)
          {
            jchar value;
            OBJ_CALL(value = self->object.getClassification());
            return c2p(value);
          }

          static PyObject *t_TLE_get__date(t_TLE *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }

          static PyObject *t_TLE_get__e(t_TLE *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getE());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_TLE_get__elementNumber(t_TLE *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getElementNumber());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_TLE_get__ephemerisType(t_TLE *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getEphemerisType());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_TLE_get__i(t_TLE *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getI());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_TLE_get__launchNumber(t_TLE *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getLaunchNumber());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_TLE_get__launchPiece(t_TLE *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getLaunchPiece());
            return j2p(value);
          }

          static PyObject *t_TLE_get__launchYear(t_TLE *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getLaunchYear());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_TLE_get__line1(t_TLE *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getLine1());
            return j2p(value);
          }

          static PyObject *t_TLE_get__line2(t_TLE *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getLine2());
            return j2p(value);
          }

          static PyObject *t_TLE_get__meanAnomaly(t_TLE *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMeanAnomaly());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_TLE_get__meanMotion(t_TLE *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMeanMotion());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_TLE_get__meanMotionFirstDerivative(t_TLE *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMeanMotionFirstDerivative());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_TLE_get__meanMotionSecondDerivative(t_TLE *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMeanMotionSecondDerivative());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_TLE_get__parametersDrivers(t_TLE *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_TLE_get__perigeeArgument(t_TLE *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getPerigeeArgument());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_TLE_get__raan(t_TLE *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getRaan());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_TLE_get__revolutionNumberAtEpoch(t_TLE *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getRevolutionNumberAtEpoch());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_TLE_get__satelliteNumber(t_TLE *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getSatelliteNumber());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_TLE_get__utc(t_TLE *self, void *data)
          {
            ::org::orekit::time::TimeScale value((jobject) NULL);
            OBJ_CALL(value = self->object.getUtc());
            return ::org::orekit::time::t_TimeScale::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/complex/ComplexField.h"
#include "org/hipparchus/complex/ComplexField.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/complex/Complex.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace complex {

      ::java::lang::Class *ComplexField::class$ = NULL;
      jmethodID *ComplexField::mids$ = NULL;
      bool ComplexField::live$ = false;

      jclass ComplexField::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/complex/ComplexField");

          mids$ = new jmethodID[max_mid];
          mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getInstance_4c88b6ea55d5fcec] = env->getStaticMethodID(cls, "getInstance", "()Lorg/hipparchus/complex/ComplexField;");
          mids$[mid_getOne_847706ebd9444ecb] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_getRuntimeClass_d5247e4b166c4ce8] = env->getMethodID(cls, "getRuntimeClass", "()Ljava/lang/Class;");
          mids$[mid_getZero_847706ebd9444ecb] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/complex/Complex;");
          mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jboolean ComplexField::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
      }

      ComplexField ComplexField::getInstance()
      {
        jclass cls = env->getClass(initializeClass);
        return ComplexField(env->callStaticObjectMethod(cls, mids$[mid_getInstance_4c88b6ea55d5fcec]));
      }

      ::org::hipparchus::complex::Complex ComplexField::getOne() const
      {
        return ::org::hipparchus::complex::Complex(env->callObjectMethod(this$, mids$[mid_getOne_847706ebd9444ecb]));
      }

      ::java::lang::Class ComplexField::getRuntimeClass() const
      {
        return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getRuntimeClass_d5247e4b166c4ce8]));
      }

      ::org::hipparchus::complex::Complex ComplexField::getZero() const
      {
        return ::org::hipparchus::complex::Complex(env->callObjectMethod(this$, mids$[mid_getZero_847706ebd9444ecb]));
      }

      jint ComplexField::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace complex {
      static PyObject *t_ComplexField_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ComplexField_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ComplexField_equals(t_ComplexField *self, PyObject *args);
      static PyObject *t_ComplexField_getInstance(PyTypeObject *type);
      static PyObject *t_ComplexField_getOne(t_ComplexField *self);
      static PyObject *t_ComplexField_getRuntimeClass(t_ComplexField *self);
      static PyObject *t_ComplexField_getZero(t_ComplexField *self);
      static PyObject *t_ComplexField_hashCode(t_ComplexField *self, PyObject *args);
      static PyObject *t_ComplexField_get__instance(t_ComplexField *self, void *data);
      static PyObject *t_ComplexField_get__one(t_ComplexField *self, void *data);
      static PyObject *t_ComplexField_get__runtimeClass(t_ComplexField *self, void *data);
      static PyObject *t_ComplexField_get__zero(t_ComplexField *self, void *data);
      static PyGetSetDef t_ComplexField__fields_[] = {
        DECLARE_GET_FIELD(t_ComplexField, instance),
        DECLARE_GET_FIELD(t_ComplexField, one),
        DECLARE_GET_FIELD(t_ComplexField, runtimeClass),
        DECLARE_GET_FIELD(t_ComplexField, zero),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ComplexField__methods_[] = {
        DECLARE_METHOD(t_ComplexField, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexField, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexField, equals, METH_VARARGS),
        DECLARE_METHOD(t_ComplexField, getInstance, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_ComplexField, getOne, METH_NOARGS),
        DECLARE_METHOD(t_ComplexField, getRuntimeClass, METH_NOARGS),
        DECLARE_METHOD(t_ComplexField, getZero, METH_NOARGS),
        DECLARE_METHOD(t_ComplexField, hashCode, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ComplexField)[] = {
        { Py_tp_methods, t_ComplexField__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_ComplexField__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ComplexField)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ComplexField, t_ComplexField, ComplexField);

      void t_ComplexField::install(PyObject *module)
      {
        installType(&PY_TYPE(ComplexField), &PY_TYPE_DEF(ComplexField), module, "ComplexField", 0);
      }

      void t_ComplexField::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexField), "class_", make_descriptor(ComplexField::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexField), "wrapfn_", make_descriptor(t_ComplexField::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexField), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ComplexField_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ComplexField::initializeClass, 1)))
          return NULL;
        return t_ComplexField::wrap_Object(ComplexField(((t_ComplexField *) arg)->object.this$));
      }
      static PyObject *t_ComplexField_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ComplexField::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ComplexField_equals(t_ComplexField *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(ComplexField), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_ComplexField_getInstance(PyTypeObject *type)
      {
        ComplexField result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::complex::ComplexField::getInstance());
        return t_ComplexField::wrap_Object(result);
      }

      static PyObject *t_ComplexField_getOne(t_ComplexField *self)
      {
        ::org::hipparchus::complex::Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.getOne());
        return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
      }

      static PyObject *t_ComplexField_getRuntimeClass(t_ComplexField *self)
      {
        ::java::lang::Class result((jobject) NULL);
        OBJ_CALL(result = self->object.getRuntimeClass());
        return ::java::lang::t_Class::wrap_Object(result, ::org::hipparchus::complex::PY_TYPE(Complex));
      }

      static PyObject *t_ComplexField_getZero(t_ComplexField *self)
      {
        ::org::hipparchus::complex::Complex result((jobject) NULL);
        OBJ_CALL(result = self->object.getZero());
        return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
      }

      static PyObject *t_ComplexField_hashCode(t_ComplexField *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(ComplexField), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_ComplexField_get__instance(t_ComplexField *self, void *data)
      {
        ComplexField value((jobject) NULL);
        OBJ_CALL(value = self->object.getInstance());
        return t_ComplexField::wrap_Object(value);
      }

      static PyObject *t_ComplexField_get__one(t_ComplexField *self, void *data)
      {
        ::org::hipparchus::complex::Complex value((jobject) NULL);
        OBJ_CALL(value = self->object.getOne());
        return ::org::hipparchus::complex::t_Complex::wrap_Object(value);
      }

      static PyObject *t_ComplexField_get__runtimeClass(t_ComplexField *self, void *data)
      {
        ::java::lang::Class value((jobject) NULL);
        OBJ_CALL(value = self->object.getRuntimeClass());
        return ::java::lang::t_Class::wrap_Object(value);
      }

      static PyObject *t_ComplexField_get__zero(t_ComplexField *self, void *data)
      {
        ::org::hipparchus::complex::Complex value((jobject) NULL);
        OBJ_CALL(value = self->object.getZero());
        return ::org::hipparchus::complex::t_Complex::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/ITRFVersion$Converter.h"
#include "org/orekit/frames/FieldStaticTransform.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/TransformProvider.h"
#include "org/orekit/frames/ITRFVersion.h"
#include "org/orekit/frames/StaticTransform.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *ITRFVersion$Converter::class$ = NULL;
      jmethodID *ITRFVersion$Converter::mids$ = NULL;
      bool ITRFVersion$Converter::live$ = false;

      jclass ITRFVersion$Converter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/ITRFVersion$Converter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getDestination_4865f340ec39b9c4] = env->getMethodID(cls, "getDestination", "()Lorg/orekit/frames/ITRFVersion;");
          mids$[mid_getOrigin_4865f340ec39b9c4] = env->getMethodID(cls, "getOrigin", "()Lorg/orekit/frames/ITRFVersion;");
          mids$[mid_getStaticTransform_6e492420312934f1] = env->getMethodID(cls, "getStaticTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/StaticTransform;");
          mids$[mid_getStaticTransform_3b5ee2ab7cc035a5] = env->getMethodID(cls, "getStaticTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_getTransform_02ca17ac51b6a4b2] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
          mids$[mid_getTransform_286745ef54e0a7f6] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldTransform;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::frames::ITRFVersion ITRFVersion$Converter::getDestination() const
      {
        return ::org::orekit::frames::ITRFVersion(env->callObjectMethod(this$, mids$[mid_getDestination_4865f340ec39b9c4]));
      }

      ::org::orekit::frames::ITRFVersion ITRFVersion$Converter::getOrigin() const
      {
        return ::org::orekit::frames::ITRFVersion(env->callObjectMethod(this$, mids$[mid_getOrigin_4865f340ec39b9c4]));
      }

      ::org::orekit::frames::StaticTransform ITRFVersion$Converter::getStaticTransform(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::StaticTransform(env->callObjectMethod(this$, mids$[mid_getStaticTransform_6e492420312934f1], a0.this$));
      }

      ::org::orekit::frames::FieldStaticTransform ITRFVersion$Converter::getStaticTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::frames::FieldStaticTransform(env->callObjectMethod(this$, mids$[mid_getStaticTransform_3b5ee2ab7cc035a5], a0.this$));
      }

      ::org::orekit::frames::Transform ITRFVersion$Converter::getTransform(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getTransform_02ca17ac51b6a4b2], a0.this$));
      }

      ::org::orekit::frames::FieldTransform ITRFVersion$Converter::getTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_getTransform_286745ef54e0a7f6], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_ITRFVersion$Converter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ITRFVersion$Converter_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ITRFVersion$Converter_of_(t_ITRFVersion$Converter *self, PyObject *args);
      static PyObject *t_ITRFVersion$Converter_getDestination(t_ITRFVersion$Converter *self);
      static PyObject *t_ITRFVersion$Converter_getOrigin(t_ITRFVersion$Converter *self);
      static PyObject *t_ITRFVersion$Converter_getStaticTransform(t_ITRFVersion$Converter *self, PyObject *args);
      static PyObject *t_ITRFVersion$Converter_getTransform(t_ITRFVersion$Converter *self, PyObject *args);
      static PyObject *t_ITRFVersion$Converter_get__destination(t_ITRFVersion$Converter *self, void *data);
      static PyObject *t_ITRFVersion$Converter_get__origin(t_ITRFVersion$Converter *self, void *data);
      static PyObject *t_ITRFVersion$Converter_get__parameters_(t_ITRFVersion$Converter *self, void *data);
      static PyGetSetDef t_ITRFVersion$Converter__fields_[] = {
        DECLARE_GET_FIELD(t_ITRFVersion$Converter, destination),
        DECLARE_GET_FIELD(t_ITRFVersion$Converter, origin),
        DECLARE_GET_FIELD(t_ITRFVersion$Converter, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ITRFVersion$Converter__methods_[] = {
        DECLARE_METHOD(t_ITRFVersion$Converter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ITRFVersion$Converter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ITRFVersion$Converter, of_, METH_VARARGS),
        DECLARE_METHOD(t_ITRFVersion$Converter, getDestination, METH_NOARGS),
        DECLARE_METHOD(t_ITRFVersion$Converter, getOrigin, METH_NOARGS),
        DECLARE_METHOD(t_ITRFVersion$Converter, getStaticTransform, METH_VARARGS),
        DECLARE_METHOD(t_ITRFVersion$Converter, getTransform, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ITRFVersion$Converter)[] = {
        { Py_tp_methods, t_ITRFVersion$Converter__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_ITRFVersion$Converter__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ITRFVersion$Converter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ITRFVersion$Converter, t_ITRFVersion$Converter, ITRFVersion$Converter);
      PyObject *t_ITRFVersion$Converter::wrap_Object(const ITRFVersion$Converter& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ITRFVersion$Converter::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ITRFVersion$Converter *self = (t_ITRFVersion$Converter *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_ITRFVersion$Converter::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ITRFVersion$Converter::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ITRFVersion$Converter *self = (t_ITRFVersion$Converter *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_ITRFVersion$Converter::install(PyObject *module)
      {
        installType(&PY_TYPE(ITRFVersion$Converter), &PY_TYPE_DEF(ITRFVersion$Converter), module, "ITRFVersion$Converter", 0);
      }

      void t_ITRFVersion$Converter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion$Converter), "class_", make_descriptor(ITRFVersion$Converter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion$Converter), "wrapfn_", make_descriptor(t_ITRFVersion$Converter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion$Converter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ITRFVersion$Converter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ITRFVersion$Converter::initializeClass, 1)))
          return NULL;
        return t_ITRFVersion$Converter::wrap_Object(ITRFVersion$Converter(((t_ITRFVersion$Converter *) arg)->object.this$));
      }
      static PyObject *t_ITRFVersion$Converter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ITRFVersion$Converter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ITRFVersion$Converter_of_(t_ITRFVersion$Converter *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_ITRFVersion$Converter_getDestination(t_ITRFVersion$Converter *self)
      {
        ::org::orekit::frames::ITRFVersion result((jobject) NULL);
        OBJ_CALL(result = self->object.getDestination());
        return ::org::orekit::frames::t_ITRFVersion::wrap_Object(result);
      }

      static PyObject *t_ITRFVersion$Converter_getOrigin(t_ITRFVersion$Converter *self)
      {
        ::org::orekit::frames::ITRFVersion result((jobject) NULL);
        OBJ_CALL(result = self->object.getOrigin());
        return ::org::orekit::frames::t_ITRFVersion::wrap_Object(result);
      }

      static PyObject *t_ITRFVersion$Converter_getStaticTransform(t_ITRFVersion$Converter *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::frames::StaticTransform result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getStaticTransform(a0));
              return ::org::orekit::frames::t_StaticTransform::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::FieldStaticTransform result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getStaticTransform(a0));
              return ::org::orekit::frames::t_FieldStaticTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getStaticTransform", args);
        return NULL;
      }

      static PyObject *t_ITRFVersion$Converter_getTransform(t_ITRFVersion$Converter *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::frames::Transform result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getTransform(a0));
              return ::org::orekit::frames::t_Transform::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::FieldTransform result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getTransform(a0));
              return ::org::orekit::frames::t_FieldTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getTransform", args);
        return NULL;
      }
      static PyObject *t_ITRFVersion$Converter_get__parameters_(t_ITRFVersion$Converter *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_ITRFVersion$Converter_get__destination(t_ITRFVersion$Converter *self, void *data)
      {
        ::org::orekit::frames::ITRFVersion value((jobject) NULL);
        OBJ_CALL(value = self->object.getDestination());
        return ::org::orekit::frames::t_ITRFVersion::wrap_Object(value);
      }

      static PyObject *t_ITRFVersion$Converter_get__origin(t_ITRFVersion$Converter *self, void *data)
      {
        ::org::orekit::frames::ITRFVersion value((jobject) NULL);
        OBJ_CALL(value = self->object.getOrigin());
        return ::org::orekit::frames::t_ITRFVersion::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/bodies/Ellipse.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *Ellipse::class$ = NULL;
      jmethodID *Ellipse::mids$ = NULL;
      bool Ellipse::live$ = false;

      jclass Ellipse::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/Ellipse");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_2937540ec2093e7d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DDLorg/orekit/frames/Frame;)V");
          mids$[mid_getA_9981f74b2d109da6] = env->getMethodID(cls, "getA", "()D");
          mids$[mid_getB_9981f74b2d109da6] = env->getMethodID(cls, "getB", "()D");
          mids$[mid_getCenter_032312bdeb3f2f93] = env->getMethodID(cls, "getCenter", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getCenterOfCurvature_041693b38ced02ad] = env->getMethodID(cls, "getCenterOfCurvature", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
          mids$[mid_getFrame_cb151471db4570f0] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getU_032312bdeb3f2f93] = env->getMethodID(cls, "getU", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getV_032312bdeb3f2f93] = env->getMethodID(cls, "getV", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_pointAt_98a3eeef43dce47a] = env->getMethodID(cls, "pointAt", "(D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_projectToEllipse_d354398d2df6ac32] = env->getMethodID(cls, "projectToEllipse", "(Lorg/orekit/utils/TimeStampedPVCoordinates;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_projectToEllipse_041693b38ced02ad] = env->getMethodID(cls, "projectToEllipse", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
          mids$[mid_toPlane_2e7d3e3e3ac549f4] = env->getMethodID(cls, "toPlane", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
          mids$[mid_toSpace_0e24ce6d026e4bfd] = env->getMethodID(cls, "toSpace", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Ellipse::Ellipse(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, jdouble a3, jdouble a4, const ::org::orekit::frames::Frame & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2937540ec2093e7d, a0.this$, a1.this$, a2.this$, a3, a4, a5.this$)) {}

      jdouble Ellipse::getA() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getA_9981f74b2d109da6]);
      }

      jdouble Ellipse::getB() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getB_9981f74b2d109da6]);
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Ellipse::getCenter() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getCenter_032312bdeb3f2f93]));
      }

      ::org::hipparchus::geometry::euclidean::twod::Vector2D Ellipse::getCenterOfCurvature(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_getCenterOfCurvature_041693b38ced02ad], a0.this$));
      }

      ::org::orekit::frames::Frame Ellipse::getFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_cb151471db4570f0]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Ellipse::getU() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getU_032312bdeb3f2f93]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Ellipse::getV() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getV_032312bdeb3f2f93]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Ellipse::pointAt(jdouble a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_pointAt_98a3eeef43dce47a], a0));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates Ellipse::projectToEllipse(const ::org::orekit::utils::TimeStampedPVCoordinates & a0) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_projectToEllipse_d354398d2df6ac32], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::twod::Vector2D Ellipse::projectToEllipse(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_projectToEllipse_041693b38ced02ad], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::twod::Vector2D Ellipse::toPlane(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_toPlane_2e7d3e3e3ac549f4], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Ellipse::toSpace(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_toSpace_0e24ce6d026e4bfd], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace bodies {
      static PyObject *t_Ellipse_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Ellipse_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Ellipse_init_(t_Ellipse *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Ellipse_getA(t_Ellipse *self);
      static PyObject *t_Ellipse_getB(t_Ellipse *self);
      static PyObject *t_Ellipse_getCenter(t_Ellipse *self);
      static PyObject *t_Ellipse_getCenterOfCurvature(t_Ellipse *self, PyObject *arg);
      static PyObject *t_Ellipse_getFrame(t_Ellipse *self);
      static PyObject *t_Ellipse_getU(t_Ellipse *self);
      static PyObject *t_Ellipse_getV(t_Ellipse *self);
      static PyObject *t_Ellipse_pointAt(t_Ellipse *self, PyObject *arg);
      static PyObject *t_Ellipse_projectToEllipse(t_Ellipse *self, PyObject *args);
      static PyObject *t_Ellipse_toPlane(t_Ellipse *self, PyObject *arg);
      static PyObject *t_Ellipse_toSpace(t_Ellipse *self, PyObject *arg);
      static PyObject *t_Ellipse_get__a(t_Ellipse *self, void *data);
      static PyObject *t_Ellipse_get__b(t_Ellipse *self, void *data);
      static PyObject *t_Ellipse_get__center(t_Ellipse *self, void *data);
      static PyObject *t_Ellipse_get__frame(t_Ellipse *self, void *data);
      static PyObject *t_Ellipse_get__u(t_Ellipse *self, void *data);
      static PyObject *t_Ellipse_get__v(t_Ellipse *self, void *data);
      static PyGetSetDef t_Ellipse__fields_[] = {
        DECLARE_GET_FIELD(t_Ellipse, a),
        DECLARE_GET_FIELD(t_Ellipse, b),
        DECLARE_GET_FIELD(t_Ellipse, center),
        DECLARE_GET_FIELD(t_Ellipse, frame),
        DECLARE_GET_FIELD(t_Ellipse, u),
        DECLARE_GET_FIELD(t_Ellipse, v),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Ellipse__methods_[] = {
        DECLARE_METHOD(t_Ellipse, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Ellipse, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Ellipse, getA, METH_NOARGS),
        DECLARE_METHOD(t_Ellipse, getB, METH_NOARGS),
        DECLARE_METHOD(t_Ellipse, getCenter, METH_NOARGS),
        DECLARE_METHOD(t_Ellipse, getCenterOfCurvature, METH_O),
        DECLARE_METHOD(t_Ellipse, getFrame, METH_NOARGS),
        DECLARE_METHOD(t_Ellipse, getU, METH_NOARGS),
        DECLARE_METHOD(t_Ellipse, getV, METH_NOARGS),
        DECLARE_METHOD(t_Ellipse, pointAt, METH_O),
        DECLARE_METHOD(t_Ellipse, projectToEllipse, METH_VARARGS),
        DECLARE_METHOD(t_Ellipse, toPlane, METH_O),
        DECLARE_METHOD(t_Ellipse, toSpace, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Ellipse)[] = {
        { Py_tp_methods, t_Ellipse__methods_ },
        { Py_tp_init, (void *) t_Ellipse_init_ },
        { Py_tp_getset, t_Ellipse__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Ellipse)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Ellipse, t_Ellipse, Ellipse);

      void t_Ellipse::install(PyObject *module)
      {
        installType(&PY_TYPE(Ellipse), &PY_TYPE_DEF(Ellipse), module, "Ellipse", 0);
      }

      void t_Ellipse::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Ellipse), "class_", make_descriptor(Ellipse::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Ellipse), "wrapfn_", make_descriptor(t_Ellipse::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Ellipse), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Ellipse_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Ellipse::initializeClass, 1)))
          return NULL;
        return t_Ellipse::wrap_Object(Ellipse(((t_Ellipse *) arg)->object.this$));
      }
      static PyObject *t_Ellipse_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Ellipse::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Ellipse_init_(t_Ellipse *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
        jdouble a3;
        jdouble a4;
        ::org::orekit::frames::Frame a5((jobject) NULL);
        Ellipse object((jobject) NULL);

        if (!parseArgs(args, "kkkDDk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
        {
          INT_CALL(object = Ellipse(a0, a1, a2, a3, a4, a5));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_Ellipse_getA(t_Ellipse *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getA());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Ellipse_getB(t_Ellipse *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getB());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Ellipse_getCenter(t_Ellipse *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getCenter());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_Ellipse_getCenterOfCurvature(t_Ellipse *self, PyObject *arg)
      {
        ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getCenterOfCurvature(a0));
          return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getCenterOfCurvature", arg);
        return NULL;
      }

      static PyObject *t_Ellipse_getFrame(t_Ellipse *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_Ellipse_getU(t_Ellipse *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getU());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_Ellipse_getV(t_Ellipse *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getV());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_Ellipse_pointAt(t_Ellipse *self, PyObject *arg)
      {
        jdouble a0;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.pointAt(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "pointAt", arg);
        return NULL;
      }

      static PyObject *t_Ellipse_projectToEllipse(t_Ellipse *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::utils::TimeStampedPVCoordinates a0((jobject) NULL);
            ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.projectToEllipse(a0));
              return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.projectToEllipse(a0));
              return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "projectToEllipse", args);
        return NULL;
      }

      static PyObject *t_Ellipse_toPlane(t_Ellipse *self, PyObject *arg)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.toPlane(a0));
          return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toPlane", arg);
        return NULL;
      }

      static PyObject *t_Ellipse_toSpace(t_Ellipse *self, PyObject *arg)
      {
        ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.toSpace(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toSpace", arg);
        return NULL;
      }

      static PyObject *t_Ellipse_get__a(t_Ellipse *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getA());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Ellipse_get__b(t_Ellipse *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getB());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Ellipse_get__center(t_Ellipse *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getCenter());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_Ellipse_get__frame(t_Ellipse *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_Ellipse_get__u(t_Ellipse *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getU());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_Ellipse_get__v(t_Ellipse *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getV());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/continuous/CauchyDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *CauchyDistribution::class$ = NULL;
        jmethodID *CauchyDistribution::mids$ = NULL;
        bool CauchyDistribution::live$ = false;

        jclass CauchyDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/CauchyDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_13edac039e8cc967] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_cumulativeProbability_bf28ed64d6e8576b] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_bf28ed64d6e8576b] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getMedian_9981f74b2d109da6] = env->getMethodID(cls, "getMedian", "()D");
            mids$[mid_getNumericalMean_9981f74b2d109da6] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_9981f74b2d109da6] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getScale_9981f74b2d109da6] = env->getMethodID(cls, "getScale", "()D");
            mids$[mid_getSupportLowerBound_9981f74b2d109da6] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_9981f74b2d109da6] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_inverseCumulativeProbability_bf28ed64d6e8576b] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)D");
            mids$[mid_isSupportConnected_eee3de00fe971136] = env->getMethodID(cls, "isSupportConnected", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CauchyDistribution::CauchyDistribution() : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        CauchyDistribution::CauchyDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_13edac039e8cc967, a0, a1)) {}

        jdouble CauchyDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_bf28ed64d6e8576b], a0);
        }

        jdouble CauchyDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_bf28ed64d6e8576b], a0);
        }

        jdouble CauchyDistribution::getMedian() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMedian_9981f74b2d109da6]);
        }

        jdouble CauchyDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_9981f74b2d109da6]);
        }

        jdouble CauchyDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_9981f74b2d109da6]);
        }

        jdouble CauchyDistribution::getScale() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getScale_9981f74b2d109da6]);
        }

        jdouble CauchyDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_9981f74b2d109da6]);
        }

        jdouble CauchyDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_9981f74b2d109da6]);
        }

        jdouble CauchyDistribution::inverseCumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_inverseCumulativeProbability_bf28ed64d6e8576b], a0);
        }

        jboolean CauchyDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_eee3de00fe971136]);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {
        static PyObject *t_CauchyDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CauchyDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CauchyDistribution_init_(t_CauchyDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CauchyDistribution_cumulativeProbability(t_CauchyDistribution *self, PyObject *args);
        static PyObject *t_CauchyDistribution_density(t_CauchyDistribution *self, PyObject *args);
        static PyObject *t_CauchyDistribution_getMedian(t_CauchyDistribution *self);
        static PyObject *t_CauchyDistribution_getNumericalMean(t_CauchyDistribution *self, PyObject *args);
        static PyObject *t_CauchyDistribution_getNumericalVariance(t_CauchyDistribution *self, PyObject *args);
        static PyObject *t_CauchyDistribution_getScale(t_CauchyDistribution *self);
        static PyObject *t_CauchyDistribution_getSupportLowerBound(t_CauchyDistribution *self, PyObject *args);
        static PyObject *t_CauchyDistribution_getSupportUpperBound(t_CauchyDistribution *self, PyObject *args);
        static PyObject *t_CauchyDistribution_inverseCumulativeProbability(t_CauchyDistribution *self, PyObject *args);
        static PyObject *t_CauchyDistribution_isSupportConnected(t_CauchyDistribution *self, PyObject *args);
        static PyObject *t_CauchyDistribution_get__median(t_CauchyDistribution *self, void *data);
        static PyObject *t_CauchyDistribution_get__numericalMean(t_CauchyDistribution *self, void *data);
        static PyObject *t_CauchyDistribution_get__numericalVariance(t_CauchyDistribution *self, void *data);
        static PyObject *t_CauchyDistribution_get__scale(t_CauchyDistribution *self, void *data);
        static PyObject *t_CauchyDistribution_get__supportConnected(t_CauchyDistribution *self, void *data);
        static PyObject *t_CauchyDistribution_get__supportLowerBound(t_CauchyDistribution *self, void *data);
        static PyObject *t_CauchyDistribution_get__supportUpperBound(t_CauchyDistribution *self, void *data);
        static PyGetSetDef t_CauchyDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_CauchyDistribution, median),
          DECLARE_GET_FIELD(t_CauchyDistribution, numericalMean),
          DECLARE_GET_FIELD(t_CauchyDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_CauchyDistribution, scale),
          DECLARE_GET_FIELD(t_CauchyDistribution, supportConnected),
          DECLARE_GET_FIELD(t_CauchyDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_CauchyDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CauchyDistribution__methods_[] = {
          DECLARE_METHOD(t_CauchyDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CauchyDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CauchyDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_CauchyDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_CauchyDistribution, getMedian, METH_NOARGS),
          DECLARE_METHOD(t_CauchyDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_CauchyDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_CauchyDistribution, getScale, METH_NOARGS),
          DECLARE_METHOD(t_CauchyDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_CauchyDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_CauchyDistribution, inverseCumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_CauchyDistribution, isSupportConnected, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CauchyDistribution)[] = {
          { Py_tp_methods, t_CauchyDistribution__methods_ },
          { Py_tp_init, (void *) t_CauchyDistribution_init_ },
          { Py_tp_getset, t_CauchyDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CauchyDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(CauchyDistribution, t_CauchyDistribution, CauchyDistribution);

        void t_CauchyDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(CauchyDistribution), &PY_TYPE_DEF(CauchyDistribution), module, "CauchyDistribution", 0);
        }

        void t_CauchyDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CauchyDistribution), "class_", make_descriptor(CauchyDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CauchyDistribution), "wrapfn_", make_descriptor(t_CauchyDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CauchyDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CauchyDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CauchyDistribution::initializeClass, 1)))
            return NULL;
          return t_CauchyDistribution::wrap_Object(CauchyDistribution(((t_CauchyDistribution *) arg)->object.this$));
        }
        static PyObject *t_CauchyDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CauchyDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CauchyDistribution_init_(t_CauchyDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              CauchyDistribution object((jobject) NULL);

              INT_CALL(object = CauchyDistribution());
              self->object = object;
              break;
            }
           case 2:
            {
              jdouble a0;
              jdouble a1;
              CauchyDistribution object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = CauchyDistribution(a0, a1));
                self->object = object;
                break;
              }
            }
           default:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_CauchyDistribution_cumulativeProbability(t_CauchyDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(CauchyDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_CauchyDistribution_density(t_CauchyDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(CauchyDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_CauchyDistribution_getMedian(t_CauchyDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMedian());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CauchyDistribution_getNumericalMean(t_CauchyDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(CauchyDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_CauchyDistribution_getNumericalVariance(t_CauchyDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(CauchyDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_CauchyDistribution_getScale(t_CauchyDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getScale());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CauchyDistribution_getSupportLowerBound(t_CauchyDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(CauchyDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_CauchyDistribution_getSupportUpperBound(t_CauchyDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(CauchyDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_CauchyDistribution_inverseCumulativeProbability(t_CauchyDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.inverseCumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(CauchyDistribution), (PyObject *) self, "inverseCumulativeProbability", args, 2);
        }

        static PyObject *t_CauchyDistribution_isSupportConnected(t_CauchyDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(CauchyDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_CauchyDistribution_get__median(t_CauchyDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMedian());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CauchyDistribution_get__numericalMean(t_CauchyDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CauchyDistribution_get__numericalVariance(t_CauchyDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CauchyDistribution_get__scale(t_CauchyDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getScale());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CauchyDistribution_get__supportConnected(t_CauchyDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_CauchyDistribution_get__supportLowerBound(t_CauchyDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CauchyDistribution_get__supportUpperBound(t_CauchyDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportUpperBound());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/parser/IgsSsrDataField.h"
#include "org/orekit/gnss/metric/parser/DataField.h"
#include "org/orekit/gnss/metric/parser/IgsSsrDataField.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *IgsSsrDataField::class$ = NULL;
          jmethodID *IgsSsrDataField::mids$ = NULL;
          bool IgsSsrDataField::live$ = false;
          IgsSsrDataField *IgsSsrDataField::IDF001 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF002 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF003 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF004 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF005 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF006 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF007 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF008 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF009 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF010 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF011 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF012 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF013 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF014 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF015 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF016 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF017 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF018 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF019 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF020 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF021 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF022 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF023 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF024 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF025 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF026 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF027 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF028 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF029 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF030 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF031 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF032 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF033 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF034 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF035 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF036 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF037 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF038 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF039 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF040 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF041 = NULL;

          jclass IgsSsrDataField::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/IgsSsrDataField");

              mids$ = new jmethodID[max_mid];
              mids$[mid_valueOf_234dcd98d5d6f6a3] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/parser/IgsSsrDataField;");
              mids$[mid_values_6315a5bc45018f68] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/metric/parser/IgsSsrDataField;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              IDF001 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF001", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF002 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF002", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF003 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF003", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF004 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF004", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF005 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF005", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF006 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF006", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF007 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF007", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF008 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF008", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF009 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF009", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF010 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF010", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF011 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF011", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF012 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF012", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF013 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF013", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF014 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF014", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF015 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF015", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF016 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF016", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF017 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF017", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF018 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF018", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF019 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF019", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF020 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF020", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF021 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF021", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF022 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF022", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF023 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF023", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF024 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF024", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF025 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF025", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF026 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF026", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF027 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF027", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF028 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF028", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF029 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF029", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF030 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF030", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF031 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF031", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF032 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF032", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF033 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF033", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF034 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF034", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF035 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF035", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF036 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF036", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF037 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF037", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF038 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF038", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF039 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF039", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF040 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF040", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF041 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF041", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          IgsSsrDataField IgsSsrDataField::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return IgsSsrDataField(env->callStaticObjectMethod(cls, mids$[mid_valueOf_234dcd98d5d6f6a3], a0.this$));
          }

          JArray< IgsSsrDataField > IgsSsrDataField::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< IgsSsrDataField >(env->callStaticObjectMethod(cls, mids$[mid_values_6315a5bc45018f68]));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {
          static PyObject *t_IgsSsrDataField_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IgsSsrDataField_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IgsSsrDataField_of_(t_IgsSsrDataField *self, PyObject *args);
          static PyObject *t_IgsSsrDataField_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_IgsSsrDataField_values(PyTypeObject *type);
          static PyObject *t_IgsSsrDataField_get__parameters_(t_IgsSsrDataField *self, void *data);
          static PyGetSetDef t_IgsSsrDataField__fields_[] = {
            DECLARE_GET_FIELD(t_IgsSsrDataField, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_IgsSsrDataField__methods_[] = {
            DECLARE_METHOD(t_IgsSsrDataField, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IgsSsrDataField, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IgsSsrDataField, of_, METH_VARARGS),
            DECLARE_METHOD(t_IgsSsrDataField, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_IgsSsrDataField, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(IgsSsrDataField)[] = {
            { Py_tp_methods, t_IgsSsrDataField__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_IgsSsrDataField__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(IgsSsrDataField)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(IgsSsrDataField, t_IgsSsrDataField, IgsSsrDataField);
          PyObject *t_IgsSsrDataField::wrap_Object(const IgsSsrDataField& object, PyTypeObject *p0)
          {
            PyObject *obj = t_IgsSsrDataField::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_IgsSsrDataField *self = (t_IgsSsrDataField *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_IgsSsrDataField::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_IgsSsrDataField::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_IgsSsrDataField *self = (t_IgsSsrDataField *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_IgsSsrDataField::install(PyObject *module)
          {
            installType(&PY_TYPE(IgsSsrDataField), &PY_TYPE_DEF(IgsSsrDataField), module, "IgsSsrDataField", 0);
          }

          void t_IgsSsrDataField::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "class_", make_descriptor(IgsSsrDataField::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "wrapfn_", make_descriptor(t_IgsSsrDataField::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "boxfn_", make_descriptor(boxObject));
            env->getClass(IgsSsrDataField::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF001", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF001)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF002", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF002)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF003", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF003)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF004", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF004)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF005", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF005)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF006", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF006)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF007", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF007)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF008", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF008)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF009", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF009)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF010", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF010)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF011", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF011)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF012", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF012)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF013", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF013)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF014", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF014)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF015", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF015)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF016", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF016)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF017", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF017)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF018", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF018)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF019", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF019)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF020", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF020)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF021", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF021)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF022", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF022)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF023", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF023)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF024", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF024)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF025", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF025)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF026", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF026)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF027", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF027)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF028", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF028)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF029", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF029)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF030", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF030)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF031", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF031)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF032", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF032)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF033", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF033)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF034", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF034)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF035", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF035)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF036", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF036)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF037", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF037)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF038", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF038)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF039", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF039)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF040", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF040)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF041", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF041)));
          }

          static PyObject *t_IgsSsrDataField_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, IgsSsrDataField::initializeClass, 1)))
              return NULL;
            return t_IgsSsrDataField::wrap_Object(IgsSsrDataField(((t_IgsSsrDataField *) arg)->object.this$));
          }
          static PyObject *t_IgsSsrDataField_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, IgsSsrDataField::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_IgsSsrDataField_of_(t_IgsSsrDataField *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_IgsSsrDataField_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            IgsSsrDataField result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::parser::IgsSsrDataField::valueOf(a0));
              return t_IgsSsrDataField::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_IgsSsrDataField_values(PyTypeObject *type)
          {
            JArray< IgsSsrDataField > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::gnss::metric::parser::IgsSsrDataField::values());
            return JArray<jobject>(result.this$).wrap(t_IgsSsrDataField::wrap_jobject);
          }
          static PyObject *t_IgsSsrDataField_get__parameters_(t_IgsSsrDataField *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$IntConsumer.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$IntConsumer::class$ = NULL;
            jmethodID *ParseToken$IntConsumer::mids$ = NULL;
            bool ParseToken$IntConsumer::live$ = false;

            jclass ParseToken$IntConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$IntConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_8fd427ab23829bf5] = env->getMethodID(cls, "accept", "(I)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$IntConsumer::accept(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_8fd427ab23829bf5], a0);
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {
            static PyObject *t_ParseToken$IntConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$IntConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$IntConsumer_accept(t_ParseToken$IntConsumer *self, PyObject *arg);

            static PyMethodDef t_ParseToken$IntConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$IntConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$IntConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$IntConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$IntConsumer)[] = {
              { Py_tp_methods, t_ParseToken$IntConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$IntConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$IntConsumer, t_ParseToken$IntConsumer, ParseToken$IntConsumer);

            void t_ParseToken$IntConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$IntConsumer), &PY_TYPE_DEF(ParseToken$IntConsumer), module, "ParseToken$IntConsumer", 0);
            }

            void t_ParseToken$IntConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IntConsumer), "class_", make_descriptor(ParseToken$IntConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IntConsumer), "wrapfn_", make_descriptor(t_ParseToken$IntConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IntConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$IntConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$IntConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$IntConsumer::wrap_Object(ParseToken$IntConsumer(((t_ParseToken$IntConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$IntConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$IntConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$IntConsumer_accept(t_ParseToken$IntConsumer *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.accept(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "accept", arg);
              return NULL;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/MultivariateDifferentiableFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/differentiation/DerivativeStructure.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *MultivariateDifferentiableFunction::class$ = NULL;
        jmethodID *MultivariateDifferentiableFunction::mids$ = NULL;
        bool MultivariateDifferentiableFunction::live$ = false;

        jclass MultivariateDifferentiableFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/MultivariateDifferentiableFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_value_bdcda54333f10bef] = env->getMethodID(cls, "value", "([Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::analysis::differentiation::DerivativeStructure MultivariateDifferentiableFunction::value(const JArray< ::org::hipparchus::analysis::differentiation::DerivativeStructure > & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::DerivativeStructure(env->callObjectMethod(this$, mids$[mid_value_bdcda54333f10bef], a0.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        static PyObject *t_MultivariateDifferentiableFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultivariateDifferentiableFunction_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultivariateDifferentiableFunction_value(t_MultivariateDifferentiableFunction *self, PyObject *args);

        static PyMethodDef t_MultivariateDifferentiableFunction__methods_[] = {
          DECLARE_METHOD(t_MultivariateDifferentiableFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultivariateDifferentiableFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultivariateDifferentiableFunction, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MultivariateDifferentiableFunction)[] = {
          { Py_tp_methods, t_MultivariateDifferentiableFunction__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MultivariateDifferentiableFunction)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::MultivariateFunction),
          NULL
        };

        DEFINE_TYPE(MultivariateDifferentiableFunction, t_MultivariateDifferentiableFunction, MultivariateDifferentiableFunction);

        void t_MultivariateDifferentiableFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(MultivariateDifferentiableFunction), &PY_TYPE_DEF(MultivariateDifferentiableFunction), module, "MultivariateDifferentiableFunction", 0);
        }

        void t_MultivariateDifferentiableFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateDifferentiableFunction), "class_", make_descriptor(MultivariateDifferentiableFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateDifferentiableFunction), "wrapfn_", make_descriptor(t_MultivariateDifferentiableFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateDifferentiableFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MultivariateDifferentiableFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MultivariateDifferentiableFunction::initializeClass, 1)))
            return NULL;
          return t_MultivariateDifferentiableFunction::wrap_Object(MultivariateDifferentiableFunction(((t_MultivariateDifferentiableFunction *) arg)->object.this$));
        }
        static PyObject *t_MultivariateDifferentiableFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MultivariateDifferentiableFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_MultivariateDifferentiableFunction_value(t_MultivariateDifferentiableFunction *self, PyObject *args)
        {
          JArray< ::org::hipparchus::analysis::differentiation::DerivativeStructure > a0((jobject) NULL);
          ::org::hipparchus::analysis::differentiation::DerivativeStructure result((jobject) NULL);

          if (!parseArgs(args, "[k", ::org::hipparchus::analysis::differentiation::DerivativeStructure::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.value(a0));
            return ::org::hipparchus::analysis::differentiation::t_DerivativeStructure::wrap_Object(result);
          }

          return callSuper(PY_TYPE(MultivariateDifferentiableFunction), (PyObject *) self, "value", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/KeplerianPropagator.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *KeplerianPropagator::class$ = NULL;
        jmethodID *KeplerianPropagator::mids$ = NULL;
        bool KeplerianPropagator::live$ = false;

        jclass KeplerianPropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/KeplerianPropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_17534ef58ef3aaef] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;)V");
            mids$[mid_init$_cd24915ef440ba23] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;D)V");
            mids$[mid_init$_02989731f8a729b5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_init$_b3c89926c8cce0db] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;D)V");
            mids$[mid_init$_f7a1cba9c3f4320d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DD)V");
            mids$[mid_resetInitialState_72b846eb87f3af9a] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_getMass_209f08246d708042] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_createHarvester_d0aee1b2c15f4d53] = env->getMethodID(cls, "createHarvester", "(Ljava/lang/String;Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/utils/DoubleArrayDictionary;)Lorg/orekit/propagation/AbstractMatricesHarvester;");
            mids$[mid_propagateOrbit_776cca2e85dfe61d] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_resetIntermediateState_b69b5541e48d21c0] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/SpacecraftState;Z)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        KeplerianPropagator::KeplerianPropagator(const ::org::orekit::orbits::Orbit & a0) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_17534ef58ef3aaef, a0.this$)) {}

        KeplerianPropagator::KeplerianPropagator(const ::org::orekit::orbits::Orbit & a0, jdouble a1) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_cd24915ef440ba23, a0.this$, a1)) {}

        KeplerianPropagator::KeplerianPropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_02989731f8a729b5, a0.this$, a1.this$)) {}

        KeplerianPropagator::KeplerianPropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_b3c89926c8cce0db, a0.this$, a1.this$, a2)) {}

        KeplerianPropagator::KeplerianPropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, jdouble a3) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_f7a1cba9c3f4320d, a0.this$, a1.this$, a2, a3)) {}

        void KeplerianPropagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_72b846eb87f3af9a], a0.this$);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        static PyObject *t_KeplerianPropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_KeplerianPropagator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_KeplerianPropagator_init_(t_KeplerianPropagator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_KeplerianPropagator_resetInitialState(t_KeplerianPropagator *self, PyObject *args);

        static PyMethodDef t_KeplerianPropagator__methods_[] = {
          DECLARE_METHOD(t_KeplerianPropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KeplerianPropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KeplerianPropagator, resetInitialState, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(KeplerianPropagator)[] = {
          { Py_tp_methods, t_KeplerianPropagator__methods_ },
          { Py_tp_init, (void *) t_KeplerianPropagator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(KeplerianPropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::analytical::AbstractAnalyticalPropagator),
          NULL
        };

        DEFINE_TYPE(KeplerianPropagator, t_KeplerianPropagator, KeplerianPropagator);

        void t_KeplerianPropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(KeplerianPropagator), &PY_TYPE_DEF(KeplerianPropagator), module, "KeplerianPropagator", 0);
        }

        void t_KeplerianPropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianPropagator), "class_", make_descriptor(KeplerianPropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianPropagator), "wrapfn_", make_descriptor(t_KeplerianPropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianPropagator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_KeplerianPropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, KeplerianPropagator::initializeClass, 1)))
            return NULL;
          return t_KeplerianPropagator::wrap_Object(KeplerianPropagator(((t_KeplerianPropagator *) arg)->object.this$));
        }
        static PyObject *t_KeplerianPropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, KeplerianPropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_KeplerianPropagator_init_(t_KeplerianPropagator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              KeplerianPropagator object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::orbits::Orbit::initializeClass, &a0))
              {
                INT_CALL(object = KeplerianPropagator(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              jdouble a1;
              KeplerianPropagator object((jobject) NULL);

              if (!parseArgs(args, "kD", ::org::orekit::orbits::Orbit::initializeClass, &a0, &a1))
              {
                INT_CALL(object = KeplerianPropagator(a0, a1));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              KeplerianPropagator object((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1))
              {
                INT_CALL(object = KeplerianPropagator(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              jdouble a2;
              KeplerianPropagator object((jobject) NULL);

              if (!parseArgs(args, "kkD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = KeplerianPropagator(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              KeplerianPropagator object((jobject) NULL);

              if (!parseArgs(args, "kkDD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = KeplerianPropagator(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
           default:
           err:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_KeplerianPropagator_resetInitialState(t_KeplerianPropagator *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.resetInitialState(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(KeplerianPropagator), (PyObject *) self, "resetInitialState", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/integration/FieldAbstractIntegratedPropagator.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "java/util/List.h"
#include "org/orekit/propagation/FieldEphemerisGenerator.h"
#include "java/util/Collection.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/integration/FieldAdditionalDerivativesProvider.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/String.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *FieldAbstractIntegratedPropagator::class$ = NULL;
        jmethodID *FieldAbstractIntegratedPropagator::mids$ = NULL;
        bool FieldAbstractIntegratedPropagator::live$ = false;

        jclass FieldAbstractIntegratedPropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/FieldAbstractIntegratedPropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_addAdditionalDerivativesProvider_487f01f14e35b1cf] = env->getMethodID(cls, "addAdditionalDerivativesProvider", "(Lorg/orekit/propagation/integration/FieldAdditionalDerivativesProvider;)V");
            mids$[mid_addEventDetector_bb8991c4a46cf56d] = env->getMethodID(cls, "addEventDetector", "(Lorg/orekit/propagation/events/FieldEventDetector;)V");
            mids$[mid_clearEventsDetectors_ff7cb6c242604316] = env->getMethodID(cls, "clearEventsDetectors", "()V");
            mids$[mid_getAdditionalDerivativesProviders_d751c1a57012b438] = env->getMethodID(cls, "getAdditionalDerivativesProviders", "()Ljava/util/List;");
            mids$[mid_getBasicDimension_d6ab429752e7c267] = env->getMethodID(cls, "getBasicDimension", "()I");
            mids$[mid_getCalls_d6ab429752e7c267] = env->getMethodID(cls, "getCalls", "()I");
            mids$[mid_getEphemerisGenerator_96c2c30a0b0ad9e4] = env->getMethodID(cls, "getEphemerisGenerator", "()Lorg/orekit/propagation/FieldEphemerisGenerator;");
            mids$[mid_getEventsDetectors_3bfef5c77ceb081a] = env->getMethodID(cls, "getEventsDetectors", "()Ljava/util/Collection;");
            mids$[mid_getIntegratorName_d2c8eb4129821f0e] = env->getMethodID(cls, "getIntegratorName", "()Ljava/lang/String;");
            mids$[mid_getManagedAdditionalStates_f81c0644d57ae495] = env->getMethodID(cls, "getManagedAdditionalStates", "()[Ljava/lang/String;");
            mids$[mid_getMu_08d37e3f77b7239d] = env->getMethodID(cls, "getMu", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getPropagationType_fa97d40fdfd0f5fb] = env->getMethodID(cls, "getPropagationType", "()Lorg/orekit/propagation/PropagationType;");
            mids$[mid_getResetAtEnd_eee3de00fe971136] = env->getMethodID(cls, "getResetAtEnd", "()Z");
            mids$[mid_isAdditionalStateManaged_df4c65b2aede5c41] = env->getMethodID(cls, "isAdditionalStateManaged", "(Ljava/lang/String;)Z");
            mids$[mid_propagate_fb689a9c0f30b938] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_propagate_bcf793a6168805e3] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_setAttitudeProvider_fddd0a7d9f33bafa] = env->getMethodID(cls, "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_setMu_f63ca9e3185c722e] = env->getMethodID(cls, "setMu", "(Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_setResetAtEnd_b35db77cae58639e] = env->getMethodID(cls, "setResetAtEnd", "(Z)V");
            mids$[mid_getPositionAngleType_a6db4e6edefda4be] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
            mids$[mid_getOrbitType_495f818d3570b7f5] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
            mids$[mid_beforeIntegration_357211ab77703f3f] = env->getMethodID(cls, "beforeIntegration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
            mids$[mid_afterIntegration_ff7cb6c242604316] = env->getMethodID(cls, "afterIntegration", "()V");
            mids$[mid_getInitialIntegrationState_a74be2e38786f3b6] = env->getMethodID(cls, "getInitialIntegrationState", "()Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_createMapper_ebf7e979efef9b20] = env->getMethodID(cls, "createMapper", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/integration/FieldStateMapper;");
            mids$[mid_getMainStateEquations_3bc41c7526b7eb7c] = env->getMethodID(cls, "getMainStateEquations", "(Lorg/hipparchus/ode/FieldODEIntegrator;)Lorg/orekit/propagation/integration/FieldAbstractIntegratedPropagator$MainStateEquations;");
            mids$[mid_setUpEventDetector_0fd72636e2a4d5b2] = env->getMethodID(cls, "setUpEventDetector", "(Lorg/hipparchus/ode/FieldODEIntegrator;Lorg/orekit/propagation/events/FieldEventDetector;)V");
            mids$[mid_initMapper_a44abdd035f01345] = env->getMethodID(cls, "initMapper", "(Lorg/hipparchus/Field;)V");
            mids$[mid_setOrbitType_faf186fbb93ad060] = env->getMethodID(cls, "setOrbitType", "(Lorg/orekit/orbits/OrbitType;)V");
            mids$[mid_setPositionAngleType_266be23fd67cbce4] = env->getMethodID(cls, "setPositionAngleType", "(Lorg/orekit/orbits/PositionAngleType;)V");
            mids$[mid_getIntegrator_a0df2acc30cad91d] = env->getMethodID(cls, "getIntegrator", "()Lorg/hipparchus/ode/FieldODEIntegrator;");
            mids$[mid_setUpUserEventDetectors_ff7cb6c242604316] = env->getMethodID(cls, "setUpUserEventDetectors", "()V");
            mids$[mid_isMeanOrbit_fa97d40fdfd0f5fb] = env->getMethodID(cls, "isMeanOrbit", "()Lorg/orekit/propagation/PropagationType;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void FieldAbstractIntegratedPropagator::addAdditionalDerivativesProvider(const ::org::orekit::propagation::integration::FieldAdditionalDerivativesProvider & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addAdditionalDerivativesProvider_487f01f14e35b1cf], a0.this$);
        }

        void FieldAbstractIntegratedPropagator::addEventDetector(const ::org::orekit::propagation::events::FieldEventDetector & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addEventDetector_bb8991c4a46cf56d], a0.this$);
        }

        void FieldAbstractIntegratedPropagator::clearEventsDetectors() const
        {
          env->callVoidMethod(this$, mids$[mid_clearEventsDetectors_ff7cb6c242604316]);
        }

        ::java::util::List FieldAbstractIntegratedPropagator::getAdditionalDerivativesProviders() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAdditionalDerivativesProviders_d751c1a57012b438]));
        }

        jint FieldAbstractIntegratedPropagator::getBasicDimension() const
        {
          return env->callIntMethod(this$, mids$[mid_getBasicDimension_d6ab429752e7c267]);
        }

        jint FieldAbstractIntegratedPropagator::getCalls() const
        {
          return env->callIntMethod(this$, mids$[mid_getCalls_d6ab429752e7c267]);
        }

        ::org::orekit::propagation::FieldEphemerisGenerator FieldAbstractIntegratedPropagator::getEphemerisGenerator() const
        {
          return ::org::orekit::propagation::FieldEphemerisGenerator(env->callObjectMethod(this$, mids$[mid_getEphemerisGenerator_96c2c30a0b0ad9e4]));
        }

        ::java::util::Collection FieldAbstractIntegratedPropagator::getEventsDetectors() const
        {
          return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_getEventsDetectors_3bfef5c77ceb081a]));
        }

        ::java::lang::String FieldAbstractIntegratedPropagator::getIntegratorName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getIntegratorName_d2c8eb4129821f0e]));
        }

        JArray< ::java::lang::String > FieldAbstractIntegratedPropagator::getManagedAdditionalStates() const
        {
          return JArray< ::java::lang::String >(env->callObjectMethod(this$, mids$[mid_getManagedAdditionalStates_f81c0644d57ae495]));
        }

        ::org::hipparchus::CalculusFieldElement FieldAbstractIntegratedPropagator::getMu() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMu_08d37e3f77b7239d]));
        }

        ::org::orekit::propagation::PropagationType FieldAbstractIntegratedPropagator::getPropagationType() const
        {
          return ::org::orekit::propagation::PropagationType(env->callObjectMethod(this$, mids$[mid_getPropagationType_fa97d40fdfd0f5fb]));
        }

        jboolean FieldAbstractIntegratedPropagator::getResetAtEnd() const
        {
          return env->callBooleanMethod(this$, mids$[mid_getResetAtEnd_eee3de00fe971136]);
        }

        jboolean FieldAbstractIntegratedPropagator::isAdditionalStateManaged(const ::java::lang::String & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isAdditionalStateManaged_df4c65b2aede5c41], a0.this$);
        }

        ::org::orekit::propagation::FieldSpacecraftState FieldAbstractIntegratedPropagator::propagate(const ::org::orekit::time::FieldAbsoluteDate & a0) const
        {
          return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_propagate_fb689a9c0f30b938], a0.this$));
        }

        ::org::orekit::propagation::FieldSpacecraftState FieldAbstractIntegratedPropagator::propagate(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_propagate_bcf793a6168805e3], a0.this$, a1.this$));
        }

        void FieldAbstractIntegratedPropagator::setAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setAttitudeProvider_fddd0a7d9f33bafa], a0.this$);
        }

        void FieldAbstractIntegratedPropagator::setMu(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setMu_f63ca9e3185c722e], a0.this$);
        }

        void FieldAbstractIntegratedPropagator::setResetAtEnd(jboolean a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setResetAtEnd_b35db77cae58639e], a0);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/orekit/propagation/integration/FieldAbstractIntegratedPropagator$MainStateEquations.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {
        static PyObject *t_FieldAbstractIntegratedPropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAbstractIntegratedPropagator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAbstractIntegratedPropagator_of_(t_FieldAbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_FieldAbstractIntegratedPropagator_addAdditionalDerivativesProvider(t_FieldAbstractIntegratedPropagator *self, PyObject *arg);
        static PyObject *t_FieldAbstractIntegratedPropagator_addEventDetector(t_FieldAbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_FieldAbstractIntegratedPropagator_clearEventsDetectors(t_FieldAbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_FieldAbstractIntegratedPropagator_getAdditionalDerivativesProviders(t_FieldAbstractIntegratedPropagator *self);
        static PyObject *t_FieldAbstractIntegratedPropagator_getBasicDimension(t_FieldAbstractIntegratedPropagator *self);
        static PyObject *t_FieldAbstractIntegratedPropagator_getCalls(t_FieldAbstractIntegratedPropagator *self);
        static PyObject *t_FieldAbstractIntegratedPropagator_getEphemerisGenerator(t_FieldAbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_FieldAbstractIntegratedPropagator_getEventsDetectors(t_FieldAbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_FieldAbstractIntegratedPropagator_getIntegratorName(t_FieldAbstractIntegratedPropagator *self);
        static PyObject *t_FieldAbstractIntegratedPropagator_getManagedAdditionalStates(t_FieldAbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_FieldAbstractIntegratedPropagator_getMu(t_FieldAbstractIntegratedPropagator *self);
        static PyObject *t_FieldAbstractIntegratedPropagator_getPropagationType(t_FieldAbstractIntegratedPropagator *self);
        static PyObject *t_FieldAbstractIntegratedPropagator_getResetAtEnd(t_FieldAbstractIntegratedPropagator *self);
        static PyObject *t_FieldAbstractIntegratedPropagator_isAdditionalStateManaged(t_FieldAbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_FieldAbstractIntegratedPropagator_propagate(t_FieldAbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_FieldAbstractIntegratedPropagator_setAttitudeProvider(t_FieldAbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_FieldAbstractIntegratedPropagator_setMu(t_FieldAbstractIntegratedPropagator *self, PyObject *arg);
        static PyObject *t_FieldAbstractIntegratedPropagator_setResetAtEnd(t_FieldAbstractIntegratedPropagator *self, PyObject *arg);
        static PyObject *t_FieldAbstractIntegratedPropagator_get__additionalDerivativesProviders(t_FieldAbstractIntegratedPropagator *self, void *data);
        static int t_FieldAbstractIntegratedPropagator_set__attitudeProvider(t_FieldAbstractIntegratedPropagator *self, PyObject *arg, void *data);
        static PyObject *t_FieldAbstractIntegratedPropagator_get__basicDimension(t_FieldAbstractIntegratedPropagator *self, void *data);
        static PyObject *t_FieldAbstractIntegratedPropagator_get__calls(t_FieldAbstractIntegratedPropagator *self, void *data);
        static PyObject *t_FieldAbstractIntegratedPropagator_get__ephemerisGenerator(t_FieldAbstractIntegratedPropagator *self, void *data);
        static PyObject *t_FieldAbstractIntegratedPropagator_get__eventsDetectors(t_FieldAbstractIntegratedPropagator *self, void *data);
        static PyObject *t_FieldAbstractIntegratedPropagator_get__integratorName(t_FieldAbstractIntegratedPropagator *self, void *data);
        static PyObject *t_FieldAbstractIntegratedPropagator_get__managedAdditionalStates(t_FieldAbstractIntegratedPropagator *self, void *data);
        static PyObject *t_FieldAbstractIntegratedPropagator_get__mu(t_FieldAbstractIntegratedPropagator *self, void *data);
        static int t_FieldAbstractIntegratedPropagator_set__mu(t_FieldAbstractIntegratedPropagator *self, PyObject *arg, void *data);
        static PyObject *t_FieldAbstractIntegratedPropagator_get__propagationType(t_FieldAbstractIntegratedPropagator *self, void *data);
        static PyObject *t_FieldAbstractIntegratedPropagator_get__resetAtEnd(t_FieldAbstractIntegratedPropagator *self, void *data);
        static int t_FieldAbstractIntegratedPropagator_set__resetAtEnd(t_FieldAbstractIntegratedPropagator *self, PyObject *arg, void *data);
        static PyObject *t_FieldAbstractIntegratedPropagator_get__parameters_(t_FieldAbstractIntegratedPropagator *self, void *data);
        static PyGetSetDef t_FieldAbstractIntegratedPropagator__fields_[] = {
          DECLARE_GET_FIELD(t_FieldAbstractIntegratedPropagator, additionalDerivativesProviders),
          DECLARE_SET_FIELD(t_FieldAbstractIntegratedPropagator, attitudeProvider),
          DECLARE_GET_FIELD(t_FieldAbstractIntegratedPropagator, basicDimension),
          DECLARE_GET_FIELD(t_FieldAbstractIntegratedPropagator, calls),
          DECLARE_GET_FIELD(t_FieldAbstractIntegratedPropagator, ephemerisGenerator),
          DECLARE_GET_FIELD(t_FieldAbstractIntegratedPropagator, eventsDetectors),
          DECLARE_GET_FIELD(t_FieldAbstractIntegratedPropagator, integratorName),
          DECLARE_GET_FIELD(t_FieldAbstractIntegratedPropagator, managedAdditionalStates),
          DECLARE_GETSET_FIELD(t_FieldAbstractIntegratedPropagator, mu),
          DECLARE_GET_FIELD(t_FieldAbstractIntegratedPropagator, propagationType),
          DECLARE_GETSET_FIELD(t_FieldAbstractIntegratedPropagator, resetAtEnd),
          DECLARE_GET_FIELD(t_FieldAbstractIntegratedPropagator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldAbstractIntegratedPropagator__methods_[] = {
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, addAdditionalDerivativesProvider, METH_O),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, addEventDetector, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, clearEventsDetectors, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, getAdditionalDerivativesProviders, METH_NOARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, getBasicDimension, METH_NOARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, getCalls, METH_NOARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, getEphemerisGenerator, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, getEventsDetectors, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, getIntegratorName, METH_NOARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, getManagedAdditionalStates, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, getMu, METH_NOARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, getPropagationType, METH_NOARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, getResetAtEnd, METH_NOARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, isAdditionalStateManaged, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, propagate, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, setAttitudeProvider, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, setMu, METH_O),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, setResetAtEnd, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldAbstractIntegratedPropagator)[] = {
          { Py_tp_methods, t_FieldAbstractIntegratedPropagator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldAbstractIntegratedPropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldAbstractIntegratedPropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::FieldAbstractPropagator),
          NULL
        };

        DEFINE_TYPE(FieldAbstractIntegratedPropagator, t_FieldAbstractIntegratedPropagator, FieldAbstractIntegratedPropagator);
        PyObject *t_FieldAbstractIntegratedPropagator::wrap_Object(const FieldAbstractIntegratedPropagator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldAbstractIntegratedPropagator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAbstractIntegratedPropagator *self = (t_FieldAbstractIntegratedPropagator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldAbstractIntegratedPropagator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldAbstractIntegratedPropagator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAbstractIntegratedPropagator *self = (t_FieldAbstractIntegratedPropagator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldAbstractIntegratedPropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldAbstractIntegratedPropagator), &PY_TYPE_DEF(FieldAbstractIntegratedPropagator), module, "FieldAbstractIntegratedPropagator", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractIntegratedPropagator), "MainStateEquations", make_descriptor(&PY_TYPE_DEF(FieldAbstractIntegratedPropagator$MainStateEquations)));
        }

        void t_FieldAbstractIntegratedPropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractIntegratedPropagator), "class_", make_descriptor(FieldAbstractIntegratedPropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractIntegratedPropagator), "wrapfn_", make_descriptor(t_FieldAbstractIntegratedPropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractIntegratedPropagator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldAbstractIntegratedPropagator::initializeClass, 1)))
            return NULL;
          return t_FieldAbstractIntegratedPropagator::wrap_Object(FieldAbstractIntegratedPropagator(((t_FieldAbstractIntegratedPropagator *) arg)->object.this$));
        }
        static PyObject *t_FieldAbstractIntegratedPropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldAbstractIntegratedPropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_of_(t_FieldAbstractIntegratedPropagator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_addAdditionalDerivativesProvider(t_FieldAbstractIntegratedPropagator *self, PyObject *arg)
        {
          ::org::orekit::propagation::integration::FieldAdditionalDerivativesProvider a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::propagation::integration::FieldAdditionalDerivativesProvider::initializeClass, &a0, &p0, ::org::orekit::propagation::integration::t_FieldAdditionalDerivativesProvider::parameters_))
          {
            OBJ_CALL(self->object.addAdditionalDerivativesProvider(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addAdditionalDerivativesProvider", arg);
          return NULL;
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_addEventDetector(t_FieldAbstractIntegratedPropagator *self, PyObject *args)
        {
          ::org::orekit::propagation::events::FieldEventDetector a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArgs(args, "K", ::org::orekit::propagation::events::FieldEventDetector::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_))
          {
            OBJ_CALL(self->object.addEventDetector(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(FieldAbstractIntegratedPropagator), (PyObject *) self, "addEventDetector", args, 2);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_clearEventsDetectors(t_FieldAbstractIntegratedPropagator *self, PyObject *args)
        {

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(self->object.clearEventsDetectors());
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(FieldAbstractIntegratedPropagator), (PyObject *) self, "clearEventsDetectors", args, 2);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_getAdditionalDerivativesProviders(t_FieldAbstractIntegratedPropagator *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getAdditionalDerivativesProviders());
          return ::java::util::t_List::wrap_Object(result);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_getBasicDimension(t_FieldAbstractIntegratedPropagator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getBasicDimension());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_getCalls(t_FieldAbstractIntegratedPropagator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getCalls());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_getEphemerisGenerator(t_FieldAbstractIntegratedPropagator *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldEphemerisGenerator result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getEphemerisGenerator());
            return ::org::orekit::propagation::t_FieldEphemerisGenerator::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldAbstractIntegratedPropagator), (PyObject *) self, "getEphemerisGenerator", args, 2);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_getEventsDetectors(t_FieldAbstractIntegratedPropagator *self, PyObject *args)
        {
          ::java::util::Collection result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getEventsDetectors());
            return ::java::util::t_Collection::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldAbstractIntegratedPropagator), (PyObject *) self, "getEventsDetectors", args, 2);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_getIntegratorName(t_FieldAbstractIntegratedPropagator *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getIntegratorName());
          return j2p(result);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_getManagedAdditionalStates(t_FieldAbstractIntegratedPropagator *self, PyObject *args)
        {
          JArray< ::java::lang::String > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getManagedAdditionalStates());
            return JArray<jstring>(result.this$).wrap();
          }

          return callSuper(PY_TYPE(FieldAbstractIntegratedPropagator), (PyObject *) self, "getManagedAdditionalStates", args, 2);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_getMu(t_FieldAbstractIntegratedPropagator *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getMu());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_getPropagationType(t_FieldAbstractIntegratedPropagator *self)
        {
          ::org::orekit::propagation::PropagationType result((jobject) NULL);
          OBJ_CALL(result = self->object.getPropagationType());
          return ::org::orekit::propagation::t_PropagationType::wrap_Object(result);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_getResetAtEnd(t_FieldAbstractIntegratedPropagator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.getResetAtEnd());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_isAdditionalStateManaged(t_FieldAbstractIntegratedPropagator *self, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = self->object.isAdditionalStateManaged(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(FieldAbstractIntegratedPropagator), (PyObject *) self, "isAdditionalStateManaged", args, 2);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_propagate(t_FieldAbstractIntegratedPropagator *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
              {
                OBJ_CALL(result = self->object.propagate(a0));
                return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 2:
            {
              ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
              {
                OBJ_CALL(result = self->object.propagate(a0, a1));
                return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          return callSuper(PY_TYPE(FieldAbstractIntegratedPropagator), (PyObject *) self, "propagate", args, 2);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_setAttitudeProvider(t_FieldAbstractIntegratedPropagator *self, PyObject *args)
        {
          ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setAttitudeProvider(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(FieldAbstractIntegratedPropagator), (PyObject *) self, "setAttitudeProvider", args, 2);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_setMu(t_FieldAbstractIntegratedPropagator *self, PyObject *arg)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(self->object.setMu(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setMu", arg);
          return NULL;
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_setResetAtEnd(t_FieldAbstractIntegratedPropagator *self, PyObject *arg)
        {
          jboolean a0;

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(self->object.setResetAtEnd(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setResetAtEnd", arg);
          return NULL;
        }
        static PyObject *t_FieldAbstractIntegratedPropagator_get__parameters_(t_FieldAbstractIntegratedPropagator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_get__additionalDerivativesProviders(t_FieldAbstractIntegratedPropagator *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getAdditionalDerivativesProviders());
          return ::java::util::t_List::wrap_Object(value);
        }

        static int t_FieldAbstractIntegratedPropagator_set__attitudeProvider(t_FieldAbstractIntegratedPropagator *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &value))
            {
              INT_CALL(self->object.setAttitudeProvider(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "attitudeProvider", arg);
          return -1;
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_get__basicDimension(t_FieldAbstractIntegratedPropagator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getBasicDimension());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_get__calls(t_FieldAbstractIntegratedPropagator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getCalls());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_get__ephemerisGenerator(t_FieldAbstractIntegratedPropagator *self, void *data)
        {
          ::org::orekit::propagation::FieldEphemerisGenerator value((jobject) NULL);
          OBJ_CALL(value = self->object.getEphemerisGenerator());
          return ::org::orekit::propagation::t_FieldEphemerisGenerator::wrap_Object(value);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_get__eventsDetectors(t_FieldAbstractIntegratedPropagator *self, void *data)
        {
          ::java::util::Collection value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventsDetectors());
          return ::java::util::t_Collection::wrap_Object(value);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_get__integratorName(t_FieldAbstractIntegratedPropagator *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getIntegratorName());
          return j2p(value);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_get__managedAdditionalStates(t_FieldAbstractIntegratedPropagator *self, void *data)
        {
          JArray< ::java::lang::String > value((jobject) NULL);
          OBJ_CALL(value = self->object.getManagedAdditionalStates());
          return JArray<jstring>(value.this$).wrap();
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_get__mu(t_FieldAbstractIntegratedPropagator *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getMu());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }
        static int t_FieldAbstractIntegratedPropagator_set__mu(t_FieldAbstractIntegratedPropagator *self, PyObject *arg, void *data)
        {
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
            {
              INT_CALL(self->object.setMu(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "mu", arg);
          return -1;
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_get__propagationType(t_FieldAbstractIntegratedPropagator *self, void *data)
        {
          ::org::orekit::propagation::PropagationType value((jobject) NULL);
          OBJ_CALL(value = self->object.getPropagationType());
          return ::org::orekit::propagation::t_PropagationType::wrap_Object(value);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_get__resetAtEnd(t_FieldAbstractIntegratedPropagator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.getResetAtEnd());
          Py_RETURN_BOOL(value);
        }
        static int t_FieldAbstractIntegratedPropagator_set__resetAtEnd(t_FieldAbstractIntegratedPropagator *self, PyObject *arg, void *data)
        {
          {
            jboolean value;
            if (!parseArg(arg, "Z", &value))
            {
              INT_CALL(self->object.setResetAtEnd(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "resetAtEnd", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmTleKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmTleKey.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmTle.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace omm {

              ::java::lang::Class *OmmTleKey::class$ = NULL;
              jmethodID *OmmTleKey::mids$ = NULL;
              bool OmmTleKey::live$ = false;
              OmmTleKey *OmmTleKey::AGOM = NULL;
              OmmTleKey *OmmTleKey::BSTAR = NULL;
              OmmTleKey *OmmTleKey::BTERM = NULL;
              OmmTleKey *OmmTleKey::CLASSIFICATION_TYPE = NULL;
              OmmTleKey *OmmTleKey::COMMENT = NULL;
              OmmTleKey *OmmTleKey::ELEMENT_SET_NO = NULL;
              OmmTleKey *OmmTleKey::EPHEMERIS_TYPE = NULL;
              OmmTleKey *OmmTleKey::MEAN_MOTION_DDOT = NULL;
              OmmTleKey *OmmTleKey::MEAN_MOTION_DOT = NULL;
              OmmTleKey *OmmTleKey::NORAD_CAT_ID = NULL;
              OmmTleKey *OmmTleKey::REV_AT_EPOCH = NULL;

              jclass OmmTleKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/omm/OmmTleKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_c11458c629d67d88] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/omm/OmmTle;)Z");
                  mids$[mid_valueOf_deefc44b36ff43e7] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/omm/OmmTleKey;");
                  mids$[mid_values_f658fe508d5810e4] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/omm/OmmTleKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  AGOM = new OmmTleKey(env->getStaticObjectField(cls, "AGOM", "Lorg/orekit/files/ccsds/ndm/odm/omm/OmmTleKey;"));
                  BSTAR = new OmmTleKey(env->getStaticObjectField(cls, "BSTAR", "Lorg/orekit/files/ccsds/ndm/odm/omm/OmmTleKey;"));
                  BTERM = new OmmTleKey(env->getStaticObjectField(cls, "BTERM", "Lorg/orekit/files/ccsds/ndm/odm/omm/OmmTleKey;"));
                  CLASSIFICATION_TYPE = new OmmTleKey(env->getStaticObjectField(cls, "CLASSIFICATION_TYPE", "Lorg/orekit/files/ccsds/ndm/odm/omm/OmmTleKey;"));
                  COMMENT = new OmmTleKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/odm/omm/OmmTleKey;"));
                  ELEMENT_SET_NO = new OmmTleKey(env->getStaticObjectField(cls, "ELEMENT_SET_NO", "Lorg/orekit/files/ccsds/ndm/odm/omm/OmmTleKey;"));
                  EPHEMERIS_TYPE = new OmmTleKey(env->getStaticObjectField(cls, "EPHEMERIS_TYPE", "Lorg/orekit/files/ccsds/ndm/odm/omm/OmmTleKey;"));
                  MEAN_MOTION_DDOT = new OmmTleKey(env->getStaticObjectField(cls, "MEAN_MOTION_DDOT", "Lorg/orekit/files/ccsds/ndm/odm/omm/OmmTleKey;"));
                  MEAN_MOTION_DOT = new OmmTleKey(env->getStaticObjectField(cls, "MEAN_MOTION_DOT", "Lorg/orekit/files/ccsds/ndm/odm/omm/OmmTleKey;"));
                  NORAD_CAT_ID = new OmmTleKey(env->getStaticObjectField(cls, "NORAD_CAT_ID", "Lorg/orekit/files/ccsds/ndm/odm/omm/OmmTleKey;"));
                  REV_AT_EPOCH = new OmmTleKey(env->getStaticObjectField(cls, "REV_AT_EPOCH", "Lorg/orekit/files/ccsds/ndm/odm/omm/OmmTleKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean OmmTleKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::omm::OmmTle & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_c11458c629d67d88], a0.this$, a1.this$, a2.this$);
              }

              OmmTleKey OmmTleKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return OmmTleKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_deefc44b36ff43e7], a0.this$));
              }

              JArray< OmmTleKey > OmmTleKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< OmmTleKey >(env->callStaticObjectMethod(cls, mids$[mid_values_f658fe508d5810e4]));
              }
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace omm {
              static PyObject *t_OmmTleKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OmmTleKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OmmTleKey_of_(t_OmmTleKey *self, PyObject *args);
              static PyObject *t_OmmTleKey_process(t_OmmTleKey *self, PyObject *args);
              static PyObject *t_OmmTleKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_OmmTleKey_values(PyTypeObject *type);
              static PyObject *t_OmmTleKey_get__parameters_(t_OmmTleKey *self, void *data);
              static PyGetSetDef t_OmmTleKey__fields_[] = {
                DECLARE_GET_FIELD(t_OmmTleKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OmmTleKey__methods_[] = {
                DECLARE_METHOD(t_OmmTleKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OmmTleKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OmmTleKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_OmmTleKey, process, METH_VARARGS),
                DECLARE_METHOD(t_OmmTleKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_OmmTleKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OmmTleKey)[] = {
                { Py_tp_methods, t_OmmTleKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_OmmTleKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OmmTleKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(OmmTleKey, t_OmmTleKey, OmmTleKey);
              PyObject *t_OmmTleKey::wrap_Object(const OmmTleKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OmmTleKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OmmTleKey *self = (t_OmmTleKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_OmmTleKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OmmTleKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OmmTleKey *self = (t_OmmTleKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_OmmTleKey::install(PyObject *module)
              {
                installType(&PY_TYPE(OmmTleKey), &PY_TYPE_DEF(OmmTleKey), module, "OmmTleKey", 0);
              }

              void t_OmmTleKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTleKey), "class_", make_descriptor(OmmTleKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTleKey), "wrapfn_", make_descriptor(t_OmmTleKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTleKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(OmmTleKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTleKey), "AGOM", make_descriptor(t_OmmTleKey::wrap_Object(*OmmTleKey::AGOM)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTleKey), "BSTAR", make_descriptor(t_OmmTleKey::wrap_Object(*OmmTleKey::BSTAR)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTleKey), "BTERM", make_descriptor(t_OmmTleKey::wrap_Object(*OmmTleKey::BTERM)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTleKey), "CLASSIFICATION_TYPE", make_descriptor(t_OmmTleKey::wrap_Object(*OmmTleKey::CLASSIFICATION_TYPE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTleKey), "COMMENT", make_descriptor(t_OmmTleKey::wrap_Object(*OmmTleKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTleKey), "ELEMENT_SET_NO", make_descriptor(t_OmmTleKey::wrap_Object(*OmmTleKey::ELEMENT_SET_NO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTleKey), "EPHEMERIS_TYPE", make_descriptor(t_OmmTleKey::wrap_Object(*OmmTleKey::EPHEMERIS_TYPE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTleKey), "MEAN_MOTION_DDOT", make_descriptor(t_OmmTleKey::wrap_Object(*OmmTleKey::MEAN_MOTION_DDOT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTleKey), "MEAN_MOTION_DOT", make_descriptor(t_OmmTleKey::wrap_Object(*OmmTleKey::MEAN_MOTION_DOT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTleKey), "NORAD_CAT_ID", make_descriptor(t_OmmTleKey::wrap_Object(*OmmTleKey::NORAD_CAT_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTleKey), "REV_AT_EPOCH", make_descriptor(t_OmmTleKey::wrap_Object(*OmmTleKey::REV_AT_EPOCH)));
              }

              static PyObject *t_OmmTleKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OmmTleKey::initializeClass, 1)))
                  return NULL;
                return t_OmmTleKey::wrap_Object(OmmTleKey(((t_OmmTleKey *) arg)->object.this$));
              }
              static PyObject *t_OmmTleKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OmmTleKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OmmTleKey_of_(t_OmmTleKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_OmmTleKey_process(t_OmmTleKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::omm::OmmTle a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::odm::omm::OmmTle::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_OmmTleKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                OmmTleKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::omm::OmmTleKey::valueOf(a0));
                  return t_OmmTleKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_OmmTleKey_values(PyTypeObject *type)
              {
                JArray< OmmTleKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::omm::OmmTleKey::values());
                return JArray<jobject>(result.this$).wrap(t_OmmTleKey::wrap_jobject);
              }
              static PyObject *t_OmmTleKey_get__parameters_(t_OmmTleKey *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/rflink/gps/SubFrame4E.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {

          ::java::lang::Class *SubFrame4E::class$ = NULL;
          jmethodID *SubFrame4E::mids$ = NULL;
          bool SubFrame4E::live$ = false;
          jint SubFrame4E::NB_AS = (jint) 0;
          jint SubFrame4E::NB_SVH = (jint) 0;

          jclass SubFrame4E::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/rflink/gps/SubFrame4E");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getAntiSpoofing_d938fc64e8c6df2d] = env->getMethodID(cls, "getAntiSpoofing", "(I)I");
              mids$[mid_getReserved10_d6ab429752e7c267] = env->getMethodID(cls, "getReserved10", "()I");
              mids$[mid_getReserved8_d6ab429752e7c267] = env->getMethodID(cls, "getReserved8", "()I");
              mids$[mid_getSvHealth_d938fc64e8c6df2d] = env->getMethodID(cls, "getSvHealth", "(I)I");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              NB_AS = env->getStaticIntField(cls, "NB_AS");
              NB_SVH = env->getStaticIntField(cls, "NB_SVH");
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jint SubFrame4E::getAntiSpoofing(jint a0) const
          {
            return env->callIntMethod(this$, mids$[mid_getAntiSpoofing_d938fc64e8c6df2d], a0);
          }

          jint SubFrame4E::getReserved10() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved10_d6ab429752e7c267]);
          }

          jint SubFrame4E::getReserved8() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved8_d6ab429752e7c267]);
          }

          jint SubFrame4E::getSvHealth(jint a0) const
          {
            return env->callIntMethod(this$, mids$[mid_getSvHealth_d938fc64e8c6df2d], a0);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {
          static PyObject *t_SubFrame4E_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame4E_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame4E_getAntiSpoofing(t_SubFrame4E *self, PyObject *args);
          static PyObject *t_SubFrame4E_getReserved10(t_SubFrame4E *self);
          static PyObject *t_SubFrame4E_getReserved8(t_SubFrame4E *self);
          static PyObject *t_SubFrame4E_getSvHealth(t_SubFrame4E *self, PyObject *arg);
          static PyObject *t_SubFrame4E_get__reserved10(t_SubFrame4E *self, void *data);
          static PyObject *t_SubFrame4E_get__reserved8(t_SubFrame4E *self, void *data);
          static PyGetSetDef t_SubFrame4E__fields_[] = {
            DECLARE_GET_FIELD(t_SubFrame4E, reserved10),
            DECLARE_GET_FIELD(t_SubFrame4E, reserved8),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SubFrame4E__methods_[] = {
            DECLARE_METHOD(t_SubFrame4E, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame4E, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame4E, getAntiSpoofing, METH_VARARGS),
            DECLARE_METHOD(t_SubFrame4E, getReserved10, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4E, getReserved8, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4E, getSvHealth, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubFrame4E)[] = {
            { Py_tp_methods, t_SubFrame4E__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SubFrame4E__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubFrame4E)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::rflink::gps::SubFrame45),
            NULL
          };

          DEFINE_TYPE(SubFrame4E, t_SubFrame4E, SubFrame4E);

          void t_SubFrame4E::install(PyObject *module)
          {
            installType(&PY_TYPE(SubFrame4E), &PY_TYPE_DEF(SubFrame4E), module, "SubFrame4E", 0);
          }

          void t_SubFrame4E::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4E), "class_", make_descriptor(SubFrame4E::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4E), "wrapfn_", make_descriptor(t_SubFrame4E::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4E), "boxfn_", make_descriptor(boxObject));
            env->getClass(SubFrame4E::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4E), "NB_AS", make_descriptor(SubFrame4E::NB_AS));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4E), "NB_SVH", make_descriptor(SubFrame4E::NB_SVH));
          }

          static PyObject *t_SubFrame4E_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubFrame4E::initializeClass, 1)))
              return NULL;
            return t_SubFrame4E::wrap_Object(SubFrame4E(((t_SubFrame4E *) arg)->object.this$));
          }
          static PyObject *t_SubFrame4E_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubFrame4E::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SubFrame4E_getAntiSpoofing(t_SubFrame4E *self, PyObject *args)
          {
            jint a0;
            jint result;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.getAntiSpoofing(a0));
              return PyLong_FromLong((long) result);
            }

            return callSuper(PY_TYPE(SubFrame4E), (PyObject *) self, "getAntiSpoofing", args, 2);
          }

          static PyObject *t_SubFrame4E_getReserved10(t_SubFrame4E *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved10());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4E_getReserved8(t_SubFrame4E *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved8());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4E_getSvHealth(t_SubFrame4E *self, PyObject *arg)
          {
            jint a0;
            jint result;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.getSvHealth(a0));
              return PyLong_FromLong((long) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getSvHealth", arg);
            return NULL;
          }

          static PyObject *t_SubFrame4E_get__reserved10(t_SubFrame4E *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved10());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4E_get__reserved8(t_SubFrame4E *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved8());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}

#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FieldLatitudeCrossingDetector.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldLatitudeCrossingDetector::class$ = NULL;
        jmethodID *FieldLatitudeCrossingDetector::mids$ = NULL;
        bool FieldLatitudeCrossingDetector::live$ = false;

        jclass FieldLatitudeCrossingDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldLatitudeCrossingDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1287f091a4811e16] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/bodies/OneAxisEllipsoid;D)V");
            mids$[mid_init$_a783394cef2e1482] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/OneAxisEllipsoid;D)V");
            mids$[mid_g_de1c2d709eb2829c] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getBody_0c55bd1adf955c4c] = env->getMethodID(cls, "getBody", "()Lorg/orekit/bodies/OneAxisEllipsoid;");
            mids$[mid_getLatitude_557b8123390d8d0c] = env->getMethodID(cls, "getLatitude", "()D");
            mids$[mid_create_a84be14494f527bd] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldLatitudeCrossingDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldLatitudeCrossingDetector::FieldLatitudeCrossingDetector(const ::org::hipparchus::Field & a0, const ::org::orekit::bodies::OneAxisEllipsoid & a1, jdouble a2) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_1287f091a4811e16, a0.this$, a1.this$, a2)) {}

        FieldLatitudeCrossingDetector::FieldLatitudeCrossingDetector(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2, jdouble a3) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_a783394cef2e1482, a0.this$, a1.this$, a2.this$, a3)) {}

        ::org::hipparchus::CalculusFieldElement FieldLatitudeCrossingDetector::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_de1c2d709eb2829c], a0.this$));
        }

        ::org::orekit::bodies::OneAxisEllipsoid FieldLatitudeCrossingDetector::getBody() const
        {
          return ::org::orekit::bodies::OneAxisEllipsoid(env->callObjectMethod(this$, mids$[mid_getBody_0c55bd1adf955c4c]));
        }

        jdouble FieldLatitudeCrossingDetector::getLatitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLatitude_557b8123390d8d0c]);
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
        static PyObject *t_FieldLatitudeCrossingDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldLatitudeCrossingDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldLatitudeCrossingDetector_of_(t_FieldLatitudeCrossingDetector *self, PyObject *args);
        static int t_FieldLatitudeCrossingDetector_init_(t_FieldLatitudeCrossingDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldLatitudeCrossingDetector_g(t_FieldLatitudeCrossingDetector *self, PyObject *args);
        static PyObject *t_FieldLatitudeCrossingDetector_getBody(t_FieldLatitudeCrossingDetector *self);
        static PyObject *t_FieldLatitudeCrossingDetector_getLatitude(t_FieldLatitudeCrossingDetector *self);
        static PyObject *t_FieldLatitudeCrossingDetector_get__body(t_FieldLatitudeCrossingDetector *self, void *data);
        static PyObject *t_FieldLatitudeCrossingDetector_get__latitude(t_FieldLatitudeCrossingDetector *self, void *data);
        static PyObject *t_FieldLatitudeCrossingDetector_get__parameters_(t_FieldLatitudeCrossingDetector *self, void *data);
        static PyGetSetDef t_FieldLatitudeCrossingDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldLatitudeCrossingDetector, body),
          DECLARE_GET_FIELD(t_FieldLatitudeCrossingDetector, latitude),
          DECLARE_GET_FIELD(t_FieldLatitudeCrossingDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldLatitudeCrossingDetector__methods_[] = {
          DECLARE_METHOD(t_FieldLatitudeCrossingDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldLatitudeCrossingDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldLatitudeCrossingDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldLatitudeCrossingDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_FieldLatitudeCrossingDetector, getBody, METH_NOARGS),
          DECLARE_METHOD(t_FieldLatitudeCrossingDetector, getLatitude, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldLatitudeCrossingDetector)[] = {
          { Py_tp_methods, t_FieldLatitudeCrossingDetector__methods_ },
          { Py_tp_init, (void *) t_FieldLatitudeCrossingDetector_init_ },
          { Py_tp_getset, t_FieldLatitudeCrossingDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldLatitudeCrossingDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::FieldAbstractDetector),
          NULL
        };

        DEFINE_TYPE(FieldLatitudeCrossingDetector, t_FieldLatitudeCrossingDetector, FieldLatitudeCrossingDetector);
        PyObject *t_FieldLatitudeCrossingDetector::wrap_Object(const FieldLatitudeCrossingDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldLatitudeCrossingDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldLatitudeCrossingDetector *self = (t_FieldLatitudeCrossingDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldLatitudeCrossingDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldLatitudeCrossingDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldLatitudeCrossingDetector *self = (t_FieldLatitudeCrossingDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldLatitudeCrossingDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldLatitudeCrossingDetector), &PY_TYPE_DEF(FieldLatitudeCrossingDetector), module, "FieldLatitudeCrossingDetector", 0);
        }

        void t_FieldLatitudeCrossingDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLatitudeCrossingDetector), "class_", make_descriptor(FieldLatitudeCrossingDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLatitudeCrossingDetector), "wrapfn_", make_descriptor(t_FieldLatitudeCrossingDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLatitudeCrossingDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldLatitudeCrossingDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldLatitudeCrossingDetector::initializeClass, 1)))
            return NULL;
          return t_FieldLatitudeCrossingDetector::wrap_Object(FieldLatitudeCrossingDetector(((t_FieldLatitudeCrossingDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldLatitudeCrossingDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldLatitudeCrossingDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldLatitudeCrossingDetector_of_(t_FieldLatitudeCrossingDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldLatitudeCrossingDetector_init_(t_FieldLatitudeCrossingDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::bodies::OneAxisEllipsoid a1((jobject) NULL);
              jdouble a2;
              FieldLatitudeCrossingDetector object((jobject) NULL);

              if (!parseArgs(args, "KkD", ::org::hipparchus::Field::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
              {
                INT_CALL(object = FieldLatitudeCrossingDetector(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::bodies::OneAxisEllipsoid a2((jobject) NULL);
              jdouble a3;
              FieldLatitudeCrossingDetector object((jobject) NULL);

              if (!parseArgs(args, "KKkD", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3))
              {
                INT_CALL(object = FieldLatitudeCrossingDetector(a0, a1, a2, a3));
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

        static PyObject *t_FieldLatitudeCrossingDetector_g(t_FieldLatitudeCrossingDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldLatitudeCrossingDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_FieldLatitudeCrossingDetector_getBody(t_FieldLatitudeCrossingDetector *self)
        {
          ::org::orekit::bodies::OneAxisEllipsoid result((jobject) NULL);
          OBJ_CALL(result = self->object.getBody());
          return ::org::orekit::bodies::t_OneAxisEllipsoid::wrap_Object(result);
        }

        static PyObject *t_FieldLatitudeCrossingDetector_getLatitude(t_FieldLatitudeCrossingDetector *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLatitude());
          return PyFloat_FromDouble((double) result);
        }
        static PyObject *t_FieldLatitudeCrossingDetector_get__parameters_(t_FieldLatitudeCrossingDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldLatitudeCrossingDetector_get__body(t_FieldLatitudeCrossingDetector *self, void *data)
        {
          ::org::orekit::bodies::OneAxisEllipsoid value((jobject) NULL);
          OBJ_CALL(value = self->object.getBody());
          return ::org::orekit::bodies::t_OneAxisEllipsoid::wrap_Object(value);
        }

        static PyObject *t_FieldLatitudeCrossingDetector_get__latitude(t_FieldLatitudeCrossingDetector *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLatitude());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/AbstractTimeScales.h"
#include "org/orekit/time/GMSTScale.h"
#include "org/orekit/time/UT1Scale.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *AbstractTimeScales::class$ = NULL;
      jmethodID *AbstractTimeScales::mids$ = NULL;
      bool AbstractTimeScales::live$ = false;

      jclass AbstractTimeScales::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/AbstractTimeScales");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_createBesselianEpoch_8ef471ef852a9678] = env->getMethodID(cls, "createBesselianEpoch", "(D)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_createJulianEpoch_8ef471ef852a9678] = env->getMethodID(cls, "createJulianEpoch", "(D)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getBeidouEpoch_7a97f7e149e79afb] = env->getMethodID(cls, "getBeidouEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getCcsdsEpoch_7a97f7e149e79afb] = env->getMethodID(cls, "getCcsdsEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getFiftiesEpoch_7a97f7e149e79afb] = env->getMethodID(cls, "getFiftiesEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getFutureInfinity_7a97f7e149e79afb] = env->getMethodID(cls, "getFutureInfinity", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getGMST_265dd6a5eaf62dee] = env->getMethodID(cls, "getGMST", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/time/GMSTScale;");
          mids$[mid_getGalileoEpoch_7a97f7e149e79afb] = env->getMethodID(cls, "getGalileoEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getGlonassEpoch_7a97f7e149e79afb] = env->getMethodID(cls, "getGlonassEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getGpsEpoch_7a97f7e149e79afb] = env->getMethodID(cls, "getGpsEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getIrnssEpoch_7a97f7e149e79afb] = env->getMethodID(cls, "getIrnssEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getJ2000Epoch_7a97f7e149e79afb] = env->getMethodID(cls, "getJ2000Epoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getJavaEpoch_7a97f7e149e79afb] = env->getMethodID(cls, "getJavaEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getJulianEpoch_7a97f7e149e79afb] = env->getMethodID(cls, "getJulianEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getModifiedJulianEpoch_7a97f7e149e79afb] = env->getMethodID(cls, "getModifiedJulianEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getPastInfinity_7a97f7e149e79afb] = env->getMethodID(cls, "getPastInfinity", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getQzssEpoch_7a97f7e149e79afb] = env->getMethodID(cls, "getQzssEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getUT1_672057b4f848abf0] = env->getMethodID(cls, "getUT1", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/time/UT1Scale;");
          mids$[mid_getUT1_c21aaa13d4f3f95e] = env->getMethodID(cls, "getUT1", "(Lorg/orekit/frames/EOPHistory;)Lorg/orekit/time/UT1Scale;");
          mids$[mid_getEopHistory_9cf4a1ec2e53bbd3] = env->getMethodID(cls, "getEopHistory", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/EOPHistory;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AbstractTimeScales::AbstractTimeScales() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      ::org::orekit::time::AbsoluteDate AbstractTimeScales::createBesselianEpoch(jdouble a0) const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_createBesselianEpoch_8ef471ef852a9678], a0));
      }

      ::org::orekit::time::AbsoluteDate AbstractTimeScales::createJulianEpoch(jdouble a0) const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_createJulianEpoch_8ef471ef852a9678], a0));
      }

      ::org::orekit::time::AbsoluteDate AbstractTimeScales::getBeidouEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getBeidouEpoch_7a97f7e149e79afb]));
      }

      ::org::orekit::time::AbsoluteDate AbstractTimeScales::getCcsdsEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getCcsdsEpoch_7a97f7e149e79afb]));
      }

      ::org::orekit::time::AbsoluteDate AbstractTimeScales::getFiftiesEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getFiftiesEpoch_7a97f7e149e79afb]));
      }

      ::org::orekit::time::AbsoluteDate AbstractTimeScales::getFutureInfinity() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getFutureInfinity_7a97f7e149e79afb]));
      }

      ::org::orekit::time::GMSTScale AbstractTimeScales::getGMST(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::time::GMSTScale(env->callObjectMethod(this$, mids$[mid_getGMST_265dd6a5eaf62dee], a0.this$, a1));
      }

      ::org::orekit::time::AbsoluteDate AbstractTimeScales::getGalileoEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getGalileoEpoch_7a97f7e149e79afb]));
      }

      ::org::orekit::time::AbsoluteDate AbstractTimeScales::getGlonassEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getGlonassEpoch_7a97f7e149e79afb]));
      }

      ::org::orekit::time::AbsoluteDate AbstractTimeScales::getGpsEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getGpsEpoch_7a97f7e149e79afb]));
      }

      ::org::orekit::time::AbsoluteDate AbstractTimeScales::getIrnssEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getIrnssEpoch_7a97f7e149e79afb]));
      }

      ::org::orekit::time::AbsoluteDate AbstractTimeScales::getJ2000Epoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getJ2000Epoch_7a97f7e149e79afb]));
      }

      ::org::orekit::time::AbsoluteDate AbstractTimeScales::getJavaEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getJavaEpoch_7a97f7e149e79afb]));
      }

      ::org::orekit::time::AbsoluteDate AbstractTimeScales::getJulianEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getJulianEpoch_7a97f7e149e79afb]));
      }

      ::org::orekit::time::AbsoluteDate AbstractTimeScales::getModifiedJulianEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getModifiedJulianEpoch_7a97f7e149e79afb]));
      }

      ::org::orekit::time::AbsoluteDate AbstractTimeScales::getPastInfinity() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getPastInfinity_7a97f7e149e79afb]));
      }

      ::org::orekit::time::AbsoluteDate AbstractTimeScales::getQzssEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getQzssEpoch_7a97f7e149e79afb]));
      }

      ::org::orekit::time::UT1Scale AbstractTimeScales::getUT1(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::time::UT1Scale(env->callObjectMethod(this$, mids$[mid_getUT1_672057b4f848abf0], a0.this$, a1));
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
      static PyObject *t_AbstractTimeScales_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractTimeScales_instance_(PyTypeObject *type, PyObject *arg);
      static int t_AbstractTimeScales_init_(t_AbstractTimeScales *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AbstractTimeScales_createBesselianEpoch(t_AbstractTimeScales *self, PyObject *arg);
      static PyObject *t_AbstractTimeScales_createJulianEpoch(t_AbstractTimeScales *self, PyObject *arg);
      static PyObject *t_AbstractTimeScales_getBeidouEpoch(t_AbstractTimeScales *self);
      static PyObject *t_AbstractTimeScales_getCcsdsEpoch(t_AbstractTimeScales *self);
      static PyObject *t_AbstractTimeScales_getFiftiesEpoch(t_AbstractTimeScales *self);
      static PyObject *t_AbstractTimeScales_getFutureInfinity(t_AbstractTimeScales *self);
      static PyObject *t_AbstractTimeScales_getGMST(t_AbstractTimeScales *self, PyObject *args);
      static PyObject *t_AbstractTimeScales_getGalileoEpoch(t_AbstractTimeScales *self);
      static PyObject *t_AbstractTimeScales_getGlonassEpoch(t_AbstractTimeScales *self);
      static PyObject *t_AbstractTimeScales_getGpsEpoch(t_AbstractTimeScales *self);
      static PyObject *t_AbstractTimeScales_getIrnssEpoch(t_AbstractTimeScales *self);
      static PyObject *t_AbstractTimeScales_getJ2000Epoch(t_AbstractTimeScales *self);
      static PyObject *t_AbstractTimeScales_getJavaEpoch(t_AbstractTimeScales *self);
      static PyObject *t_AbstractTimeScales_getJulianEpoch(t_AbstractTimeScales *self);
      static PyObject *t_AbstractTimeScales_getModifiedJulianEpoch(t_AbstractTimeScales *self);
      static PyObject *t_AbstractTimeScales_getPastInfinity(t_AbstractTimeScales *self);
      static PyObject *t_AbstractTimeScales_getQzssEpoch(t_AbstractTimeScales *self);
      static PyObject *t_AbstractTimeScales_getUT1(t_AbstractTimeScales *self, PyObject *args);
      static PyObject *t_AbstractTimeScales_get__beidouEpoch(t_AbstractTimeScales *self, void *data);
      static PyObject *t_AbstractTimeScales_get__ccsdsEpoch(t_AbstractTimeScales *self, void *data);
      static PyObject *t_AbstractTimeScales_get__fiftiesEpoch(t_AbstractTimeScales *self, void *data);
      static PyObject *t_AbstractTimeScales_get__futureInfinity(t_AbstractTimeScales *self, void *data);
      static PyObject *t_AbstractTimeScales_get__galileoEpoch(t_AbstractTimeScales *self, void *data);
      static PyObject *t_AbstractTimeScales_get__glonassEpoch(t_AbstractTimeScales *self, void *data);
      static PyObject *t_AbstractTimeScales_get__gpsEpoch(t_AbstractTimeScales *self, void *data);
      static PyObject *t_AbstractTimeScales_get__irnssEpoch(t_AbstractTimeScales *self, void *data);
      static PyObject *t_AbstractTimeScales_get__j2000Epoch(t_AbstractTimeScales *self, void *data);
      static PyObject *t_AbstractTimeScales_get__javaEpoch(t_AbstractTimeScales *self, void *data);
      static PyObject *t_AbstractTimeScales_get__julianEpoch(t_AbstractTimeScales *self, void *data);
      static PyObject *t_AbstractTimeScales_get__modifiedJulianEpoch(t_AbstractTimeScales *self, void *data);
      static PyObject *t_AbstractTimeScales_get__pastInfinity(t_AbstractTimeScales *self, void *data);
      static PyObject *t_AbstractTimeScales_get__qzssEpoch(t_AbstractTimeScales *self, void *data);
      static PyGetSetDef t_AbstractTimeScales__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractTimeScales, beidouEpoch),
        DECLARE_GET_FIELD(t_AbstractTimeScales, ccsdsEpoch),
        DECLARE_GET_FIELD(t_AbstractTimeScales, fiftiesEpoch),
        DECLARE_GET_FIELD(t_AbstractTimeScales, futureInfinity),
        DECLARE_GET_FIELD(t_AbstractTimeScales, galileoEpoch),
        DECLARE_GET_FIELD(t_AbstractTimeScales, glonassEpoch),
        DECLARE_GET_FIELD(t_AbstractTimeScales, gpsEpoch),
        DECLARE_GET_FIELD(t_AbstractTimeScales, irnssEpoch),
        DECLARE_GET_FIELD(t_AbstractTimeScales, j2000Epoch),
        DECLARE_GET_FIELD(t_AbstractTimeScales, javaEpoch),
        DECLARE_GET_FIELD(t_AbstractTimeScales, julianEpoch),
        DECLARE_GET_FIELD(t_AbstractTimeScales, modifiedJulianEpoch),
        DECLARE_GET_FIELD(t_AbstractTimeScales, pastInfinity),
        DECLARE_GET_FIELD(t_AbstractTimeScales, qzssEpoch),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractTimeScales__methods_[] = {
        DECLARE_METHOD(t_AbstractTimeScales, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractTimeScales, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractTimeScales, createBesselianEpoch, METH_O),
        DECLARE_METHOD(t_AbstractTimeScales, createJulianEpoch, METH_O),
        DECLARE_METHOD(t_AbstractTimeScales, getBeidouEpoch, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeScales, getCcsdsEpoch, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeScales, getFiftiesEpoch, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeScales, getFutureInfinity, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeScales, getGMST, METH_VARARGS),
        DECLARE_METHOD(t_AbstractTimeScales, getGalileoEpoch, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeScales, getGlonassEpoch, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeScales, getGpsEpoch, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeScales, getIrnssEpoch, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeScales, getJ2000Epoch, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeScales, getJavaEpoch, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeScales, getJulianEpoch, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeScales, getModifiedJulianEpoch, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeScales, getPastInfinity, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeScales, getQzssEpoch, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeScales, getUT1, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractTimeScales)[] = {
        { Py_tp_methods, t_AbstractTimeScales__methods_ },
        { Py_tp_init, (void *) t_AbstractTimeScales_init_ },
        { Py_tp_getset, t_AbstractTimeScales__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractTimeScales)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractTimeScales, t_AbstractTimeScales, AbstractTimeScales);

      void t_AbstractTimeScales::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractTimeScales), &PY_TYPE_DEF(AbstractTimeScales), module, "AbstractTimeScales", 0);
      }

      void t_AbstractTimeScales::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractTimeScales), "class_", make_descriptor(AbstractTimeScales::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractTimeScales), "wrapfn_", make_descriptor(t_AbstractTimeScales::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractTimeScales), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractTimeScales_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractTimeScales::initializeClass, 1)))
          return NULL;
        return t_AbstractTimeScales::wrap_Object(AbstractTimeScales(((t_AbstractTimeScales *) arg)->object.this$));
      }
      static PyObject *t_AbstractTimeScales_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractTimeScales::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_AbstractTimeScales_init_(t_AbstractTimeScales *self, PyObject *args, PyObject *kwds)
      {
        AbstractTimeScales object((jobject) NULL);

        INT_CALL(object = AbstractTimeScales());
        self->object = object;

        return 0;
      }

      static PyObject *t_AbstractTimeScales_createBesselianEpoch(t_AbstractTimeScales *self, PyObject *arg)
      {
        jdouble a0;
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.createBesselianEpoch(a0));
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "createBesselianEpoch", arg);
        return NULL;
      }

      static PyObject *t_AbstractTimeScales_createJulianEpoch(t_AbstractTimeScales *self, PyObject *arg)
      {
        jdouble a0;
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.createJulianEpoch(a0));
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "createJulianEpoch", arg);
        return NULL;
      }

      static PyObject *t_AbstractTimeScales_getBeidouEpoch(t_AbstractTimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getBeidouEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AbstractTimeScales_getCcsdsEpoch(t_AbstractTimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getCcsdsEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AbstractTimeScales_getFiftiesEpoch(t_AbstractTimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getFiftiesEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AbstractTimeScales_getFutureInfinity(t_AbstractTimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getFutureInfinity());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AbstractTimeScales_getGMST(t_AbstractTimeScales *self, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        ::org::orekit::time::GMSTScale result((jobject) NULL);

        if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.getGMST(a0, a1));
          return ::org::orekit::time::t_GMSTScale::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getGMST", args);
        return NULL;
      }

      static PyObject *t_AbstractTimeScales_getGalileoEpoch(t_AbstractTimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getGalileoEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AbstractTimeScales_getGlonassEpoch(t_AbstractTimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getGlonassEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AbstractTimeScales_getGpsEpoch(t_AbstractTimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getGpsEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AbstractTimeScales_getIrnssEpoch(t_AbstractTimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getIrnssEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AbstractTimeScales_getJ2000Epoch(t_AbstractTimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getJ2000Epoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AbstractTimeScales_getJavaEpoch(t_AbstractTimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getJavaEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AbstractTimeScales_getJulianEpoch(t_AbstractTimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getJulianEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AbstractTimeScales_getModifiedJulianEpoch(t_AbstractTimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getModifiedJulianEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AbstractTimeScales_getPastInfinity(t_AbstractTimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getPastInfinity());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AbstractTimeScales_getQzssEpoch(t_AbstractTimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getQzssEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AbstractTimeScales_getUT1(t_AbstractTimeScales *self, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        ::org::orekit::time::UT1Scale result((jobject) NULL);

        if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.getUT1(a0, a1));
          return ::org::orekit::time::t_UT1Scale::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getUT1", args);
        return NULL;
      }

      static PyObject *t_AbstractTimeScales_get__beidouEpoch(t_AbstractTimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getBeidouEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AbstractTimeScales_get__ccsdsEpoch(t_AbstractTimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getCcsdsEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AbstractTimeScales_get__fiftiesEpoch(t_AbstractTimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getFiftiesEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AbstractTimeScales_get__futureInfinity(t_AbstractTimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getFutureInfinity());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AbstractTimeScales_get__galileoEpoch(t_AbstractTimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getGalileoEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AbstractTimeScales_get__glonassEpoch(t_AbstractTimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getGlonassEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AbstractTimeScales_get__gpsEpoch(t_AbstractTimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getGpsEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AbstractTimeScales_get__irnssEpoch(t_AbstractTimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getIrnssEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AbstractTimeScales_get__j2000Epoch(t_AbstractTimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getJ2000Epoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AbstractTimeScales_get__javaEpoch(t_AbstractTimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getJavaEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AbstractTimeScales_get__julianEpoch(t_AbstractTimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getJulianEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AbstractTimeScales_get__modifiedJulianEpoch(t_AbstractTimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getModifiedJulianEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AbstractTimeScales_get__pastInfinity(t_AbstractTimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getPastInfinity());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AbstractTimeScales_get__qzssEpoch(t_AbstractTimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getQzssEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/filtering/DualFrequencySmoother.h"
#include "org/orekit/files/rinex/observation/ObservationData.h"
#include "java/util/List.h"
#include "org/orekit/gnss/ObservationType.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/estimation/measurements/filtering/SmoothedObservationDataSet.h"
#include "org/orekit/estimation/measurements/filtering/DualFrequencyHatchFilter.h"
#include "java/util/HashMap.h"
#include "java/lang/Class.h"
#include "org/orekit/files/rinex/observation/ObservationDataSet.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace filtering {

          ::java::lang::Class *DualFrequencySmoother::class$ = NULL;
          jmethodID *DualFrequencySmoother::mids$ = NULL;
          bool DualFrequencySmoother::live$ = false;

          jclass DualFrequencySmoother::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/filtering/DualFrequencySmoother");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_47602ef8408ea361] = env->getMethodID(cls, "<init>", "(DI)V");
              mids$[mid_copyObservationData_f6f450be0ab92fea] = env->getMethodID(cls, "copyObservationData", "(Lorg/orekit/files/rinex/observation/ObservationData;)Lorg/orekit/files/rinex/observation/ObservationData;");
              mids$[mid_createFilter_7a832b0eff2a17cf] = env->getMethodID(cls, "createFilter", "(Lorg/orekit/files/rinex/observation/ObservationData;Lorg/orekit/files/rinex/observation/ObservationData;Lorg/orekit/files/rinex/observation/ObservationData;Lorg/orekit/gnss/SatelliteSystem;)Lorg/orekit/estimation/measurements/filtering/DualFrequencyHatchFilter;");
              mids$[mid_filterDataSet_1a7469cb8fc0bf06] = env->getMethodID(cls, "filterDataSet", "(Ljava/util/List;Lorg/orekit/gnss/SatelliteSystem;ILorg/orekit/gnss/ObservationType;Lorg/orekit/gnss/ObservationType;)V");
              mids$[mid_getFilteredDataMap_2bd3906654d055d1] = env->getMethodID(cls, "getFilteredDataMap", "()Ljava/util/HashMap;");
              mids$[mid_getMapFilters_2bd3906654d055d1] = env->getMethodID(cls, "getMapFilters", "()Ljava/util/HashMap;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          DualFrequencySmoother::DualFrequencySmoother(jdouble a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_47602ef8408ea361, a0, a1)) {}

          ::org::orekit::files::rinex::observation::ObservationData DualFrequencySmoother::copyObservationData(const ::org::orekit::files::rinex::observation::ObservationData & a0) const
          {
            return ::org::orekit::files::rinex::observation::ObservationData(env->callObjectMethod(this$, mids$[mid_copyObservationData_f6f450be0ab92fea], a0.this$));
          }

          ::org::orekit::estimation::measurements::filtering::DualFrequencyHatchFilter DualFrequencySmoother::createFilter(const ::org::orekit::files::rinex::observation::ObservationData & a0, const ::org::orekit::files::rinex::observation::ObservationData & a1, const ::org::orekit::files::rinex::observation::ObservationData & a2, const ::org::orekit::gnss::SatelliteSystem & a3) const
          {
            return ::org::orekit::estimation::measurements::filtering::DualFrequencyHatchFilter(env->callObjectMethod(this$, mids$[mid_createFilter_7a832b0eff2a17cf], a0.this$, a1.this$, a2.this$, a3.this$));
          }

          void DualFrequencySmoother::filterDataSet(const ::java::util::List & a0, const ::org::orekit::gnss::SatelliteSystem & a1, jint a2, const ::org::orekit::gnss::ObservationType & a3, const ::org::orekit::gnss::ObservationType & a4) const
          {
            env->callVoidMethod(this$, mids$[mid_filterDataSet_1a7469cb8fc0bf06], a0.this$, a1.this$, a2, a3.this$, a4.this$);
          }

          ::java::util::HashMap DualFrequencySmoother::getFilteredDataMap() const
          {
            return ::java::util::HashMap(env->callObjectMethod(this$, mids$[mid_getFilteredDataMap_2bd3906654d055d1]));
          }

          ::java::util::HashMap DualFrequencySmoother::getMapFilters() const
          {
            return ::java::util::HashMap(env->callObjectMethod(this$, mids$[mid_getMapFilters_2bd3906654d055d1]));
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
    namespace estimation {
      namespace measurements {
        namespace filtering {
          static PyObject *t_DualFrequencySmoother_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DualFrequencySmoother_instance_(PyTypeObject *type, PyObject *arg);
          static int t_DualFrequencySmoother_init_(t_DualFrequencySmoother *self, PyObject *args, PyObject *kwds);
          static PyObject *t_DualFrequencySmoother_copyObservationData(t_DualFrequencySmoother *self, PyObject *arg);
          static PyObject *t_DualFrequencySmoother_createFilter(t_DualFrequencySmoother *self, PyObject *args);
          static PyObject *t_DualFrequencySmoother_filterDataSet(t_DualFrequencySmoother *self, PyObject *args);
          static PyObject *t_DualFrequencySmoother_getFilteredDataMap(t_DualFrequencySmoother *self);
          static PyObject *t_DualFrequencySmoother_getMapFilters(t_DualFrequencySmoother *self);
          static PyObject *t_DualFrequencySmoother_get__filteredDataMap(t_DualFrequencySmoother *self, void *data);
          static PyObject *t_DualFrequencySmoother_get__mapFilters(t_DualFrequencySmoother *self, void *data);
          static PyGetSetDef t_DualFrequencySmoother__fields_[] = {
            DECLARE_GET_FIELD(t_DualFrequencySmoother, filteredDataMap),
            DECLARE_GET_FIELD(t_DualFrequencySmoother, mapFilters),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_DualFrequencySmoother__methods_[] = {
            DECLARE_METHOD(t_DualFrequencySmoother, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DualFrequencySmoother, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DualFrequencySmoother, copyObservationData, METH_O),
            DECLARE_METHOD(t_DualFrequencySmoother, createFilter, METH_VARARGS),
            DECLARE_METHOD(t_DualFrequencySmoother, filterDataSet, METH_VARARGS),
            DECLARE_METHOD(t_DualFrequencySmoother, getFilteredDataMap, METH_NOARGS),
            DECLARE_METHOD(t_DualFrequencySmoother, getMapFilters, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DualFrequencySmoother)[] = {
            { Py_tp_methods, t_DualFrequencySmoother__methods_ },
            { Py_tp_init, (void *) t_DualFrequencySmoother_init_ },
            { Py_tp_getset, t_DualFrequencySmoother__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DualFrequencySmoother)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(DualFrequencySmoother, t_DualFrequencySmoother, DualFrequencySmoother);

          void t_DualFrequencySmoother::install(PyObject *module)
          {
            installType(&PY_TYPE(DualFrequencySmoother), &PY_TYPE_DEF(DualFrequencySmoother), module, "DualFrequencySmoother", 0);
          }

          void t_DualFrequencySmoother::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DualFrequencySmoother), "class_", make_descriptor(DualFrequencySmoother::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DualFrequencySmoother), "wrapfn_", make_descriptor(t_DualFrequencySmoother::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DualFrequencySmoother), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_DualFrequencySmoother_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DualFrequencySmoother::initializeClass, 1)))
              return NULL;
            return t_DualFrequencySmoother::wrap_Object(DualFrequencySmoother(((t_DualFrequencySmoother *) arg)->object.this$));
          }
          static PyObject *t_DualFrequencySmoother_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DualFrequencySmoother::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_DualFrequencySmoother_init_(t_DualFrequencySmoother *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jint a1;
            DualFrequencySmoother object((jobject) NULL);

            if (!parseArgs(args, "DI", &a0, &a1))
            {
              INT_CALL(object = DualFrequencySmoother(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_DualFrequencySmoother_copyObservationData(t_DualFrequencySmoother *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::observation::ObservationData a0((jobject) NULL);
            ::org::orekit::files::rinex::observation::ObservationData result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::observation::ObservationData::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.copyObservationData(a0));
              return ::org::orekit::files::rinex::observation::t_ObservationData::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "copyObservationData", arg);
            return NULL;
          }

          static PyObject *t_DualFrequencySmoother_createFilter(t_DualFrequencySmoother *self, PyObject *args)
          {
            ::org::orekit::files::rinex::observation::ObservationData a0((jobject) NULL);
            ::org::orekit::files::rinex::observation::ObservationData a1((jobject) NULL);
            ::org::orekit::files::rinex::observation::ObservationData a2((jobject) NULL);
            ::org::orekit::gnss::SatelliteSystem a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::estimation::measurements::filtering::DualFrequencyHatchFilter result((jobject) NULL);

            if (!parseArgs(args, "kkkK", ::org::orekit::files::rinex::observation::ObservationData::initializeClass, ::org::orekit::files::rinex::observation::ObservationData::initializeClass, ::org::orekit::files::rinex::observation::ObservationData::initializeClass, ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
            {
              OBJ_CALL(result = self->object.createFilter(a0, a1, a2, a3));
              return ::org::orekit::estimation::measurements::filtering::t_DualFrequencyHatchFilter::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "createFilter", args);
            return NULL;
          }

          static PyObject *t_DualFrequencySmoother_filterDataSet(t_DualFrequencySmoother *self, PyObject *args)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::gnss::SatelliteSystem a1((jobject) NULL);
            PyTypeObject **p1;
            jint a2;
            ::org::orekit::gnss::ObservationType a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::gnss::ObservationType a4((jobject) NULL);
            PyTypeObject **p4;

            if (!parseArgs(args, "KKIKK", ::java::util::List::initializeClass, ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::gnss::ObservationType::initializeClass, ::org::orekit::gnss::ObservationType::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a2, &a3, &p3, ::org::orekit::gnss::t_ObservationType::parameters_, &a4, &p4, ::org::orekit::gnss::t_ObservationType::parameters_))
            {
              OBJ_CALL(self->object.filterDataSet(a0, a1, a2, a3, a4));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "filterDataSet", args);
            return NULL;
          }

          static PyObject *t_DualFrequencySmoother_getFilteredDataMap(t_DualFrequencySmoother *self)
          {
            ::java::util::HashMap result((jobject) NULL);
            OBJ_CALL(result = self->object.getFilteredDataMap());
            return ::java::util::t_HashMap::wrap_Object(result);
          }

          static PyObject *t_DualFrequencySmoother_getMapFilters(t_DualFrequencySmoother *self)
          {
            ::java::util::HashMap result((jobject) NULL);
            OBJ_CALL(result = self->object.getMapFilters());
            return ::java::util::t_HashMap::wrap_Object(result, ::org::orekit::gnss::PY_TYPE(ObservationType), ::org::orekit::estimation::measurements::filtering::PY_TYPE(DualFrequencyHatchFilter));
          }

          static PyObject *t_DualFrequencySmoother_get__filteredDataMap(t_DualFrequencySmoother *self, void *data)
          {
            ::java::util::HashMap value((jobject) NULL);
            OBJ_CALL(value = self->object.getFilteredDataMap());
            return ::java::util::t_HashMap::wrap_Object(value);
          }

          static PyObject *t_DualFrequencySmoother_get__mapFilters(t_DualFrequencySmoother *self, void *data)
          {
            ::java::util::HashMap value((jobject) NULL);
            OBJ_CALL(value = self->object.getMapFilters());
            return ::java::util::t_HashMap::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/SignalCode.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/SignalCode.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {

      ::java::lang::Class *SignalCode::class$ = NULL;
      jmethodID *SignalCode::mids$ = NULL;
      bool SignalCode::live$ = false;
      SignalCode *SignalCode::A = NULL;
      SignalCode *SignalCode::B = NULL;
      SignalCode *SignalCode::C = NULL;
      SignalCode *SignalCode::CODELESS = NULL;
      SignalCode *SignalCode::D = NULL;
      SignalCode *SignalCode::E = NULL;
      SignalCode *SignalCode::I = NULL;
      SignalCode *SignalCode::L = NULL;
      SignalCode *SignalCode::M = NULL;
      SignalCode *SignalCode::N = NULL;
      SignalCode *SignalCode::P = NULL;
      SignalCode *SignalCode::Q = NULL;
      SignalCode *SignalCode::S = NULL;
      SignalCode *SignalCode::W = NULL;
      SignalCode *SignalCode::X = NULL;
      SignalCode *SignalCode::Y = NULL;
      SignalCode *SignalCode::Z = NULL;

      jclass SignalCode::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/gnss/SignalCode");

          mids$ = new jmethodID[max_mid];
          mids$[mid_valueOf_29405d3cf2733256] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/SignalCode;");
          mids$[mid_values_fd15c2a208a55491] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/SignalCode;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          A = new SignalCode(env->getStaticObjectField(cls, "A", "Lorg/orekit/gnss/SignalCode;"));
          B = new SignalCode(env->getStaticObjectField(cls, "B", "Lorg/orekit/gnss/SignalCode;"));
          C = new SignalCode(env->getStaticObjectField(cls, "C", "Lorg/orekit/gnss/SignalCode;"));
          CODELESS = new SignalCode(env->getStaticObjectField(cls, "CODELESS", "Lorg/orekit/gnss/SignalCode;"));
          D = new SignalCode(env->getStaticObjectField(cls, "D", "Lorg/orekit/gnss/SignalCode;"));
          E = new SignalCode(env->getStaticObjectField(cls, "E", "Lorg/orekit/gnss/SignalCode;"));
          I = new SignalCode(env->getStaticObjectField(cls, "I", "Lorg/orekit/gnss/SignalCode;"));
          L = new SignalCode(env->getStaticObjectField(cls, "L", "Lorg/orekit/gnss/SignalCode;"));
          M = new SignalCode(env->getStaticObjectField(cls, "M", "Lorg/orekit/gnss/SignalCode;"));
          N = new SignalCode(env->getStaticObjectField(cls, "N", "Lorg/orekit/gnss/SignalCode;"));
          P = new SignalCode(env->getStaticObjectField(cls, "P", "Lorg/orekit/gnss/SignalCode;"));
          Q = new SignalCode(env->getStaticObjectField(cls, "Q", "Lorg/orekit/gnss/SignalCode;"));
          S = new SignalCode(env->getStaticObjectField(cls, "S", "Lorg/orekit/gnss/SignalCode;"));
          W = new SignalCode(env->getStaticObjectField(cls, "W", "Lorg/orekit/gnss/SignalCode;"));
          X = new SignalCode(env->getStaticObjectField(cls, "X", "Lorg/orekit/gnss/SignalCode;"));
          Y = new SignalCode(env->getStaticObjectField(cls, "Y", "Lorg/orekit/gnss/SignalCode;"));
          Z = new SignalCode(env->getStaticObjectField(cls, "Z", "Lorg/orekit/gnss/SignalCode;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SignalCode SignalCode::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return SignalCode(env->callStaticObjectMethod(cls, mids$[mid_valueOf_29405d3cf2733256], a0.this$));
      }

      JArray< SignalCode > SignalCode::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< SignalCode >(env->callStaticObjectMethod(cls, mids$[mid_values_fd15c2a208a55491]));
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
      static PyObject *t_SignalCode_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SignalCode_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SignalCode_of_(t_SignalCode *self, PyObject *args);
      static PyObject *t_SignalCode_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_SignalCode_values(PyTypeObject *type);
      static PyObject *t_SignalCode_get__parameters_(t_SignalCode *self, void *data);
      static PyGetSetDef t_SignalCode__fields_[] = {
        DECLARE_GET_FIELD(t_SignalCode, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SignalCode__methods_[] = {
        DECLARE_METHOD(t_SignalCode, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SignalCode, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SignalCode, of_, METH_VARARGS),
        DECLARE_METHOD(t_SignalCode, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_SignalCode, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SignalCode)[] = {
        { Py_tp_methods, t_SignalCode__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_SignalCode__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SignalCode)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(SignalCode, t_SignalCode, SignalCode);
      PyObject *t_SignalCode::wrap_Object(const SignalCode& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SignalCode::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SignalCode *self = (t_SignalCode *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_SignalCode::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SignalCode::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SignalCode *self = (t_SignalCode *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_SignalCode::install(PyObject *module)
      {
        installType(&PY_TYPE(SignalCode), &PY_TYPE_DEF(SignalCode), module, "SignalCode", 0);
      }

      void t_SignalCode::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "class_", make_descriptor(SignalCode::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "wrapfn_", make_descriptor(t_SignalCode::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "boxfn_", make_descriptor(boxObject));
        env->getClass(SignalCode::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "A", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "B", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "C", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "CODELESS", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::CODELESS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "D", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "E", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::E)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "I", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "L", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::L)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "M", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::M)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "N", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::N)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "P", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "Q", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "S", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::S)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "W", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::W)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "X", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "Y", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::Y)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "Z", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::Z)));
      }

      static PyObject *t_SignalCode_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SignalCode::initializeClass, 1)))
          return NULL;
        return t_SignalCode::wrap_Object(SignalCode(((t_SignalCode *) arg)->object.this$));
      }
      static PyObject *t_SignalCode_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SignalCode::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_SignalCode_of_(t_SignalCode *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_SignalCode_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        SignalCode result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::gnss::SignalCode::valueOf(a0));
          return t_SignalCode::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_SignalCode_values(PyTypeObject *type)
      {
        JArray< SignalCode > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::gnss::SignalCode::values());
        return JArray<jobject>(result.this$).wrap(t_SignalCode::wrap_jobject);
      }
      static PyObject *t_SignalCode_get__parameters_(t_SignalCode *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldDSSTThirdBodyDynamicContext.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *FieldDSSTThirdBodyDynamicContext::class$ = NULL;
            jmethodID *FieldDSSTThirdBodyDynamicContext::mids$ = NULL;
            bool FieldDSSTThirdBodyDynamicContext::live$ = false;

            jclass FieldDSSTThirdBodyDynamicContext::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/FieldDSSTThirdBodyDynamicContext");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_5161005972fb7356] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;Lorg/orekit/bodies/CelestialBody;[Lorg/hipparchus/CalculusFieldElement;)V");
                mids$[mid_getA_613c8f46c659f636] = env->getMethodID(cls, "getA", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getAlpha_613c8f46c659f636] = env->getMethodID(cls, "getAlpha", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getBB_613c8f46c659f636] = env->getMethodID(cls, "getBB", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getBBB_613c8f46c659f636] = env->getMethodID(cls, "getBBB", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getBeta_613c8f46c659f636] = env->getMethodID(cls, "getBeta", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getBoA_613c8f46c659f636] = env->getMethodID(cls, "getBoA", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getBoABpo_613c8f46c659f636] = env->getMethodID(cls, "getBoABpo", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getGamma_613c8f46c659f636] = env->getMethodID(cls, "getGamma", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getHXXX_613c8f46c659f636] = env->getMethodID(cls, "getHXXX", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getKXXX_613c8f46c659f636] = env->getMethodID(cls, "getKXXX", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getM2aoA_613c8f46c659f636] = env->getMethodID(cls, "getM2aoA", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getMCo2AB_613c8f46c659f636] = env->getMethodID(cls, "getMCo2AB", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getMeanMotion_613c8f46c659f636] = env->getMethodID(cls, "getMeanMotion", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getMuoR3_613c8f46c659f636] = env->getMethodID(cls, "getMuoR3", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getOoAB_613c8f46c659f636] = env->getMethodID(cls, "getOoAB", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getR3_613c8f46c659f636] = env->getMethodID(cls, "getR3", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getX_613c8f46c659f636] = env->getMethodID(cls, "getX", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getXX_613c8f46c659f636] = env->getMethodID(cls, "getXX", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getb_613c8f46c659f636] = env->getMethodID(cls, "getb", "()Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            FieldDSSTThirdBodyDynamicContext::FieldDSSTThirdBodyDynamicContext(const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements & a0, const ::org::orekit::bodies::CelestialBody & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) : ::org::orekit::propagation::semianalytical::dsst::forces::FieldForceModelContext(env->newObject(initializeClass, &mids$, mid_init$_5161005972fb7356, a0.this$, a1.this$, a2.this$)) {}

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getA() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getA_613c8f46c659f636]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getAlpha() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAlpha_613c8f46c659f636]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getBB() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getBB_613c8f46c659f636]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getBBB() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getBBB_613c8f46c659f636]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getBeta() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getBeta_613c8f46c659f636]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getBoA() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getBoA_613c8f46c659f636]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getBoABpo() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getBoABpo_613c8f46c659f636]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getGamma() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getGamma_613c8f46c659f636]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getHXXX() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHXXX_613c8f46c659f636]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getKXXX() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getKXXX_613c8f46c659f636]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getM2aoA() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getM2aoA_613c8f46c659f636]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getMCo2AB() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMCo2AB_613c8f46c659f636]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getMeanMotion() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMeanMotion_613c8f46c659f636]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getMuoR3() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMuoR3_613c8f46c659f636]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getOoAB() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getOoAB_613c8f46c659f636]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getR3() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getR3_613c8f46c659f636]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getX() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getX_613c8f46c659f636]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getXX() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getXX_613c8f46c659f636]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTThirdBodyDynamicContext::getb() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getb_613c8f46c659f636]));
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
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_of_(t_FieldDSSTThirdBodyDynamicContext *self, PyObject *args);
            static int t_FieldDSSTThirdBodyDynamicContext_init_(t_FieldDSSTThirdBodyDynamicContext *self, PyObject *args, PyObject *kwds);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getA(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getAlpha(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getBB(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getBBB(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getBeta(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getBoA(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getBoABpo(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getGamma(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getHXXX(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getKXXX(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getM2aoA(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getMCo2AB(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getMeanMotion(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getMuoR3(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getOoAB(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getR3(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getX(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getXX(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getb(t_FieldDSSTThirdBodyDynamicContext *self);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__a(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__alpha(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__b(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__bB(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__bBB(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__beta(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__boA(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__boABpo(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__gamma(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__hXXX(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__kXXX(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__m2aoA(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__mCo2AB(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__meanMotion(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__muoR3(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__ooAB(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__r3(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__x(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__xX(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__parameters_(t_FieldDSSTThirdBodyDynamicContext *self, void *data);
            static PyGetSetDef t_FieldDSSTThirdBodyDynamicContext__fields_[] = {
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, a),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, alpha),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, b),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, bB),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, bBB),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, beta),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, boA),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, boABpo),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, gamma),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, hXXX),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, kXXX),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, m2aoA),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, mCo2AB),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, meanMotion),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, muoR3),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, ooAB),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, r3),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, x),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, xX),
              DECLARE_GET_FIELD(t_FieldDSSTThirdBodyDynamicContext, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_FieldDSSTThirdBodyDynamicContext__methods_[] = {
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, of_, METH_VARARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getA, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getAlpha, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getBB, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getBBB, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getBeta, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getBoA, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getBoABpo, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getGamma, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getHXXX, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getKXXX, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getM2aoA, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getMCo2AB, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getMeanMotion, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getMuoR3, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getOoAB, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getR3, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getX, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getXX, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTThirdBodyDynamicContext, getb, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FieldDSSTThirdBodyDynamicContext)[] = {
              { Py_tp_methods, t_FieldDSSTThirdBodyDynamicContext__methods_ },
              { Py_tp_init, (void *) t_FieldDSSTThirdBodyDynamicContext_init_ },
              { Py_tp_getset, t_FieldDSSTThirdBodyDynamicContext__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FieldDSSTThirdBodyDynamicContext)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::semianalytical::dsst::forces::FieldForceModelContext),
              NULL
            };

            DEFINE_TYPE(FieldDSSTThirdBodyDynamicContext, t_FieldDSSTThirdBodyDynamicContext, FieldDSSTThirdBodyDynamicContext);
            PyObject *t_FieldDSSTThirdBodyDynamicContext::wrap_Object(const FieldDSSTThirdBodyDynamicContext& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldDSSTThirdBodyDynamicContext::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldDSSTThirdBodyDynamicContext *self = (t_FieldDSSTThirdBodyDynamicContext *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_FieldDSSTThirdBodyDynamicContext::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldDSSTThirdBodyDynamicContext::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldDSSTThirdBodyDynamicContext *self = (t_FieldDSSTThirdBodyDynamicContext *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_FieldDSSTThirdBodyDynamicContext::install(PyObject *module)
            {
              installType(&PY_TYPE(FieldDSSTThirdBodyDynamicContext), &PY_TYPE_DEF(FieldDSSTThirdBodyDynamicContext), module, "FieldDSSTThirdBodyDynamicContext", 0);
            }

            void t_FieldDSSTThirdBodyDynamicContext::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTThirdBodyDynamicContext), "class_", make_descriptor(FieldDSSTThirdBodyDynamicContext::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTThirdBodyDynamicContext), "wrapfn_", make_descriptor(t_FieldDSSTThirdBodyDynamicContext::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTThirdBodyDynamicContext), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FieldDSSTThirdBodyDynamicContext::initializeClass, 1)))
                return NULL;
              return t_FieldDSSTThirdBodyDynamicContext::wrap_Object(FieldDSSTThirdBodyDynamicContext(((t_FieldDSSTThirdBodyDynamicContext *) arg)->object.this$));
            }
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FieldDSSTThirdBodyDynamicContext::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_of_(t_FieldDSSTThirdBodyDynamicContext *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_FieldDSSTThirdBodyDynamicContext_init_(t_FieldDSSTThirdBodyDynamicContext *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::bodies::CelestialBody a1((jobject) NULL);
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              FieldDSSTThirdBodyDynamicContext object((jobject) NULL);

              if (!parseArgs(args, "Kk[K", ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements::initializeClass, ::org::orekit::bodies::CelestialBody::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::semianalytical::dsst::utilities::t_FieldAuxiliaryElements::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                INT_CALL(object = FieldDSSTThirdBodyDynamicContext(a0, a1, a2));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getA(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getA());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getAlpha(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getAlpha());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getBB(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getBB());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getBBB(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getBBB());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getBeta(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getBeta());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getBoA(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getBoA());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getBoABpo(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getBoABpo());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getGamma(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getGamma());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getHXXX(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getHXXX());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getKXXX(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getKXXX());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getM2aoA(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getM2aoA());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getMCo2AB(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getMCo2AB());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getMeanMotion(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getMeanMotion());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getMuoR3(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getMuoR3());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getOoAB(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getOoAB());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getR3(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getR3());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getX(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getX());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getXX(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getXX());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_getb(t_FieldDSSTThirdBodyDynamicContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getb());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__parameters_(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__a(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getA());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__alpha(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getAlpha());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__b(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getb());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__bB(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getBB());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__bBB(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getBBB());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__beta(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getBeta());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__boA(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getBoA());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__boABpo(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getBoABpo());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__gamma(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getGamma());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__hXXX(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getHXXX());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__kXXX(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getKXXX());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__m2aoA(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getM2aoA());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__mCo2AB(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getMCo2AB());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__meanMotion(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getMeanMotion());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__muoR3(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getMuoR3());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__ooAB(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getOoAB());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__r3(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getR3());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__x(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getX());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTThirdBodyDynamicContext_get__xX(t_FieldDSSTThirdBodyDynamicContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getXX());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Inverse.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Inverse::class$ = NULL;
        jmethodID *Inverse::mids$ = NULL;
        bool Inverse::live$ = false;

        jclass Inverse::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Inverse");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_7e960cd6eee376d8] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_3eb2b84dba0ab7d2] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Inverse::Inverse() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        jdouble Inverse::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_7e960cd6eee376d8], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Inverse::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_3eb2b84dba0ab7d2], a0.this$));
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
      namespace function {
        static PyObject *t_Inverse_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Inverse_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Inverse_init_(t_Inverse *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Inverse_value(t_Inverse *self, PyObject *args);

        static PyMethodDef t_Inverse__methods_[] = {
          DECLARE_METHOD(t_Inverse, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Inverse, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Inverse, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Inverse)[] = {
          { Py_tp_methods, t_Inverse__methods_ },
          { Py_tp_init, (void *) t_Inverse_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Inverse)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Inverse, t_Inverse, Inverse);

        void t_Inverse::install(PyObject *module)
        {
          installType(&PY_TYPE(Inverse), &PY_TYPE_DEF(Inverse), module, "Inverse", 0);
        }

        void t_Inverse::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Inverse), "class_", make_descriptor(Inverse::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Inverse), "wrapfn_", make_descriptor(t_Inverse::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Inverse), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Inverse_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Inverse::initializeClass, 1)))
            return NULL;
          return t_Inverse::wrap_Object(Inverse(((t_Inverse *) arg)->object.this$));
        }
        static PyObject *t_Inverse_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Inverse::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Inverse_init_(t_Inverse *self, PyObject *args, PyObject *kwds)
        {
          Inverse object((jobject) NULL);

          INT_CALL(object = Inverse());
          self->object = object;

          return 0;
        }

        static PyObject *t_Inverse_value(t_Inverse *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              jdouble result;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::analysis::differentiation::Derivative a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::analysis::differentiation::Derivative result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::analysis::differentiation::Derivative::initializeClass, &a0, &p0, ::org::hipparchus::analysis::differentiation::t_Derivative::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::analysis::differentiation::t_Derivative::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/FieldKeplerianOrbit.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/FieldKeplerianOrbit.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/orbits/PositionAngleBased.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/orbits/KeplerianOrbit.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *FieldKeplerianOrbit::class$ = NULL;
      jmethodID *FieldKeplerianOrbit::mids$ = NULL;
      bool FieldKeplerianOrbit::live$ = false;

      jclass FieldKeplerianOrbit::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/FieldKeplerianOrbit");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_8c98afebb6212490] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;)V");
          mids$[mid_init$_3eaa62b89404ea8f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/KeplerianOrbit;)V");
          mids$[mid_init$_7568a622582bbb9f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;)V");
          mids$[mid_init$_b2c573ad66dbbf4e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/TimeStampedFieldPVCoordinates;Lorg/orekit/frames/Frame;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_2003571c0e8d33c1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_5ef84f89b3c0d68c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_1ffb1b4106e68722] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_addKeplerContribution_442a44d8b8481234] = env->getMethodID(cls, "addKeplerContribution", "(Lorg/orekit/orbits/PositionAngleType;Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_getA_613c8f46c659f636] = env->getMethodID(cls, "getA", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getADot_613c8f46c659f636] = env->getMethodID(cls, "getADot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getAnomaly_1c32e6b4d15c6c38] = env->getMethodID(cls, "getAnomaly", "(Lorg/orekit/orbits/PositionAngleType;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getAnomalyDot_1c32e6b4d15c6c38] = env->getMethodID(cls, "getAnomalyDot", "(Lorg/orekit/orbits/PositionAngleType;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getCachedPositionAngleType_f4984aee71df4c19] = env->getMethodID(cls, "getCachedPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
          mids$[mid_getE_613c8f46c659f636] = env->getMethodID(cls, "getE", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEDot_613c8f46c659f636] = env->getMethodID(cls, "getEDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEccentricAnomaly_613c8f46c659f636] = env->getMethodID(cls, "getEccentricAnomaly", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEccentricAnomalyDot_613c8f46c659f636] = env->getMethodID(cls, "getEccentricAnomalyDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEx_613c8f46c659f636] = env->getMethodID(cls, "getEquinoctialEx", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialExDot_613c8f46c659f636] = env->getMethodID(cls, "getEquinoctialExDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEy_613c8f46c659f636] = env->getMethodID(cls, "getEquinoctialEy", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEyDot_613c8f46c659f636] = env->getMethodID(cls, "getEquinoctialEyDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHx_613c8f46c659f636] = env->getMethodID(cls, "getHx", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHxDot_613c8f46c659f636] = env->getMethodID(cls, "getHxDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHy_613c8f46c659f636] = env->getMethodID(cls, "getHy", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHyDot_613c8f46c659f636] = env->getMethodID(cls, "getHyDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getI_613c8f46c659f636] = env->getMethodID(cls, "getI", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getIDot_613c8f46c659f636] = env->getMethodID(cls, "getIDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLE_613c8f46c659f636] = env->getMethodID(cls, "getLE", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLEDot_613c8f46c659f636] = env->getMethodID(cls, "getLEDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLM_613c8f46c659f636] = env->getMethodID(cls, "getLM", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLMDot_613c8f46c659f636] = env->getMethodID(cls, "getLMDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLv_613c8f46c659f636] = env->getMethodID(cls, "getLv", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLvDot_613c8f46c659f636] = env->getMethodID(cls, "getLvDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getMeanAnomaly_613c8f46c659f636] = env->getMethodID(cls, "getMeanAnomaly", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getMeanAnomalyDot_613c8f46c659f636] = env->getMethodID(cls, "getMeanAnomalyDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getPerigeeArgument_613c8f46c659f636] = env->getMethodID(cls, "getPerigeeArgument", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getPerigeeArgumentDot_613c8f46c659f636] = env->getMethodID(cls, "getPerigeeArgumentDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getRightAscensionOfAscendingNode_613c8f46c659f636] = env->getMethodID(cls, "getRightAscensionOfAscendingNode", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getRightAscensionOfAscendingNodeDot_613c8f46c659f636] = env->getMethodID(cls, "getRightAscensionOfAscendingNodeDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getTrueAnomaly_613c8f46c659f636] = env->getMethodID(cls, "getTrueAnomaly", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getTrueAnomalyDot_613c8f46c659f636] = env->getMethodID(cls, "getTrueAnomalyDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getType_2cea2a2cb3e02091] = env->getMethodID(cls, "getType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_hasDerivatives_89b302893bdbe1f1] = env->getMethodID(cls, "hasDerivatives", "()Z");
          mids$[mid_hasRates_89b302893bdbe1f1] = env->getMethodID(cls, "hasRates", "()Z");
          mids$[mid_removeRates_84a366d6e83dca29] = env->getMethodID(cls, "removeRates", "()Lorg/orekit/orbits/FieldKeplerianOrbit;");
          mids$[mid_shiftedBy_21e1a96e4b784e27] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/orbits/FieldKeplerianOrbit;");
          mids$[mid_shiftedBy_f105238210773ea4] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/orbits/FieldKeplerianOrbit;");
          mids$[mid_toOrbit_48360cd036a5e97b] = env->getMethodID(cls, "toOrbit", "()Lorg/orekit/orbits/KeplerianOrbit;");
          mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_initPVCoordinates_232470f1b769250c] = env->getMethodID(cls, "initPVCoordinates", "()Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_initPosition_2d64addf4c3391d9] = env->getMethodID(cls, "initPosition", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_computeJacobianMeanWrtCartesian_f180d140dce78d62] = env->getMethodID(cls, "computeJacobianMeanWrtCartesian", "()[[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_computeJacobianEccentricWrtCartesian_f180d140dce78d62] = env->getMethodID(cls, "computeJacobianEccentricWrtCartesian", "()[[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_computeJacobianTrueWrtCartesian_f180d140dce78d62] = env->getMethodID(cls, "computeJacobianTrueWrtCartesian", "()[[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldKeplerianOrbit::FieldKeplerianOrbit(const ::org::orekit::orbits::FieldOrbit & a0) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_8c98afebb6212490, a0.this$)) {}

      FieldKeplerianOrbit::FieldKeplerianOrbit(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::KeplerianOrbit & a1) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_3eaa62b89404ea8f, a0.this$, a1.this$)) {}

      FieldKeplerianOrbit::FieldKeplerianOrbit(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_7568a622582bbb9f, a0.this$, a1.this$)) {}

      FieldKeplerianOrbit::FieldKeplerianOrbit(const ::org::orekit::utils::TimeStampedFieldPVCoordinates & a0, const ::org::orekit::frames::Frame & a1, const ::org::hipparchus::CalculusFieldElement & a2) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_b2c573ad66dbbf4e, a0.this$, a1.this$, a2.this$)) {}

      FieldKeplerianOrbit::FieldKeplerianOrbit(const ::org::orekit::utils::FieldPVCoordinates & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::FieldAbsoluteDate & a2, const ::org::hipparchus::CalculusFieldElement & a3) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_2003571c0e8d33c1, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      FieldKeplerianOrbit::FieldKeplerianOrbit(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::orekit::orbits::PositionAngleType & a6, const ::org::orekit::frames::Frame & a7, const ::org::orekit::time::FieldAbsoluteDate & a8, const ::org::hipparchus::CalculusFieldElement & a9) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_5ef84f89b3c0d68c, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$)) {}

      FieldKeplerianOrbit::FieldKeplerianOrbit(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::hipparchus::CalculusFieldElement & a6, const ::org::hipparchus::CalculusFieldElement & a7, const ::org::hipparchus::CalculusFieldElement & a8, const ::org::hipparchus::CalculusFieldElement & a9, const ::org::hipparchus::CalculusFieldElement & a10, const ::org::hipparchus::CalculusFieldElement & a11, const ::org::orekit::orbits::PositionAngleType & a12, const ::org::orekit::frames::Frame & a13, const ::org::orekit::time::FieldAbsoluteDate & a14, const ::org::hipparchus::CalculusFieldElement & a15) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_1ffb1b4106e68722, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$, a10.this$, a11.this$, a12.this$, a13.this$, a14.this$, a15.this$)) {}

      void FieldKeplerianOrbit::addKeplerContribution(const ::org::orekit::orbits::PositionAngleType & a0, const ::org::hipparchus::CalculusFieldElement & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addKeplerContribution_442a44d8b8481234], a0.this$, a1.this$, a2.this$);
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getA() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getA_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getADot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getADot_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getAnomaly(const ::org::orekit::orbits::PositionAngleType & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAnomaly_1c32e6b4d15c6c38], a0.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getAnomalyDot(const ::org::orekit::orbits::PositionAngleType & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAnomalyDot_1c32e6b4d15c6c38], a0.this$));
      }

      ::org::orekit::orbits::PositionAngleType FieldKeplerianOrbit::getCachedPositionAngleType() const
      {
        return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getCachedPositionAngleType_f4984aee71df4c19]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getE() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getE_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getEDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEDot_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getEccentricAnomaly() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEccentricAnomaly_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getEccentricAnomalyDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEccentricAnomalyDot_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getEquinoctialEx() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEx_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getEquinoctialExDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialExDot_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getEquinoctialEy() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEy_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getEquinoctialEyDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEyDot_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getHx() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHx_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getHxDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHxDot_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getHy() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHy_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getHyDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHyDot_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getI() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getI_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getIDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getIDot_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getLE() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLE_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getLEDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLEDot_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getLM() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLM_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getLMDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLMDot_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getLv() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLv_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getLvDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLvDot_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getMeanAnomaly() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMeanAnomaly_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getMeanAnomalyDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMeanAnomalyDot_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getPerigeeArgument() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getPerigeeArgument_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getPerigeeArgumentDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getPerigeeArgumentDot_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getRightAscensionOfAscendingNode() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getRightAscensionOfAscendingNode_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getRightAscensionOfAscendingNodeDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getRightAscensionOfAscendingNodeDot_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getTrueAnomaly() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getTrueAnomaly_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getTrueAnomalyDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getTrueAnomalyDot_613c8f46c659f636]));
      }

      ::org::orekit::orbits::OrbitType FieldKeplerianOrbit::getType() const
      {
        return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getType_2cea2a2cb3e02091]));
      }

      jboolean FieldKeplerianOrbit::hasDerivatives() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasDerivatives_89b302893bdbe1f1]);
      }

      jboolean FieldKeplerianOrbit::hasRates() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasRates_89b302893bdbe1f1]);
      }

      FieldKeplerianOrbit FieldKeplerianOrbit::removeRates() const
      {
        return FieldKeplerianOrbit(env->callObjectMethod(this$, mids$[mid_removeRates_84a366d6e83dca29]));
      }

      FieldKeplerianOrbit FieldKeplerianOrbit::shiftedBy(jdouble a0) const
      {
        return FieldKeplerianOrbit(env->callObjectMethod(this$, mids$[mid_shiftedBy_21e1a96e4b784e27], a0));
      }

      FieldKeplerianOrbit FieldKeplerianOrbit::shiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldKeplerianOrbit(env->callObjectMethod(this$, mids$[mid_shiftedBy_f105238210773ea4], a0.this$));
      }

      ::org::orekit::orbits::KeplerianOrbit FieldKeplerianOrbit::toOrbit() const
      {
        return ::org::orekit::orbits::KeplerianOrbit(env->callObjectMethod(this$, mids$[mid_toOrbit_48360cd036a5e97b]));
      }

      ::java::lang::String FieldKeplerianOrbit::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace orbits {
      static PyObject *t_FieldKeplerianOrbit_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldKeplerianOrbit_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldKeplerianOrbit_of_(t_FieldKeplerianOrbit *self, PyObject *args);
      static int t_FieldKeplerianOrbit_init_(t_FieldKeplerianOrbit *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldKeplerianOrbit_addKeplerContribution(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getA(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getADot(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getAnomaly(t_FieldKeplerianOrbit *self, PyObject *arg);
      static PyObject *t_FieldKeplerianOrbit_getAnomalyDot(t_FieldKeplerianOrbit *self, PyObject *arg);
      static PyObject *t_FieldKeplerianOrbit_getCachedPositionAngleType(t_FieldKeplerianOrbit *self);
      static PyObject *t_FieldKeplerianOrbit_getE(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getEDot(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getEccentricAnomaly(t_FieldKeplerianOrbit *self);
      static PyObject *t_FieldKeplerianOrbit_getEccentricAnomalyDot(t_FieldKeplerianOrbit *self);
      static PyObject *t_FieldKeplerianOrbit_getEquinoctialEx(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getEquinoctialExDot(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getEquinoctialEy(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getEquinoctialEyDot(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getHx(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getHxDot(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getHy(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getHyDot(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getI(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getIDot(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getLE(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getLEDot(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getLM(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getLMDot(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getLv(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getLvDot(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getMeanAnomaly(t_FieldKeplerianOrbit *self);
      static PyObject *t_FieldKeplerianOrbit_getMeanAnomalyDot(t_FieldKeplerianOrbit *self);
      static PyObject *t_FieldKeplerianOrbit_getPerigeeArgument(t_FieldKeplerianOrbit *self);
      static PyObject *t_FieldKeplerianOrbit_getPerigeeArgumentDot(t_FieldKeplerianOrbit *self);
      static PyObject *t_FieldKeplerianOrbit_getRightAscensionOfAscendingNode(t_FieldKeplerianOrbit *self);
      static PyObject *t_FieldKeplerianOrbit_getRightAscensionOfAscendingNodeDot(t_FieldKeplerianOrbit *self);
      static PyObject *t_FieldKeplerianOrbit_getTrueAnomaly(t_FieldKeplerianOrbit *self);
      static PyObject *t_FieldKeplerianOrbit_getTrueAnomalyDot(t_FieldKeplerianOrbit *self);
      static PyObject *t_FieldKeplerianOrbit_getType(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_hasDerivatives(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_hasRates(t_FieldKeplerianOrbit *self);
      static PyObject *t_FieldKeplerianOrbit_removeRates(t_FieldKeplerianOrbit *self);
      static PyObject *t_FieldKeplerianOrbit_shiftedBy(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_toOrbit(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_toString(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_get__a(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__aDot(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__cachedPositionAngleType(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__e(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__eDot(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__eccentricAnomaly(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__eccentricAnomalyDot(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__equinoctialEx(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__equinoctialExDot(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__equinoctialEy(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__equinoctialEyDot(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__hx(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__hxDot(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__hy(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__hyDot(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__i(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__iDot(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__lE(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__lEDot(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__lM(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__lMDot(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__lv(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__lvDot(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__meanAnomaly(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__meanAnomalyDot(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__perigeeArgument(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__perigeeArgumentDot(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__rightAscensionOfAscendingNode(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__rightAscensionOfAscendingNodeDot(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__trueAnomaly(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__trueAnomalyDot(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__type(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__parameters_(t_FieldKeplerianOrbit *self, void *data);
      static PyGetSetDef t_FieldKeplerianOrbit__fields_[] = {
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, a),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, aDot),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, cachedPositionAngleType),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, e),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, eDot),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, eccentricAnomaly),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, eccentricAnomalyDot),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, equinoctialEx),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, equinoctialExDot),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, equinoctialEy),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, equinoctialEyDot),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, hx),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, hxDot),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, hy),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, hyDot),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, i),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, iDot),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, lE),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, lEDot),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, lM),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, lMDot),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, lv),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, lvDot),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, meanAnomaly),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, meanAnomalyDot),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, perigeeArgument),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, perigeeArgumentDot),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, rightAscensionOfAscendingNode),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, rightAscensionOfAscendingNodeDot),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, trueAnomaly),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, trueAnomalyDot),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, type),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldKeplerianOrbit__methods_[] = {
        DECLARE_METHOD(t_FieldKeplerianOrbit, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, addKeplerContribution, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getA, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getADot, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getAnomaly, METH_O),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getAnomalyDot, METH_O),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getCachedPositionAngleType, METH_NOARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getE, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getEDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getEccentricAnomaly, METH_NOARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getEccentricAnomalyDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getEquinoctialEx, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getEquinoctialExDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getEquinoctialEy, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getEquinoctialEyDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getHx, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getHxDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getHy, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getHyDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getI, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getIDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getLE, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getLEDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getLM, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getLMDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getLv, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getLvDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getMeanAnomaly, METH_NOARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getMeanAnomalyDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getPerigeeArgument, METH_NOARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getPerigeeArgumentDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getRightAscensionOfAscendingNode, METH_NOARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getRightAscensionOfAscendingNodeDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getTrueAnomaly, METH_NOARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getTrueAnomalyDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getType, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, hasDerivatives, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, hasRates, METH_NOARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, removeRates, METH_NOARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, toOrbit, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldKeplerianOrbit)[] = {
        { Py_tp_methods, t_FieldKeplerianOrbit__methods_ },
        { Py_tp_init, (void *) t_FieldKeplerianOrbit_init_ },
        { Py_tp_getset, t_FieldKeplerianOrbit__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldKeplerianOrbit)[] = {
        &PY_TYPE_DEF(::org::orekit::orbits::FieldOrbit),
        NULL
      };

      DEFINE_TYPE(FieldKeplerianOrbit, t_FieldKeplerianOrbit, FieldKeplerianOrbit);
      PyObject *t_FieldKeplerianOrbit::wrap_Object(const FieldKeplerianOrbit& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldKeplerianOrbit::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldKeplerianOrbit *self = (t_FieldKeplerianOrbit *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldKeplerianOrbit::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldKeplerianOrbit::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldKeplerianOrbit *self = (t_FieldKeplerianOrbit *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldKeplerianOrbit::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldKeplerianOrbit), &PY_TYPE_DEF(FieldKeplerianOrbit), module, "FieldKeplerianOrbit", 0);
      }

      void t_FieldKeplerianOrbit::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldKeplerianOrbit), "class_", make_descriptor(FieldKeplerianOrbit::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldKeplerianOrbit), "wrapfn_", make_descriptor(t_FieldKeplerianOrbit::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldKeplerianOrbit), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldKeplerianOrbit_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldKeplerianOrbit::initializeClass, 1)))
          return NULL;
        return t_FieldKeplerianOrbit::wrap_Object(FieldKeplerianOrbit(((t_FieldKeplerianOrbit *) arg)->object.this$));
      }
      static PyObject *t_FieldKeplerianOrbit_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldKeplerianOrbit::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldKeplerianOrbit_of_(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldKeplerianOrbit_init_(t_FieldKeplerianOrbit *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            FieldKeplerianOrbit object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::orbits::FieldOrbit::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_))
            {
              INT_CALL(object = FieldKeplerianOrbit(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::orbits::KeplerianOrbit a1((jobject) NULL);
            FieldKeplerianOrbit object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::orbits::KeplerianOrbit::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = FieldKeplerianOrbit(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::orbits::Orbit a1((jobject) NULL);
            FieldKeplerianOrbit object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = FieldKeplerianOrbit(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::utils::TimeStampedFieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            FieldKeplerianOrbit object((jobject) NULL);

            if (!parseArgs(args, "KkK", ::org::orekit::utils::TimeStampedFieldPVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldKeplerianOrbit(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::utils::FieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            FieldKeplerianOrbit object((jobject) NULL);

            if (!parseArgs(args, "KkKK", ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a1, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldKeplerianOrbit(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 10:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
            PyTypeObject **p5;
            ::org::orekit::orbits::PositionAngleType a6((jobject) NULL);
            PyTypeObject **p6;
            ::org::orekit::frames::Frame a7((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a8((jobject) NULL);
            PyTypeObject **p8;
            ::org::hipparchus::CalculusFieldElement a9((jobject) NULL);
            PyTypeObject **p9;
            FieldKeplerianOrbit object((jobject) NULL);

            if (!parseArgs(args, "KKKKKKKkKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &p6, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a7, &a8, &p8, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a9, &p9, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldKeplerianOrbit(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
              self->object = object;
              break;
            }
          }
          goto err;
         case 16:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
            PyTypeObject **p5;
            ::org::hipparchus::CalculusFieldElement a6((jobject) NULL);
            PyTypeObject **p6;
            ::org::hipparchus::CalculusFieldElement a7((jobject) NULL);
            PyTypeObject **p7;
            ::org::hipparchus::CalculusFieldElement a8((jobject) NULL);
            PyTypeObject **p8;
            ::org::hipparchus::CalculusFieldElement a9((jobject) NULL);
            PyTypeObject **p9;
            ::org::hipparchus::CalculusFieldElement a10((jobject) NULL);
            PyTypeObject **p10;
            ::org::hipparchus::CalculusFieldElement a11((jobject) NULL);
            PyTypeObject **p11;
            ::org::orekit::orbits::PositionAngleType a12((jobject) NULL);
            PyTypeObject **p12;
            ::org::orekit::frames::Frame a13((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a14((jobject) NULL);
            PyTypeObject **p14;
            ::org::hipparchus::CalculusFieldElement a15((jobject) NULL);
            PyTypeObject **p15;
            FieldKeplerianOrbit object((jobject) NULL);

            if (!parseArgs(args, "KKKKKKKKKKKKKkKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &p6, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a7, &p7, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a8, &p8, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a9, &p9, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a10, &p10, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a11, &p11, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a12, &p12, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a13, &a14, &p14, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a15, &p15, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldKeplerianOrbit(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15));
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

      static PyObject *t_FieldKeplerianOrbit_addKeplerContribution(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "KK[K", ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(self->object.addKeplerContribution(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "addKeplerContribution", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getA(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getA());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getA", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getADot(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getADot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getADot", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getAnomaly(t_FieldKeplerianOrbit *self, PyObject *arg)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_))
        {
          OBJ_CALL(result = self->object.getAnomaly(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getAnomaly", arg);
        return NULL;
      }

      static PyObject *t_FieldKeplerianOrbit_getAnomalyDot(t_FieldKeplerianOrbit *self, PyObject *arg)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_))
        {
          OBJ_CALL(result = self->object.getAnomalyDot(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getAnomalyDot", arg);
        return NULL;
      }

      static PyObject *t_FieldKeplerianOrbit_getCachedPositionAngleType(t_FieldKeplerianOrbit *self)
      {
        ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
        OBJ_CALL(result = self->object.getCachedPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
      }

      static PyObject *t_FieldKeplerianOrbit_getE(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getE());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getE", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getEDot(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getEDot", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getEccentricAnomaly(t_FieldKeplerianOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getEccentricAnomaly());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldKeplerianOrbit_getEccentricAnomalyDot(t_FieldKeplerianOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getEccentricAnomalyDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldKeplerianOrbit_getEquinoctialEx(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEx());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getEquinoctialEx", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getEquinoctialExDot(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialExDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getEquinoctialExDot", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getEquinoctialEy(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEy());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getEquinoctialEy", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getEquinoctialEyDot(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEyDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getEquinoctialEyDot", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getHx(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHx());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getHx", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getHxDot(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHxDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getHxDot", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getHy(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHy());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getHy", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getHyDot(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHyDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getHyDot", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getI(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getI());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getI", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getIDot(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getIDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getIDot", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getLE(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLE());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getLE", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getLEDot(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLEDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getLEDot", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getLM(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLM());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getLM", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getLMDot(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLMDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getLMDot", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getLv(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLv());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getLv", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getLvDot(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLvDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getLvDot", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getMeanAnomaly(t_FieldKeplerianOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getMeanAnomaly());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldKeplerianOrbit_getMeanAnomalyDot(t_FieldKeplerianOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getMeanAnomalyDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldKeplerianOrbit_getPerigeeArgument(t_FieldKeplerianOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getPerigeeArgument());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldKeplerianOrbit_getPerigeeArgumentDot(t_FieldKeplerianOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getPerigeeArgumentDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldKeplerianOrbit_getRightAscensionOfAscendingNode(t_FieldKeplerianOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getRightAscensionOfAscendingNode());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldKeplerianOrbit_getRightAscensionOfAscendingNodeDot(t_FieldKeplerianOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getRightAscensionOfAscendingNodeDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldKeplerianOrbit_getTrueAnomaly(t_FieldKeplerianOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getTrueAnomaly());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldKeplerianOrbit_getTrueAnomalyDot(t_FieldKeplerianOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getTrueAnomalyDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldKeplerianOrbit_getType(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::OrbitType result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getType", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_hasDerivatives(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        jboolean result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hasDerivatives());
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "hasDerivatives", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_hasRates(t_FieldKeplerianOrbit *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.hasRates());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_FieldKeplerianOrbit_removeRates(t_FieldKeplerianOrbit *self)
      {
        FieldKeplerianOrbit result((jobject) NULL);
        OBJ_CALL(result = self->object.removeRates());
        return t_FieldKeplerianOrbit::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldKeplerianOrbit_shiftedBy(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            FieldKeplerianOrbit result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldKeplerianOrbit::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldKeplerianOrbit result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldKeplerianOrbit::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "shiftedBy", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_toOrbit(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::KeplerianOrbit result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toOrbit());
          return ::org::orekit::orbits::t_KeplerianOrbit::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "toOrbit", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_toString(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "toString", args, 2);
      }
      static PyObject *t_FieldKeplerianOrbit_get__parameters_(t_FieldKeplerianOrbit *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldKeplerianOrbit_get__a(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getA());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__aDot(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getADot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__cachedPositionAngleType(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
        OBJ_CALL(value = self->object.getCachedPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__e(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getE());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__eDot(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__eccentricAnomaly(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEccentricAnomaly());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__eccentricAnomalyDot(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEccentricAnomalyDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__equinoctialEx(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialEx());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__equinoctialExDot(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialExDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__equinoctialEy(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialEy());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__equinoctialEyDot(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialEyDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__hx(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHx());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__hxDot(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHxDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__hy(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHy());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__hyDot(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHyDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__i(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getI());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__iDot(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getIDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__lE(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLE());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__lEDot(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLEDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__lM(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLM());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__lMDot(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLMDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__lv(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLv());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__lvDot(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLvDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__meanAnomaly(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getMeanAnomaly());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__meanAnomalyDot(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getMeanAnomalyDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__perigeeArgument(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getPerigeeArgument());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__perigeeArgumentDot(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getPerigeeArgumentDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__rightAscensionOfAscendingNode(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getRightAscensionOfAscendingNode());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__rightAscensionOfAscendingNodeDot(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getRightAscensionOfAscendingNodeDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__trueAnomaly(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getTrueAnomaly());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__trueAnomalyDot(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getTrueAnomalyDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__type(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::orekit::orbits::OrbitType value((jobject) NULL);
        OBJ_CALL(value = self->object.getType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/AngularVelocityKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/AngularVelocityKey.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/AngularVelocity.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace apm {

              ::java::lang::Class *AngularVelocityKey::class$ = NULL;
              jmethodID *AngularVelocityKey::mids$ = NULL;
              bool AngularVelocityKey::live$ = false;
              AngularVelocityKey *AngularVelocityKey::ANGVEL_FRAME = NULL;
              AngularVelocityKey *AngularVelocityKey::ANGVEL_X = NULL;
              AngularVelocityKey *AngularVelocityKey::ANGVEL_Y = NULL;
              AngularVelocityKey *AngularVelocityKey::ANGVEL_Z = NULL;
              AngularVelocityKey *AngularVelocityKey::COMMENT = NULL;
              AngularVelocityKey *AngularVelocityKey::REF_FRAME_A = NULL;
              AngularVelocityKey *AngularVelocityKey::REF_FRAME_B = NULL;

              jclass AngularVelocityKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/apm/AngularVelocityKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_1ff545b12bd19418] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/adm/apm/AngularVelocity;)Z");
                  mids$[mid_valueOf_ec47ab5669823943] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/apm/AngularVelocityKey;");
                  mids$[mid_values_9e1e329af2f3990b] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/apm/AngularVelocityKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  ANGVEL_FRAME = new AngularVelocityKey(env->getStaticObjectField(cls, "ANGVEL_FRAME", "Lorg/orekit/files/ccsds/ndm/adm/apm/AngularVelocityKey;"));
                  ANGVEL_X = new AngularVelocityKey(env->getStaticObjectField(cls, "ANGVEL_X", "Lorg/orekit/files/ccsds/ndm/adm/apm/AngularVelocityKey;"));
                  ANGVEL_Y = new AngularVelocityKey(env->getStaticObjectField(cls, "ANGVEL_Y", "Lorg/orekit/files/ccsds/ndm/adm/apm/AngularVelocityKey;"));
                  ANGVEL_Z = new AngularVelocityKey(env->getStaticObjectField(cls, "ANGVEL_Z", "Lorg/orekit/files/ccsds/ndm/adm/apm/AngularVelocityKey;"));
                  COMMENT = new AngularVelocityKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/adm/apm/AngularVelocityKey;"));
                  REF_FRAME_A = new AngularVelocityKey(env->getStaticObjectField(cls, "REF_FRAME_A", "Lorg/orekit/files/ccsds/ndm/adm/apm/AngularVelocityKey;"));
                  REF_FRAME_B = new AngularVelocityKey(env->getStaticObjectField(cls, "REF_FRAME_B", "Lorg/orekit/files/ccsds/ndm/adm/apm/AngularVelocityKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean AngularVelocityKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::adm::apm::AngularVelocity & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_1ff545b12bd19418], a0.this$, a1.this$, a2.this$);
              }

              AngularVelocityKey AngularVelocityKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return AngularVelocityKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_ec47ab5669823943], a0.this$));
              }

              JArray< AngularVelocityKey > AngularVelocityKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< AngularVelocityKey >(env->callStaticObjectMethod(cls, mids$[mid_values_9e1e329af2f3990b]));
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
          namespace adm {
            namespace apm {
              static PyObject *t_AngularVelocityKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AngularVelocityKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AngularVelocityKey_of_(t_AngularVelocityKey *self, PyObject *args);
              static PyObject *t_AngularVelocityKey_process(t_AngularVelocityKey *self, PyObject *args);
              static PyObject *t_AngularVelocityKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_AngularVelocityKey_values(PyTypeObject *type);
              static PyObject *t_AngularVelocityKey_get__parameters_(t_AngularVelocityKey *self, void *data);
              static PyGetSetDef t_AngularVelocityKey__fields_[] = {
                DECLARE_GET_FIELD(t_AngularVelocityKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AngularVelocityKey__methods_[] = {
                DECLARE_METHOD(t_AngularVelocityKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AngularVelocityKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AngularVelocityKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_AngularVelocityKey, process, METH_VARARGS),
                DECLARE_METHOD(t_AngularVelocityKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_AngularVelocityKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AngularVelocityKey)[] = {
                { Py_tp_methods, t_AngularVelocityKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_AngularVelocityKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AngularVelocityKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(AngularVelocityKey, t_AngularVelocityKey, AngularVelocityKey);
              PyObject *t_AngularVelocityKey::wrap_Object(const AngularVelocityKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AngularVelocityKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AngularVelocityKey *self = (t_AngularVelocityKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_AngularVelocityKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AngularVelocityKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AngularVelocityKey *self = (t_AngularVelocityKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_AngularVelocityKey::install(PyObject *module)
              {
                installType(&PY_TYPE(AngularVelocityKey), &PY_TYPE_DEF(AngularVelocityKey), module, "AngularVelocityKey", 0);
              }

              void t_AngularVelocityKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AngularVelocityKey), "class_", make_descriptor(AngularVelocityKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AngularVelocityKey), "wrapfn_", make_descriptor(t_AngularVelocityKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AngularVelocityKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(AngularVelocityKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(AngularVelocityKey), "ANGVEL_FRAME", make_descriptor(t_AngularVelocityKey::wrap_Object(*AngularVelocityKey::ANGVEL_FRAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AngularVelocityKey), "ANGVEL_X", make_descriptor(t_AngularVelocityKey::wrap_Object(*AngularVelocityKey::ANGVEL_X)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AngularVelocityKey), "ANGVEL_Y", make_descriptor(t_AngularVelocityKey::wrap_Object(*AngularVelocityKey::ANGVEL_Y)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AngularVelocityKey), "ANGVEL_Z", make_descriptor(t_AngularVelocityKey::wrap_Object(*AngularVelocityKey::ANGVEL_Z)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AngularVelocityKey), "COMMENT", make_descriptor(t_AngularVelocityKey::wrap_Object(*AngularVelocityKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AngularVelocityKey), "REF_FRAME_A", make_descriptor(t_AngularVelocityKey::wrap_Object(*AngularVelocityKey::REF_FRAME_A)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AngularVelocityKey), "REF_FRAME_B", make_descriptor(t_AngularVelocityKey::wrap_Object(*AngularVelocityKey::REF_FRAME_B)));
              }

              static PyObject *t_AngularVelocityKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AngularVelocityKey::initializeClass, 1)))
                  return NULL;
                return t_AngularVelocityKey::wrap_Object(AngularVelocityKey(((t_AngularVelocityKey *) arg)->object.this$));
              }
              static PyObject *t_AngularVelocityKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AngularVelocityKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AngularVelocityKey_of_(t_AngularVelocityKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_AngularVelocityKey_process(t_AngularVelocityKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::apm::AngularVelocity a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::adm::apm::AngularVelocity::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_AngularVelocityKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                AngularVelocityKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::apm::AngularVelocityKey::valueOf(a0));
                  return t_AngularVelocityKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_AngularVelocityKey_values(PyTypeObject *type)
              {
                JArray< AngularVelocityKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::apm::AngularVelocityKey::values());
                return JArray<jobject>(result.this$).wrap(t_AngularVelocityKey::wrap_jobject);
              }
              static PyObject *t_AngularVelocityKey_get__parameters_(t_AngularVelocityKey *self, void *data)
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
#include "org/hipparchus/stat/descriptive/moment/FirstMoment.h"
#include "org/hipparchus/stat/descriptive/moment/FirstMoment.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace moment {

          ::java::lang::Class *FirstMoment::class$ = NULL;
          jmethodID *FirstMoment::mids$ = NULL;
          bool FirstMoment::live$ = false;

          jclass FirstMoment::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/moment/FirstMoment");

              mids$ = new jmethodID[max_mid];
              mids$[mid_clear_0640e6acf969ed28] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_copy_9efcb4b822312722] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/moment/FirstMoment;");
              mids$[mid_getN_9e26256fb0d384a2] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getResult_557b8123390d8d0c] = env->getMethodID(cls, "getResult", "()D");
              mids$[mid_increment_10f281d777284cea] = env->getMethodID(cls, "increment", "(D)V");
              mids$[mid_aggregate_4588de4772df8531] = env->getMethodID(cls, "aggregate", "(Lorg/hipparchus/stat/descriptive/moment/FirstMoment;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void FirstMoment::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_0640e6acf969ed28]);
          }

          FirstMoment FirstMoment::copy() const
          {
            return FirstMoment(env->callObjectMethod(this$, mids$[mid_copy_9efcb4b822312722]));
          }

          jlong FirstMoment::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_9e26256fb0d384a2]);
          }

          jdouble FirstMoment::getResult() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_557b8123390d8d0c]);
          }

          void FirstMoment::increment(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_increment_10f281d777284cea], a0);
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
    namespace stat {
      namespace descriptive {
        namespace moment {
          static PyObject *t_FirstMoment_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FirstMoment_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FirstMoment_clear(t_FirstMoment *self, PyObject *args);
          static PyObject *t_FirstMoment_copy(t_FirstMoment *self, PyObject *args);
          static PyObject *t_FirstMoment_getN(t_FirstMoment *self, PyObject *args);
          static PyObject *t_FirstMoment_getResult(t_FirstMoment *self, PyObject *args);
          static PyObject *t_FirstMoment_increment(t_FirstMoment *self, PyObject *args);
          static PyObject *t_FirstMoment_get__n(t_FirstMoment *self, void *data);
          static PyObject *t_FirstMoment_get__result(t_FirstMoment *self, void *data);
          static PyGetSetDef t_FirstMoment__fields_[] = {
            DECLARE_GET_FIELD(t_FirstMoment, n),
            DECLARE_GET_FIELD(t_FirstMoment, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FirstMoment__methods_[] = {
            DECLARE_METHOD(t_FirstMoment, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FirstMoment, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FirstMoment, clear, METH_VARARGS),
            DECLARE_METHOD(t_FirstMoment, copy, METH_VARARGS),
            DECLARE_METHOD(t_FirstMoment, getN, METH_VARARGS),
            DECLARE_METHOD(t_FirstMoment, getResult, METH_VARARGS),
            DECLARE_METHOD(t_FirstMoment, increment, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FirstMoment)[] = {
            { Py_tp_methods, t_FirstMoment__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_FirstMoment__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FirstMoment)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(FirstMoment, t_FirstMoment, FirstMoment);

          void t_FirstMoment::install(PyObject *module)
          {
            installType(&PY_TYPE(FirstMoment), &PY_TYPE_DEF(FirstMoment), module, "FirstMoment", 0);
          }

          void t_FirstMoment::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FirstMoment), "class_", make_descriptor(FirstMoment::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FirstMoment), "wrapfn_", make_descriptor(t_FirstMoment::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FirstMoment), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FirstMoment_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FirstMoment::initializeClass, 1)))
              return NULL;
            return t_FirstMoment::wrap_Object(FirstMoment(((t_FirstMoment *) arg)->object.this$));
          }
          static PyObject *t_FirstMoment_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FirstMoment::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FirstMoment_clear(t_FirstMoment *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.clear());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(FirstMoment), (PyObject *) self, "clear", args, 2);
          }

          static PyObject *t_FirstMoment_copy(t_FirstMoment *self, PyObject *args)
          {
            FirstMoment result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_FirstMoment::wrap_Object(result);
            }

            return callSuper(PY_TYPE(FirstMoment), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_FirstMoment_getN(t_FirstMoment *self, PyObject *args)
          {
            jlong result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getN());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            return callSuper(PY_TYPE(FirstMoment), (PyObject *) self, "getN", args, 2);
          }

          static PyObject *t_FirstMoment_getResult(t_FirstMoment *self, PyObject *args)
          {
            jdouble result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getResult());
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(FirstMoment), (PyObject *) self, "getResult", args, 2);
          }

          static PyObject *t_FirstMoment_increment(t_FirstMoment *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(FirstMoment), (PyObject *) self, "increment", args, 2);
          }

          static PyObject *t_FirstMoment_get__n(t_FirstMoment *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }

          static PyObject *t_FirstMoment_get__result(t_FirstMoment *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getResult());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/SimpleTimeStampedTableParser$RowConverter.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *SimpleTimeStampedTableParser$RowConverter::class$ = NULL;
      jmethodID *SimpleTimeStampedTableParser$RowConverter::mids$ = NULL;
      bool SimpleTimeStampedTableParser$RowConverter::live$ = false;

      jclass SimpleTimeStampedTableParser$RowConverter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/SimpleTimeStampedTableParser$RowConverter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_convert_882a135460ccee29] = env->getMethodID(cls, "convert", "([D)Lorg/orekit/time/TimeStamped;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::time::TimeStamped SimpleTimeStampedTableParser$RowConverter::convert(const JArray< jdouble > & a0) const
      {
        return ::org::orekit::time::TimeStamped(env->callObjectMethod(this$, mids$[mid_convert_882a135460ccee29], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace data {
      static PyObject *t_SimpleTimeStampedTableParser$RowConverter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SimpleTimeStampedTableParser$RowConverter_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SimpleTimeStampedTableParser$RowConverter_of_(t_SimpleTimeStampedTableParser$RowConverter *self, PyObject *args);
      static PyObject *t_SimpleTimeStampedTableParser$RowConverter_convert(t_SimpleTimeStampedTableParser$RowConverter *self, PyObject *arg);
      static PyObject *t_SimpleTimeStampedTableParser$RowConverter_get__parameters_(t_SimpleTimeStampedTableParser$RowConverter *self, void *data);
      static PyGetSetDef t_SimpleTimeStampedTableParser$RowConverter__fields_[] = {
        DECLARE_GET_FIELD(t_SimpleTimeStampedTableParser$RowConverter, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SimpleTimeStampedTableParser$RowConverter__methods_[] = {
        DECLARE_METHOD(t_SimpleTimeStampedTableParser$RowConverter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SimpleTimeStampedTableParser$RowConverter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SimpleTimeStampedTableParser$RowConverter, of_, METH_VARARGS),
        DECLARE_METHOD(t_SimpleTimeStampedTableParser$RowConverter, convert, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SimpleTimeStampedTableParser$RowConverter)[] = {
        { Py_tp_methods, t_SimpleTimeStampedTableParser$RowConverter__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_SimpleTimeStampedTableParser$RowConverter__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SimpleTimeStampedTableParser$RowConverter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SimpleTimeStampedTableParser$RowConverter, t_SimpleTimeStampedTableParser$RowConverter, SimpleTimeStampedTableParser$RowConverter);
      PyObject *t_SimpleTimeStampedTableParser$RowConverter::wrap_Object(const SimpleTimeStampedTableParser$RowConverter& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SimpleTimeStampedTableParser$RowConverter::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SimpleTimeStampedTableParser$RowConverter *self = (t_SimpleTimeStampedTableParser$RowConverter *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_SimpleTimeStampedTableParser$RowConverter::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SimpleTimeStampedTableParser$RowConverter::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SimpleTimeStampedTableParser$RowConverter *self = (t_SimpleTimeStampedTableParser$RowConverter *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_SimpleTimeStampedTableParser$RowConverter::install(PyObject *module)
      {
        installType(&PY_TYPE(SimpleTimeStampedTableParser$RowConverter), &PY_TYPE_DEF(SimpleTimeStampedTableParser$RowConverter), module, "SimpleTimeStampedTableParser$RowConverter", 0);
      }

      void t_SimpleTimeStampedTableParser$RowConverter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleTimeStampedTableParser$RowConverter), "class_", make_descriptor(SimpleTimeStampedTableParser$RowConverter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleTimeStampedTableParser$RowConverter), "wrapfn_", make_descriptor(t_SimpleTimeStampedTableParser$RowConverter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleTimeStampedTableParser$RowConverter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SimpleTimeStampedTableParser$RowConverter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SimpleTimeStampedTableParser$RowConverter::initializeClass, 1)))
          return NULL;
        return t_SimpleTimeStampedTableParser$RowConverter::wrap_Object(SimpleTimeStampedTableParser$RowConverter(((t_SimpleTimeStampedTableParser$RowConverter *) arg)->object.this$));
      }
      static PyObject *t_SimpleTimeStampedTableParser$RowConverter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SimpleTimeStampedTableParser$RowConverter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_SimpleTimeStampedTableParser$RowConverter_of_(t_SimpleTimeStampedTableParser$RowConverter *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_SimpleTimeStampedTableParser$RowConverter_convert(t_SimpleTimeStampedTableParser$RowConverter *self, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);
        ::org::orekit::time::TimeStamped result((jobject) NULL);

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(result = self->object.convert(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_TimeStamped::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "convert", arg);
        return NULL;
      }
      static PyObject *t_SimpleTimeStampedTableParser$RowConverter_get__parameters_(t_SimpleTimeStampedTableParser$RowConverter *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/SHMFormatReader.h"
#include "java/io/IOException.h"
#include "java/text/ParseException.h"
#include "java/io/InputStream.h"
#include "org/orekit/errors/OrekitException.h"
#include "org/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *SHMFormatReader::class$ = NULL;
          jmethodID *SHMFormatReader::mids$ = NULL;
          bool SHMFormatReader::live$ = false;

          jclass SHMFormatReader::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/SHMFormatReader");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_e5ca4b97ee6bd2b6] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Z)V");
              mids$[mid_init$_738db7d6574836ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;ZLorg/orekit/time/TimeScale;)V");
              mids$[mid_getProvider_f0b357b475e18957] = env->getMethodID(cls, "getProvider", "(ZII)Lorg/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider;");
              mids$[mid_loadData_15770e8d8949a557] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SHMFormatReader::SHMFormatReader(const ::java::lang::String & a0, jboolean a1) : ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader(env->newObject(initializeClass, &mids$, mid_init$_e5ca4b97ee6bd2b6, a0.this$, a1)) {}

          SHMFormatReader::SHMFormatReader(const ::java::lang::String & a0, jboolean a1, const ::org::orekit::time::TimeScale & a2) : ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader(env->newObject(initializeClass, &mids$, mid_init$_738db7d6574836ac, a0.this$, a1, a2.this$)) {}

          ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider SHMFormatReader::getProvider(jboolean a0, jint a1, jint a2) const
          {
            return ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider(env->callObjectMethod(this$, mids$[mid_getProvider_f0b357b475e18957], a0, a1, a2));
          }

          void SHMFormatReader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_loadData_15770e8d8949a557], a0.this$, a1.this$);
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
    namespace forces {
      namespace gravity {
        namespace potential {
          static PyObject *t_SHMFormatReader_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SHMFormatReader_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SHMFormatReader_init_(t_SHMFormatReader *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SHMFormatReader_getProvider(t_SHMFormatReader *self, PyObject *args);
          static PyObject *t_SHMFormatReader_loadData(t_SHMFormatReader *self, PyObject *args);

          static PyMethodDef t_SHMFormatReader__methods_[] = {
            DECLARE_METHOD(t_SHMFormatReader, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SHMFormatReader, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SHMFormatReader, getProvider, METH_VARARGS),
            DECLARE_METHOD(t_SHMFormatReader, loadData, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SHMFormatReader)[] = {
            { Py_tp_methods, t_SHMFormatReader__methods_ },
            { Py_tp_init, (void *) t_SHMFormatReader_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SHMFormatReader)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::gravity::potential::PotentialCoefficientsReader),
            NULL
          };

          DEFINE_TYPE(SHMFormatReader, t_SHMFormatReader, SHMFormatReader);

          void t_SHMFormatReader::install(PyObject *module)
          {
            installType(&PY_TYPE(SHMFormatReader), &PY_TYPE_DEF(SHMFormatReader), module, "SHMFormatReader", 0);
          }

          void t_SHMFormatReader::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SHMFormatReader), "class_", make_descriptor(SHMFormatReader::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SHMFormatReader), "wrapfn_", make_descriptor(t_SHMFormatReader::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SHMFormatReader), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SHMFormatReader_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SHMFormatReader::initializeClass, 1)))
              return NULL;
            return t_SHMFormatReader::wrap_Object(SHMFormatReader(((t_SHMFormatReader *) arg)->object.this$));
          }
          static PyObject *t_SHMFormatReader_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SHMFormatReader::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SHMFormatReader_init_(t_SHMFormatReader *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::java::lang::String a0((jobject) NULL);
                jboolean a1;
                SHMFormatReader object((jobject) NULL);

                if (!parseArgs(args, "sZ", &a0, &a1))
                {
                  INT_CALL(object = SHMFormatReader(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::java::lang::String a0((jobject) NULL);
                jboolean a1;
                ::org::orekit::time::TimeScale a2((jobject) NULL);
                SHMFormatReader object((jobject) NULL);

                if (!parseArgs(args, "sZk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = SHMFormatReader(a0, a1, a2));
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

          static PyObject *t_SHMFormatReader_getProvider(t_SHMFormatReader *self, PyObject *args)
          {
            jboolean a0;
            jint a1;
            jint a2;
            ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider result((jobject) NULL);

            if (!parseArgs(args, "ZII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getProvider(a0, a1, a2));
              return ::org::orekit::forces::gravity::potential::t_RawSphericalHarmonicsProvider::wrap_Object(result);
            }

            return callSuper(PY_TYPE(SHMFormatReader), (PyObject *) self, "getProvider", args, 2);
          }

          static PyObject *t_SHMFormatReader_loadData(t_SHMFormatReader *self, PyObject *args)
          {
            ::java::io::InputStream a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);

            if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.loadData(a0, a1));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(SHMFormatReader), (PyObject *) self, "loadData", args, 2);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/ranking/RankingAlgorithm.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace ranking {

        ::java::lang::Class *RankingAlgorithm::class$ = NULL;
        jmethodID *RankingAlgorithm::mids$ = NULL;
        bool RankingAlgorithm::live$ = false;

        jclass RankingAlgorithm::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/ranking/RankingAlgorithm");

            mids$ = new jmethodID[max_mid];
            mids$[mid_rank_1db7c087750eaffe] = env->getMethodID(cls, "rank", "([D)[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        JArray< jdouble > RankingAlgorithm::rank(const JArray< jdouble > & a0) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_rank_1db7c087750eaffe], a0.this$));
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
    namespace stat {
      namespace ranking {
        static PyObject *t_RankingAlgorithm_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RankingAlgorithm_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RankingAlgorithm_rank(t_RankingAlgorithm *self, PyObject *arg);

        static PyMethodDef t_RankingAlgorithm__methods_[] = {
          DECLARE_METHOD(t_RankingAlgorithm, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RankingAlgorithm, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RankingAlgorithm, rank, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(RankingAlgorithm)[] = {
          { Py_tp_methods, t_RankingAlgorithm__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(RankingAlgorithm)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(RankingAlgorithm, t_RankingAlgorithm, RankingAlgorithm);

        void t_RankingAlgorithm::install(PyObject *module)
        {
          installType(&PY_TYPE(RankingAlgorithm), &PY_TYPE_DEF(RankingAlgorithm), module, "RankingAlgorithm", 0);
        }

        void t_RankingAlgorithm::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(RankingAlgorithm), "class_", make_descriptor(RankingAlgorithm::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RankingAlgorithm), "wrapfn_", make_descriptor(t_RankingAlgorithm::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RankingAlgorithm), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_RankingAlgorithm_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, RankingAlgorithm::initializeClass, 1)))
            return NULL;
          return t_RankingAlgorithm::wrap_Object(RankingAlgorithm(((t_RankingAlgorithm *) arg)->object.this$));
        }
        static PyObject *t_RankingAlgorithm_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, RankingAlgorithm::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_RankingAlgorithm_rank(t_RankingAlgorithm *self, PyObject *arg)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > result((jobject) NULL);

          if (!parseArg(arg, "[D", &a0))
          {
            OBJ_CALL(result = self->object.rank(a0));
            return result.wrap();
          }

          PyErr_SetArgsError((PyObject *) self, "rank", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/tle/FieldDeepSDP4.h"
#include "org/orekit/propagation/analytical/tle/FieldTLE.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {

          ::java::lang::Class *FieldDeepSDP4::class$ = NULL;
          jmethodID *FieldDeepSDP4::mids$ = NULL;
          bool FieldDeepSDP4::live$ = false;

          jclass FieldDeepSDP4::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/FieldDeepSDP4");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_506aefaa51ea8c08] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/tle/FieldTLE;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_init$_09515132f38e5487] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/tle/FieldTLE;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/frames/Frame;[Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_luniSolarTermsComputation_0640e6acf969ed28] = env->getMethodID(cls, "luniSolarTermsComputation", "()V");
              mids$[mid_deepSecularEffects_1ee4bed350fde589] = env->getMethodID(cls, "deepSecularEffects", "(Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_deepPeriodicEffects_1ee4bed350fde589] = env->getMethodID(cls, "deepPeriodicEffects", "(Lorg/hipparchus/CalculusFieldElement;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldDeepSDP4::FieldDeepSDP4(const ::org::orekit::propagation::analytical::tle::FieldTLE & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3) : ::org::orekit::propagation::analytical::tle::FieldSDP4(env->newObject(initializeClass, &mids$, mid_init$_506aefaa51ea8c08, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          FieldDeepSDP4::FieldDeepSDP4(const ::org::orekit::propagation::analytical::tle::FieldTLE & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::frames::Frame & a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4) : ::org::orekit::propagation::analytical::tle::FieldSDP4(env->newObject(initializeClass, &mids$, mid_init$_09515132f38e5487, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}
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
          static PyObject *t_FieldDeepSDP4_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldDeepSDP4_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldDeepSDP4_of_(t_FieldDeepSDP4 *self, PyObject *args);
          static int t_FieldDeepSDP4_init_(t_FieldDeepSDP4 *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldDeepSDP4_get__parameters_(t_FieldDeepSDP4 *self, void *data);
          static PyGetSetDef t_FieldDeepSDP4__fields_[] = {
            DECLARE_GET_FIELD(t_FieldDeepSDP4, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldDeepSDP4__methods_[] = {
            DECLARE_METHOD(t_FieldDeepSDP4, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldDeepSDP4, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldDeepSDP4, of_, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldDeepSDP4)[] = {
            { Py_tp_methods, t_FieldDeepSDP4__methods_ },
            { Py_tp_init, (void *) t_FieldDeepSDP4_init_ },
            { Py_tp_getset, t_FieldDeepSDP4__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldDeepSDP4)[] = {
            &PY_TYPE_DEF(::org::orekit::propagation::analytical::tle::FieldSDP4),
            NULL
          };

          DEFINE_TYPE(FieldDeepSDP4, t_FieldDeepSDP4, FieldDeepSDP4);
          PyObject *t_FieldDeepSDP4::wrap_Object(const FieldDeepSDP4& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldDeepSDP4::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldDeepSDP4 *self = (t_FieldDeepSDP4 *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldDeepSDP4::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldDeepSDP4::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldDeepSDP4 *self = (t_FieldDeepSDP4 *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldDeepSDP4::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldDeepSDP4), &PY_TYPE_DEF(FieldDeepSDP4), module, "FieldDeepSDP4", 0);
          }

          void t_FieldDeepSDP4::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDeepSDP4), "class_", make_descriptor(FieldDeepSDP4::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDeepSDP4), "wrapfn_", make_descriptor(t_FieldDeepSDP4::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDeepSDP4), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldDeepSDP4_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldDeepSDP4::initializeClass, 1)))
              return NULL;
            return t_FieldDeepSDP4::wrap_Object(FieldDeepSDP4(((t_FieldDeepSDP4 *) arg)->object.this$));
          }
          static PyObject *t_FieldDeepSDP4_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldDeepSDP4::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldDeepSDP4_of_(t_FieldDeepSDP4 *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldDeepSDP4_init_(t_FieldDeepSDP4 *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
              {
                ::org::orekit::propagation::analytical::tle::FieldTLE a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
                PyTypeObject **p3;
                FieldDeepSDP4 object((jobject) NULL);

                if (!parseArgs(args, "KkK[K", ::org::orekit::propagation::analytical::tle::FieldTLE::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::analytical::tle::t_FieldTLE::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  INT_CALL(object = FieldDeepSDP4(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 5:
              {
                ::org::orekit::propagation::analytical::tle::FieldTLE a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::frames::Frame a3((jobject) NULL);
                JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
                PyTypeObject **p4;
                FieldDeepSDP4 object((jobject) NULL);

                if (!parseArgs(args, "KkKk[K", ::org::orekit::propagation::analytical::tle::FieldTLE::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::analytical::tle::t_FieldTLE::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  INT_CALL(object = FieldDeepSDP4(a0, a1, a2, a3, a4));
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
          static PyObject *t_FieldDeepSDP4_get__parameters_(t_FieldDeepSDP4 *self, void *data)
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
#include "org/hipparchus/distribution/multivariate/MixtureMultivariateRealDistribution.h"
#include "java/util/List.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "java/lang/Double.h"
#include "org/hipparchus/util/Pair.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace multivariate {

        ::java::lang::Class *MixtureMultivariateRealDistribution::class$ = NULL;
        jmethodID *MixtureMultivariateRealDistribution::mids$ = NULL;
        bool MixtureMultivariateRealDistribution::live$ = false;

        jclass MixtureMultivariateRealDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/multivariate/MixtureMultivariateRealDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_4ccaedadb068bdeb] = env->getMethodID(cls, "<init>", "(Ljava/util/List;)V");
            mids$[mid_init$_6ec0adca852af91a] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/RandomGenerator;Ljava/util/List;)V");
            mids$[mid_density_86c4a0582e0747ce] = env->getMethodID(cls, "density", "([D)D");
            mids$[mid_getComponents_0d9551367f7ecdef] = env->getMethodID(cls, "getComponents", "()Ljava/util/List;");
            mids$[mid_reseedRandomGenerator_3cd6a6b354c6aa22] = env->getMethodID(cls, "reseedRandomGenerator", "(J)V");
            mids$[mid_sample_a53a7513ecedada2] = env->getMethodID(cls, "sample", "()[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MixtureMultivariateRealDistribution::MixtureMultivariateRealDistribution(const ::java::util::List & a0) : ::org::hipparchus::distribution::multivariate::AbstractMultivariateRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_4ccaedadb068bdeb, a0.this$)) {}

        MixtureMultivariateRealDistribution::MixtureMultivariateRealDistribution(const ::org::hipparchus::random::RandomGenerator & a0, const ::java::util::List & a1) : ::org::hipparchus::distribution::multivariate::AbstractMultivariateRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_6ec0adca852af91a, a0.this$, a1.this$)) {}

        jdouble MixtureMultivariateRealDistribution::density(const JArray< jdouble > & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_86c4a0582e0747ce], a0.this$);
        }

        ::java::util::List MixtureMultivariateRealDistribution::getComponents() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getComponents_0d9551367f7ecdef]));
        }

        void MixtureMultivariateRealDistribution::reseedRandomGenerator(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_reseedRandomGenerator_3cd6a6b354c6aa22], a0);
        }

        JArray< jdouble > MixtureMultivariateRealDistribution::sample() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_sample_a53a7513ecedada2]));
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
      namespace multivariate {
        static PyObject *t_MixtureMultivariateRealDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MixtureMultivariateRealDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MixtureMultivariateRealDistribution_of_(t_MixtureMultivariateRealDistribution *self, PyObject *args);
        static int t_MixtureMultivariateRealDistribution_init_(t_MixtureMultivariateRealDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MixtureMultivariateRealDistribution_density(t_MixtureMultivariateRealDistribution *self, PyObject *args);
        static PyObject *t_MixtureMultivariateRealDistribution_getComponents(t_MixtureMultivariateRealDistribution *self);
        static PyObject *t_MixtureMultivariateRealDistribution_reseedRandomGenerator(t_MixtureMultivariateRealDistribution *self, PyObject *args);
        static PyObject *t_MixtureMultivariateRealDistribution_sample(t_MixtureMultivariateRealDistribution *self, PyObject *args);
        static PyObject *t_MixtureMultivariateRealDistribution_get__components(t_MixtureMultivariateRealDistribution *self, void *data);
        static PyObject *t_MixtureMultivariateRealDistribution_get__parameters_(t_MixtureMultivariateRealDistribution *self, void *data);
        static PyGetSetDef t_MixtureMultivariateRealDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_MixtureMultivariateRealDistribution, components),
          DECLARE_GET_FIELD(t_MixtureMultivariateRealDistribution, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_MixtureMultivariateRealDistribution__methods_[] = {
          DECLARE_METHOD(t_MixtureMultivariateRealDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MixtureMultivariateRealDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MixtureMultivariateRealDistribution, of_, METH_VARARGS),
          DECLARE_METHOD(t_MixtureMultivariateRealDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_MixtureMultivariateRealDistribution, getComponents, METH_NOARGS),
          DECLARE_METHOD(t_MixtureMultivariateRealDistribution, reseedRandomGenerator, METH_VARARGS),
          DECLARE_METHOD(t_MixtureMultivariateRealDistribution, sample, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MixtureMultivariateRealDistribution)[] = {
          { Py_tp_methods, t_MixtureMultivariateRealDistribution__methods_ },
          { Py_tp_init, (void *) t_MixtureMultivariateRealDistribution_init_ },
          { Py_tp_getset, t_MixtureMultivariateRealDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MixtureMultivariateRealDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::multivariate::AbstractMultivariateRealDistribution),
          NULL
        };

        DEFINE_TYPE(MixtureMultivariateRealDistribution, t_MixtureMultivariateRealDistribution, MixtureMultivariateRealDistribution);
        PyObject *t_MixtureMultivariateRealDistribution::wrap_Object(const MixtureMultivariateRealDistribution& object, PyTypeObject *p0)
        {
          PyObject *obj = t_MixtureMultivariateRealDistribution::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_MixtureMultivariateRealDistribution *self = (t_MixtureMultivariateRealDistribution *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_MixtureMultivariateRealDistribution::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_MixtureMultivariateRealDistribution::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_MixtureMultivariateRealDistribution *self = (t_MixtureMultivariateRealDistribution *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_MixtureMultivariateRealDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(MixtureMultivariateRealDistribution), &PY_TYPE_DEF(MixtureMultivariateRealDistribution), module, "MixtureMultivariateRealDistribution", 0);
        }

        void t_MixtureMultivariateRealDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MixtureMultivariateRealDistribution), "class_", make_descriptor(MixtureMultivariateRealDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MixtureMultivariateRealDistribution), "wrapfn_", make_descriptor(t_MixtureMultivariateRealDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MixtureMultivariateRealDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MixtureMultivariateRealDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MixtureMultivariateRealDistribution::initializeClass, 1)))
            return NULL;
          return t_MixtureMultivariateRealDistribution::wrap_Object(MixtureMultivariateRealDistribution(((t_MixtureMultivariateRealDistribution *) arg)->object.this$));
        }
        static PyObject *t_MixtureMultivariateRealDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MixtureMultivariateRealDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_MixtureMultivariateRealDistribution_of_(t_MixtureMultivariateRealDistribution *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_MixtureMultivariateRealDistribution_init_(t_MixtureMultivariateRealDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              MixtureMultivariateRealDistribution object((jobject) NULL);

              if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
              {
                INT_CALL(object = MixtureMultivariateRealDistribution(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              ::org::hipparchus::random::RandomGenerator a0((jobject) NULL);
              ::java::util::List a1((jobject) NULL);
              PyTypeObject **p1;
              MixtureMultivariateRealDistribution object((jobject) NULL);

              if (!parseArgs(args, "kK", ::org::hipparchus::random::RandomGenerator::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_))
              {
                INT_CALL(object = MixtureMultivariateRealDistribution(a0, a1));
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

        static PyObject *t_MixtureMultivariateRealDistribution_density(t_MixtureMultivariateRealDistribution *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "[D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(MixtureMultivariateRealDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_MixtureMultivariateRealDistribution_getComponents(t_MixtureMultivariateRealDistribution *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getComponents());
          return ::java::util::t_List::wrap_Object(result);
        }

        static PyObject *t_MixtureMultivariateRealDistribution_reseedRandomGenerator(t_MixtureMultivariateRealDistribution *self, PyObject *args)
        {
          jlong a0;

          if (!parseArgs(args, "J", &a0))
          {
            OBJ_CALL(self->object.reseedRandomGenerator(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(MixtureMultivariateRealDistribution), (PyObject *) self, "reseedRandomGenerator", args, 2);
        }

        static PyObject *t_MixtureMultivariateRealDistribution_sample(t_MixtureMultivariateRealDistribution *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sample());
            return result.wrap();
          }

          return callSuper(PY_TYPE(MixtureMultivariateRealDistribution), (PyObject *) self, "sample", args, 2);
        }
        static PyObject *t_MixtureMultivariateRealDistribution_get__parameters_(t_MixtureMultivariateRealDistribution *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_MixtureMultivariateRealDistribution_get__components(t_MixtureMultivariateRealDistribution *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getComponents());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/sp3/SP3CoordinateHermiteInterpolator.h"
#include "org/orekit/files/sp3/SP3Coordinate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {

        ::java::lang::Class *SP3CoordinateHermiteInterpolator::class$ = NULL;
        jmethodID *SP3CoordinateHermiteInterpolator::mids$ = NULL;
        bool SP3CoordinateHermiteInterpolator::live$ = false;

        jclass SP3CoordinateHermiteInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sp3/SP3CoordinateHermiteInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_bcaf7e2c67482688] = env->getMethodID(cls, "<init>", "(IDZ)V");
            mids$[mid_interpolate_53534de4d71bb107] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractTimeInterpolator$InterpolationData;)Lorg/orekit/files/sp3/SP3Coordinate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SP3CoordinateHermiteInterpolator::SP3CoordinateHermiteInterpolator(jint a0, jdouble a1, jboolean a2) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_bcaf7e2c67482688, a0, a1, a2)) {}
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
      namespace sp3 {
        static PyObject *t_SP3CoordinateHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3CoordinateHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3CoordinateHermiteInterpolator_of_(t_SP3CoordinateHermiteInterpolator *self, PyObject *args);
        static int t_SP3CoordinateHermiteInterpolator_init_(t_SP3CoordinateHermiteInterpolator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SP3CoordinateHermiteInterpolator_get__parameters_(t_SP3CoordinateHermiteInterpolator *self, void *data);
        static PyGetSetDef t_SP3CoordinateHermiteInterpolator__fields_[] = {
          DECLARE_GET_FIELD(t_SP3CoordinateHermiteInterpolator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SP3CoordinateHermiteInterpolator__methods_[] = {
          DECLARE_METHOD(t_SP3CoordinateHermiteInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3CoordinateHermiteInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3CoordinateHermiteInterpolator, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SP3CoordinateHermiteInterpolator)[] = {
          { Py_tp_methods, t_SP3CoordinateHermiteInterpolator__methods_ },
          { Py_tp_init, (void *) t_SP3CoordinateHermiteInterpolator_init_ },
          { Py_tp_getset, t_SP3CoordinateHermiteInterpolator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SP3CoordinateHermiteInterpolator)[] = {
          &PY_TYPE_DEF(::org::orekit::time::AbstractTimeInterpolator),
          NULL
        };

        DEFINE_TYPE(SP3CoordinateHermiteInterpolator, t_SP3CoordinateHermiteInterpolator, SP3CoordinateHermiteInterpolator);
        PyObject *t_SP3CoordinateHermiteInterpolator::wrap_Object(const SP3CoordinateHermiteInterpolator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SP3CoordinateHermiteInterpolator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SP3CoordinateHermiteInterpolator *self = (t_SP3CoordinateHermiteInterpolator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_SP3CoordinateHermiteInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SP3CoordinateHermiteInterpolator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SP3CoordinateHermiteInterpolator *self = (t_SP3CoordinateHermiteInterpolator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_SP3CoordinateHermiteInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(SP3CoordinateHermiteInterpolator), &PY_TYPE_DEF(SP3CoordinateHermiteInterpolator), module, "SP3CoordinateHermiteInterpolator", 0);
        }

        void t_SP3CoordinateHermiteInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3CoordinateHermiteInterpolator), "class_", make_descriptor(SP3CoordinateHermiteInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3CoordinateHermiteInterpolator), "wrapfn_", make_descriptor(t_SP3CoordinateHermiteInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3CoordinateHermiteInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SP3CoordinateHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SP3CoordinateHermiteInterpolator::initializeClass, 1)))
            return NULL;
          return t_SP3CoordinateHermiteInterpolator::wrap_Object(SP3CoordinateHermiteInterpolator(((t_SP3CoordinateHermiteInterpolator *) arg)->object.this$));
        }
        static PyObject *t_SP3CoordinateHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SP3CoordinateHermiteInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SP3CoordinateHermiteInterpolator_of_(t_SP3CoordinateHermiteInterpolator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_SP3CoordinateHermiteInterpolator_init_(t_SP3CoordinateHermiteInterpolator *self, PyObject *args, PyObject *kwds)
        {
          jint a0;
          jdouble a1;
          jboolean a2;
          SP3CoordinateHermiteInterpolator object((jobject) NULL);

          if (!parseArgs(args, "IDZ", &a0, &a1, &a2))
          {
            INT_CALL(object = SP3CoordinateHermiteInterpolator(a0, a1, a2));
            self->object = object;
            self->parameters[0] = ::org::orekit::files::sp3::PY_TYPE(SP3Coordinate);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }
        static PyObject *t_SP3CoordinateHermiteInterpolator_get__parameters_(t_SP3CoordinateHermiteInterpolator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/MathUtils.h"
#include "org/hipparchus/FieldElement.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/util/MathUtils$FieldSumAndResidual.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/util/MathUtils$SumAndResidual.h"
#include "org/hipparchus/exception/Localizable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *MathUtils::class$ = NULL;
      jmethodID *MathUtils::mids$ = NULL;
      bool MathUtils::live$ = false;
      jdouble MathUtils::PI_SQUARED = (jdouble) 0;
      jdouble MathUtils::SEMI_PI = (jdouble) 0;
      jdouble MathUtils::TWO_PI = (jdouble) 0;

      jclass MathUtils::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/MathUtils");

          mids$ = new jmethodID[max_mid];
          mids$[mid_checkDimension_a84c9a223722150c] = env->getStaticMethodID(cls, "checkDimension", "(II)V");
          mids$[mid_checkFinite_cc18240f4a737f14] = env->getStaticMethodID(cls, "checkFinite", "([D)V");
          mids$[mid_checkFinite_10f281d777284cea] = env->getStaticMethodID(cls, "checkFinite", "(D)V");
          mids$[mid_checkNotNull_009757f2c0fd9090] = env->getStaticMethodID(cls, "checkNotNull", "(Ljava/lang/Object;)V");
          mids$[mid_checkNotNull_08c441469d673017] = env->getStaticMethodID(cls, "checkNotNull", "(Ljava/lang/Object;Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");
          mids$[mid_checkRangeInclusive_87096e3fd8086100] = env->getStaticMethodID(cls, "checkRangeInclusive", "(DDD)V");
          mids$[mid_checkRangeInclusive_b35198c41fa72398] = env->getStaticMethodID(cls, "checkRangeInclusive", "(JJJ)V");
          mids$[mid_copySign_b0a3501566648d40] = env->getStaticMethodID(cls, "copySign", "(BB)B");
          mids$[mid_copySign_5625cf3db98dadc1] = env->getStaticMethodID(cls, "copySign", "(II)I");
          mids$[mid_copySign_c18ab8eab0c49f84] = env->getStaticMethodID(cls, "copySign", "(JJ)J");
          mids$[mid_copySign_110523af027099dd] = env->getStaticMethodID(cls, "copySign", "(SS)S");
          mids$[mid_equals_41fce65646328eb2] = env->getStaticMethodID(cls, "equals", "(DD)Z");
          mids$[mid_hash_02c575777cd113f8] = env->getStaticMethodID(cls, "hash", "([D)I");
          mids$[mid_hash_abbeb9db7144ca23] = env->getStaticMethodID(cls, "hash", "(D)I");
          mids$[mid_max_d5f58731bcb8a011] = env->getStaticMethodID(cls, "max", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_min_d5f58731bcb8a011] = env->getStaticMethodID(cls, "min", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_normalizeAngle_2268d18be49a6087] = env->getStaticMethodID(cls, "normalizeAngle", "(DD)D");
          mids$[mid_normalizeAngle_d5f58731bcb8a011] = env->getStaticMethodID(cls, "normalizeAngle", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_reduce_8d02ba458f22e508] = env->getStaticMethodID(cls, "reduce", "(DDD)D");
          mids$[mid_twoSum_22ddad23a8920c5c] = env->getStaticMethodID(cls, "twoSum", "(DD)Lorg/hipparchus/util/MathUtils$SumAndResidual;");
          mids$[mid_twoSum_171ca3f4012afa76] = env->getStaticMethodID(cls, "twoSum", "(Lorg/hipparchus/FieldElement;Lorg/hipparchus/FieldElement;)Lorg/hipparchus/util/MathUtils$FieldSumAndResidual;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          PI_SQUARED = env->getStaticDoubleField(cls, "PI_SQUARED");
          SEMI_PI = env->getStaticDoubleField(cls, "SEMI_PI");
          TWO_PI = env->getStaticDoubleField(cls, "TWO_PI");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void MathUtils::checkDimension(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkDimension_a84c9a223722150c], a0, a1);
      }

      void MathUtils::checkFinite(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkFinite_cc18240f4a737f14], a0.this$);
      }

      void MathUtils::checkFinite(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkFinite_10f281d777284cea], a0);
      }

      void MathUtils::checkNotNull(const ::java::lang::Object & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkNotNull_009757f2c0fd9090], a0.this$);
      }

      void MathUtils::checkNotNull(const ::java::lang::Object & a0, const ::org::hipparchus::exception::Localizable & a1, const JArray< ::java::lang::Object > & a2)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkNotNull_08c441469d673017], a0.this$, a1.this$, a2.this$);
      }

      void MathUtils::checkRangeInclusive(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkRangeInclusive_87096e3fd8086100], a0, a1, a2);
      }

      void MathUtils::checkRangeInclusive(jlong a0, jlong a1, jlong a2)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkRangeInclusive_b35198c41fa72398], a0, a1, a2);
      }

      jbyte MathUtils::copySign(jbyte a0, jbyte a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticByteMethod(cls, mids$[mid_copySign_b0a3501566648d40], a0, a1);
      }

      jint MathUtils::copySign(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_copySign_5625cf3db98dadc1], a0, a1);
      }

      jlong MathUtils::copySign(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_copySign_c18ab8eab0c49f84], a0, a1);
      }

      jshort MathUtils::copySign(jshort a0, jshort a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticShortMethod(cls, mids$[mid_copySign_110523af027099dd], a0, a1);
      }

      jboolean MathUtils::equals(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_41fce65646328eb2], a0, a1);
      }

      jint MathUtils::hash(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_hash_02c575777cd113f8], a0.this$);
      }

      jint MathUtils::hash(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_hash_abbeb9db7144ca23], a0);
      }

      ::org::hipparchus::CalculusFieldElement MathUtils::max$(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_max_d5f58731bcb8a011], a0.this$, a1.this$));
      }

      ::org::hipparchus::CalculusFieldElement MathUtils::min$(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_min_d5f58731bcb8a011], a0.this$, a1.this$));
      }

      jdouble MathUtils::normalizeAngle(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_normalizeAngle_2268d18be49a6087], a0, a1);
      }

      ::org::hipparchus::CalculusFieldElement MathUtils::normalizeAngle(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_normalizeAngle_d5f58731bcb8a011], a0.this$, a1.this$));
      }

      jdouble MathUtils::reduce(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_reduce_8d02ba458f22e508], a0, a1, a2);
      }

      ::org::hipparchus::util::MathUtils$SumAndResidual MathUtils::twoSum(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::util::MathUtils$SumAndResidual(env->callStaticObjectMethod(cls, mids$[mid_twoSum_22ddad23a8920c5c], a0, a1));
      }

      ::org::hipparchus::util::MathUtils$FieldSumAndResidual MathUtils::twoSum(const ::org::hipparchus::FieldElement & a0, const ::org::hipparchus::FieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::util::MathUtils$FieldSumAndResidual(env->callStaticObjectMethod(cls, mids$[mid_twoSum_171ca3f4012afa76], a0.this$, a1.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace util {
      static PyObject *t_MathUtils_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathUtils_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathUtils_checkDimension(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathUtils_checkFinite(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathUtils_checkNotNull(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathUtils_checkRangeInclusive(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathUtils_copySign(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathUtils_equals(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathUtils_hash(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathUtils_max(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathUtils_min(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathUtils_normalizeAngle(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathUtils_reduce(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathUtils_twoSum(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_MathUtils__methods_[] = {
        DECLARE_METHOD(t_MathUtils, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathUtils, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathUtils, checkDimension, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathUtils, checkFinite, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathUtils, checkNotNull, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathUtils, checkRangeInclusive, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathUtils, copySign, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathUtils, equals, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathUtils, hash, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathUtils, max, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathUtils, min, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathUtils, normalizeAngle, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathUtils, reduce, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathUtils, twoSum, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MathUtils)[] = {
        { Py_tp_methods, t_MathUtils__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MathUtils)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(MathUtils, t_MathUtils, MathUtils);

      void t_MathUtils::install(PyObject *module)
      {
        installType(&PY_TYPE(MathUtils), &PY_TYPE_DEF(MathUtils), module, "MathUtils", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathUtils), "FieldSumAndResidual", make_descriptor(&PY_TYPE_DEF(MathUtils$FieldSumAndResidual)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathUtils), "SumAndResidual", make_descriptor(&PY_TYPE_DEF(MathUtils$SumAndResidual)));
      }

      void t_MathUtils::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathUtils), "class_", make_descriptor(MathUtils::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathUtils), "wrapfn_", make_descriptor(t_MathUtils::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathUtils), "boxfn_", make_descriptor(boxObject));
        env->getClass(MathUtils::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathUtils), "PI_SQUARED", make_descriptor(MathUtils::PI_SQUARED));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathUtils), "SEMI_PI", make_descriptor(MathUtils::SEMI_PI));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathUtils), "TWO_PI", make_descriptor(MathUtils::TWO_PI));
      }

      static PyObject *t_MathUtils_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MathUtils::initializeClass, 1)))
          return NULL;
        return t_MathUtils::wrap_Object(MathUtils(((t_MathUtils *) arg)->object.this$));
      }
      static PyObject *t_MathUtils_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MathUtils::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MathUtils_checkDimension(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jint a1;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(::org::hipparchus::util::MathUtils::checkDimension(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkDimension", args);
        return NULL;
      }

      static PyObject *t_MathUtils_checkFinite(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(::org::hipparchus::util::MathUtils::checkFinite(a0));
              Py_RETURN_NONE;
            }
          }
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(::org::hipparchus::util::MathUtils::checkFinite(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError(type, "checkFinite", args);
        return NULL;
      }

      static PyObject *t_MathUtils_checkNotNull(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::lang::Object a0((jobject) NULL);

            if (!parseArgs(args, "o", &a0))
            {
              OBJ_CALL(::org::hipparchus::util::MathUtils::checkNotNull(a0));
              Py_RETURN_NONE;
            }
          }
          break;
         case 3:
          {
            ::java::lang::Object a0((jobject) NULL);
            ::org::hipparchus::exception::Localizable a1((jobject) NULL);
            JArray< ::java::lang::Object > a2((jobject) NULL);

            if (!parseArgs(args, "ok[o", ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(::org::hipparchus::util::MathUtils::checkNotNull(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError(type, "checkNotNull", args);
        return NULL;
      }

      static PyObject *t_MathUtils_checkRangeInclusive(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;

            if (!parseArgs(args, "DDD", &a0, &a1, &a2))
            {
              OBJ_CALL(::org::hipparchus::util::MathUtils::checkRangeInclusive(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong a2;

            if (!parseArgs(args, "JJJ", &a0, &a1, &a2))
            {
              OBJ_CALL(::org::hipparchus::util::MathUtils::checkRangeInclusive(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError(type, "checkRangeInclusive", args);
        return NULL;
      }

      static PyObject *t_MathUtils_copySign(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jbyte a0;
            jbyte a1;
            jbyte result;

            if (!parseArgs(args, "BB", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathUtils::copySign(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathUtils::copySign(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathUtils::copySign(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
          {
            jshort a0;
            jshort a1;
            jshort result;

            if (!parseArgs(args, "SS", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathUtils::copySign(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
        }

        PyErr_SetArgsError(type, "copySign", args);
        return NULL;
      }

      static PyObject *t_MathUtils_equals(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jboolean result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathUtils::equals(a0, a1));
          Py_RETURN_BOOL(result);
        }

        return callSuper(type, "equals", args, 2);
      }

      static PyObject *t_MathUtils_hash(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            jint result;

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathUtils::hash(a0));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jdouble a0;
            jint result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathUtils::hash(a0));
              return PyLong_FromLong((long) result);
            }
          }
        }

        PyErr_SetArgsError(type, "hash", args);
        return NULL;
      }

      static PyObject *t_MathUtils_max(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathUtils::max$(a0, a1));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "max", args);
        return NULL;
      }

      static PyObject *t_MathUtils_min(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathUtils::min$(a0, a1));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "min", args);
        return NULL;
      }

      static PyObject *t_MathUtils_normalizeAngle(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jdouble a1;
            jdouble result;

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathUtils::normalizeAngle(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathUtils::normalizeAngle(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "normalizeAngle", args);
        return NULL;
      }

      static PyObject *t_MathUtils_reduce(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        jdouble result;

        if (!parseArgs(args, "DDD", &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathUtils::reduce(a0, a1, a2));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "reduce", args);
        return NULL;
      }

      static PyObject *t_MathUtils_twoSum(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jdouble a1;
            ::org::hipparchus::util::MathUtils$SumAndResidual result((jobject) NULL);

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathUtils::twoSum(a0, a1));
              return ::org::hipparchus::util::t_MathUtils$SumAndResidual::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::FieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::util::MathUtils$FieldSumAndResidual result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathUtils::twoSum(a0, a1));
              return ::org::hipparchus::util::t_MathUtils$FieldSumAndResidual::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "twoSum", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/PotentialCoefficientsReader.h"
#include "java/io/IOException.h"
#include "java/text/ParseException.h"
#include "java/io/InputStream.h"
#include "org/orekit/data/DataLoader.h"
#include "org/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/errors/OrekitException.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *PotentialCoefficientsReader::class$ = NULL;
          jmethodID *PotentialCoefficientsReader::mids$ = NULL;
          bool PotentialCoefficientsReader::live$ = false;

          jclass PotentialCoefficientsReader::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/PotentialCoefficientsReader");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getMaxAvailableDegree_412668abc8d889e9] = env->getMethodID(cls, "getMaxAvailableDegree", "()I");
              mids$[mid_getMaxAvailableOrder_412668abc8d889e9] = env->getMethodID(cls, "getMaxAvailableOrder", "()I");
              mids$[mid_getMaxParseDegree_412668abc8d889e9] = env->getMethodID(cls, "getMaxParseDegree", "()I");
              mids$[mid_getMaxParseOrder_412668abc8d889e9] = env->getMethodID(cls, "getMaxParseOrder", "()I");
              mids$[mid_getProvider_f0b357b475e18957] = env->getMethodID(cls, "getProvider", "(ZII)Lorg/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider;");
              mids$[mid_getSupportedNames_3cffd47377eca18a] = env->getMethodID(cls, "getSupportedNames", "()Ljava/lang/String;");
              mids$[mid_loadData_15770e8d8949a557] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");
              mids$[mid_missingCoefficientsAllowed_89b302893bdbe1f1] = env->getMethodID(cls, "missingCoefficientsAllowed", "()Z");
              mids$[mid_setMaxParseDegree_a3da1a935cb37f7b] = env->getMethodID(cls, "setMaxParseDegree", "(I)V");
              mids$[mid_setMaxParseOrder_a3da1a935cb37f7b] = env->getMethodID(cls, "setMaxParseOrder", "(I)V");
              mids$[mid_stillAcceptsData_89b302893bdbe1f1] = env->getMethodID(cls, "stillAcceptsData", "()Z");
              mids$[mid_getMu_557b8123390d8d0c] = env->getMethodID(cls, "getMu", "()D");
              mids$[mid_getAe_557b8123390d8d0c] = env->getMethodID(cls, "getAe", "()D");
              mids$[mid_getTideSystem_7d9a2a298dcb49fa] = env->getMethodID(cls, "getTideSystem", "()Lorg/orekit/forces/gravity/potential/TideSystem;");
              mids$[mid_toDate_469425c83a305968] = env->getMethodID(cls, "toDate", "(Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeComponents;)Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_toDate_d2ab2a876c299d78] = env->getMethodID(cls, "toDate", "(Lorg/orekit/time/DateComponents;)Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_rescale_694cbd0c9d2012bc] = env->getMethodID(cls, "rescale", "(ZLorg/orekit/forces/gravity/potential/Flattener;Lorg/orekit/forces/gravity/potential/Flattener;[Lorg/orekit/forces/gravity/potential/TimeDependentHarmonic;)[Lorg/orekit/forces/gravity/potential/TimeDependentHarmonic;");
              mids$[mid_rescale_30c637d022c053e7] = env->getMethodID(cls, "rescale", "(DZLorg/orekit/forces/gravity/potential/Flattener;Lorg/orekit/forces/gravity/potential/Flattener;[D)[D");
              mids$[mid_setMu_10f281d777284cea] = env->getMethodID(cls, "setMu", "(D)V");
              mids$[mid_parseCoefficient_18c60afe1bc1abc4] = env->getMethodID(cls, "parseCoefficient", "(Ljava/lang/String;Lorg/orekit/forces/gravity/potential/Flattener;[DIILjava/lang/String;Ljava/lang/String;)V");
              mids$[mid_setReadComplete_ed2afdb8506b9742] = env->getMethodID(cls, "setReadComplete", "(Z)V");
              mids$[mid_setAe_10f281d777284cea] = env->getMethodID(cls, "setAe", "(D)V");
              mids$[mid_setTideSystem_fe9afd278841d180] = env->getMethodID(cls, "setTideSystem", "(Lorg/orekit/forces/gravity/potential/TideSystem;)V");
              mids$[mid_setRawCoefficients_b7bd4586f308d44a] = env->getMethodID(cls, "setRawCoefficients", "(ZLorg/orekit/forces/gravity/potential/Flattener;[D[DLjava/lang/String;)V");
              mids$[mid_getBaseProvider_0e1e7c4563c4b007] = env->getMethodID(cls, "getBaseProvider", "(ZII)Lorg/orekit/forces/gravity/potential/ConstantSphericalHarmonics;");
              mids$[mid_buildFlatArray_4d37aaaa24dcf6a3] = env->getStaticMethodID(cls, "buildFlatArray", "(Lorg/orekit/forces/gravity/potential/Flattener;D)[D");
              mids$[mid_buildRow_7ded574d710da36c] = env->getStaticMethodID(cls, "buildRow", "(IID)[D");
              mids$[mid_parseDouble_071554b5f5a6b17b] = env->getStaticMethodID(cls, "parseDouble", "(Ljava/lang/String;)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jint PotentialCoefficientsReader::getMaxAvailableDegree() const
          {
            return env->callIntMethod(this$, mids$[mid_getMaxAvailableDegree_412668abc8d889e9]);
          }

          jint PotentialCoefficientsReader::getMaxAvailableOrder() const
          {
            return env->callIntMethod(this$, mids$[mid_getMaxAvailableOrder_412668abc8d889e9]);
          }

          jint PotentialCoefficientsReader::getMaxParseDegree() const
          {
            return env->callIntMethod(this$, mids$[mid_getMaxParseDegree_412668abc8d889e9]);
          }

          jint PotentialCoefficientsReader::getMaxParseOrder() const
          {
            return env->callIntMethod(this$, mids$[mid_getMaxParseOrder_412668abc8d889e9]);
          }

          ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider PotentialCoefficientsReader::getProvider(jboolean a0, jint a1, jint a2) const
          {
            return ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider(env->callObjectMethod(this$, mids$[mid_getProvider_f0b357b475e18957], a0, a1, a2));
          }

          ::java::lang::String PotentialCoefficientsReader::getSupportedNames() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSupportedNames_3cffd47377eca18a]));
          }

          void PotentialCoefficientsReader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_loadData_15770e8d8949a557], a0.this$, a1.this$);
          }

          jboolean PotentialCoefficientsReader::missingCoefficientsAllowed() const
          {
            return env->callBooleanMethod(this$, mids$[mid_missingCoefficientsAllowed_89b302893bdbe1f1]);
          }

          void PotentialCoefficientsReader::setMaxParseDegree(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setMaxParseDegree_a3da1a935cb37f7b], a0);
          }

          void PotentialCoefficientsReader::setMaxParseOrder(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setMaxParseOrder_a3da1a935cb37f7b], a0);
          }

          jboolean PotentialCoefficientsReader::stillAcceptsData() const
          {
            return env->callBooleanMethod(this$, mids$[mid_stillAcceptsData_89b302893bdbe1f1]);
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
    namespace forces {
      namespace gravity {
        namespace potential {
          static PyObject *t_PotentialCoefficientsReader_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PotentialCoefficientsReader_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PotentialCoefficientsReader_getMaxAvailableDegree(t_PotentialCoefficientsReader *self);
          static PyObject *t_PotentialCoefficientsReader_getMaxAvailableOrder(t_PotentialCoefficientsReader *self);
          static PyObject *t_PotentialCoefficientsReader_getMaxParseDegree(t_PotentialCoefficientsReader *self);
          static PyObject *t_PotentialCoefficientsReader_getMaxParseOrder(t_PotentialCoefficientsReader *self);
          static PyObject *t_PotentialCoefficientsReader_getProvider(t_PotentialCoefficientsReader *self, PyObject *args);
          static PyObject *t_PotentialCoefficientsReader_getSupportedNames(t_PotentialCoefficientsReader *self);
          static PyObject *t_PotentialCoefficientsReader_loadData(t_PotentialCoefficientsReader *self, PyObject *args);
          static PyObject *t_PotentialCoefficientsReader_missingCoefficientsAllowed(t_PotentialCoefficientsReader *self);
          static PyObject *t_PotentialCoefficientsReader_setMaxParseDegree(t_PotentialCoefficientsReader *self, PyObject *arg);
          static PyObject *t_PotentialCoefficientsReader_setMaxParseOrder(t_PotentialCoefficientsReader *self, PyObject *arg);
          static PyObject *t_PotentialCoefficientsReader_stillAcceptsData(t_PotentialCoefficientsReader *self);
          static PyObject *t_PotentialCoefficientsReader_get__maxAvailableDegree(t_PotentialCoefficientsReader *self, void *data);
          static PyObject *t_PotentialCoefficientsReader_get__maxAvailableOrder(t_PotentialCoefficientsReader *self, void *data);
          static PyObject *t_PotentialCoefficientsReader_get__maxParseDegree(t_PotentialCoefficientsReader *self, void *data);
          static int t_PotentialCoefficientsReader_set__maxParseDegree(t_PotentialCoefficientsReader *self, PyObject *arg, void *data);
          static PyObject *t_PotentialCoefficientsReader_get__maxParseOrder(t_PotentialCoefficientsReader *self, void *data);
          static int t_PotentialCoefficientsReader_set__maxParseOrder(t_PotentialCoefficientsReader *self, PyObject *arg, void *data);
          static PyObject *t_PotentialCoefficientsReader_get__supportedNames(t_PotentialCoefficientsReader *self, void *data);
          static PyGetSetDef t_PotentialCoefficientsReader__fields_[] = {
            DECLARE_GET_FIELD(t_PotentialCoefficientsReader, maxAvailableDegree),
            DECLARE_GET_FIELD(t_PotentialCoefficientsReader, maxAvailableOrder),
            DECLARE_GETSET_FIELD(t_PotentialCoefficientsReader, maxParseDegree),
            DECLARE_GETSET_FIELD(t_PotentialCoefficientsReader, maxParseOrder),
            DECLARE_GET_FIELD(t_PotentialCoefficientsReader, supportedNames),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PotentialCoefficientsReader__methods_[] = {
            DECLARE_METHOD(t_PotentialCoefficientsReader, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PotentialCoefficientsReader, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PotentialCoefficientsReader, getMaxAvailableDegree, METH_NOARGS),
            DECLARE_METHOD(t_PotentialCoefficientsReader, getMaxAvailableOrder, METH_NOARGS),
            DECLARE_METHOD(t_PotentialCoefficientsReader, getMaxParseDegree, METH_NOARGS),
            DECLARE_METHOD(t_PotentialCoefficientsReader, getMaxParseOrder, METH_NOARGS),
            DECLARE_METHOD(t_PotentialCoefficientsReader, getProvider, METH_VARARGS),
            DECLARE_METHOD(t_PotentialCoefficientsReader, getSupportedNames, METH_NOARGS),
            DECLARE_METHOD(t_PotentialCoefficientsReader, loadData, METH_VARARGS),
            DECLARE_METHOD(t_PotentialCoefficientsReader, missingCoefficientsAllowed, METH_NOARGS),
            DECLARE_METHOD(t_PotentialCoefficientsReader, setMaxParseDegree, METH_O),
            DECLARE_METHOD(t_PotentialCoefficientsReader, setMaxParseOrder, METH_O),
            DECLARE_METHOD(t_PotentialCoefficientsReader, stillAcceptsData, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PotentialCoefficientsReader)[] = {
            { Py_tp_methods, t_PotentialCoefficientsReader__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_PotentialCoefficientsReader__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PotentialCoefficientsReader)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PotentialCoefficientsReader, t_PotentialCoefficientsReader, PotentialCoefficientsReader);

          void t_PotentialCoefficientsReader::install(PyObject *module)
          {
            installType(&PY_TYPE(PotentialCoefficientsReader), &PY_TYPE_DEF(PotentialCoefficientsReader), module, "PotentialCoefficientsReader", 0);
          }

          void t_PotentialCoefficientsReader::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PotentialCoefficientsReader), "class_", make_descriptor(PotentialCoefficientsReader::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PotentialCoefficientsReader), "wrapfn_", make_descriptor(t_PotentialCoefficientsReader::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PotentialCoefficientsReader), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PotentialCoefficientsReader_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PotentialCoefficientsReader::initializeClass, 1)))
              return NULL;
            return t_PotentialCoefficientsReader::wrap_Object(PotentialCoefficientsReader(((t_PotentialCoefficientsReader *) arg)->object.this$));
          }
          static PyObject *t_PotentialCoefficientsReader_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PotentialCoefficientsReader::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PotentialCoefficientsReader_getMaxAvailableDegree(t_PotentialCoefficientsReader *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getMaxAvailableDegree());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_PotentialCoefficientsReader_getMaxAvailableOrder(t_PotentialCoefficientsReader *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getMaxAvailableOrder());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_PotentialCoefficientsReader_getMaxParseDegree(t_PotentialCoefficientsReader *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getMaxParseDegree());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_PotentialCoefficientsReader_getMaxParseOrder(t_PotentialCoefficientsReader *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getMaxParseOrder());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_PotentialCoefficientsReader_getProvider(t_PotentialCoefficientsReader *self, PyObject *args)
          {
            jboolean a0;
            jint a1;
            jint a2;
            ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider result((jobject) NULL);

            if (!parseArgs(args, "ZII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getProvider(a0, a1, a2));
              return ::org::orekit::forces::gravity::potential::t_RawSphericalHarmonicsProvider::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getProvider", args);
            return NULL;
          }

          static PyObject *t_PotentialCoefficientsReader_getSupportedNames(t_PotentialCoefficientsReader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getSupportedNames());
            return j2p(result);
          }

          static PyObject *t_PotentialCoefficientsReader_loadData(t_PotentialCoefficientsReader *self, PyObject *args)
          {
            ::java::io::InputStream a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);

            if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.loadData(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "loadData", args);
            return NULL;
          }

          static PyObject *t_PotentialCoefficientsReader_missingCoefficientsAllowed(t_PotentialCoefficientsReader *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.missingCoefficientsAllowed());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_PotentialCoefficientsReader_setMaxParseDegree(t_PotentialCoefficientsReader *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setMaxParseDegree(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setMaxParseDegree", arg);
            return NULL;
          }

          static PyObject *t_PotentialCoefficientsReader_setMaxParseOrder(t_PotentialCoefficientsReader *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setMaxParseOrder(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setMaxParseOrder", arg);
            return NULL;
          }

          static PyObject *t_PotentialCoefficientsReader_stillAcceptsData(t_PotentialCoefficientsReader *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.stillAcceptsData());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_PotentialCoefficientsReader_get__maxAvailableDegree(t_PotentialCoefficientsReader *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getMaxAvailableDegree());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_PotentialCoefficientsReader_get__maxAvailableOrder(t_PotentialCoefficientsReader *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getMaxAvailableOrder());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_PotentialCoefficientsReader_get__maxParseDegree(t_PotentialCoefficientsReader *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getMaxParseDegree());
            return PyLong_FromLong((long) value);
          }
          static int t_PotentialCoefficientsReader_set__maxParseDegree(t_PotentialCoefficientsReader *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setMaxParseDegree(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "maxParseDegree", arg);
            return -1;
          }

          static PyObject *t_PotentialCoefficientsReader_get__maxParseOrder(t_PotentialCoefficientsReader *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getMaxParseOrder());
            return PyLong_FromLong((long) value);
          }
          static int t_PotentialCoefficientsReader_set__maxParseOrder(t_PotentialCoefficientsReader *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setMaxParseOrder(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "maxParseOrder", arg);
            return -1;
          }

          static PyObject *t_PotentialCoefficientsReader_get__supportedNames(t_PotentialCoefficientsReader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getSupportedNames());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/polynomials/SmoothStepFactory$FieldSmoothStepFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {

        ::java::lang::Class *SmoothStepFactory$FieldSmoothStepFunction::class$ = NULL;
        jmethodID *SmoothStepFactory$FieldSmoothStepFunction::mids$ = NULL;
        bool SmoothStepFactory$FieldSmoothStepFunction::live$ = false;

        jclass SmoothStepFactory$FieldSmoothStepFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/polynomials/SmoothStepFactory$FieldSmoothStepFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_value_94d37e81a3238af8] = env->getMethodID(cls, "value", "(D)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_value_6672ad854985cb64] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_value_f6144a4a13723d33] = env->getMethodID(cls, "value", "(DDLorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_checkInputEdges_ab23f4ae0fb33968] = env->getMethodID(cls, "checkInputEdges", "(DD)V");
            mids$[mid_clampInput_f6144a4a13723d33] = env->getMethodID(cls, "clampInput", "(DDLorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_normalizeInput_f6144a4a13723d33] = env->getMethodID(cls, "normalizeInput", "(DDLorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::CalculusFieldElement SmoothStepFactory$FieldSmoothStepFunction::value(jdouble a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_94d37e81a3238af8], a0));
        }

        ::org::hipparchus::CalculusFieldElement SmoothStepFactory$FieldSmoothStepFunction::value(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_6672ad854985cb64], a0.this$));
        }

        ::org::hipparchus::CalculusFieldElement SmoothStepFactory$FieldSmoothStepFunction::value(jdouble a0, jdouble a1, const ::org::hipparchus::CalculusFieldElement & a2) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_f6144a4a13723d33], a0, a1, a2.this$));
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
      namespace polynomials {
        static PyObject *t_SmoothStepFactory$FieldSmoothStepFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SmoothStepFactory$FieldSmoothStepFunction_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SmoothStepFactory$FieldSmoothStepFunction_of_(t_SmoothStepFactory$FieldSmoothStepFunction *self, PyObject *args);
        static PyObject *t_SmoothStepFactory$FieldSmoothStepFunction_value(t_SmoothStepFactory$FieldSmoothStepFunction *self, PyObject *args);
        static PyObject *t_SmoothStepFactory$FieldSmoothStepFunction_get__parameters_(t_SmoothStepFactory$FieldSmoothStepFunction *self, void *data);
        static PyGetSetDef t_SmoothStepFactory$FieldSmoothStepFunction__fields_[] = {
          DECLARE_GET_FIELD(t_SmoothStepFactory$FieldSmoothStepFunction, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SmoothStepFactory$FieldSmoothStepFunction__methods_[] = {
          DECLARE_METHOD(t_SmoothStepFactory$FieldSmoothStepFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SmoothStepFactory$FieldSmoothStepFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SmoothStepFactory$FieldSmoothStepFunction, of_, METH_VARARGS),
          DECLARE_METHOD(t_SmoothStepFactory$FieldSmoothStepFunction, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SmoothStepFactory$FieldSmoothStepFunction)[] = {
          { Py_tp_methods, t_SmoothStepFactory$FieldSmoothStepFunction__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_SmoothStepFactory$FieldSmoothStepFunction__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SmoothStepFactory$FieldSmoothStepFunction)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::polynomials::FieldPolynomialFunction),
          NULL
        };

        DEFINE_TYPE(SmoothStepFactory$FieldSmoothStepFunction, t_SmoothStepFactory$FieldSmoothStepFunction, SmoothStepFactory$FieldSmoothStepFunction);
        PyObject *t_SmoothStepFactory$FieldSmoothStepFunction::wrap_Object(const SmoothStepFactory$FieldSmoothStepFunction& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SmoothStepFactory$FieldSmoothStepFunction::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SmoothStepFactory$FieldSmoothStepFunction *self = (t_SmoothStepFactory$FieldSmoothStepFunction *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_SmoothStepFactory$FieldSmoothStepFunction::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SmoothStepFactory$FieldSmoothStepFunction::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SmoothStepFactory$FieldSmoothStepFunction *self = (t_SmoothStepFactory$FieldSmoothStepFunction *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_SmoothStepFactory$FieldSmoothStepFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(SmoothStepFactory$FieldSmoothStepFunction), &PY_TYPE_DEF(SmoothStepFactory$FieldSmoothStepFunction), module, "SmoothStepFactory$FieldSmoothStepFunction", 0);
        }

        void t_SmoothStepFactory$FieldSmoothStepFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothStepFactory$FieldSmoothStepFunction), "class_", make_descriptor(SmoothStepFactory$FieldSmoothStepFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothStepFactory$FieldSmoothStepFunction), "wrapfn_", make_descriptor(t_SmoothStepFactory$FieldSmoothStepFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothStepFactory$FieldSmoothStepFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SmoothStepFactory$FieldSmoothStepFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SmoothStepFactory$FieldSmoothStepFunction::initializeClass, 1)))
            return NULL;
          return t_SmoothStepFactory$FieldSmoothStepFunction::wrap_Object(SmoothStepFactory$FieldSmoothStepFunction(((t_SmoothStepFactory$FieldSmoothStepFunction *) arg)->object.this$));
        }
        static PyObject *t_SmoothStepFactory$FieldSmoothStepFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SmoothStepFactory$FieldSmoothStepFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SmoothStepFactory$FieldSmoothStepFunction_of_(t_SmoothStepFactory$FieldSmoothStepFunction *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_SmoothStepFactory$FieldSmoothStepFunction_value(t_SmoothStepFactory$FieldSmoothStepFunction *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
            break;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "DDK", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0, a1, a2));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(SmoothStepFactory$FieldSmoothStepFunction), (PyObject *) self, "value", args, 2);
        }
        static PyObject *t_SmoothStepFactory$FieldSmoothStepFunction_get__parameters_(t_SmoothStepFactory$FieldSmoothStepFunction *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/parsing/AbstractConstituentParser.h"
#include "org/orekit/files/ccsds/section/Header.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataContext.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace parsing {

            ::java::lang::Class *AbstractConstituentParser::class$ = NULL;
            jmethodID *AbstractConstituentParser::mids$ = NULL;
            bool AbstractConstituentParser::live$ = false;

            jclass AbstractConstituentParser::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/parsing/AbstractConstituentParser");

                mids$ = new jmethodID[max_mid];
                mids$[mid_finalizeData_89b302893bdbe1f1] = env->getMethodID(cls, "finalizeData", "()Z");
                mids$[mid_finalizeHeader_89b302893bdbe1f1] = env->getMethodID(cls, "finalizeHeader", "()Z");
                mids$[mid_finalizeMetadata_89b302893bdbe1f1] = env->getMethodID(cls, "finalizeMetadata", "()Z");
                mids$[mid_getConventions_690653480c12ac72] = env->getMethodID(cls, "getConventions", "()Lorg/orekit/utils/IERSConventions;");
                mids$[mid_getDataContext_b259b25d6495e5b3] = env->getMethodID(cls, "getDataContext", "()Lorg/orekit/data/DataContext;");
                mids$[mid_getHeader_6fe6597816e9e593] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ccsds/section/Header;");
                mids$[mid_getParsedUnitsBehavior_430d6c1485d1d8cb] = env->getMethodID(cls, "getParsedUnitsBehavior", "()Lorg/orekit/files/ccsds/ndm/ParsedUnitsBehavior;");
                mids$[mid_inData_89b302893bdbe1f1] = env->getMethodID(cls, "inData", "()Z");
                mids$[mid_inHeader_89b302893bdbe1f1] = env->getMethodID(cls, "inHeader", "()Z");
                mids$[mid_inMetadata_89b302893bdbe1f1] = env->getMethodID(cls, "inMetadata", "()Z");
                mids$[mid_isSimpleEOP_89b302893bdbe1f1] = env->getMethodID(cls, "isSimpleEOP", "()Z");
                mids$[mid_prepareData_89b302893bdbe1f1] = env->getMethodID(cls, "prepareData", "()Z");
                mids$[mid_prepareHeader_89b302893bdbe1f1] = env->getMethodID(cls, "prepareHeader", "()Z");
                mids$[mid_prepareMetadata_89b302893bdbe1f1] = env->getMethodID(cls, "prepareMetadata", "()Z");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean AbstractConstituentParser::finalizeData() const
            {
              return env->callBooleanMethod(this$, mids$[mid_finalizeData_89b302893bdbe1f1]);
            }

            jboolean AbstractConstituentParser::finalizeHeader() const
            {
              return env->callBooleanMethod(this$, mids$[mid_finalizeHeader_89b302893bdbe1f1]);
            }

            jboolean AbstractConstituentParser::finalizeMetadata() const
            {
              return env->callBooleanMethod(this$, mids$[mid_finalizeMetadata_89b302893bdbe1f1]);
            }

            ::org::orekit::utils::IERSConventions AbstractConstituentParser::getConventions() const
            {
              return ::org::orekit::utils::IERSConventions(env->callObjectMethod(this$, mids$[mid_getConventions_690653480c12ac72]));
            }

            ::org::orekit::data::DataContext AbstractConstituentParser::getDataContext() const
            {
              return ::org::orekit::data::DataContext(env->callObjectMethod(this$, mids$[mid_getDataContext_b259b25d6495e5b3]));
            }

            ::org::orekit::files::ccsds::section::Header AbstractConstituentParser::getHeader() const
            {
              return ::org::orekit::files::ccsds::section::Header(env->callObjectMethod(this$, mids$[mid_getHeader_6fe6597816e9e593]));
            }

            ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior AbstractConstituentParser::getParsedUnitsBehavior() const
            {
              return ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior(env->callObjectMethod(this$, mids$[mid_getParsedUnitsBehavior_430d6c1485d1d8cb]));
            }

            jboolean AbstractConstituentParser::inData() const
            {
              return env->callBooleanMethod(this$, mids$[mid_inData_89b302893bdbe1f1]);
            }

            jboolean AbstractConstituentParser::inHeader() const
            {
              return env->callBooleanMethod(this$, mids$[mid_inHeader_89b302893bdbe1f1]);
            }

            jboolean AbstractConstituentParser::inMetadata() const
            {
              return env->callBooleanMethod(this$, mids$[mid_inMetadata_89b302893bdbe1f1]);
            }

            jboolean AbstractConstituentParser::isSimpleEOP() const
            {
              return env->callBooleanMethod(this$, mids$[mid_isSimpleEOP_89b302893bdbe1f1]);
            }

            jboolean AbstractConstituentParser::prepareData() const
            {
              return env->callBooleanMethod(this$, mids$[mid_prepareData_89b302893bdbe1f1]);
            }

            jboolean AbstractConstituentParser::prepareHeader() const
            {
              return env->callBooleanMethod(this$, mids$[mid_prepareHeader_89b302893bdbe1f1]);
            }

            jboolean AbstractConstituentParser::prepareMetadata() const
            {
              return env->callBooleanMethod(this$, mids$[mid_prepareMetadata_89b302893bdbe1f1]);
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
          namespace parsing {
            static PyObject *t_AbstractConstituentParser_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractConstituentParser_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractConstituentParser_of_(t_AbstractConstituentParser *self, PyObject *args);
            static PyObject *t_AbstractConstituentParser_finalizeData(t_AbstractConstituentParser *self);
            static PyObject *t_AbstractConstituentParser_finalizeHeader(t_AbstractConstituentParser *self);
            static PyObject *t_AbstractConstituentParser_finalizeMetadata(t_AbstractConstituentParser *self);
            static PyObject *t_AbstractConstituentParser_getConventions(t_AbstractConstituentParser *self);
            static PyObject *t_AbstractConstituentParser_getDataContext(t_AbstractConstituentParser *self);
            static PyObject *t_AbstractConstituentParser_getHeader(t_AbstractConstituentParser *self);
            static PyObject *t_AbstractConstituentParser_getParsedUnitsBehavior(t_AbstractConstituentParser *self);
            static PyObject *t_AbstractConstituentParser_inData(t_AbstractConstituentParser *self);
            static PyObject *t_AbstractConstituentParser_inHeader(t_AbstractConstituentParser *self);
            static PyObject *t_AbstractConstituentParser_inMetadata(t_AbstractConstituentParser *self);
            static PyObject *t_AbstractConstituentParser_isSimpleEOP(t_AbstractConstituentParser *self);
            static PyObject *t_AbstractConstituentParser_prepareData(t_AbstractConstituentParser *self);
            static PyObject *t_AbstractConstituentParser_prepareHeader(t_AbstractConstituentParser *self);
            static PyObject *t_AbstractConstituentParser_prepareMetadata(t_AbstractConstituentParser *self);
            static PyObject *t_AbstractConstituentParser_get__conventions(t_AbstractConstituentParser *self, void *data);
            static PyObject *t_AbstractConstituentParser_get__dataContext(t_AbstractConstituentParser *self, void *data);
            static PyObject *t_AbstractConstituentParser_get__header(t_AbstractConstituentParser *self, void *data);
            static PyObject *t_AbstractConstituentParser_get__parsedUnitsBehavior(t_AbstractConstituentParser *self, void *data);
            static PyObject *t_AbstractConstituentParser_get__simpleEOP(t_AbstractConstituentParser *self, void *data);
            static PyObject *t_AbstractConstituentParser_get__parameters_(t_AbstractConstituentParser *self, void *data);
            static PyGetSetDef t_AbstractConstituentParser__fields_[] = {
              DECLARE_GET_FIELD(t_AbstractConstituentParser, conventions),
              DECLARE_GET_FIELD(t_AbstractConstituentParser, dataContext),
              DECLARE_GET_FIELD(t_AbstractConstituentParser, header),
              DECLARE_GET_FIELD(t_AbstractConstituentParser, parsedUnitsBehavior),
              DECLARE_GET_FIELD(t_AbstractConstituentParser, simpleEOP),
              DECLARE_GET_FIELD(t_AbstractConstituentParser, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AbstractConstituentParser__methods_[] = {
              DECLARE_METHOD(t_AbstractConstituentParser, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractConstituentParser, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractConstituentParser, of_, METH_VARARGS),
              DECLARE_METHOD(t_AbstractConstituentParser, finalizeData, METH_NOARGS),
              DECLARE_METHOD(t_AbstractConstituentParser, finalizeHeader, METH_NOARGS),
              DECLARE_METHOD(t_AbstractConstituentParser, finalizeMetadata, METH_NOARGS),
              DECLARE_METHOD(t_AbstractConstituentParser, getConventions, METH_NOARGS),
              DECLARE_METHOD(t_AbstractConstituentParser, getDataContext, METH_NOARGS),
              DECLARE_METHOD(t_AbstractConstituentParser, getHeader, METH_NOARGS),
              DECLARE_METHOD(t_AbstractConstituentParser, getParsedUnitsBehavior, METH_NOARGS),
              DECLARE_METHOD(t_AbstractConstituentParser, inData, METH_NOARGS),
              DECLARE_METHOD(t_AbstractConstituentParser, inHeader, METH_NOARGS),
              DECLARE_METHOD(t_AbstractConstituentParser, inMetadata, METH_NOARGS),
              DECLARE_METHOD(t_AbstractConstituentParser, isSimpleEOP, METH_NOARGS),
              DECLARE_METHOD(t_AbstractConstituentParser, prepareData, METH_NOARGS),
              DECLARE_METHOD(t_AbstractConstituentParser, prepareHeader, METH_NOARGS),
              DECLARE_METHOD(t_AbstractConstituentParser, prepareMetadata, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AbstractConstituentParser)[] = {
              { Py_tp_methods, t_AbstractConstituentParser__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_AbstractConstituentParser__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AbstractConstituentParser)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::parsing::AbstractMessageParser),
              NULL
            };

            DEFINE_TYPE(AbstractConstituentParser, t_AbstractConstituentParser, AbstractConstituentParser);
            PyObject *t_AbstractConstituentParser::wrap_Object(const AbstractConstituentParser& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_AbstractConstituentParser::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AbstractConstituentParser *self = (t_AbstractConstituentParser *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            PyObject *t_AbstractConstituentParser::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_AbstractConstituentParser::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AbstractConstituentParser *self = (t_AbstractConstituentParser *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            void t_AbstractConstituentParser::install(PyObject *module)
            {
              installType(&PY_TYPE(AbstractConstituentParser), &PY_TYPE_DEF(AbstractConstituentParser), module, "AbstractConstituentParser", 0);
            }

            void t_AbstractConstituentParser::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractConstituentParser), "class_", make_descriptor(AbstractConstituentParser::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractConstituentParser), "wrapfn_", make_descriptor(t_AbstractConstituentParser::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractConstituentParser), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AbstractConstituentParser_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AbstractConstituentParser::initializeClass, 1)))
                return NULL;
              return t_AbstractConstituentParser::wrap_Object(AbstractConstituentParser(((t_AbstractConstituentParser *) arg)->object.this$));
            }
            static PyObject *t_AbstractConstituentParser_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AbstractConstituentParser::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AbstractConstituentParser_of_(t_AbstractConstituentParser *self, PyObject *args)
            {
              if (!parseArg(args, "T", 3, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_AbstractConstituentParser_finalizeData(t_AbstractConstituentParser *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.finalizeData());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_AbstractConstituentParser_finalizeHeader(t_AbstractConstituentParser *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.finalizeHeader());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_AbstractConstituentParser_finalizeMetadata(t_AbstractConstituentParser *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.finalizeMetadata());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_AbstractConstituentParser_getConventions(t_AbstractConstituentParser *self)
            {
              ::org::orekit::utils::IERSConventions result((jobject) NULL);
              OBJ_CALL(result = self->object.getConventions());
              return ::org::orekit::utils::t_IERSConventions::wrap_Object(result);
            }

            static PyObject *t_AbstractConstituentParser_getDataContext(t_AbstractConstituentParser *self)
            {
              ::org::orekit::data::DataContext result((jobject) NULL);
              OBJ_CALL(result = self->object.getDataContext());
              return ::org::orekit::data::t_DataContext::wrap_Object(result);
            }

            static PyObject *t_AbstractConstituentParser_getHeader(t_AbstractConstituentParser *self)
            {
              ::org::orekit::files::ccsds::section::Header result((jobject) NULL);
              OBJ_CALL(result = self->object.getHeader());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::files::ccsds::section::t_Header::wrap_Object(result);
            }

            static PyObject *t_AbstractConstituentParser_getParsedUnitsBehavior(t_AbstractConstituentParser *self)
            {
              ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior result((jobject) NULL);
              OBJ_CALL(result = self->object.getParsedUnitsBehavior());
              return ::org::orekit::files::ccsds::ndm::t_ParsedUnitsBehavior::wrap_Object(result);
            }

            static PyObject *t_AbstractConstituentParser_inData(t_AbstractConstituentParser *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.inData());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_AbstractConstituentParser_inHeader(t_AbstractConstituentParser *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.inHeader());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_AbstractConstituentParser_inMetadata(t_AbstractConstituentParser *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.inMetadata());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_AbstractConstituentParser_isSimpleEOP(t_AbstractConstituentParser *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.isSimpleEOP());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_AbstractConstituentParser_prepareData(t_AbstractConstituentParser *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.prepareData());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_AbstractConstituentParser_prepareHeader(t_AbstractConstituentParser *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.prepareHeader());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_AbstractConstituentParser_prepareMetadata(t_AbstractConstituentParser *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.prepareMetadata());
              Py_RETURN_BOOL(result);
            }
            static PyObject *t_AbstractConstituentParser_get__parameters_(t_AbstractConstituentParser *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_AbstractConstituentParser_get__conventions(t_AbstractConstituentParser *self, void *data)
            {
              ::org::orekit::utils::IERSConventions value((jobject) NULL);
              OBJ_CALL(value = self->object.getConventions());
              return ::org::orekit::utils::t_IERSConventions::wrap_Object(value);
            }

            static PyObject *t_AbstractConstituentParser_get__dataContext(t_AbstractConstituentParser *self, void *data)
            {
              ::org::orekit::data::DataContext value((jobject) NULL);
              OBJ_CALL(value = self->object.getDataContext());
              return ::org::orekit::data::t_DataContext::wrap_Object(value);
            }

            static PyObject *t_AbstractConstituentParser_get__header(t_AbstractConstituentParser *self, void *data)
            {
              ::org::orekit::files::ccsds::section::Header value((jobject) NULL);
              OBJ_CALL(value = self->object.getHeader());
              return ::org::orekit::files::ccsds::section::t_Header::wrap_Object(value);
            }

            static PyObject *t_AbstractConstituentParser_get__parsedUnitsBehavior(t_AbstractConstituentParser *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior value((jobject) NULL);
              OBJ_CALL(value = self->object.getParsedUnitsBehavior());
              return ::org::orekit::files::ccsds::ndm::t_ParsedUnitsBehavior::wrap_Object(value);
            }

            static PyObject *t_AbstractConstituentParser_get__simpleEOP(t_AbstractConstituentParser *self, void *data)
            {
              jboolean value;
              OBJ_CALL(value = self->object.isSimpleEOP());
              Py_RETURN_BOOL(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/PythonFieldAbstractAnalyticalPropagator.h"
#include "java/util/List.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *PythonFieldAbstractAnalyticalPropagator::class$ = NULL;
        jmethodID *PythonFieldAbstractAnalyticalPropagator::mids$ = NULL;
        bool PythonFieldAbstractAnalyticalPropagator::live$ = false;

        jclass PythonFieldAbstractAnalyticalPropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/PythonFieldAbstractAnalyticalPropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_c5a2c9984a82c4c1] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getMass_b884068a2c99f6ca] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_propagateOrbit_ec5b52b8a8c77d72] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/orbits/FieldOrbit;");
            mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_resetIntermediateState_585702d5a402c590] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/FieldSpacecraftState;Z)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonFieldAbstractAnalyticalPropagator::PythonFieldAbstractAnalyticalPropagator(const ::org::hipparchus::Field & a0, const ::org::orekit::attitudes::AttitudeProvider & a1) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_c5a2c9984a82c4c1, a0.this$, a1.this$)) {}

        void PythonFieldAbstractAnalyticalPropagator::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
        }

        jlong PythonFieldAbstractAnalyticalPropagator::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
        }

        void PythonFieldAbstractAnalyticalPropagator::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
        static PyObject *t_PythonFieldAbstractAnalyticalPropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldAbstractAnalyticalPropagator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldAbstractAnalyticalPropagator_of_(t_PythonFieldAbstractAnalyticalPropagator *self, PyObject *args);
        static int t_PythonFieldAbstractAnalyticalPropagator_init_(t_PythonFieldAbstractAnalyticalPropagator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonFieldAbstractAnalyticalPropagator_finalize(t_PythonFieldAbstractAnalyticalPropagator *self);
        static PyObject *t_PythonFieldAbstractAnalyticalPropagator_pythonExtension(t_PythonFieldAbstractAnalyticalPropagator *self, PyObject *args);
        static jobject JNICALL t_PythonFieldAbstractAnalyticalPropagator_getMass0(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonFieldAbstractAnalyticalPropagator_getParametersDrivers1(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonFieldAbstractAnalyticalPropagator_propagateOrbit2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static void JNICALL t_PythonFieldAbstractAnalyticalPropagator_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonFieldAbstractAnalyticalPropagator_resetIntermediateState4(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1);
        static PyObject *t_PythonFieldAbstractAnalyticalPropagator_get__self(t_PythonFieldAbstractAnalyticalPropagator *self, void *data);
        static PyObject *t_PythonFieldAbstractAnalyticalPropagator_get__parameters_(t_PythonFieldAbstractAnalyticalPropagator *self, void *data);
        static PyGetSetDef t_PythonFieldAbstractAnalyticalPropagator__fields_[] = {
          DECLARE_GET_FIELD(t_PythonFieldAbstractAnalyticalPropagator, self),
          DECLARE_GET_FIELD(t_PythonFieldAbstractAnalyticalPropagator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonFieldAbstractAnalyticalPropagator__methods_[] = {
          DECLARE_METHOD(t_PythonFieldAbstractAnalyticalPropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldAbstractAnalyticalPropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldAbstractAnalyticalPropagator, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonFieldAbstractAnalyticalPropagator, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonFieldAbstractAnalyticalPropagator, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonFieldAbstractAnalyticalPropagator)[] = {
          { Py_tp_methods, t_PythonFieldAbstractAnalyticalPropagator__methods_ },
          { Py_tp_init, (void *) t_PythonFieldAbstractAnalyticalPropagator_init_ },
          { Py_tp_getset, t_PythonFieldAbstractAnalyticalPropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonFieldAbstractAnalyticalPropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator),
          NULL
        };

        DEFINE_TYPE(PythonFieldAbstractAnalyticalPropagator, t_PythonFieldAbstractAnalyticalPropagator, PythonFieldAbstractAnalyticalPropagator);
        PyObject *t_PythonFieldAbstractAnalyticalPropagator::wrap_Object(const PythonFieldAbstractAnalyticalPropagator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldAbstractAnalyticalPropagator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldAbstractAnalyticalPropagator *self = (t_PythonFieldAbstractAnalyticalPropagator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PythonFieldAbstractAnalyticalPropagator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldAbstractAnalyticalPropagator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldAbstractAnalyticalPropagator *self = (t_PythonFieldAbstractAnalyticalPropagator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PythonFieldAbstractAnalyticalPropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonFieldAbstractAnalyticalPropagator), &PY_TYPE_DEF(PythonFieldAbstractAnalyticalPropagator), module, "PythonFieldAbstractAnalyticalPropagator", 1);
        }

        void t_PythonFieldAbstractAnalyticalPropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAbstractAnalyticalPropagator), "class_", make_descriptor(PythonFieldAbstractAnalyticalPropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAbstractAnalyticalPropagator), "wrapfn_", make_descriptor(t_PythonFieldAbstractAnalyticalPropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAbstractAnalyticalPropagator), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonFieldAbstractAnalyticalPropagator::initializeClass);
          JNINativeMethod methods[] = {
            { "getMass", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonFieldAbstractAnalyticalPropagator_getMass0 },
            { "getParametersDrivers", "()Ljava/util/List;", (void *) t_PythonFieldAbstractAnalyticalPropagator_getParametersDrivers1 },
            { "propagateOrbit", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/orbits/FieldOrbit;", (void *) t_PythonFieldAbstractAnalyticalPropagator_propagateOrbit2 },
            { "pythonDecRef", "()V", (void *) t_PythonFieldAbstractAnalyticalPropagator_pythonDecRef3 },
            { "resetIntermediateState", "(Lorg/orekit/propagation/FieldSpacecraftState;Z)V", (void *) t_PythonFieldAbstractAnalyticalPropagator_resetIntermediateState4 },
          };
          env->registerNatives(cls, methods, 5);
        }

        static PyObject *t_PythonFieldAbstractAnalyticalPropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonFieldAbstractAnalyticalPropagator::initializeClass, 1)))
            return NULL;
          return t_PythonFieldAbstractAnalyticalPropagator::wrap_Object(PythonFieldAbstractAnalyticalPropagator(((t_PythonFieldAbstractAnalyticalPropagator *) arg)->object.this$));
        }
        static PyObject *t_PythonFieldAbstractAnalyticalPropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonFieldAbstractAnalyticalPropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonFieldAbstractAnalyticalPropagator_of_(t_PythonFieldAbstractAnalyticalPropagator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonFieldAbstractAnalyticalPropagator_init_(t_PythonFieldAbstractAnalyticalPropagator *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
          PythonFieldAbstractAnalyticalPropagator object((jobject) NULL);

          if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
          {
            INT_CALL(object = PythonFieldAbstractAnalyticalPropagator(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonFieldAbstractAnalyticalPropagator_finalize(t_PythonFieldAbstractAnalyticalPropagator *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonFieldAbstractAnalyticalPropagator_pythonExtension(t_PythonFieldAbstractAnalyticalPropagator *self, PyObject *args)
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

        static jobject JNICALL t_PythonFieldAbstractAnalyticalPropagator_getMass0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractAnalyticalPropagator::mids$[PythonFieldAbstractAnalyticalPropagator::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
          PyObject *result = PyObject_CallMethod(obj, "getMass", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
          {
            throwTypeError("getMass", result);
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

        static jobject JNICALL t_PythonFieldAbstractAnalyticalPropagator_getParametersDrivers1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractAnalyticalPropagator::mids$[PythonFieldAbstractAnalyticalPropagator::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::util::List value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getParametersDrivers", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
          {
            throwTypeError("getParametersDrivers", result);
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

        static jobject JNICALL t_PythonFieldAbstractAnalyticalPropagator_propagateOrbit2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractAnalyticalPropagator::mids$[PythonFieldAbstractAnalyticalPropagator::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::orbits::FieldOrbit value((jobject) NULL);
          PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
          PyObject *o1 = JArray<jobject>(a1).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          PyObject *result = PyObject_CallMethod(obj, "propagateOrbit", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::orbits::FieldOrbit::initializeClass, &value))
          {
            throwTypeError("propagateOrbit", result);
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

        static void JNICALL t_PythonFieldAbstractAnalyticalPropagator_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractAnalyticalPropagator::mids$[PythonFieldAbstractAnalyticalPropagator::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonFieldAbstractAnalyticalPropagator::mids$[PythonFieldAbstractAnalyticalPropagator::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static void JNICALL t_PythonFieldAbstractAnalyticalPropagator_resetIntermediateState4(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractAnalyticalPropagator::mids$[PythonFieldAbstractAnalyticalPropagator::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *o1 = (a1 ? Py_True : Py_False);
          PyObject *result = PyObject_CallMethod(obj, "resetIntermediateState", "OO", o0, o1);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static PyObject *t_PythonFieldAbstractAnalyticalPropagator_get__self(t_PythonFieldAbstractAnalyticalPropagator *self, void *data)
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
        static PyObject *t_PythonFieldAbstractAnalyticalPropagator_get__parameters_(t_PythonFieldAbstractAnalyticalPropagator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/AngularIonosphericDelayModifier.h"
#include "java/util/List.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/AngularAzEl.h"
#include "java/lang/Class.h"
#include "org/orekit/models/earth/ionosphere/IonosphericModel.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *AngularIonosphericDelayModifier::class$ = NULL;
          jmethodID *AngularIonosphericDelayModifier::mids$ = NULL;
          bool AngularIonosphericDelayModifier::live$ = false;

          jclass AngularIonosphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/AngularIonosphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_69c6b2cabec159dd] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/ionosphere/IonosphericModel;D)V");
              mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_e471490df8741b73] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AngularIonosphericDelayModifier::AngularIonosphericDelayModifier(const ::org::orekit::models::earth::ionosphere::IonosphericModel & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_69c6b2cabec159dd, a0.this$, a1)) {}

          ::java::util::List AngularIonosphericDelayModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
          }

          void AngularIonosphericDelayModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_e471490df8741b73], a0.this$);
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
    namespace estimation {
      namespace measurements {
        namespace modifiers {
          static PyObject *t_AngularIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AngularIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_AngularIonosphericDelayModifier_init_(t_AngularIonosphericDelayModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_AngularIonosphericDelayModifier_getParametersDrivers(t_AngularIonosphericDelayModifier *self);
          static PyObject *t_AngularIonosphericDelayModifier_modifyWithoutDerivatives(t_AngularIonosphericDelayModifier *self, PyObject *arg);
          static PyObject *t_AngularIonosphericDelayModifier_get__parametersDrivers(t_AngularIonosphericDelayModifier *self, void *data);
          static PyGetSetDef t_AngularIonosphericDelayModifier__fields_[] = {
            DECLARE_GET_FIELD(t_AngularIonosphericDelayModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AngularIonosphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_AngularIonosphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AngularIonosphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AngularIonosphericDelayModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_AngularIonosphericDelayModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AngularIonosphericDelayModifier)[] = {
            { Py_tp_methods, t_AngularIonosphericDelayModifier__methods_ },
            { Py_tp_init, (void *) t_AngularIonosphericDelayModifier_init_ },
            { Py_tp_getset, t_AngularIonosphericDelayModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AngularIonosphericDelayModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AngularIonosphericDelayModifier, t_AngularIonosphericDelayModifier, AngularIonosphericDelayModifier);

          void t_AngularIonosphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(AngularIonosphericDelayModifier), &PY_TYPE_DEF(AngularIonosphericDelayModifier), module, "AngularIonosphericDelayModifier", 0);
          }

          void t_AngularIonosphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AngularIonosphericDelayModifier), "class_", make_descriptor(AngularIonosphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AngularIonosphericDelayModifier), "wrapfn_", make_descriptor(t_AngularIonosphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AngularIonosphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AngularIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AngularIonosphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_AngularIonosphericDelayModifier::wrap_Object(AngularIonosphericDelayModifier(((t_AngularIonosphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_AngularIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AngularIonosphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_AngularIonosphericDelayModifier_init_(t_AngularIonosphericDelayModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::earth::ionosphere::IonosphericModel a0((jobject) NULL);
            jdouble a1;
            AngularIonosphericDelayModifier object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::orekit::models::earth::ionosphere::IonosphericModel::initializeClass, &a0, &a1))
            {
              INT_CALL(object = AngularIonosphericDelayModifier(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_AngularIonosphericDelayModifier_getParametersDrivers(t_AngularIonosphericDelayModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_AngularIonosphericDelayModifier_modifyWithoutDerivatives(t_AngularIonosphericDelayModifier *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurementBase a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurementBase::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase::parameters_))
            {
              OBJ_CALL(self->object.modifyWithoutDerivatives(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "modifyWithoutDerivatives", arg);
            return NULL;
          }

          static PyObject *t_AngularIonosphericDelayModifier_get__parametersDrivers(t_AngularIonosphericDelayModifier *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/InterSatellitesWindUp.h"
#include "org/orekit/estimation/measurements/gnss/InterSatellitesPhase.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *InterSatellitesWindUp::class$ = NULL;
          jmethodID *InterSatellitesWindUp::mids$ = NULL;
          bool InterSatellitesWindUp::live$ = false;

          jclass InterSatellitesWindUp::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/InterSatellitesWindUp");

              mids$ = new jmethodID[max_mid];
              mids$[mid_receiverToInert_d9b98e1ca49f6e0d] = env->getMethodID(cls, "receiverToInert", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
              mids$[mid_emitterToInert_d9b98e1ca49f6e0d] = env->getMethodID(cls, "emitterToInert", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
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
    namespace estimation {
      namespace measurements {
        namespace gnss {
          static PyObject *t_InterSatellitesWindUp_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_InterSatellitesWindUp_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_InterSatellitesWindUp_of_(t_InterSatellitesWindUp *self, PyObject *args);
          static PyObject *t_InterSatellitesWindUp_get__parameters_(t_InterSatellitesWindUp *self, void *data);
          static PyGetSetDef t_InterSatellitesWindUp__fields_[] = {
            DECLARE_GET_FIELD(t_InterSatellitesWindUp, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_InterSatellitesWindUp__methods_[] = {
            DECLARE_METHOD(t_InterSatellitesWindUp, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_InterSatellitesWindUp, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_InterSatellitesWindUp, of_, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(InterSatellitesWindUp)[] = {
            { Py_tp_methods, t_InterSatellitesWindUp__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_InterSatellitesWindUp__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(InterSatellitesWindUp)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::AbstractWindUp),
            NULL
          };

          DEFINE_TYPE(InterSatellitesWindUp, t_InterSatellitesWindUp, InterSatellitesWindUp);
          PyObject *t_InterSatellitesWindUp::wrap_Object(const InterSatellitesWindUp& object, PyTypeObject *p0)
          {
            PyObject *obj = t_InterSatellitesWindUp::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_InterSatellitesWindUp *self = (t_InterSatellitesWindUp *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_InterSatellitesWindUp::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_InterSatellitesWindUp::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_InterSatellitesWindUp *self = (t_InterSatellitesWindUp *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_InterSatellitesWindUp::install(PyObject *module)
          {
            installType(&PY_TYPE(InterSatellitesWindUp), &PY_TYPE_DEF(InterSatellitesWindUp), module, "InterSatellitesWindUp", 0);
          }

          void t_InterSatellitesWindUp::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesWindUp), "class_", make_descriptor(InterSatellitesWindUp::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesWindUp), "wrapfn_", make_descriptor(t_InterSatellitesWindUp::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesWindUp), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_InterSatellitesWindUp_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, InterSatellitesWindUp::initializeClass, 1)))
              return NULL;
            return t_InterSatellitesWindUp::wrap_Object(InterSatellitesWindUp(((t_InterSatellitesWindUp *) arg)->object.this$));
          }
          static PyObject *t_InterSatellitesWindUp_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, InterSatellitesWindUp::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_InterSatellitesWindUp_of_(t_InterSatellitesWindUp *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }
          static PyObject *t_InterSatellitesWindUp_get__parameters_(t_InterSatellitesWindUp *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/tdm/Observation.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/tdm/ObservationType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *Observation::class$ = NULL;
            jmethodID *Observation::mids$ = NULL;
            bool Observation::live$ = false;

            jclass Observation::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/Observation");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_f1cf86cd74f431e1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;Lorg/orekit/time/AbsoluteDate;D)V");
                mids$[mid_getEpoch_7a97f7e149e79afb] = env->getMethodID(cls, "getEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getMeasurement_557b8123390d8d0c] = env->getMethodID(cls, "getMeasurement", "()D");
                mids$[mid_getType_586ffde90508f09b] = env->getMethodID(cls, "getType", "()Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            Observation::Observation(const ::org::orekit::files::ccsds::ndm::tdm::ObservationType & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f1cf86cd74f431e1, a0.this$, a1.this$, a2)) {}

            ::org::orekit::time::AbsoluteDate Observation::getEpoch() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpoch_7a97f7e149e79afb]));
            }

            jdouble Observation::getMeasurement() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMeasurement_557b8123390d8d0c]);
            }

            ::org::orekit::files::ccsds::ndm::tdm::ObservationType Observation::getType() const
            {
              return ::org::orekit::files::ccsds::ndm::tdm::ObservationType(env->callObjectMethod(this$, mids$[mid_getType_586ffde90508f09b]));
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
          namespace tdm {
            static PyObject *t_Observation_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_Observation_instance_(PyTypeObject *type, PyObject *arg);
            static int t_Observation_init_(t_Observation *self, PyObject *args, PyObject *kwds);
            static PyObject *t_Observation_getEpoch(t_Observation *self);
            static PyObject *t_Observation_getMeasurement(t_Observation *self);
            static PyObject *t_Observation_getType(t_Observation *self);
            static PyObject *t_Observation_get__epoch(t_Observation *self, void *data);
            static PyObject *t_Observation_get__measurement(t_Observation *self, void *data);
            static PyObject *t_Observation_get__type(t_Observation *self, void *data);
            static PyGetSetDef t_Observation__fields_[] = {
              DECLARE_GET_FIELD(t_Observation, epoch),
              DECLARE_GET_FIELD(t_Observation, measurement),
              DECLARE_GET_FIELD(t_Observation, type),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_Observation__methods_[] = {
              DECLARE_METHOD(t_Observation, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_Observation, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_Observation, getEpoch, METH_NOARGS),
              DECLARE_METHOD(t_Observation, getMeasurement, METH_NOARGS),
              DECLARE_METHOD(t_Observation, getType, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(Observation)[] = {
              { Py_tp_methods, t_Observation__methods_ },
              { Py_tp_init, (void *) t_Observation_init_ },
              { Py_tp_getset, t_Observation__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(Observation)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(Observation, t_Observation, Observation);

            void t_Observation::install(PyObject *module)
            {
              installType(&PY_TYPE(Observation), &PY_TYPE_DEF(Observation), module, "Observation", 0);
            }

            void t_Observation::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(Observation), "class_", make_descriptor(Observation::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(Observation), "wrapfn_", make_descriptor(t_Observation::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(Observation), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_Observation_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, Observation::initializeClass, 1)))
                return NULL;
              return t_Observation::wrap_Object(Observation(((t_Observation *) arg)->object.this$));
            }
            static PyObject *t_Observation_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, Observation::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_Observation_init_(t_Observation *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::files::ccsds::ndm::tdm::ObservationType a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              jdouble a2;
              Observation object((jobject) NULL);

              if (!parseArgs(args, "KkD", ::org::orekit::files::ccsds::ndm::tdm::ObservationType::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::tdm::t_ObservationType::parameters_, &a1, &a2))
              {
                INT_CALL(object = Observation(a0, a1, a2));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_Observation_getEpoch(t_Observation *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getEpoch());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_Observation_getMeasurement(t_Observation *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMeasurement());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_Observation_getType(t_Observation *self)
            {
              ::org::orekit::files::ccsds::ndm::tdm::ObservationType result((jobject) NULL);
              OBJ_CALL(result = self->object.getType());
              return ::org::orekit::files::ccsds::ndm::tdm::t_ObservationType::wrap_Object(result);
            }

            static PyObject *t_Observation_get__epoch(t_Observation *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getEpoch());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }

            static PyObject *t_Observation_get__measurement(t_Observation *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMeasurement());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_Observation_get__type(t_Observation *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::tdm::ObservationType value((jobject) NULL);
              OBJ_CALL(value = self->object.getType());
              return ::org::orekit::files::ccsds::ndm::tdm::t_ObservationType::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/continuous/ConstantRealDistribution.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *ConstantRealDistribution::class$ = NULL;
        jmethodID *ConstantRealDistribution::mids$ = NULL;
        bool ConstantRealDistribution::live$ = false;

        jclass ConstantRealDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/ConstantRealDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_cumulativeProbability_7e960cd6eee376d8] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_7e960cd6eee376d8] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getNumericalMean_557b8123390d8d0c] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_557b8123390d8d0c] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getSupportLowerBound_557b8123390d8d0c] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_557b8123390d8d0c] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_inverseCumulativeProbability_7e960cd6eee376d8] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)D");
            mids$[mid_isSupportConnected_89b302893bdbe1f1] = env->getMethodID(cls, "isSupportConnected", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ConstantRealDistribution::ConstantRealDistribution(jdouble a0) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

        jdouble ConstantRealDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_7e960cd6eee376d8], a0);
        }

        jdouble ConstantRealDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_7e960cd6eee376d8], a0);
        }

        jdouble ConstantRealDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_557b8123390d8d0c]);
        }

        jdouble ConstantRealDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_557b8123390d8d0c]);
        }

        jdouble ConstantRealDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_557b8123390d8d0c]);
        }

        jdouble ConstantRealDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_557b8123390d8d0c]);
        }

        jdouble ConstantRealDistribution::inverseCumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_inverseCumulativeProbability_7e960cd6eee376d8], a0);
        }

        jboolean ConstantRealDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_89b302893bdbe1f1]);
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
        static PyObject *t_ConstantRealDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ConstantRealDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ConstantRealDistribution_init_(t_ConstantRealDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ConstantRealDistribution_cumulativeProbability(t_ConstantRealDistribution *self, PyObject *args);
        static PyObject *t_ConstantRealDistribution_density(t_ConstantRealDistribution *self, PyObject *args);
        static PyObject *t_ConstantRealDistribution_getNumericalMean(t_ConstantRealDistribution *self, PyObject *args);
        static PyObject *t_ConstantRealDistribution_getNumericalVariance(t_ConstantRealDistribution *self, PyObject *args);
        static PyObject *t_ConstantRealDistribution_getSupportLowerBound(t_ConstantRealDistribution *self, PyObject *args);
        static PyObject *t_ConstantRealDistribution_getSupportUpperBound(t_ConstantRealDistribution *self, PyObject *args);
        static PyObject *t_ConstantRealDistribution_inverseCumulativeProbability(t_ConstantRealDistribution *self, PyObject *args);
        static PyObject *t_ConstantRealDistribution_isSupportConnected(t_ConstantRealDistribution *self, PyObject *args);
        static PyObject *t_ConstantRealDistribution_get__numericalMean(t_ConstantRealDistribution *self, void *data);
        static PyObject *t_ConstantRealDistribution_get__numericalVariance(t_ConstantRealDistribution *self, void *data);
        static PyObject *t_ConstantRealDistribution_get__supportConnected(t_ConstantRealDistribution *self, void *data);
        static PyObject *t_ConstantRealDistribution_get__supportLowerBound(t_ConstantRealDistribution *self, void *data);
        static PyObject *t_ConstantRealDistribution_get__supportUpperBound(t_ConstantRealDistribution *self, void *data);
        static PyGetSetDef t_ConstantRealDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_ConstantRealDistribution, numericalMean),
          DECLARE_GET_FIELD(t_ConstantRealDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_ConstantRealDistribution, supportConnected),
          DECLARE_GET_FIELD(t_ConstantRealDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_ConstantRealDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ConstantRealDistribution__methods_[] = {
          DECLARE_METHOD(t_ConstantRealDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConstantRealDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConstantRealDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_ConstantRealDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_ConstantRealDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_ConstantRealDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_ConstantRealDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_ConstantRealDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_ConstantRealDistribution, inverseCumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_ConstantRealDistribution, isSupportConnected, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ConstantRealDistribution)[] = {
          { Py_tp_methods, t_ConstantRealDistribution__methods_ },
          { Py_tp_init, (void *) t_ConstantRealDistribution_init_ },
          { Py_tp_getset, t_ConstantRealDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ConstantRealDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(ConstantRealDistribution, t_ConstantRealDistribution, ConstantRealDistribution);

        void t_ConstantRealDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(ConstantRealDistribution), &PY_TYPE_DEF(ConstantRealDistribution), module, "ConstantRealDistribution", 0);
        }

        void t_ConstantRealDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantRealDistribution), "class_", make_descriptor(ConstantRealDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantRealDistribution), "wrapfn_", make_descriptor(t_ConstantRealDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantRealDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ConstantRealDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ConstantRealDistribution::initializeClass, 1)))
            return NULL;
          return t_ConstantRealDistribution::wrap_Object(ConstantRealDistribution(((t_ConstantRealDistribution *) arg)->object.this$));
        }
        static PyObject *t_ConstantRealDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ConstantRealDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ConstantRealDistribution_init_(t_ConstantRealDistribution *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          ConstantRealDistribution object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = ConstantRealDistribution(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ConstantRealDistribution_cumulativeProbability(t_ConstantRealDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ConstantRealDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_ConstantRealDistribution_density(t_ConstantRealDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ConstantRealDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_ConstantRealDistribution_getNumericalMean(t_ConstantRealDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ConstantRealDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_ConstantRealDistribution_getNumericalVariance(t_ConstantRealDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ConstantRealDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_ConstantRealDistribution_getSupportLowerBound(t_ConstantRealDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ConstantRealDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_ConstantRealDistribution_getSupportUpperBound(t_ConstantRealDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ConstantRealDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_ConstantRealDistribution_inverseCumulativeProbability(t_ConstantRealDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.inverseCumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ConstantRealDistribution), (PyObject *) self, "inverseCumulativeProbability", args, 2);
        }

        static PyObject *t_ConstantRealDistribution_isSupportConnected(t_ConstantRealDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(ConstantRealDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_ConstantRealDistribution_get__numericalMean(t_ConstantRealDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ConstantRealDistribution_get__numericalVariance(t_ConstantRealDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ConstantRealDistribution_get__supportConnected(t_ConstantRealDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_ConstantRealDistribution_get__supportLowerBound(t_ConstantRealDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ConstantRealDistribution_get__supportUpperBound(t_ConstantRealDistribution *self, void *data)
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
#include "org/orekit/estimation/sequential/KalmanEstimator.h"
#include "java/lang/Iterable.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/propagation/Propagator.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/sequential/KalmanObserver.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *KalmanEstimator::class$ = NULL;
        jmethodID *KalmanEstimator::mids$ = NULL;
        bool KalmanEstimator::live$ = false;

        jclass KalmanEstimator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/KalmanEstimator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_estimationStep_e70572bb561aea25] = env->getMethodID(cls, "estimationStep", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;)[Lorg/orekit/propagation/Propagator;");
            mids$[mid_processMeasurements_48e4d72357877767] = env->getMethodID(cls, "processMeasurements", "(Ljava/lang/Iterable;)[Lorg/orekit/propagation/Propagator;");
            mids$[mid_setObserver_4275515b1ffe8ceb] = env->getMethodID(cls, "setObserver", "(Lorg/orekit/estimation/sequential/KalmanObserver;)V");
            mids$[mid_getKalmanEstimation_32faeba2996c6566] = env->getMethodID(cls, "getKalmanEstimation", "()Lorg/orekit/estimation/sequential/KalmanEstimation;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        JArray< ::org::orekit::propagation::Propagator > KalmanEstimator::estimationStep(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0) const
        {
          return JArray< ::org::orekit::propagation::Propagator >(env->callObjectMethod(this$, mids$[mid_estimationStep_e70572bb561aea25], a0.this$));
        }

        JArray< ::org::orekit::propagation::Propagator > KalmanEstimator::processMeasurements(const ::java::lang::Iterable & a0) const
        {
          return JArray< ::org::orekit::propagation::Propagator >(env->callObjectMethod(this$, mids$[mid_processMeasurements_48e4d72357877767], a0.this$));
        }

        void KalmanEstimator::setObserver(const ::org::orekit::estimation::sequential::KalmanObserver & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setObserver_4275515b1ffe8ceb], a0.this$);
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
    namespace estimation {
      namespace sequential {
        static PyObject *t_KalmanEstimator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_KalmanEstimator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_KalmanEstimator_estimationStep(t_KalmanEstimator *self, PyObject *arg);
        static PyObject *t_KalmanEstimator_processMeasurements(t_KalmanEstimator *self, PyObject *arg);
        static PyObject *t_KalmanEstimator_setObserver(t_KalmanEstimator *self, PyObject *arg);
        static int t_KalmanEstimator_set__observer(t_KalmanEstimator *self, PyObject *arg, void *data);
        static PyGetSetDef t_KalmanEstimator__fields_[] = {
          DECLARE_SET_FIELD(t_KalmanEstimator, observer),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_KalmanEstimator__methods_[] = {
          DECLARE_METHOD(t_KalmanEstimator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KalmanEstimator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KalmanEstimator, estimationStep, METH_O),
          DECLARE_METHOD(t_KalmanEstimator, processMeasurements, METH_O),
          DECLARE_METHOD(t_KalmanEstimator, setObserver, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(KalmanEstimator)[] = {
          { Py_tp_methods, t_KalmanEstimator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_KalmanEstimator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(KalmanEstimator)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::sequential::AbstractKalmanEstimator),
          NULL
        };

        DEFINE_TYPE(KalmanEstimator, t_KalmanEstimator, KalmanEstimator);

        void t_KalmanEstimator::install(PyObject *module)
        {
          installType(&PY_TYPE(KalmanEstimator), &PY_TYPE_DEF(KalmanEstimator), module, "KalmanEstimator", 0);
        }

        void t_KalmanEstimator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanEstimator), "class_", make_descriptor(KalmanEstimator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanEstimator), "wrapfn_", make_descriptor(t_KalmanEstimator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanEstimator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_KalmanEstimator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, KalmanEstimator::initializeClass, 1)))
            return NULL;
          return t_KalmanEstimator::wrap_Object(KalmanEstimator(((t_KalmanEstimator *) arg)->object.this$));
        }
        static PyObject *t_KalmanEstimator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, KalmanEstimator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_KalmanEstimator_estimationStep(t_KalmanEstimator *self, PyObject *arg)
        {
          ::org::orekit::estimation::measurements::ObservedMeasurement a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::orekit::propagation::Propagator > result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_ObservedMeasurement::parameters_))
          {
            OBJ_CALL(result = self->object.estimationStep(a0));
            return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_Propagator::wrap_jobject);
          }

          PyErr_SetArgsError((PyObject *) self, "estimationStep", arg);
          return NULL;
        }

        static PyObject *t_KalmanEstimator_processMeasurements(t_KalmanEstimator *self, PyObject *arg)
        {
          ::java::lang::Iterable a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::orekit::propagation::Propagator > result((jobject) NULL);

          if (!parseArg(arg, "K", ::java::lang::Iterable::initializeClass, &a0, &p0, ::java::lang::t_Iterable::parameters_))
          {
            OBJ_CALL(result = self->object.processMeasurements(a0));
            return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_Propagator::wrap_jobject);
          }

          PyErr_SetArgsError((PyObject *) self, "processMeasurements", arg);
          return NULL;
        }

        static PyObject *t_KalmanEstimator_setObserver(t_KalmanEstimator *self, PyObject *arg)
        {
          ::org::orekit::estimation::sequential::KalmanObserver a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::estimation::sequential::KalmanObserver::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setObserver(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setObserver", arg);
          return NULL;
        }

        static int t_KalmanEstimator_set__observer(t_KalmanEstimator *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::estimation::sequential::KalmanObserver value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::estimation::sequential::KalmanObserver::initializeClass, &value))
            {
              INT_CALL(self->object.setObserver(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "observer", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/handlers/FieldRecordAndContinue.h"
#include "java/util/List.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/events/handlers/FieldEventHandler.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/hipparchus/ode/events/Action.h"
#include "org/orekit/propagation/events/handlers/FieldRecordAndContinue$Event.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {

          ::java::lang::Class *FieldRecordAndContinue::class$ = NULL;
          jmethodID *FieldRecordAndContinue::mids$ = NULL;
          bool FieldRecordAndContinue::live$ = false;

          jclass FieldRecordAndContinue::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/events/handlers/FieldRecordAndContinue");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_4ccaedadb068bdeb] = env->getMethodID(cls, "<init>", "(Ljava/util/List;)V");
              mids$[mid_clear_0640e6acf969ed28] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_eventOccurred_061886b33964a9af] = env->getMethodID(cls, "eventOccurred", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/events/FieldEventDetector;Z)Lorg/hipparchus/ode/events/Action;");
              mids$[mid_getEvents_0d9551367f7ecdef] = env->getMethodID(cls, "getEvents", "()Ljava/util/List;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldRecordAndContinue::FieldRecordAndContinue() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          FieldRecordAndContinue::FieldRecordAndContinue(const ::java::util::List & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4ccaedadb068bdeb, a0.this$)) {}

          void FieldRecordAndContinue::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_0640e6acf969ed28]);
          }

          ::org::hipparchus::ode::events::Action FieldRecordAndContinue::eventOccurred(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::events::FieldEventDetector & a1, jboolean a2) const
          {
            return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_eventOccurred_061886b33964a9af], a0.this$, a1.this$, a2));
          }

          ::java::util::List FieldRecordAndContinue::getEvents() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getEvents_0d9551367f7ecdef]));
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
      namespace events {
        namespace handlers {
          static PyObject *t_FieldRecordAndContinue_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldRecordAndContinue_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldRecordAndContinue_of_(t_FieldRecordAndContinue *self, PyObject *args);
          static int t_FieldRecordAndContinue_init_(t_FieldRecordAndContinue *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldRecordAndContinue_clear(t_FieldRecordAndContinue *self);
          static PyObject *t_FieldRecordAndContinue_eventOccurred(t_FieldRecordAndContinue *self, PyObject *args);
          static PyObject *t_FieldRecordAndContinue_getEvents(t_FieldRecordAndContinue *self);
          static PyObject *t_FieldRecordAndContinue_get__events(t_FieldRecordAndContinue *self, void *data);
          static PyObject *t_FieldRecordAndContinue_get__parameters_(t_FieldRecordAndContinue *self, void *data);
          static PyGetSetDef t_FieldRecordAndContinue__fields_[] = {
            DECLARE_GET_FIELD(t_FieldRecordAndContinue, events),
            DECLARE_GET_FIELD(t_FieldRecordAndContinue, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldRecordAndContinue__methods_[] = {
            DECLARE_METHOD(t_FieldRecordAndContinue, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldRecordAndContinue, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldRecordAndContinue, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldRecordAndContinue, clear, METH_NOARGS),
            DECLARE_METHOD(t_FieldRecordAndContinue, eventOccurred, METH_VARARGS),
            DECLARE_METHOD(t_FieldRecordAndContinue, getEvents, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldRecordAndContinue)[] = {
            { Py_tp_methods, t_FieldRecordAndContinue__methods_ },
            { Py_tp_init, (void *) t_FieldRecordAndContinue_init_ },
            { Py_tp_getset, t_FieldRecordAndContinue__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldRecordAndContinue)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldRecordAndContinue, t_FieldRecordAndContinue, FieldRecordAndContinue);
          PyObject *t_FieldRecordAndContinue::wrap_Object(const FieldRecordAndContinue& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldRecordAndContinue::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldRecordAndContinue *self = (t_FieldRecordAndContinue *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldRecordAndContinue::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldRecordAndContinue::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldRecordAndContinue *self = (t_FieldRecordAndContinue *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldRecordAndContinue::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldRecordAndContinue), &PY_TYPE_DEF(FieldRecordAndContinue), module, "FieldRecordAndContinue", 0);
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRecordAndContinue), "Event", make_descriptor(&PY_TYPE_DEF(FieldRecordAndContinue$Event)));
          }

          void t_FieldRecordAndContinue::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRecordAndContinue), "class_", make_descriptor(FieldRecordAndContinue::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRecordAndContinue), "wrapfn_", make_descriptor(t_FieldRecordAndContinue::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRecordAndContinue), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldRecordAndContinue_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldRecordAndContinue::initializeClass, 1)))
              return NULL;
            return t_FieldRecordAndContinue::wrap_Object(FieldRecordAndContinue(((t_FieldRecordAndContinue *) arg)->object.this$));
          }
          static PyObject *t_FieldRecordAndContinue_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldRecordAndContinue::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldRecordAndContinue_of_(t_FieldRecordAndContinue *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldRecordAndContinue_init_(t_FieldRecordAndContinue *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                FieldRecordAndContinue object((jobject) NULL);

                INT_CALL(object = FieldRecordAndContinue());
                self->object = object;
                break;
              }
             case 1:
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;
                FieldRecordAndContinue object((jobject) NULL);

                if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = FieldRecordAndContinue(a0));
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

          static PyObject *t_FieldRecordAndContinue_clear(t_FieldRecordAndContinue *self)
          {
            OBJ_CALL(self->object.clear());
            Py_RETURN_NONE;
          }

          static PyObject *t_FieldRecordAndContinue_eventOccurred(t_FieldRecordAndContinue *self, PyObject *args)
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::propagation::events::FieldEventDetector a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;
            ::org::hipparchus::ode::events::Action result((jobject) NULL);

            if (!parseArgs(args, "KKZ", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::events::FieldEventDetector::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.eventOccurred(a0, a1, a2));
              return ::org::hipparchus::ode::events::t_Action::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "eventOccurred", args);
            return NULL;
          }

          static PyObject *t_FieldRecordAndContinue_getEvents(t_FieldRecordAndContinue *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getEvents());
            return ::java::util::t_List::wrap_Object(result);
          }
          static PyObject *t_FieldRecordAndContinue_get__parameters_(t_FieldRecordAndContinue *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_FieldRecordAndContinue_get__events(t_FieldRecordAndContinue *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getEvents());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/radiation/PythonAbstractRadiationForceModel.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/util/List.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace radiation {

        ::java::lang::Class *PythonAbstractRadiationForceModel::class$ = NULL;
        jmethodID *PythonAbstractRadiationForceModel::mids$ = NULL;
        bool PythonAbstractRadiationForceModel::live$ = false;

        jclass PythonAbstractRadiationForceModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/radiation/PythonAbstractRadiationForceModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_5bb199e2d18c144d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/bodies/OneAxisEllipsoid;)V");
            mids$[mid_acceleration_b61fb59a041240c6] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_acceleration_61944e27a39e8290] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_init_0472264ad6f40bc2] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractRadiationForceModel::PythonAbstractRadiationForceModel(const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a0, const ::org::orekit::bodies::OneAxisEllipsoid & a1) : ::org::orekit::forces::radiation::AbstractRadiationForceModel(env->newObject(initializeClass, &mids$, mid_init$_5bb199e2d18c144d, a0.this$, a1.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D PythonAbstractRadiationForceModel::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_b61fb59a041240c6], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D PythonAbstractRadiationForceModel::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_61944e27a39e8290], a0.this$, a1.this$));
        }

        ::java::util::List PythonAbstractRadiationForceModel::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
        }

        void PythonAbstractRadiationForceModel::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_0472264ad6f40bc2], a0.this$, a1.this$);
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
      namespace radiation {
        static PyObject *t_PythonAbstractRadiationForceModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractRadiationForceModel_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAbstractRadiationForceModel_init_(t_PythonAbstractRadiationForceModel *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAbstractRadiationForceModel_acceleration(t_PythonAbstractRadiationForceModel *self, PyObject *args);
        static PyObject *t_PythonAbstractRadiationForceModel_getParametersDrivers(t_PythonAbstractRadiationForceModel *self, PyObject *args);
        static PyObject *t_PythonAbstractRadiationForceModel_init(t_PythonAbstractRadiationForceModel *self, PyObject *args);
        static PyObject *t_PythonAbstractRadiationForceModel_get__parametersDrivers(t_PythonAbstractRadiationForceModel *self, void *data);
        static PyGetSetDef t_PythonAbstractRadiationForceModel__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAbstractRadiationForceModel, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAbstractRadiationForceModel__methods_[] = {
          DECLARE_METHOD(t_PythonAbstractRadiationForceModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractRadiationForceModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractRadiationForceModel, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_PythonAbstractRadiationForceModel, getParametersDrivers, METH_VARARGS),
          DECLARE_METHOD(t_PythonAbstractRadiationForceModel, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAbstractRadiationForceModel)[] = {
          { Py_tp_methods, t_PythonAbstractRadiationForceModel__methods_ },
          { Py_tp_init, (void *) t_PythonAbstractRadiationForceModel_init_ },
          { Py_tp_getset, t_PythonAbstractRadiationForceModel__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAbstractRadiationForceModel)[] = {
          &PY_TYPE_DEF(::org::orekit::forces::radiation::AbstractRadiationForceModel),
          NULL
        };

        DEFINE_TYPE(PythonAbstractRadiationForceModel, t_PythonAbstractRadiationForceModel, PythonAbstractRadiationForceModel);

        void t_PythonAbstractRadiationForceModel::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAbstractRadiationForceModel), &PY_TYPE_DEF(PythonAbstractRadiationForceModel), module, "PythonAbstractRadiationForceModel", 0);
        }

        void t_PythonAbstractRadiationForceModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractRadiationForceModel), "class_", make_descriptor(PythonAbstractRadiationForceModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractRadiationForceModel), "wrapfn_", make_descriptor(t_PythonAbstractRadiationForceModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractRadiationForceModel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PythonAbstractRadiationForceModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAbstractRadiationForceModel::initializeClass, 1)))
            return NULL;
          return t_PythonAbstractRadiationForceModel::wrap_Object(PythonAbstractRadiationForceModel(((t_PythonAbstractRadiationForceModel *) arg)->object.this$));
        }
        static PyObject *t_PythonAbstractRadiationForceModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAbstractRadiationForceModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAbstractRadiationForceModel_init_(t_PythonAbstractRadiationForceModel *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::utils::ExtendedPVCoordinatesProvider a0((jobject) NULL);
          ::org::orekit::bodies::OneAxisEllipsoid a1((jobject) NULL);
          PythonAbstractRadiationForceModel object((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1))
          {
            INT_CALL(object = PythonAbstractRadiationForceModel(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_PythonAbstractRadiationForceModel_acceleration(t_PythonAbstractRadiationForceModel *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
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
          }

          return callSuper(PY_TYPE(PythonAbstractRadiationForceModel), (PyObject *) self, "acceleration", args, 2);
        }

        static PyObject *t_PythonAbstractRadiationForceModel_getParametersDrivers(t_PythonAbstractRadiationForceModel *self, PyObject *args)
        {
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          return callSuper(PY_TYPE(PythonAbstractRadiationForceModel), (PyObject *) self, "getParametersDrivers", args, 2);
        }

        static PyObject *t_PythonAbstractRadiationForceModel_init(t_PythonAbstractRadiationForceModel *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(PythonAbstractRadiationForceModel), (PyObject *) self, "init", args, 2);
        }

        static PyObject *t_PythonAbstractRadiationForceModel_get__parametersDrivers(t_PythonAbstractRadiationForceModel *self, void *data)
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
#include "org/orekit/utils/ConstantPVCoordinatesProvider.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *ConstantPVCoordinatesProvider::class$ = NULL;
      jmethodID *ConstantPVCoordinatesProvider::mids$ = NULL;
      bool ConstantPVCoordinatesProvider::live$ = false;

      jclass ConstantPVCoordinatesProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/ConstantPVCoordinatesProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ed6bf324da5460e4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/GeodeticPoint;Lorg/orekit/bodies/OneAxisEllipsoid;)V");
          mids$[mid_init$_a6a752e8ad147b96] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;)V");
          mids$[mid_init$_1caf593de129c444] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/frames/Frame;)V");
          mids$[mid_getPVCoordinates_17742a9a6655bdb1] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getPosition_7ca40559664606d9] = env->getMethodID(cls, "getPosition", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ConstantPVCoordinatesProvider::ConstantPVCoordinatesProvider(const ::org::orekit::bodies::GeodeticPoint & a0, const ::org::orekit::bodies::OneAxisEllipsoid & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ed6bf324da5460e4, a0.this$, a1.this$)) {}

      ConstantPVCoordinatesProvider::ConstantPVCoordinatesProvider(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::frames::Frame & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a6a752e8ad147b96, a0.this$, a1.this$)) {}

      ConstantPVCoordinatesProvider::ConstantPVCoordinatesProvider(const ::org::orekit::utils::PVCoordinates & a0, const ::org::orekit::frames::Frame & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1caf593de129c444, a0.this$, a1.this$)) {}

      ::org::orekit::utils::TimeStampedPVCoordinates ConstantPVCoordinatesProvider::getPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_17742a9a6655bdb1], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D ConstantPVCoordinatesProvider::getPosition(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPosition_7ca40559664606d9], a0.this$, a1.this$));
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
      static PyObject *t_ConstantPVCoordinatesProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ConstantPVCoordinatesProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ConstantPVCoordinatesProvider_init_(t_ConstantPVCoordinatesProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ConstantPVCoordinatesProvider_getPVCoordinates(t_ConstantPVCoordinatesProvider *self, PyObject *args);
      static PyObject *t_ConstantPVCoordinatesProvider_getPosition(t_ConstantPVCoordinatesProvider *self, PyObject *args);

      static PyMethodDef t_ConstantPVCoordinatesProvider__methods_[] = {
        DECLARE_METHOD(t_ConstantPVCoordinatesProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ConstantPVCoordinatesProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ConstantPVCoordinatesProvider, getPVCoordinates, METH_VARARGS),
        DECLARE_METHOD(t_ConstantPVCoordinatesProvider, getPosition, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ConstantPVCoordinatesProvider)[] = {
        { Py_tp_methods, t_ConstantPVCoordinatesProvider__methods_ },
        { Py_tp_init, (void *) t_ConstantPVCoordinatesProvider_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ConstantPVCoordinatesProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ConstantPVCoordinatesProvider, t_ConstantPVCoordinatesProvider, ConstantPVCoordinatesProvider);

      void t_ConstantPVCoordinatesProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(ConstantPVCoordinatesProvider), &PY_TYPE_DEF(ConstantPVCoordinatesProvider), module, "ConstantPVCoordinatesProvider", 0);
      }

      void t_ConstantPVCoordinatesProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantPVCoordinatesProvider), "class_", make_descriptor(ConstantPVCoordinatesProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantPVCoordinatesProvider), "wrapfn_", make_descriptor(t_ConstantPVCoordinatesProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantPVCoordinatesProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ConstantPVCoordinatesProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ConstantPVCoordinatesProvider::initializeClass, 1)))
          return NULL;
        return t_ConstantPVCoordinatesProvider::wrap_Object(ConstantPVCoordinatesProvider(((t_ConstantPVCoordinatesProvider *) arg)->object.this$));
      }
      static PyObject *t_ConstantPVCoordinatesProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ConstantPVCoordinatesProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ConstantPVCoordinatesProvider_init_(t_ConstantPVCoordinatesProvider *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);
            ::org::orekit::bodies::OneAxisEllipsoid a1((jobject) NULL);
            ConstantPVCoordinatesProvider object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1))
            {
              INT_CALL(object = ConstantPVCoordinatesProvider(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ConstantPVCoordinatesProvider object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              INT_CALL(object = ConstantPVCoordinatesProvider(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ConstantPVCoordinatesProvider object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              INT_CALL(object = ConstantPVCoordinatesProvider(a0, a1));
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

      static PyObject *t_ConstantPVCoordinatesProvider_getPVCoordinates(t_ConstantPVCoordinatesProvider *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::frames::Frame a1((jobject) NULL);
        ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.getPVCoordinates(a0, a1));
          return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getPVCoordinates", args);
        return NULL;
      }

      static PyObject *t_ConstantPVCoordinatesProvider_getPosition(t_ConstantPVCoordinatesProvider *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::frames::Frame a1((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.getPosition(a0, a1));
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getPosition", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/AbstractFieldTimeInterpolator.h"
#include "java/util/List.h"
#include "java/util/Collection.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/FieldTimeInterpolator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *AbstractFieldTimeInterpolator::class$ = NULL;
      jmethodID *AbstractFieldTimeInterpolator::mids$ = NULL;
      bool AbstractFieldTimeInterpolator::live$ = false;
      jdouble AbstractFieldTimeInterpolator::DEFAULT_EXTRAPOLATION_THRESHOLD_SEC = (jdouble) 0;
      jint AbstractFieldTimeInterpolator::DEFAULT_INTERPOLATION_POINTS = (jint) 0;

      jclass AbstractFieldTimeInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/AbstractFieldTimeInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_89aad365fb0ed8da] = env->getMethodID(cls, "<init>", "(ID)V");
          mids$[mid_checkInterpolatorCompatibilityWithSampleSize_8c13907d579f7554] = env->getStaticMethodID(cls, "checkInterpolatorCompatibilityWithSampleSize", "(Lorg/orekit/time/FieldTimeInterpolator;I)V");
          mids$[mid_getExtrapolationThreshold_557b8123390d8d0c] = env->getMethodID(cls, "getExtrapolationThreshold", "()D");
          mids$[mid_getNbInterpolationPoints_412668abc8d889e9] = env->getMethodID(cls, "getNbInterpolationPoints", "()I");
          mids$[mid_getSubInterpolators_0d9551367f7ecdef] = env->getMethodID(cls, "getSubInterpolators", "()Ljava/util/List;");
          mids$[mid_interpolate_cc27df3dc8f597ed] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/FieldAbsoluteDate;Ljava/util/Collection;)Lorg/orekit/time/FieldTimeStamped;");
          mids$[mid_interpolate_a061c10693b292f5] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/FieldAbsoluteDate;Ljava/util/stream/Stream;)Lorg/orekit/time/FieldTimeStamped;");
          mids$[mid_interpolate_43d454da912ece22] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractFieldTimeInterpolator$InterpolationData;)Lorg/orekit/time/FieldTimeStamped;");
          mids$[mid_addOptionalSubInterpolatorIfDefined_186bcaa418c2f7bb] = env->getMethodID(cls, "addOptionalSubInterpolatorIfDefined", "(Lorg/orekit/time/FieldTimeInterpolator;Ljava/util/List;)V");
          mids$[mid_getTimeParameter_87e809fd5a2def41] = env->getMethodID(cls, "getTimeParameter", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_EXTRAPOLATION_THRESHOLD_SEC = env->getStaticDoubleField(cls, "DEFAULT_EXTRAPOLATION_THRESHOLD_SEC");
          DEFAULT_INTERPOLATION_POINTS = env->getStaticIntField(cls, "DEFAULT_INTERPOLATION_POINTS");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AbstractFieldTimeInterpolator::AbstractFieldTimeInterpolator(jint a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_89aad365fb0ed8da, a0, a1)) {}

      void AbstractFieldTimeInterpolator::checkInterpolatorCompatibilityWithSampleSize(const ::org::orekit::time::FieldTimeInterpolator & a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkInterpolatorCompatibilityWithSampleSize_8c13907d579f7554], a0.this$, a1);
      }

      jdouble AbstractFieldTimeInterpolator::getExtrapolationThreshold() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getExtrapolationThreshold_557b8123390d8d0c]);
      }

      jint AbstractFieldTimeInterpolator::getNbInterpolationPoints() const
      {
        return env->callIntMethod(this$, mids$[mid_getNbInterpolationPoints_412668abc8d889e9]);
      }

      ::java::util::List AbstractFieldTimeInterpolator::getSubInterpolators() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSubInterpolators_0d9551367f7ecdef]));
      }

      ::org::orekit::time::FieldTimeStamped AbstractFieldTimeInterpolator::interpolate(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::java::util::Collection & a1) const
      {
        return ::org::orekit::time::FieldTimeStamped(env->callObjectMethod(this$, mids$[mid_interpolate_cc27df3dc8f597ed], a0.this$, a1.this$));
      }

      ::org::orekit::time::FieldTimeStamped AbstractFieldTimeInterpolator::interpolate(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::java::util::stream::Stream & a1) const
      {
        return ::org::orekit::time::FieldTimeStamped(env->callObjectMethod(this$, mids$[mid_interpolate_a061c10693b292f5], a0.this$, a1.this$));
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
      static PyObject *t_AbstractFieldTimeInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractFieldTimeInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractFieldTimeInterpolator_of_(t_AbstractFieldTimeInterpolator *self, PyObject *args);
      static int t_AbstractFieldTimeInterpolator_init_(t_AbstractFieldTimeInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AbstractFieldTimeInterpolator_checkInterpolatorCompatibilityWithSampleSize(PyTypeObject *type, PyObject *args);
      static PyObject *t_AbstractFieldTimeInterpolator_getExtrapolationThreshold(t_AbstractFieldTimeInterpolator *self);
      static PyObject *t_AbstractFieldTimeInterpolator_getNbInterpolationPoints(t_AbstractFieldTimeInterpolator *self);
      static PyObject *t_AbstractFieldTimeInterpolator_getSubInterpolators(t_AbstractFieldTimeInterpolator *self);
      static PyObject *t_AbstractFieldTimeInterpolator_interpolate(t_AbstractFieldTimeInterpolator *self, PyObject *args);
      static PyObject *t_AbstractFieldTimeInterpolator_get__extrapolationThreshold(t_AbstractFieldTimeInterpolator *self, void *data);
      static PyObject *t_AbstractFieldTimeInterpolator_get__nbInterpolationPoints(t_AbstractFieldTimeInterpolator *self, void *data);
      static PyObject *t_AbstractFieldTimeInterpolator_get__subInterpolators(t_AbstractFieldTimeInterpolator *self, void *data);
      static PyObject *t_AbstractFieldTimeInterpolator_get__parameters_(t_AbstractFieldTimeInterpolator *self, void *data);
      static PyGetSetDef t_AbstractFieldTimeInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractFieldTimeInterpolator, extrapolationThreshold),
        DECLARE_GET_FIELD(t_AbstractFieldTimeInterpolator, nbInterpolationPoints),
        DECLARE_GET_FIELD(t_AbstractFieldTimeInterpolator, subInterpolators),
        DECLARE_GET_FIELD(t_AbstractFieldTimeInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractFieldTimeInterpolator__methods_[] = {
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator, checkInterpolatorCompatibilityWithSampleSize, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator, getExtrapolationThreshold, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator, getNbInterpolationPoints, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator, getSubInterpolators, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator, interpolate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractFieldTimeInterpolator)[] = {
        { Py_tp_methods, t_AbstractFieldTimeInterpolator__methods_ },
        { Py_tp_init, (void *) t_AbstractFieldTimeInterpolator_init_ },
        { Py_tp_getset, t_AbstractFieldTimeInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractFieldTimeInterpolator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractFieldTimeInterpolator, t_AbstractFieldTimeInterpolator, AbstractFieldTimeInterpolator);
      PyObject *t_AbstractFieldTimeInterpolator::wrap_Object(const AbstractFieldTimeInterpolator& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_AbstractFieldTimeInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractFieldTimeInterpolator *self = (t_AbstractFieldTimeInterpolator *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_AbstractFieldTimeInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_AbstractFieldTimeInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractFieldTimeInterpolator *self = (t_AbstractFieldTimeInterpolator *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_AbstractFieldTimeInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractFieldTimeInterpolator), &PY_TYPE_DEF(AbstractFieldTimeInterpolator), module, "AbstractFieldTimeInterpolator", 0);
      }

      void t_AbstractFieldTimeInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldTimeInterpolator), "class_", make_descriptor(AbstractFieldTimeInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldTimeInterpolator), "wrapfn_", make_descriptor(t_AbstractFieldTimeInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldTimeInterpolator), "boxfn_", make_descriptor(boxObject));
        env->getClass(AbstractFieldTimeInterpolator::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldTimeInterpolator), "DEFAULT_EXTRAPOLATION_THRESHOLD_SEC", make_descriptor(AbstractFieldTimeInterpolator::DEFAULT_EXTRAPOLATION_THRESHOLD_SEC));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldTimeInterpolator), "DEFAULT_INTERPOLATION_POINTS", make_descriptor(AbstractFieldTimeInterpolator::DEFAULT_INTERPOLATION_POINTS));
      }

      static PyObject *t_AbstractFieldTimeInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractFieldTimeInterpolator::initializeClass, 1)))
          return NULL;
        return t_AbstractFieldTimeInterpolator::wrap_Object(AbstractFieldTimeInterpolator(((t_AbstractFieldTimeInterpolator *) arg)->object.this$));
      }
      static PyObject *t_AbstractFieldTimeInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractFieldTimeInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractFieldTimeInterpolator_of_(t_AbstractFieldTimeInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_AbstractFieldTimeInterpolator_init_(t_AbstractFieldTimeInterpolator *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        jdouble a1;
        AbstractFieldTimeInterpolator object((jobject) NULL);

        if (!parseArgs(args, "ID", &a0, &a1))
        {
          INT_CALL(object = AbstractFieldTimeInterpolator(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_AbstractFieldTimeInterpolator_checkInterpolatorCompatibilityWithSampleSize(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::time::FieldTimeInterpolator a0((jobject) NULL);
        PyTypeObject **p0;
        jint a1;

        if (!parseArgs(args, "KI", ::org::orekit::time::FieldTimeInterpolator::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldTimeInterpolator::parameters_, &a1))
        {
          OBJ_CALL(::org::orekit::time::AbstractFieldTimeInterpolator::checkInterpolatorCompatibilityWithSampleSize(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkInterpolatorCompatibilityWithSampleSize", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldTimeInterpolator_getExtrapolationThreshold(t_AbstractFieldTimeInterpolator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getExtrapolationThreshold());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_AbstractFieldTimeInterpolator_getNbInterpolationPoints(t_AbstractFieldTimeInterpolator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNbInterpolationPoints());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_AbstractFieldTimeInterpolator_getSubInterpolators(t_AbstractFieldTimeInterpolator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getSubInterpolators());
        return ::java::util::t_List::wrap_Object(result);
      }

      static PyObject *t_AbstractFieldTimeInterpolator_interpolate(t_AbstractFieldTimeInterpolator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::Collection a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::time::FieldTimeStamped result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::java::util::Collection::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::java::util::t_Collection::parameters_))
            {
              OBJ_CALL(result = self->object.interpolate(a0, a1));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_FieldTimeStamped::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::stream::Stream a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::time::FieldTimeStamped result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::java::util::stream::Stream::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::java::util::stream::t_Stream::parameters_))
            {
              OBJ_CALL(result = self->object.interpolate(a0, a1));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_FieldTimeStamped::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "interpolate", args);
        return NULL;
      }
      static PyObject *t_AbstractFieldTimeInterpolator_get__parameters_(t_AbstractFieldTimeInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_AbstractFieldTimeInterpolator_get__extrapolationThreshold(t_AbstractFieldTimeInterpolator *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getExtrapolationThreshold());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_AbstractFieldTimeInterpolator_get__nbInterpolationPoints(t_AbstractFieldTimeInterpolator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNbInterpolationPoints());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_AbstractFieldTimeInterpolator_get__subInterpolators(t_AbstractFieldTimeInterpolator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getSubInterpolators());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Acos.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Acos::class$ = NULL;
        jmethodID *Acos::mids$ = NULL;
        bool Acos::live$ = false;

        jclass Acos::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Acos");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_7e960cd6eee376d8] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_3eb2b84dba0ab7d2] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Acos::Acos() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        jdouble Acos::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_7e960cd6eee376d8], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Acos::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_3eb2b84dba0ab7d2], a0.this$));
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
      namespace function {
        static PyObject *t_Acos_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Acos_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Acos_init_(t_Acos *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Acos_value(t_Acos *self, PyObject *args);

        static PyMethodDef t_Acos__methods_[] = {
          DECLARE_METHOD(t_Acos, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Acos, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Acos, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Acos)[] = {
          { Py_tp_methods, t_Acos__methods_ },
          { Py_tp_init, (void *) t_Acos_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Acos)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Acos, t_Acos, Acos);

        void t_Acos::install(PyObject *module)
        {
          installType(&PY_TYPE(Acos), &PY_TYPE_DEF(Acos), module, "Acos", 0);
        }

        void t_Acos::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Acos), "class_", make_descriptor(Acos::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Acos), "wrapfn_", make_descriptor(t_Acos::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Acos), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Acos_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Acos::initializeClass, 1)))
            return NULL;
          return t_Acos::wrap_Object(Acos(((t_Acos *) arg)->object.this$));
        }
        static PyObject *t_Acos_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Acos::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Acos_init_(t_Acos *self, PyObject *args, PyObject *kwds)
        {
          Acos object((jobject) NULL);

          INT_CALL(object = Acos());
          self->object = object;

          return 0;
        }

        static PyObject *t_Acos_value(t_Acos *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              jdouble result;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::analysis::differentiation::Derivative a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::analysis::differentiation::Derivative result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::analysis::differentiation::Derivative::initializeClass, &a0, &p0, ::org::hipparchus::analysis::differentiation::t_Derivative::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::analysis::differentiation::t_Derivative::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/TCBScale.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TCBScale::class$ = NULL;
      jmethodID *TCBScale::mids$ = NULL;
      bool TCBScale::live$ = false;

      jclass TCBScale::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TCBScale");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_offsetFromTAI_b0b988f941da47d8] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_offsetFromTAI_b884068a2c99f6ca] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String TCBScale::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
      }

      jdouble TCBScale::offsetFromTAI(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFromTAI_b0b988f941da47d8], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement TCBScale::offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFromTAI_b884068a2c99f6ca], a0.this$));
      }

      ::java::lang::String TCBScale::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
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
      static PyObject *t_TCBScale_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TCBScale_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TCBScale_getName(t_TCBScale *self);
      static PyObject *t_TCBScale_offsetFromTAI(t_TCBScale *self, PyObject *args);
      static PyObject *t_TCBScale_toString(t_TCBScale *self, PyObject *args);
      static PyObject *t_TCBScale_get__name(t_TCBScale *self, void *data);
      static PyGetSetDef t_TCBScale__fields_[] = {
        DECLARE_GET_FIELD(t_TCBScale, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TCBScale__methods_[] = {
        DECLARE_METHOD(t_TCBScale, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TCBScale, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TCBScale, getName, METH_NOARGS),
        DECLARE_METHOD(t_TCBScale, offsetFromTAI, METH_VARARGS),
        DECLARE_METHOD(t_TCBScale, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TCBScale)[] = {
        { Py_tp_methods, t_TCBScale__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_TCBScale__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TCBScale)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TCBScale, t_TCBScale, TCBScale);

      void t_TCBScale::install(PyObject *module)
      {
        installType(&PY_TYPE(TCBScale), &PY_TYPE_DEF(TCBScale), module, "TCBScale", 0);
      }

      void t_TCBScale::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TCBScale), "class_", make_descriptor(TCBScale::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TCBScale), "wrapfn_", make_descriptor(t_TCBScale::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TCBScale), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TCBScale_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TCBScale::initializeClass, 1)))
          return NULL;
        return t_TCBScale::wrap_Object(TCBScale(((t_TCBScale *) arg)->object.this$));
      }
      static PyObject *t_TCBScale_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TCBScale::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TCBScale_getName(t_TCBScale *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_TCBScale_offsetFromTAI(t_TCBScale *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.offsetFromTAI(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.offsetFromTAI(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "offsetFromTAI", args);
        return NULL;
      }

      static PyObject *t_TCBScale_toString(t_TCBScale *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(TCBScale), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_TCBScale_get__name(t_TCBScale *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/SemiAnalyticalProcess.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/hipparchus/filtering/kalman/ProcessEstimate.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/sequential/KalmanObserver.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *SemiAnalyticalProcess::class$ = NULL;
        jmethodID *SemiAnalyticalProcess::mids$ = NULL;
        bool SemiAnalyticalProcess::live$ = false;

        jclass SemiAnalyticalProcess::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/SemiAnalyticalProcess");

            mids$ = new jmethodID[max_mid];
            mids$[mid_finalizeEstimation_6f886d47d0124943] = env->getMethodID(cls, "finalizeEstimation", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;Lorg/hipparchus/filtering/kalman/ProcessEstimate;)V");
            mids$[mid_finalizeOperationsObservationGrid_0640e6acf969ed28] = env->getMethodID(cls, "finalizeOperationsObservationGrid", "()V");
            mids$[mid_getObserver_25fab8044126746b] = env->getMethodID(cls, "getObserver", "()Lorg/orekit/estimation/sequential/KalmanObserver;");
            mids$[mid_initializeShortPeriodicTerms_8655761ebf04b503] = env->getMethodID(cls, "initializeShortPeriodicTerms", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_updateNominalSpacecraftState_8655761ebf04b503] = env->getMethodID(cls, "updateNominalSpacecraftState", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_updateShortPeriods_8655761ebf04b503] = env->getMethodID(cls, "updateShortPeriods", "(Lorg/orekit/propagation/SpacecraftState;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void SemiAnalyticalProcess::finalizeEstimation(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0, const ::org::hipparchus::filtering::kalman::ProcessEstimate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_finalizeEstimation_6f886d47d0124943], a0.this$, a1.this$);
        }

        void SemiAnalyticalProcess::finalizeOperationsObservationGrid() const
        {
          env->callVoidMethod(this$, mids$[mid_finalizeOperationsObservationGrid_0640e6acf969ed28]);
        }

        ::org::orekit::estimation::sequential::KalmanObserver SemiAnalyticalProcess::getObserver() const
        {
          return ::org::orekit::estimation::sequential::KalmanObserver(env->callObjectMethod(this$, mids$[mid_getObserver_25fab8044126746b]));
        }

        void SemiAnalyticalProcess::initializeShortPeriodicTerms(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_initializeShortPeriodicTerms_8655761ebf04b503], a0.this$);
        }

        void SemiAnalyticalProcess::updateNominalSpacecraftState(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_updateNominalSpacecraftState_8655761ebf04b503], a0.this$);
        }

        void SemiAnalyticalProcess::updateShortPeriods(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_updateShortPeriods_8655761ebf04b503], a0.this$);
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
    namespace estimation {
      namespace sequential {
        static PyObject *t_SemiAnalyticalProcess_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SemiAnalyticalProcess_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SemiAnalyticalProcess_finalizeEstimation(t_SemiAnalyticalProcess *self, PyObject *args);
        static PyObject *t_SemiAnalyticalProcess_finalizeOperationsObservationGrid(t_SemiAnalyticalProcess *self);
        static PyObject *t_SemiAnalyticalProcess_getObserver(t_SemiAnalyticalProcess *self);
        static PyObject *t_SemiAnalyticalProcess_initializeShortPeriodicTerms(t_SemiAnalyticalProcess *self, PyObject *arg);
        static PyObject *t_SemiAnalyticalProcess_updateNominalSpacecraftState(t_SemiAnalyticalProcess *self, PyObject *arg);
        static PyObject *t_SemiAnalyticalProcess_updateShortPeriods(t_SemiAnalyticalProcess *self, PyObject *arg);
        static PyObject *t_SemiAnalyticalProcess_get__observer(t_SemiAnalyticalProcess *self, void *data);
        static PyGetSetDef t_SemiAnalyticalProcess__fields_[] = {
          DECLARE_GET_FIELD(t_SemiAnalyticalProcess, observer),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SemiAnalyticalProcess__methods_[] = {
          DECLARE_METHOD(t_SemiAnalyticalProcess, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SemiAnalyticalProcess, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SemiAnalyticalProcess, finalizeEstimation, METH_VARARGS),
          DECLARE_METHOD(t_SemiAnalyticalProcess, finalizeOperationsObservationGrid, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalProcess, getObserver, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalProcess, initializeShortPeriodicTerms, METH_O),
          DECLARE_METHOD(t_SemiAnalyticalProcess, updateNominalSpacecraftState, METH_O),
          DECLARE_METHOD(t_SemiAnalyticalProcess, updateShortPeriods, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SemiAnalyticalProcess)[] = {
          { Py_tp_methods, t_SemiAnalyticalProcess__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_SemiAnalyticalProcess__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SemiAnalyticalProcess)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SemiAnalyticalProcess, t_SemiAnalyticalProcess, SemiAnalyticalProcess);

        void t_SemiAnalyticalProcess::install(PyObject *module)
        {
          installType(&PY_TYPE(SemiAnalyticalProcess), &PY_TYPE_DEF(SemiAnalyticalProcess), module, "SemiAnalyticalProcess", 0);
        }

        void t_SemiAnalyticalProcess::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalProcess), "class_", make_descriptor(SemiAnalyticalProcess::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalProcess), "wrapfn_", make_descriptor(t_SemiAnalyticalProcess::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalProcess), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SemiAnalyticalProcess_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SemiAnalyticalProcess::initializeClass, 1)))
            return NULL;
          return t_SemiAnalyticalProcess::wrap_Object(SemiAnalyticalProcess(((t_SemiAnalyticalProcess *) arg)->object.this$));
        }
        static PyObject *t_SemiAnalyticalProcess_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SemiAnalyticalProcess::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SemiAnalyticalProcess_finalizeEstimation(t_SemiAnalyticalProcess *self, PyObject *args)
        {
          ::org::orekit::estimation::measurements::ObservedMeasurement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::filtering::kalman::ProcessEstimate a1((jobject) NULL);

          if (!parseArgs(args, "Kk", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, ::org::hipparchus::filtering::kalman::ProcessEstimate::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_ObservedMeasurement::parameters_, &a1))
          {
            OBJ_CALL(self->object.finalizeEstimation(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "finalizeEstimation", args);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalProcess_finalizeOperationsObservationGrid(t_SemiAnalyticalProcess *self)
        {
          OBJ_CALL(self->object.finalizeOperationsObservationGrid());
          Py_RETURN_NONE;
        }

        static PyObject *t_SemiAnalyticalProcess_getObserver(t_SemiAnalyticalProcess *self)
        {
          ::org::orekit::estimation::sequential::KalmanObserver result((jobject) NULL);
          OBJ_CALL(result = self->object.getObserver());
          return ::org::orekit::estimation::sequential::t_KalmanObserver::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalProcess_initializeShortPeriodicTerms(t_SemiAnalyticalProcess *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.initializeShortPeriodicTerms(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "initializeShortPeriodicTerms", arg);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalProcess_updateNominalSpacecraftState(t_SemiAnalyticalProcess *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.updateNominalSpacecraftState(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "updateNominalSpacecraftState", arg);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalProcess_updateShortPeriods(t_SemiAnalyticalProcess *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.updateShortPeriods(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "updateShortPeriods", arg);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalProcess_get__observer(t_SemiAnalyticalProcess *self, void *data)
        {
          ::org::orekit::estimation::sequential::KalmanObserver value((jobject) NULL);
          OBJ_CALL(value = self->object.getObserver());
          return ::org::orekit::estimation::sequential::t_KalmanObserver::wrap_Object(value);
        }
      }
    }
  }
}

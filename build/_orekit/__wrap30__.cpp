#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FieldLongitudeCrossingDetector.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldLongitudeCrossingDetector::class$ = NULL;
        jmethodID *FieldLongitudeCrossingDetector::mids$ = NULL;
        bool FieldLongitudeCrossingDetector::live$ = false;

        jclass FieldLongitudeCrossingDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldLongitudeCrossingDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1287f091a4811e16] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/bodies/OneAxisEllipsoid;D)V");
            mids$[mid_init$_a783394cef2e1482] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/OneAxisEllipsoid;D)V");
            mids$[mid_g_de1c2d709eb2829c] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getBody_0c55bd1adf955c4c] = env->getMethodID(cls, "getBody", "()Lorg/orekit/bodies/OneAxisEllipsoid;");
            mids$[mid_getLongitude_557b8123390d8d0c] = env->getMethodID(cls, "getLongitude", "()D");
            mids$[mid_init_811e49dad2467b67] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
            mids$[mid_create_2f78741e845283c1] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldLongitudeCrossingDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldLongitudeCrossingDetector::FieldLongitudeCrossingDetector(const ::org::hipparchus::Field & a0, const ::org::orekit::bodies::OneAxisEllipsoid & a1, jdouble a2) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_1287f091a4811e16, a0.this$, a1.this$, a2)) {}

        FieldLongitudeCrossingDetector::FieldLongitudeCrossingDetector(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2, jdouble a3) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_a783394cef2e1482, a0.this$, a1.this$, a2.this$, a3)) {}

        ::org::hipparchus::CalculusFieldElement FieldLongitudeCrossingDetector::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_de1c2d709eb2829c], a0.this$));
        }

        ::org::orekit::bodies::OneAxisEllipsoid FieldLongitudeCrossingDetector::getBody() const
        {
          return ::org::orekit::bodies::OneAxisEllipsoid(env->callObjectMethod(this$, mids$[mid_getBody_0c55bd1adf955c4c]));
        }

        jdouble FieldLongitudeCrossingDetector::getLongitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLongitude_557b8123390d8d0c]);
        }

        void FieldLongitudeCrossingDetector::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_811e49dad2467b67], a0.this$, a1.this$);
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
        static PyObject *t_FieldLongitudeCrossingDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldLongitudeCrossingDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldLongitudeCrossingDetector_of_(t_FieldLongitudeCrossingDetector *self, PyObject *args);
        static int t_FieldLongitudeCrossingDetector_init_(t_FieldLongitudeCrossingDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldLongitudeCrossingDetector_g(t_FieldLongitudeCrossingDetector *self, PyObject *args);
        static PyObject *t_FieldLongitudeCrossingDetector_getBody(t_FieldLongitudeCrossingDetector *self);
        static PyObject *t_FieldLongitudeCrossingDetector_getLongitude(t_FieldLongitudeCrossingDetector *self);
        static PyObject *t_FieldLongitudeCrossingDetector_init(t_FieldLongitudeCrossingDetector *self, PyObject *args);
        static PyObject *t_FieldLongitudeCrossingDetector_get__body(t_FieldLongitudeCrossingDetector *self, void *data);
        static PyObject *t_FieldLongitudeCrossingDetector_get__longitude(t_FieldLongitudeCrossingDetector *self, void *data);
        static PyObject *t_FieldLongitudeCrossingDetector_get__parameters_(t_FieldLongitudeCrossingDetector *self, void *data);
        static PyGetSetDef t_FieldLongitudeCrossingDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldLongitudeCrossingDetector, body),
          DECLARE_GET_FIELD(t_FieldLongitudeCrossingDetector, longitude),
          DECLARE_GET_FIELD(t_FieldLongitudeCrossingDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldLongitudeCrossingDetector__methods_[] = {
          DECLARE_METHOD(t_FieldLongitudeCrossingDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldLongitudeCrossingDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldLongitudeCrossingDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldLongitudeCrossingDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_FieldLongitudeCrossingDetector, getBody, METH_NOARGS),
          DECLARE_METHOD(t_FieldLongitudeCrossingDetector, getLongitude, METH_NOARGS),
          DECLARE_METHOD(t_FieldLongitudeCrossingDetector, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldLongitudeCrossingDetector)[] = {
          { Py_tp_methods, t_FieldLongitudeCrossingDetector__methods_ },
          { Py_tp_init, (void *) t_FieldLongitudeCrossingDetector_init_ },
          { Py_tp_getset, t_FieldLongitudeCrossingDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldLongitudeCrossingDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::FieldAbstractDetector),
          NULL
        };

        DEFINE_TYPE(FieldLongitudeCrossingDetector, t_FieldLongitudeCrossingDetector, FieldLongitudeCrossingDetector);
        PyObject *t_FieldLongitudeCrossingDetector::wrap_Object(const FieldLongitudeCrossingDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldLongitudeCrossingDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldLongitudeCrossingDetector *self = (t_FieldLongitudeCrossingDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldLongitudeCrossingDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldLongitudeCrossingDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldLongitudeCrossingDetector *self = (t_FieldLongitudeCrossingDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldLongitudeCrossingDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldLongitudeCrossingDetector), &PY_TYPE_DEF(FieldLongitudeCrossingDetector), module, "FieldLongitudeCrossingDetector", 0);
        }

        void t_FieldLongitudeCrossingDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLongitudeCrossingDetector), "class_", make_descriptor(FieldLongitudeCrossingDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLongitudeCrossingDetector), "wrapfn_", make_descriptor(t_FieldLongitudeCrossingDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLongitudeCrossingDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldLongitudeCrossingDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldLongitudeCrossingDetector::initializeClass, 1)))
            return NULL;
          return t_FieldLongitudeCrossingDetector::wrap_Object(FieldLongitudeCrossingDetector(((t_FieldLongitudeCrossingDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldLongitudeCrossingDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldLongitudeCrossingDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldLongitudeCrossingDetector_of_(t_FieldLongitudeCrossingDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldLongitudeCrossingDetector_init_(t_FieldLongitudeCrossingDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::bodies::OneAxisEllipsoid a1((jobject) NULL);
              jdouble a2;
              FieldLongitudeCrossingDetector object((jobject) NULL);

              if (!parseArgs(args, "KkD", ::org::hipparchus::Field::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
              {
                INT_CALL(object = FieldLongitudeCrossingDetector(a0, a1, a2));
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
              FieldLongitudeCrossingDetector object((jobject) NULL);

              if (!parseArgs(args, "KKkD", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3))
              {
                INT_CALL(object = FieldLongitudeCrossingDetector(a0, a1, a2, a3));
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

        static PyObject *t_FieldLongitudeCrossingDetector_g(t_FieldLongitudeCrossingDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldLongitudeCrossingDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_FieldLongitudeCrossingDetector_getBody(t_FieldLongitudeCrossingDetector *self)
        {
          ::org::orekit::bodies::OneAxisEllipsoid result((jobject) NULL);
          OBJ_CALL(result = self->object.getBody());
          return ::org::orekit::bodies::t_OneAxisEllipsoid::wrap_Object(result);
        }

        static PyObject *t_FieldLongitudeCrossingDetector_getLongitude(t_FieldLongitudeCrossingDetector *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLongitude());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_FieldLongitudeCrossingDetector_init(t_FieldLongitudeCrossingDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "KK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(FieldLongitudeCrossingDetector), (PyObject *) self, "init", args, 2);
        }
        static PyObject *t_FieldLongitudeCrossingDetector_get__parameters_(t_FieldLongitudeCrossingDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldLongitudeCrossingDetector_get__body(t_FieldLongitudeCrossingDetector *self, void *data)
        {
          ::org::orekit::bodies::OneAxisEllipsoid value((jobject) NULL);
          OBJ_CALL(value = self->object.getBody());
          return ::org::orekit::bodies::t_OneAxisEllipsoid::wrap_Object(value);
        }

        static PyObject *t_FieldLongitudeCrossingDetector_get__longitude(t_FieldLongitudeCrossingDetector *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLongitude());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType.h"
#include "org/orekit/utils/units/Unit.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AttitudeCovarianceType::class$ = NULL;
              jmethodID *AttitudeCovarianceType::mids$ = NULL;
              bool AttitudeCovarianceType::live$ = false;
              AttitudeCovarianceType *AttitudeCovarianceType::ANGLE = NULL;
              AttitudeCovarianceType *AttitudeCovarianceType::ANGLE_ANGVEL = NULL;
              AttitudeCovarianceType *AttitudeCovarianceType::ANGLE_GYROBIAS = NULL;
              AttitudeCovarianceType *AttitudeCovarianceType::QUATERNION = NULL;
              AttitudeCovarianceType *AttitudeCovarianceType::QUATERNION_ANGVEL = NULL;
              AttitudeCovarianceType *AttitudeCovarianceType::QUATERNION_GYROBIAS = NULL;

              jclass AttitudeCovarianceType::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_getUnits_0d9551367f7ecdef] = env->getMethodID(cls, "getUnits", "()Ljava/util/List;");
                  mids$[mid_valueOf_4a369d52f221ceec] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType;");
                  mids$[mid_values_5d4cb66d35fd1994] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  ANGLE = new AttitudeCovarianceType(env->getStaticObjectField(cls, "ANGLE", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType;"));
                  ANGLE_ANGVEL = new AttitudeCovarianceType(env->getStaticObjectField(cls, "ANGLE_ANGVEL", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType;"));
                  ANGLE_GYROBIAS = new AttitudeCovarianceType(env->getStaticObjectField(cls, "ANGLE_GYROBIAS", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType;"));
                  QUATERNION = new AttitudeCovarianceType(env->getStaticObjectField(cls, "QUATERNION", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType;"));
                  QUATERNION_ANGVEL = new AttitudeCovarianceType(env->getStaticObjectField(cls, "QUATERNION_ANGVEL", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType;"));
                  QUATERNION_GYROBIAS = new AttitudeCovarianceType(env->getStaticObjectField(cls, "QUATERNION_GYROBIAS", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::java::util::List AttitudeCovarianceType::getUnits() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getUnits_0d9551367f7ecdef]));
              }

              AttitudeCovarianceType AttitudeCovarianceType::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return AttitudeCovarianceType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_4a369d52f221ceec], a0.this$));
              }

              JArray< AttitudeCovarianceType > AttitudeCovarianceType::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< AttitudeCovarianceType >(env->callStaticObjectMethod(cls, mids$[mid_values_5d4cb66d35fd1994]));
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
            namespace acm {
              static PyObject *t_AttitudeCovarianceType_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeCovarianceType_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeCovarianceType_of_(t_AttitudeCovarianceType *self, PyObject *args);
              static PyObject *t_AttitudeCovarianceType_getUnits(t_AttitudeCovarianceType *self);
              static PyObject *t_AttitudeCovarianceType_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_AttitudeCovarianceType_values(PyTypeObject *type);
              static PyObject *t_AttitudeCovarianceType_get__units(t_AttitudeCovarianceType *self, void *data);
              static PyObject *t_AttitudeCovarianceType_get__parameters_(t_AttitudeCovarianceType *self, void *data);
              static PyGetSetDef t_AttitudeCovarianceType__fields_[] = {
                DECLARE_GET_FIELD(t_AttitudeCovarianceType, units),
                DECLARE_GET_FIELD(t_AttitudeCovarianceType, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudeCovarianceType__methods_[] = {
                DECLARE_METHOD(t_AttitudeCovarianceType, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeCovarianceType, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeCovarianceType, of_, METH_VARARGS),
                DECLARE_METHOD(t_AttitudeCovarianceType, getUnits, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeCovarianceType, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_AttitudeCovarianceType, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudeCovarianceType)[] = {
                { Py_tp_methods, t_AttitudeCovarianceType__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_AttitudeCovarianceType__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudeCovarianceType)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(AttitudeCovarianceType, t_AttitudeCovarianceType, AttitudeCovarianceType);
              PyObject *t_AttitudeCovarianceType::wrap_Object(const AttitudeCovarianceType& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudeCovarianceType::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudeCovarianceType *self = (t_AttitudeCovarianceType *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_AttitudeCovarianceType::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudeCovarianceType::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudeCovarianceType *self = (t_AttitudeCovarianceType *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_AttitudeCovarianceType::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudeCovarianceType), &PY_TYPE_DEF(AttitudeCovarianceType), module, "AttitudeCovarianceType", 0);
              }

              void t_AttitudeCovarianceType::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceType), "class_", make_descriptor(AttitudeCovarianceType::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceType), "wrapfn_", make_descriptor(t_AttitudeCovarianceType::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceType), "boxfn_", make_descriptor(boxObject));
                env->getClass(AttitudeCovarianceType::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceType), "ANGLE", make_descriptor(t_AttitudeCovarianceType::wrap_Object(*AttitudeCovarianceType::ANGLE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceType), "ANGLE_ANGVEL", make_descriptor(t_AttitudeCovarianceType::wrap_Object(*AttitudeCovarianceType::ANGLE_ANGVEL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceType), "ANGLE_GYROBIAS", make_descriptor(t_AttitudeCovarianceType::wrap_Object(*AttitudeCovarianceType::ANGLE_GYROBIAS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceType), "QUATERNION", make_descriptor(t_AttitudeCovarianceType::wrap_Object(*AttitudeCovarianceType::QUATERNION)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceType), "QUATERNION_ANGVEL", make_descriptor(t_AttitudeCovarianceType::wrap_Object(*AttitudeCovarianceType::QUATERNION_ANGVEL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceType), "QUATERNION_GYROBIAS", make_descriptor(t_AttitudeCovarianceType::wrap_Object(*AttitudeCovarianceType::QUATERNION_GYROBIAS)));
              }

              static PyObject *t_AttitudeCovarianceType_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudeCovarianceType::initializeClass, 1)))
                  return NULL;
                return t_AttitudeCovarianceType::wrap_Object(AttitudeCovarianceType(((t_AttitudeCovarianceType *) arg)->object.this$));
              }
              static PyObject *t_AttitudeCovarianceType_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudeCovarianceType::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AttitudeCovarianceType_of_(t_AttitudeCovarianceType *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_AttitudeCovarianceType_getUnits(t_AttitudeCovarianceType *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getUnits());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::units::PY_TYPE(Unit));
              }

              static PyObject *t_AttitudeCovarianceType_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                AttitudeCovarianceType result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType::valueOf(a0));
                  return t_AttitudeCovarianceType::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_AttitudeCovarianceType_values(PyTypeObject *type)
              {
                JArray< AttitudeCovarianceType > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType::values());
                return JArray<jobject>(result.this$).wrap(t_AttitudeCovarianceType::wrap_jobject);
              }
              static PyObject *t_AttitudeCovarianceType_get__parameters_(t_AttitudeCovarianceType *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_AttitudeCovarianceType_get__units(t_AttitudeCovarianceType *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getUnits());
                return ::java::util::t_List::wrap_Object(value);
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
#include "org/hipparchus/linear/FieldQRDecomposition.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "org/hipparchus/linear/FieldDecompositionSolver.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *FieldQRDecomposition::class$ = NULL;
      jmethodID *FieldQRDecomposition::mids$ = NULL;
      bool FieldQRDecomposition::live$ = false;

      jclass FieldQRDecomposition::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/FieldQRDecomposition");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_33e6ddbf6bb140a5] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/FieldMatrix;)V");
          mids$[mid_init$_d4fad8a5c8b974bd] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/FieldMatrix;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_getH_1d6b27621d7bea96] = env->getMethodID(cls, "getH", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getQ_1d6b27621d7bea96] = env->getMethodID(cls, "getQ", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getQT_1d6b27621d7bea96] = env->getMethodID(cls, "getQT", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getR_1d6b27621d7bea96] = env->getMethodID(cls, "getR", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getSolver_a465c42b6ee7c97a] = env->getMethodID(cls, "getSolver", "()Lorg/hipparchus/linear/FieldDecompositionSolver;");
          mids$[mid_decompose_d1783084d145e9ca] = env->getMethodID(cls, "decompose", "([[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_performHouseholderReflection_568124237407ef5b] = env->getMethodID(cls, "performHouseholderReflection", "(I[[Lorg/hipparchus/CalculusFieldElement;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldQRDecomposition::FieldQRDecomposition(const ::org::hipparchus::linear::FieldMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_33e6ddbf6bb140a5, a0.this$)) {}

      FieldQRDecomposition::FieldQRDecomposition(const ::org::hipparchus::linear::FieldMatrix & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d4fad8a5c8b974bd, a0.this$, a1.this$)) {}

      ::org::hipparchus::linear::FieldMatrix FieldQRDecomposition::getH() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getH_1d6b27621d7bea96]));
      }

      ::org::hipparchus::linear::FieldMatrix FieldQRDecomposition::getQ() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getQ_1d6b27621d7bea96]));
      }

      ::org::hipparchus::linear::FieldMatrix FieldQRDecomposition::getQT() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getQT_1d6b27621d7bea96]));
      }

      ::org::hipparchus::linear::FieldMatrix FieldQRDecomposition::getR() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getR_1d6b27621d7bea96]));
      }

      ::org::hipparchus::linear::FieldDecompositionSolver FieldQRDecomposition::getSolver() const
      {
        return ::org::hipparchus::linear::FieldDecompositionSolver(env->callObjectMethod(this$, mids$[mid_getSolver_a465c42b6ee7c97a]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      static PyObject *t_FieldQRDecomposition_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldQRDecomposition_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldQRDecomposition_of_(t_FieldQRDecomposition *self, PyObject *args);
      static int t_FieldQRDecomposition_init_(t_FieldQRDecomposition *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldQRDecomposition_getH(t_FieldQRDecomposition *self);
      static PyObject *t_FieldQRDecomposition_getQ(t_FieldQRDecomposition *self);
      static PyObject *t_FieldQRDecomposition_getQT(t_FieldQRDecomposition *self);
      static PyObject *t_FieldQRDecomposition_getR(t_FieldQRDecomposition *self);
      static PyObject *t_FieldQRDecomposition_getSolver(t_FieldQRDecomposition *self);
      static PyObject *t_FieldQRDecomposition_get__h(t_FieldQRDecomposition *self, void *data);
      static PyObject *t_FieldQRDecomposition_get__q(t_FieldQRDecomposition *self, void *data);
      static PyObject *t_FieldQRDecomposition_get__qT(t_FieldQRDecomposition *self, void *data);
      static PyObject *t_FieldQRDecomposition_get__r(t_FieldQRDecomposition *self, void *data);
      static PyObject *t_FieldQRDecomposition_get__solver(t_FieldQRDecomposition *self, void *data);
      static PyObject *t_FieldQRDecomposition_get__parameters_(t_FieldQRDecomposition *self, void *data);
      static PyGetSetDef t_FieldQRDecomposition__fields_[] = {
        DECLARE_GET_FIELD(t_FieldQRDecomposition, h),
        DECLARE_GET_FIELD(t_FieldQRDecomposition, q),
        DECLARE_GET_FIELD(t_FieldQRDecomposition, qT),
        DECLARE_GET_FIELD(t_FieldQRDecomposition, r),
        DECLARE_GET_FIELD(t_FieldQRDecomposition, solver),
        DECLARE_GET_FIELD(t_FieldQRDecomposition, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldQRDecomposition__methods_[] = {
        DECLARE_METHOD(t_FieldQRDecomposition, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldQRDecomposition, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldQRDecomposition, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldQRDecomposition, getH, METH_NOARGS),
        DECLARE_METHOD(t_FieldQRDecomposition, getQ, METH_NOARGS),
        DECLARE_METHOD(t_FieldQRDecomposition, getQT, METH_NOARGS),
        DECLARE_METHOD(t_FieldQRDecomposition, getR, METH_NOARGS),
        DECLARE_METHOD(t_FieldQRDecomposition, getSolver, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldQRDecomposition)[] = {
        { Py_tp_methods, t_FieldQRDecomposition__methods_ },
        { Py_tp_init, (void *) t_FieldQRDecomposition_init_ },
        { Py_tp_getset, t_FieldQRDecomposition__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldQRDecomposition)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldQRDecomposition, t_FieldQRDecomposition, FieldQRDecomposition);
      PyObject *t_FieldQRDecomposition::wrap_Object(const FieldQRDecomposition& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldQRDecomposition::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldQRDecomposition *self = (t_FieldQRDecomposition *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldQRDecomposition::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldQRDecomposition::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldQRDecomposition *self = (t_FieldQRDecomposition *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldQRDecomposition::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldQRDecomposition), &PY_TYPE_DEF(FieldQRDecomposition), module, "FieldQRDecomposition", 0);
      }

      void t_FieldQRDecomposition::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldQRDecomposition), "class_", make_descriptor(FieldQRDecomposition::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldQRDecomposition), "wrapfn_", make_descriptor(t_FieldQRDecomposition::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldQRDecomposition), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldQRDecomposition_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldQRDecomposition::initializeClass, 1)))
          return NULL;
        return t_FieldQRDecomposition::wrap_Object(FieldQRDecomposition(((t_FieldQRDecomposition *) arg)->object.this$));
      }
      static PyObject *t_FieldQRDecomposition_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldQRDecomposition::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldQRDecomposition_of_(t_FieldQRDecomposition *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldQRDecomposition_init_(t_FieldQRDecomposition *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            FieldQRDecomposition object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
            {
              INT_CALL(object = FieldQRDecomposition(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            FieldQRDecomposition object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::linear::FieldMatrix::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldQRDecomposition(a0, a1));
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

      static PyObject *t_FieldQRDecomposition_getH(t_FieldQRDecomposition *self)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getH());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldQRDecomposition_getQ(t_FieldQRDecomposition *self)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getQ());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldQRDecomposition_getQT(t_FieldQRDecomposition *self)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getQT());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldQRDecomposition_getR(t_FieldQRDecomposition *self)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getR());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldQRDecomposition_getSolver(t_FieldQRDecomposition *self)
      {
        ::org::hipparchus::linear::FieldDecompositionSolver result((jobject) NULL);
        OBJ_CALL(result = self->object.getSolver());
        return ::org::hipparchus::linear::t_FieldDecompositionSolver::wrap_Object(result, self->parameters[0]);
      }
      static PyObject *t_FieldQRDecomposition_get__parameters_(t_FieldQRDecomposition *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldQRDecomposition_get__h(t_FieldQRDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::FieldMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getH());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(value);
      }

      static PyObject *t_FieldQRDecomposition_get__q(t_FieldQRDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::FieldMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getQ());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(value);
      }

      static PyObject *t_FieldQRDecomposition_get__qT(t_FieldQRDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::FieldMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getQT());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(value);
      }

      static PyObject *t_FieldQRDecomposition_get__r(t_FieldQRDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::FieldMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getR());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(value);
      }

      static PyObject *t_FieldQRDecomposition_get__solver(t_FieldQRDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::FieldDecompositionSolver value((jobject) NULL);
        OBJ_CALL(value = self->object.getSolver());
        return ::org::hipparchus::linear::t_FieldDecompositionSolver::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "java/util/Locale.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/exception/LocalizedException.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace exception {

      ::java::lang::Class *MathRuntimeException::class$ = NULL;
      jmethodID *MathRuntimeException::mids$ = NULL;
      bool MathRuntimeException::live$ = false;

      jclass MathRuntimeException::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/exception/MathRuntimeException");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_4fde7f3f87bbd6f7] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");
          mids$[mid_init$_0ff5a331e85ddf14] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");
          mids$[mid_createInternalError_c9f32b67c212ac06] = env->getStaticMethodID(cls, "createInternalError", "()Lorg/hipparchus/exception/MathRuntimeException;");
          mids$[mid_createInternalError_8d3e86709cac667c] = env->getStaticMethodID(cls, "createInternalError", "(Ljava/lang/Throwable;)Lorg/hipparchus/exception/MathRuntimeException;");
          mids$[mid_getLocalizedMessage_3cffd47377eca18a] = env->getMethodID(cls, "getLocalizedMessage", "()Ljava/lang/String;");
          mids$[mid_getMessage_3cffd47377eca18a] = env->getMethodID(cls, "getMessage", "()Ljava/lang/String;");
          mids$[mid_getMessage_4b51060c6b7ea981] = env->getMethodID(cls, "getMessage", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getParts_6555a5198c71b73a] = env->getMethodID(cls, "getParts", "()[Ljava/lang/Object;");
          mids$[mid_getSpecifier_a86d7419cf3241b7] = env->getMethodID(cls, "getSpecifier", "()Lorg/hipparchus/exception/Localizable;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      MathRuntimeException::MathRuntimeException(const ::org::hipparchus::exception::Localizable & a0, const JArray< ::java::lang::Object > & a1) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_4fde7f3f87bbd6f7, a0.this$, a1.this$)) {}

      MathRuntimeException::MathRuntimeException(const ::java::lang::Throwable & a0, const ::org::hipparchus::exception::Localizable & a1, const JArray< ::java::lang::Object > & a2) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_0ff5a331e85ddf14, a0.this$, a1.this$, a2.this$)) {}

      MathRuntimeException MathRuntimeException::createInternalError()
      {
        jclass cls = env->getClass(initializeClass);
        return MathRuntimeException(env->callStaticObjectMethod(cls, mids$[mid_createInternalError_c9f32b67c212ac06]));
      }

      MathRuntimeException MathRuntimeException::createInternalError(const ::java::lang::Throwable & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return MathRuntimeException(env->callStaticObjectMethod(cls, mids$[mid_createInternalError_8d3e86709cac667c], a0.this$));
      }

      ::java::lang::String MathRuntimeException::getLocalizedMessage() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedMessage_3cffd47377eca18a]));
      }

      ::java::lang::String MathRuntimeException::getMessage() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_3cffd47377eca18a]));
      }

      ::java::lang::String MathRuntimeException::getMessage(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_4b51060c6b7ea981], a0.this$));
      }

      JArray< ::java::lang::Object > MathRuntimeException::getParts() const
      {
        return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_getParts_6555a5198c71b73a]));
      }

      ::org::hipparchus::exception::Localizable MathRuntimeException::getSpecifier() const
      {
        return ::org::hipparchus::exception::Localizable(env->callObjectMethod(this$, mids$[mid_getSpecifier_a86d7419cf3241b7]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      static PyObject *t_MathRuntimeException_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathRuntimeException_instance_(PyTypeObject *type, PyObject *arg);
      static int t_MathRuntimeException_init_(t_MathRuntimeException *self, PyObject *args, PyObject *kwds);
      static PyObject *t_MathRuntimeException_createInternalError(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathRuntimeException_getLocalizedMessage(t_MathRuntimeException *self, PyObject *args);
      static PyObject *t_MathRuntimeException_getMessage(t_MathRuntimeException *self, PyObject *args);
      static PyObject *t_MathRuntimeException_getParts(t_MathRuntimeException *self);
      static PyObject *t_MathRuntimeException_getSpecifier(t_MathRuntimeException *self);
      static PyObject *t_MathRuntimeException_get__localizedMessage(t_MathRuntimeException *self, void *data);
      static PyObject *t_MathRuntimeException_get__message(t_MathRuntimeException *self, void *data);
      static PyObject *t_MathRuntimeException_get__parts(t_MathRuntimeException *self, void *data);
      static PyObject *t_MathRuntimeException_get__specifier(t_MathRuntimeException *self, void *data);
      static PyGetSetDef t_MathRuntimeException__fields_[] = {
        DECLARE_GET_FIELD(t_MathRuntimeException, localizedMessage),
        DECLARE_GET_FIELD(t_MathRuntimeException, message),
        DECLARE_GET_FIELD(t_MathRuntimeException, parts),
        DECLARE_GET_FIELD(t_MathRuntimeException, specifier),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_MathRuntimeException__methods_[] = {
        DECLARE_METHOD(t_MathRuntimeException, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathRuntimeException, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathRuntimeException, createInternalError, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathRuntimeException, getLocalizedMessage, METH_VARARGS),
        DECLARE_METHOD(t_MathRuntimeException, getMessage, METH_VARARGS),
        DECLARE_METHOD(t_MathRuntimeException, getParts, METH_NOARGS),
        DECLARE_METHOD(t_MathRuntimeException, getSpecifier, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MathRuntimeException)[] = {
        { Py_tp_methods, t_MathRuntimeException__methods_ },
        { Py_tp_init, (void *) t_MathRuntimeException_init_ },
        { Py_tp_getset, t_MathRuntimeException__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MathRuntimeException)[] = {
        &PY_TYPE_DEF(::java::lang::RuntimeException),
        NULL
      };

      DEFINE_TYPE(MathRuntimeException, t_MathRuntimeException, MathRuntimeException);

      void t_MathRuntimeException::install(PyObject *module)
      {
        installType(&PY_TYPE(MathRuntimeException), &PY_TYPE_DEF(MathRuntimeException), module, "MathRuntimeException", 0);
      }

      void t_MathRuntimeException::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathRuntimeException), "class_", make_descriptor(MathRuntimeException::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathRuntimeException), "wrapfn_", make_descriptor(t_MathRuntimeException::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathRuntimeException), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MathRuntimeException_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MathRuntimeException::initializeClass, 1)))
          return NULL;
        return t_MathRuntimeException::wrap_Object(MathRuntimeException(((t_MathRuntimeException *) arg)->object.this$));
      }
      static PyObject *t_MathRuntimeException_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MathRuntimeException::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_MathRuntimeException_init_(t_MathRuntimeException *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::exception::Localizable a0((jobject) NULL);
            JArray< ::java::lang::Object > a1((jobject) NULL);
            MathRuntimeException object((jobject) NULL);

            if (!parseArgs(args, "k[o", ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1))
            {
              INT_CALL(object = MathRuntimeException(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::java::lang::Throwable a0((jobject) NULL);
            ::org::hipparchus::exception::Localizable a1((jobject) NULL);
            JArray< ::java::lang::Object > a2((jobject) NULL);
            MathRuntimeException object((jobject) NULL);

            if (!parseArgs(args, "kk[o", ::java::lang::Throwable::initializeClass, ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = MathRuntimeException(a0, a1, a2));
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

      static PyObject *t_MathRuntimeException_createInternalError(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            MathRuntimeException result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::exception::MathRuntimeException::createInternalError());
            return t_MathRuntimeException::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::java::lang::Throwable a0((jobject) NULL);
            MathRuntimeException result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::lang::Throwable::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::exception::MathRuntimeException::createInternalError(a0));
              return t_MathRuntimeException::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "createInternalError", args);
        return NULL;
      }

      static PyObject *t_MathRuntimeException_getLocalizedMessage(t_MathRuntimeException *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLocalizedMessage());
          return j2p(result);
        }

        return callSuper(PY_TYPE(MathRuntimeException), (PyObject *) self, "getLocalizedMessage", args, 2);
      }

      static PyObject *t_MathRuntimeException_getMessage(t_MathRuntimeException *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getMessage());
            return j2p(result);
          }
          break;
         case 1:
          {
            ::java::util::Locale a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getMessage(a0));
              return j2p(result);
            }
          }
        }

        return callSuper(PY_TYPE(MathRuntimeException), (PyObject *) self, "getMessage", args, 2);
      }

      static PyObject *t_MathRuntimeException_getParts(t_MathRuntimeException *self)
      {
        JArray< ::java::lang::Object > result((jobject) NULL);
        OBJ_CALL(result = self->object.getParts());
        return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_MathRuntimeException_getSpecifier(t_MathRuntimeException *self)
      {
        ::org::hipparchus::exception::Localizable result((jobject) NULL);
        OBJ_CALL(result = self->object.getSpecifier());
        return ::org::hipparchus::exception::t_Localizable::wrap_Object(result);
      }

      static PyObject *t_MathRuntimeException_get__localizedMessage(t_MathRuntimeException *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getLocalizedMessage());
        return j2p(value);
      }

      static PyObject *t_MathRuntimeException_get__message(t_MathRuntimeException *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getMessage());
        return j2p(value);
      }

      static PyObject *t_MathRuntimeException_get__parts(t_MathRuntimeException *self, void *data)
      {
        JArray< ::java::lang::Object > value((jobject) NULL);
        OBJ_CALL(value = self->object.getParts());
        return JArray<jobject>(value.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_MathRuntimeException_get__specifier(t_MathRuntimeException *self, void *data)
      {
        ::org::hipparchus::exception::Localizable value((jobject) NULL);
        OBJ_CALL(value = self->object.getSpecifier());
        return ::org::hipparchus::exception::t_Localizable::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/linear/PivotSelectionRule.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "org/hipparchus/optim/linear/PivotSelectionRule.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace linear {

        ::java::lang::Class *PivotSelectionRule::class$ = NULL;
        jmethodID *PivotSelectionRule::mids$ = NULL;
        bool PivotSelectionRule::live$ = false;
        PivotSelectionRule *PivotSelectionRule::BLAND = NULL;
        PivotSelectionRule *PivotSelectionRule::DANTZIG = NULL;

        jclass PivotSelectionRule::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/optim/linear/PivotSelectionRule");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_38351e9a2dcdfc31] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/optim/linear/PivotSelectionRule;");
            mids$[mid_values_ba3eade62c43952a] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/optim/linear/PivotSelectionRule;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            BLAND = new PivotSelectionRule(env->getStaticObjectField(cls, "BLAND", "Lorg/hipparchus/optim/linear/PivotSelectionRule;"));
            DANTZIG = new PivotSelectionRule(env->getStaticObjectField(cls, "DANTZIG", "Lorg/hipparchus/optim/linear/PivotSelectionRule;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PivotSelectionRule PivotSelectionRule::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return PivotSelectionRule(env->callStaticObjectMethod(cls, mids$[mid_valueOf_38351e9a2dcdfc31], a0.this$));
        }

        JArray< PivotSelectionRule > PivotSelectionRule::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< PivotSelectionRule >(env->callStaticObjectMethod(cls, mids$[mid_values_ba3eade62c43952a]));
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
    namespace optim {
      namespace linear {
        static PyObject *t_PivotSelectionRule_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PivotSelectionRule_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PivotSelectionRule_of_(t_PivotSelectionRule *self, PyObject *args);
        static PyObject *t_PivotSelectionRule_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_PivotSelectionRule_values(PyTypeObject *type);
        static PyObject *t_PivotSelectionRule_get__parameters_(t_PivotSelectionRule *self, void *data);
        static PyGetSetDef t_PivotSelectionRule__fields_[] = {
          DECLARE_GET_FIELD(t_PivotSelectionRule, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PivotSelectionRule__methods_[] = {
          DECLARE_METHOD(t_PivotSelectionRule, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PivotSelectionRule, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PivotSelectionRule, of_, METH_VARARGS),
          DECLARE_METHOD(t_PivotSelectionRule, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_PivotSelectionRule, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PivotSelectionRule)[] = {
          { Py_tp_methods, t_PivotSelectionRule__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_PivotSelectionRule__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PivotSelectionRule)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(PivotSelectionRule, t_PivotSelectionRule, PivotSelectionRule);
        PyObject *t_PivotSelectionRule::wrap_Object(const PivotSelectionRule& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PivotSelectionRule::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PivotSelectionRule *self = (t_PivotSelectionRule *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PivotSelectionRule::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PivotSelectionRule::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PivotSelectionRule *self = (t_PivotSelectionRule *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PivotSelectionRule::install(PyObject *module)
        {
          installType(&PY_TYPE(PivotSelectionRule), &PY_TYPE_DEF(PivotSelectionRule), module, "PivotSelectionRule", 0);
        }

        void t_PivotSelectionRule::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PivotSelectionRule), "class_", make_descriptor(PivotSelectionRule::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PivotSelectionRule), "wrapfn_", make_descriptor(t_PivotSelectionRule::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PivotSelectionRule), "boxfn_", make_descriptor(boxObject));
          env->getClass(PivotSelectionRule::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(PivotSelectionRule), "BLAND", make_descriptor(t_PivotSelectionRule::wrap_Object(*PivotSelectionRule::BLAND)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PivotSelectionRule), "DANTZIG", make_descriptor(t_PivotSelectionRule::wrap_Object(*PivotSelectionRule::DANTZIG)));
        }

        static PyObject *t_PivotSelectionRule_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PivotSelectionRule::initializeClass, 1)))
            return NULL;
          return t_PivotSelectionRule::wrap_Object(PivotSelectionRule(((t_PivotSelectionRule *) arg)->object.this$));
        }
        static PyObject *t_PivotSelectionRule_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PivotSelectionRule::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PivotSelectionRule_of_(t_PivotSelectionRule *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_PivotSelectionRule_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          PivotSelectionRule result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::optim::linear::PivotSelectionRule::valueOf(a0));
            return t_PivotSelectionRule::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_PivotSelectionRule_values(PyTypeObject *type)
        {
          JArray< PivotSelectionRule > result((jobject) NULL);
          OBJ_CALL(result = ::org::hipparchus::optim::linear::PivotSelectionRule::values());
          return JArray<jobject>(result.this$).wrap(t_PivotSelectionRule::wrap_jobject);
        }
        static PyObject *t_PivotSelectionRule_get__parameters_(t_PivotSelectionRule *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/AbstractLimitedVariableStepFieldIntegratorBuilder.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *AbstractLimitedVariableStepFieldIntegratorBuilder::class$ = NULL;
        jmethodID *AbstractLimitedVariableStepFieldIntegratorBuilder::mids$ = NULL;
        bool AbstractLimitedVariableStepFieldIntegratorBuilder::live$ = false;

        jclass AbstractLimitedVariableStepFieldIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/AbstractLimitedVariableStepFieldIntegratorBuilder");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
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
      namespace conversion {
        static PyObject *t_AbstractLimitedVariableStepFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractLimitedVariableStepFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractLimitedVariableStepFieldIntegratorBuilder_of_(t_AbstractLimitedVariableStepFieldIntegratorBuilder *self, PyObject *args);
        static PyObject *t_AbstractLimitedVariableStepFieldIntegratorBuilder_get__parameters_(t_AbstractLimitedVariableStepFieldIntegratorBuilder *self, void *data);
        static PyGetSetDef t_AbstractLimitedVariableStepFieldIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractLimitedVariableStepFieldIntegratorBuilder, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractLimitedVariableStepFieldIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_AbstractLimitedVariableStepFieldIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractLimitedVariableStepFieldIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractLimitedVariableStepFieldIntegratorBuilder, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractLimitedVariableStepFieldIntegratorBuilder)[] = {
          { Py_tp_methods, t_AbstractLimitedVariableStepFieldIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractLimitedVariableStepFieldIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractLimitedVariableStepFieldIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractVariableStepFieldIntegratorBuilder),
          NULL
        };

        DEFINE_TYPE(AbstractLimitedVariableStepFieldIntegratorBuilder, t_AbstractLimitedVariableStepFieldIntegratorBuilder, AbstractLimitedVariableStepFieldIntegratorBuilder);
        PyObject *t_AbstractLimitedVariableStepFieldIntegratorBuilder::wrap_Object(const AbstractLimitedVariableStepFieldIntegratorBuilder& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractLimitedVariableStepFieldIntegratorBuilder::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractLimitedVariableStepFieldIntegratorBuilder *self = (t_AbstractLimitedVariableStepFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AbstractLimitedVariableStepFieldIntegratorBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractLimitedVariableStepFieldIntegratorBuilder::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractLimitedVariableStepFieldIntegratorBuilder *self = (t_AbstractLimitedVariableStepFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AbstractLimitedVariableStepFieldIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractLimitedVariableStepFieldIntegratorBuilder), &PY_TYPE_DEF(AbstractLimitedVariableStepFieldIntegratorBuilder), module, "AbstractLimitedVariableStepFieldIntegratorBuilder", 0);
        }

        void t_AbstractLimitedVariableStepFieldIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractLimitedVariableStepFieldIntegratorBuilder), "class_", make_descriptor(AbstractLimitedVariableStepFieldIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractLimitedVariableStepFieldIntegratorBuilder), "wrapfn_", make_descriptor(t_AbstractLimitedVariableStepFieldIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractLimitedVariableStepFieldIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractLimitedVariableStepFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractLimitedVariableStepFieldIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_AbstractLimitedVariableStepFieldIntegratorBuilder::wrap_Object(AbstractLimitedVariableStepFieldIntegratorBuilder(((t_AbstractLimitedVariableStepFieldIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_AbstractLimitedVariableStepFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractLimitedVariableStepFieldIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractLimitedVariableStepFieldIntegratorBuilder_of_(t_AbstractLimitedVariableStepFieldIntegratorBuilder *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }
        static PyObject *t_AbstractLimitedVariableStepFieldIntegratorBuilder_get__parameters_(t_AbstractLimitedVariableStepFieldIntegratorBuilder *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/MultivariateDifferentiableVectorFunction.h"
#include "org/hipparchus/analysis/differentiation/DerivativeStructure.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *MultivariateDifferentiableVectorFunction::class$ = NULL;
        jmethodID *MultivariateDifferentiableVectorFunction::mids$ = NULL;
        bool MultivariateDifferentiableVectorFunction::live$ = false;

        jclass MultivariateDifferentiableVectorFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/MultivariateDifferentiableVectorFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_value_d4a489c06cba2b0b] = env->getMethodID(cls, "value", "([Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)[Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        JArray< ::org::hipparchus::analysis::differentiation::DerivativeStructure > MultivariateDifferentiableVectorFunction::value(const JArray< ::org::hipparchus::analysis::differentiation::DerivativeStructure > & a0) const
        {
          return JArray< ::org::hipparchus::analysis::differentiation::DerivativeStructure >(env->callObjectMethod(this$, mids$[mid_value_d4a489c06cba2b0b], a0.this$));
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
        static PyObject *t_MultivariateDifferentiableVectorFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultivariateDifferentiableVectorFunction_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultivariateDifferentiableVectorFunction_value(t_MultivariateDifferentiableVectorFunction *self, PyObject *args);

        static PyMethodDef t_MultivariateDifferentiableVectorFunction__methods_[] = {
          DECLARE_METHOD(t_MultivariateDifferentiableVectorFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultivariateDifferentiableVectorFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultivariateDifferentiableVectorFunction, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MultivariateDifferentiableVectorFunction)[] = {
          { Py_tp_methods, t_MultivariateDifferentiableVectorFunction__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MultivariateDifferentiableVectorFunction)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::MultivariateVectorFunction),
          NULL
        };

        DEFINE_TYPE(MultivariateDifferentiableVectorFunction, t_MultivariateDifferentiableVectorFunction, MultivariateDifferentiableVectorFunction);

        void t_MultivariateDifferentiableVectorFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(MultivariateDifferentiableVectorFunction), &PY_TYPE_DEF(MultivariateDifferentiableVectorFunction), module, "MultivariateDifferentiableVectorFunction", 0);
        }

        void t_MultivariateDifferentiableVectorFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateDifferentiableVectorFunction), "class_", make_descriptor(MultivariateDifferentiableVectorFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateDifferentiableVectorFunction), "wrapfn_", make_descriptor(t_MultivariateDifferentiableVectorFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateDifferentiableVectorFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MultivariateDifferentiableVectorFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MultivariateDifferentiableVectorFunction::initializeClass, 1)))
            return NULL;
          return t_MultivariateDifferentiableVectorFunction::wrap_Object(MultivariateDifferentiableVectorFunction(((t_MultivariateDifferentiableVectorFunction *) arg)->object.this$));
        }
        static PyObject *t_MultivariateDifferentiableVectorFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MultivariateDifferentiableVectorFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_MultivariateDifferentiableVectorFunction_value(t_MultivariateDifferentiableVectorFunction *self, PyObject *args)
        {
          JArray< ::org::hipparchus::analysis::differentiation::DerivativeStructure > a0((jobject) NULL);
          JArray< ::org::hipparchus::analysis::differentiation::DerivativeStructure > result((jobject) NULL);

          if (!parseArgs(args, "[k", ::org::hipparchus::analysis::differentiation::DerivativeStructure::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.value(a0));
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::analysis::differentiation::t_DerivativeStructure::wrap_jobject);
          }

          return callSuper(PY_TYPE(MultivariateDifferentiableVectorFunction), (PyObject *) self, "value", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/PythonParameterFunction.h"
#include "java/lang/Throwable.h"
#include "org/orekit/utils/ParameterFunction.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *PythonParameterFunction::class$ = NULL;
      jmethodID *PythonParameterFunction::mids$ = NULL;
      bool PythonParameterFunction::live$ = false;

      jclass PythonParameterFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/PythonParameterFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_value_ceb9685d0630065e] = env->getMethodID(cls, "value", "(Lorg/orekit/utils/ParameterDriver;Lorg/orekit/time/AbsoluteDate;)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonParameterFunction::PythonParameterFunction() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      void PythonParameterFunction::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
      }

      jlong PythonParameterFunction::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
      }

      void PythonParameterFunction::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
      static PyObject *t_PythonParameterFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonParameterFunction_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonParameterFunction_init_(t_PythonParameterFunction *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonParameterFunction_finalize(t_PythonParameterFunction *self);
      static PyObject *t_PythonParameterFunction_pythonExtension(t_PythonParameterFunction *self, PyObject *args);
      static void JNICALL t_PythonParameterFunction_pythonDecRef0(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonParameterFunction_value1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static PyObject *t_PythonParameterFunction_get__self(t_PythonParameterFunction *self, void *data);
      static PyGetSetDef t_PythonParameterFunction__fields_[] = {
        DECLARE_GET_FIELD(t_PythonParameterFunction, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonParameterFunction__methods_[] = {
        DECLARE_METHOD(t_PythonParameterFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonParameterFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonParameterFunction, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonParameterFunction, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonParameterFunction)[] = {
        { Py_tp_methods, t_PythonParameterFunction__methods_ },
        { Py_tp_init, (void *) t_PythonParameterFunction_init_ },
        { Py_tp_getset, t_PythonParameterFunction__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonParameterFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonParameterFunction, t_PythonParameterFunction, PythonParameterFunction);

      void t_PythonParameterFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonParameterFunction), &PY_TYPE_DEF(PythonParameterFunction), module, "PythonParameterFunction", 1);
      }

      void t_PythonParameterFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParameterFunction), "class_", make_descriptor(PythonParameterFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParameterFunction), "wrapfn_", make_descriptor(t_PythonParameterFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParameterFunction), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonParameterFunction::initializeClass);
        JNINativeMethod methods[] = {
          { "pythonDecRef", "()V", (void *) t_PythonParameterFunction_pythonDecRef0 },
          { "value", "(Lorg/orekit/utils/ParameterDriver;Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonParameterFunction_value1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonParameterFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonParameterFunction::initializeClass, 1)))
          return NULL;
        return t_PythonParameterFunction::wrap_Object(PythonParameterFunction(((t_PythonParameterFunction *) arg)->object.this$));
      }
      static PyObject *t_PythonParameterFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonParameterFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonParameterFunction_init_(t_PythonParameterFunction *self, PyObject *args, PyObject *kwds)
      {
        PythonParameterFunction object((jobject) NULL);

        INT_CALL(object = PythonParameterFunction());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonParameterFunction_finalize(t_PythonParameterFunction *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonParameterFunction_pythonExtension(t_PythonParameterFunction *self, PyObject *args)
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

      static void JNICALL t_PythonParameterFunction_pythonDecRef0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonParameterFunction::mids$[PythonParameterFunction::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonParameterFunction::mids$[PythonParameterFunction::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jdouble JNICALL t_PythonParameterFunction_value1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonParameterFunction::mids$[PythonParameterFunction::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *o0 = ::org::orekit::utils::t_ParameterDriver::wrap_Object(::org::orekit::utils::ParameterDriver(a0));
        PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
        PyObject *result = PyObject_CallMethod(obj, "value", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("value", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static PyObject *t_PythonParameterFunction_get__self(t_PythonParameterFunction *self, void *data)
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
#include "org/hipparchus/analysis/UnivariateMatrixFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *UnivariateMatrixFunction::class$ = NULL;
      jmethodID *UnivariateMatrixFunction::mids$ = NULL;
      bool UnivariateMatrixFunction::live$ = false;

      jclass UnivariateMatrixFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/UnivariateMatrixFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_575a099fc2492a12] = env->getMethodID(cls, "value", "(D)[[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< JArray< jdouble > > UnivariateMatrixFunction::value(jdouble a0) const
      {
        return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_value_575a099fc2492a12], a0));
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
      static PyObject *t_UnivariateMatrixFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UnivariateMatrixFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UnivariateMatrixFunction_value(t_UnivariateMatrixFunction *self, PyObject *arg);

      static PyMethodDef t_UnivariateMatrixFunction__methods_[] = {
        DECLARE_METHOD(t_UnivariateMatrixFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UnivariateMatrixFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UnivariateMatrixFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UnivariateMatrixFunction)[] = {
        { Py_tp_methods, t_UnivariateMatrixFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UnivariateMatrixFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(UnivariateMatrixFunction, t_UnivariateMatrixFunction, UnivariateMatrixFunction);

      void t_UnivariateMatrixFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(UnivariateMatrixFunction), &PY_TYPE_DEF(UnivariateMatrixFunction), module, "UnivariateMatrixFunction", 0);
      }

      void t_UnivariateMatrixFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateMatrixFunction), "class_", make_descriptor(UnivariateMatrixFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateMatrixFunction), "wrapfn_", make_descriptor(t_UnivariateMatrixFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateMatrixFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_UnivariateMatrixFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UnivariateMatrixFunction::initializeClass, 1)))
          return NULL;
        return t_UnivariateMatrixFunction::wrap_Object(UnivariateMatrixFunction(((t_UnivariateMatrixFunction *) arg)->object.this$));
      }
      static PyObject *t_UnivariateMatrixFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UnivariateMatrixFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_UnivariateMatrixFunction_value(t_UnivariateMatrixFunction *self, PyObject *arg)
      {
        jdouble a0;
        JArray< JArray< jdouble > > result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.value(a0));
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1020.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1020Data.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace ephemeris {

              ::java::lang::Class *Rtcm1020::class$ = NULL;
              jmethodID *Rtcm1020::mids$ = NULL;
              bool Rtcm1020::live$ = false;

              jclass Rtcm1020::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1020");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_89851bd96f23c207] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1020Data;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1020::Rtcm1020(jint a0, const ::org::orekit::gnss::metric::messages::rtcm::ephemeris::Rtcm1020Data & a1) : ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisMessage(env->newObject(initializeClass, &mids$, mid_init$_89851bd96f23c207, a0, a1.this$)) {}
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
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace ephemeris {
              static PyObject *t_Rtcm1020_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1020_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1020_of_(t_Rtcm1020 *self, PyObject *args);
              static int t_Rtcm1020_init_(t_Rtcm1020 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1020_get__parameters_(t_Rtcm1020 *self, void *data);
              static PyGetSetDef t_Rtcm1020__fields_[] = {
                DECLARE_GET_FIELD(t_Rtcm1020, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1020__methods_[] = {
                DECLARE_METHOD(t_Rtcm1020, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1020, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1020, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1020)[] = {
                { Py_tp_methods, t_Rtcm1020__methods_ },
                { Py_tp_init, (void *) t_Rtcm1020_init_ },
                { Py_tp_getset, t_Rtcm1020__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1020)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisMessage),
                NULL
              };

              DEFINE_TYPE(Rtcm1020, t_Rtcm1020, Rtcm1020);
              PyObject *t_Rtcm1020::wrap_Object(const Rtcm1020& object, PyTypeObject *p0)
              {
                PyObject *obj = t_Rtcm1020::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1020 *self = (t_Rtcm1020 *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_Rtcm1020::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_Rtcm1020::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1020 *self = (t_Rtcm1020 *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_Rtcm1020::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1020), &PY_TYPE_DEF(Rtcm1020), module, "Rtcm1020", 0);
              }

              void t_Rtcm1020::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1020), "class_", make_descriptor(Rtcm1020::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1020), "wrapfn_", make_descriptor(t_Rtcm1020::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1020), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1020_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1020::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1020::wrap_Object(Rtcm1020(((t_Rtcm1020 *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1020_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1020::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Rtcm1020_of_(t_Rtcm1020 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Rtcm1020_init_(t_Rtcm1020 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::metric::messages::rtcm::ephemeris::Rtcm1020Data a1((jobject) NULL);
                Rtcm1020 object((jobject) NULL);

                if (!parseArgs(args, "Ik", ::org::orekit::gnss::metric::messages::rtcm::ephemeris::Rtcm1020Data::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = Rtcm1020(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::rtcm::ephemeris::PY_TYPE(Rtcm1020Data);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }
              static PyObject *t_Rtcm1020_get__parameters_(t_Rtcm1020 *self, void *data)
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
#include "org/orekit/propagation/sampling/PythonFieldOrekitStepInterpolator.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/sampling/FieldOrekitStepInterpolator.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *PythonFieldOrekitStepInterpolator::class$ = NULL;
        jmethodID *PythonFieldOrekitStepInterpolator::mids$ = NULL;
        bool PythonFieldOrekitStepInterpolator::live$ = false;

        jclass PythonFieldOrekitStepInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/PythonFieldOrekitStepInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getCurrentState_381b3e011cde018d] = env->getMethodID(cls, "getCurrentState", "()Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_getInterpolatedState_5324cbf9e5ce58fe] = env->getMethodID(cls, "getInterpolatedState", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_getPreviousState_381b3e011cde018d] = env->getMethodID(cls, "getPreviousState", "()Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_isForward_89b302893bdbe1f1] = env->getMethodID(cls, "isForward", "()Z");
            mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_restrictStep_b313908ffec3e8d3] = env->getMethodID(cls, "restrictStep", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/sampling/FieldOrekitStepInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonFieldOrekitStepInterpolator::PythonFieldOrekitStepInterpolator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        void PythonFieldOrekitStepInterpolator::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
        }

        jlong PythonFieldOrekitStepInterpolator::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
        }

        void PythonFieldOrekitStepInterpolator::pythonExtension(jlong a0) const
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
      namespace sampling {
        static PyObject *t_PythonFieldOrekitStepInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldOrekitStepInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldOrekitStepInterpolator_of_(t_PythonFieldOrekitStepInterpolator *self, PyObject *args);
        static int t_PythonFieldOrekitStepInterpolator_init_(t_PythonFieldOrekitStepInterpolator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonFieldOrekitStepInterpolator_finalize(t_PythonFieldOrekitStepInterpolator *self);
        static PyObject *t_PythonFieldOrekitStepInterpolator_pythonExtension(t_PythonFieldOrekitStepInterpolator *self, PyObject *args);
        static jobject JNICALL t_PythonFieldOrekitStepInterpolator_getCurrentState0(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonFieldOrekitStepInterpolator_getInterpolatedState1(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonFieldOrekitStepInterpolator_getPreviousState2(JNIEnv *jenv, jobject jobj);
        static jboolean JNICALL t_PythonFieldOrekitStepInterpolator_isForward3(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonFieldOrekitStepInterpolator_pythonDecRef4(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonFieldOrekitStepInterpolator_restrictStep5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static PyObject *t_PythonFieldOrekitStepInterpolator_get__self(t_PythonFieldOrekitStepInterpolator *self, void *data);
        static PyObject *t_PythonFieldOrekitStepInterpolator_get__parameters_(t_PythonFieldOrekitStepInterpolator *self, void *data);
        static PyGetSetDef t_PythonFieldOrekitStepInterpolator__fields_[] = {
          DECLARE_GET_FIELD(t_PythonFieldOrekitStepInterpolator, self),
          DECLARE_GET_FIELD(t_PythonFieldOrekitStepInterpolator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonFieldOrekitStepInterpolator__methods_[] = {
          DECLARE_METHOD(t_PythonFieldOrekitStepInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldOrekitStepInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldOrekitStepInterpolator, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonFieldOrekitStepInterpolator, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonFieldOrekitStepInterpolator, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonFieldOrekitStepInterpolator)[] = {
          { Py_tp_methods, t_PythonFieldOrekitStepInterpolator__methods_ },
          { Py_tp_init, (void *) t_PythonFieldOrekitStepInterpolator_init_ },
          { Py_tp_getset, t_PythonFieldOrekitStepInterpolator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonFieldOrekitStepInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonFieldOrekitStepInterpolator, t_PythonFieldOrekitStepInterpolator, PythonFieldOrekitStepInterpolator);
        PyObject *t_PythonFieldOrekitStepInterpolator::wrap_Object(const PythonFieldOrekitStepInterpolator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldOrekitStepInterpolator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldOrekitStepInterpolator *self = (t_PythonFieldOrekitStepInterpolator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PythonFieldOrekitStepInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldOrekitStepInterpolator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldOrekitStepInterpolator *self = (t_PythonFieldOrekitStepInterpolator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PythonFieldOrekitStepInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonFieldOrekitStepInterpolator), &PY_TYPE_DEF(PythonFieldOrekitStepInterpolator), module, "PythonFieldOrekitStepInterpolator", 1);
        }

        void t_PythonFieldOrekitStepInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldOrekitStepInterpolator), "class_", make_descriptor(PythonFieldOrekitStepInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldOrekitStepInterpolator), "wrapfn_", make_descriptor(t_PythonFieldOrekitStepInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldOrekitStepInterpolator), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonFieldOrekitStepInterpolator::initializeClass);
          JNINativeMethod methods[] = {
            { "getCurrentState", "()Lorg/orekit/propagation/FieldSpacecraftState;", (void *) t_PythonFieldOrekitStepInterpolator_getCurrentState0 },
            { "getInterpolatedState", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;", (void *) t_PythonFieldOrekitStepInterpolator_getInterpolatedState1 },
            { "getPreviousState", "()Lorg/orekit/propagation/FieldSpacecraftState;", (void *) t_PythonFieldOrekitStepInterpolator_getPreviousState2 },
            { "isForward", "()Z", (void *) t_PythonFieldOrekitStepInterpolator_isForward3 },
            { "pythonDecRef", "()V", (void *) t_PythonFieldOrekitStepInterpolator_pythonDecRef4 },
            { "restrictStep", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/sampling/FieldOrekitStepInterpolator;", (void *) t_PythonFieldOrekitStepInterpolator_restrictStep5 },
          };
          env->registerNatives(cls, methods, 6);
        }

        static PyObject *t_PythonFieldOrekitStepInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonFieldOrekitStepInterpolator::initializeClass, 1)))
            return NULL;
          return t_PythonFieldOrekitStepInterpolator::wrap_Object(PythonFieldOrekitStepInterpolator(((t_PythonFieldOrekitStepInterpolator *) arg)->object.this$));
        }
        static PyObject *t_PythonFieldOrekitStepInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonFieldOrekitStepInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonFieldOrekitStepInterpolator_of_(t_PythonFieldOrekitStepInterpolator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonFieldOrekitStepInterpolator_init_(t_PythonFieldOrekitStepInterpolator *self, PyObject *args, PyObject *kwds)
        {
          PythonFieldOrekitStepInterpolator object((jobject) NULL);

          INT_CALL(object = PythonFieldOrekitStepInterpolator());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonFieldOrekitStepInterpolator_finalize(t_PythonFieldOrekitStepInterpolator *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonFieldOrekitStepInterpolator_pythonExtension(t_PythonFieldOrekitStepInterpolator *self, PyObject *args)
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

        static jobject JNICALL t_PythonFieldOrekitStepInterpolator_getCurrentState0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOrekitStepInterpolator::mids$[PythonFieldOrekitStepInterpolator::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getCurrentState", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &value))
          {
            throwTypeError("getCurrentState", result);
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

        static jobject JNICALL t_PythonFieldOrekitStepInterpolator_getInterpolatedState1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOrekitStepInterpolator::mids$[PythonFieldOrekitStepInterpolator::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
          PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
          PyObject *result = PyObject_CallMethod(obj, "getInterpolatedState", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &value))
          {
            throwTypeError("getInterpolatedState", result);
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

        static jobject JNICALL t_PythonFieldOrekitStepInterpolator_getPreviousState2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOrekitStepInterpolator::mids$[PythonFieldOrekitStepInterpolator::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getPreviousState", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &value))
          {
            throwTypeError("getPreviousState", result);
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

        static jboolean JNICALL t_PythonFieldOrekitStepInterpolator_isForward3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOrekitStepInterpolator::mids$[PythonFieldOrekitStepInterpolator::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jboolean value;
          PyObject *result = PyObject_CallMethod(obj, "isForward", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "Z", &value))
          {
            throwTypeError("isForward", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jboolean) 0;
        }

        static void JNICALL t_PythonFieldOrekitStepInterpolator_pythonDecRef4(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOrekitStepInterpolator::mids$[PythonFieldOrekitStepInterpolator::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonFieldOrekitStepInterpolator::mids$[PythonFieldOrekitStepInterpolator::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static jobject JNICALL t_PythonFieldOrekitStepInterpolator_restrictStep5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOrekitStepInterpolator::mids$[PythonFieldOrekitStepInterpolator::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *o1 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a1));
          PyObject *result = PyObject_CallMethod(obj, "restrictStep", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator::initializeClass, &value))
          {
            throwTypeError("restrictStep", result);
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

        static PyObject *t_PythonFieldOrekitStepInterpolator_get__self(t_PythonFieldOrekitStepInterpolator *self, void *data)
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
        static PyObject *t_PythonFieldOrekitStepInterpolator_get__parameters_(t_PythonFieldOrekitStepInterpolator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/observation/RinexObservation.h"
#include "org/orekit/files/rinex/observation/ObservationDataSet.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/files/rinex/observation/RinexObservationHeader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace observation {

          ::java::lang::Class *RinexObservation::class$ = NULL;
          jmethodID *RinexObservation::mids$ = NULL;
          bool RinexObservation::live$ = false;

          jclass RinexObservation::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/observation/RinexObservation");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_addObservationDataSet_7cae3eafa8e6978c] = env->getMethodID(cls, "addObservationDataSet", "(Lorg/orekit/files/rinex/observation/ObservationDataSet;)V");
              mids$[mid_getObservationDataSets_0d9551367f7ecdef] = env->getMethodID(cls, "getObservationDataSets", "()Ljava/util/List;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RinexObservation::RinexObservation() : ::org::orekit::files::rinex::RinexFile(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          void RinexObservation::addObservationDataSet(const ::org::orekit::files::rinex::observation::ObservationDataSet & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addObservationDataSet_7cae3eafa8e6978c], a0.this$);
          }

          ::java::util::List RinexObservation::getObservationDataSets() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getObservationDataSets_0d9551367f7ecdef]));
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
      namespace rinex {
        namespace observation {
          static PyObject *t_RinexObservation_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexObservation_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexObservation_of_(t_RinexObservation *self, PyObject *args);
          static int t_RinexObservation_init_(t_RinexObservation *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RinexObservation_addObservationDataSet(t_RinexObservation *self, PyObject *arg);
          static PyObject *t_RinexObservation_getObservationDataSets(t_RinexObservation *self);
          static PyObject *t_RinexObservation_get__observationDataSets(t_RinexObservation *self, void *data);
          static PyObject *t_RinexObservation_get__parameters_(t_RinexObservation *self, void *data);
          static PyGetSetDef t_RinexObservation__fields_[] = {
            DECLARE_GET_FIELD(t_RinexObservation, observationDataSets),
            DECLARE_GET_FIELD(t_RinexObservation, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RinexObservation__methods_[] = {
            DECLARE_METHOD(t_RinexObservation, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexObservation, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexObservation, of_, METH_VARARGS),
            DECLARE_METHOD(t_RinexObservation, addObservationDataSet, METH_O),
            DECLARE_METHOD(t_RinexObservation, getObservationDataSets, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RinexObservation)[] = {
            { Py_tp_methods, t_RinexObservation__methods_ },
            { Py_tp_init, (void *) t_RinexObservation_init_ },
            { Py_tp_getset, t_RinexObservation__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RinexObservation)[] = {
            &PY_TYPE_DEF(::org::orekit::files::rinex::RinexFile),
            NULL
          };

          DEFINE_TYPE(RinexObservation, t_RinexObservation, RinexObservation);
          PyObject *t_RinexObservation::wrap_Object(const RinexObservation& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RinexObservation::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RinexObservation *self = (t_RinexObservation *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_RinexObservation::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RinexObservation::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RinexObservation *self = (t_RinexObservation *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_RinexObservation::install(PyObject *module)
          {
            installType(&PY_TYPE(RinexObservation), &PY_TYPE_DEF(RinexObservation), module, "RinexObservation", 0);
          }

          void t_RinexObservation::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexObservation), "class_", make_descriptor(RinexObservation::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexObservation), "wrapfn_", make_descriptor(t_RinexObservation::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexObservation), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RinexObservation_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RinexObservation::initializeClass, 1)))
              return NULL;
            return t_RinexObservation::wrap_Object(RinexObservation(((t_RinexObservation *) arg)->object.this$));
          }
          static PyObject *t_RinexObservation_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RinexObservation::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RinexObservation_of_(t_RinexObservation *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_RinexObservation_init_(t_RinexObservation *self, PyObject *args, PyObject *kwds)
          {
            RinexObservation object((jobject) NULL);

            INT_CALL(object = RinexObservation());
            self->object = object;
            self->parameters[0] = ::org::orekit::files::rinex::observation::PY_TYPE(RinexObservationHeader);

            return 0;
          }

          static PyObject *t_RinexObservation_addObservationDataSet(t_RinexObservation *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::observation::ObservationDataSet a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::observation::ObservationDataSet::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addObservationDataSet(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addObservationDataSet", arg);
            return NULL;
          }

          static PyObject *t_RinexObservation_getObservationDataSets(t_RinexObservation *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getObservationDataSets());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::observation::PY_TYPE(ObservationDataSet));
          }
          static PyObject *t_RinexObservation_get__parameters_(t_RinexObservation *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_RinexObservation_get__observationDataSets(t_RinexObservation *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getObservationDataSets());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/los/TimeDependentLOS.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/rugged/utils/DerivativeGenerator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace los {

        ::java::lang::Class *TimeDependentLOS::class$ = NULL;
        jmethodID *TimeDependentLOS::mids$ = NULL;
        bool TimeDependentLOS::live$ = false;

        jclass TimeDependentLOS::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/los/TimeDependentLOS");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getLOS_52dc17f61c395eb1] = env->getMethodID(cls, "getLOS", "(ILorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getLOSDerivatives_a599f72f961ecf99] = env->getMethodID(cls, "getLOSDerivatives", "(ILorg/orekit/time/AbsoluteDate;Lorg/orekit/rugged/utils/DerivativeGenerator;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_getNbPixels_412668abc8d889e9] = env->getMethodID(cls, "getNbPixels", "()I");
            mids$[mid_getParametersDrivers_d7cce92225eb0db2] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/stream/Stream;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D TimeDependentLOS::getLOS(jint a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getLOS_52dc17f61c395eb1], a0, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D TimeDependentLOS::getLOSDerivatives(jint a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::rugged::utils::DerivativeGenerator & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getLOSDerivatives_a599f72f961ecf99], a0, a1.this$, a2.this$));
        }

        jint TimeDependentLOS::getNbPixels() const
        {
          return env->callIntMethod(this$, mids$[mid_getNbPixels_412668abc8d889e9]);
        }

        ::java::util::stream::Stream TimeDependentLOS::getParametersDrivers() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d7cce92225eb0db2]));
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
      namespace los {
        static PyObject *t_TimeDependentLOS_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TimeDependentLOS_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TimeDependentLOS_getLOS(t_TimeDependentLOS *self, PyObject *args);
        static PyObject *t_TimeDependentLOS_getLOSDerivatives(t_TimeDependentLOS *self, PyObject *args);
        static PyObject *t_TimeDependentLOS_getNbPixels(t_TimeDependentLOS *self);
        static PyObject *t_TimeDependentLOS_getParametersDrivers(t_TimeDependentLOS *self);
        static PyObject *t_TimeDependentLOS_get__nbPixels(t_TimeDependentLOS *self, void *data);
        static PyObject *t_TimeDependentLOS_get__parametersDrivers(t_TimeDependentLOS *self, void *data);
        static PyGetSetDef t_TimeDependentLOS__fields_[] = {
          DECLARE_GET_FIELD(t_TimeDependentLOS, nbPixels),
          DECLARE_GET_FIELD(t_TimeDependentLOS, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_TimeDependentLOS__methods_[] = {
          DECLARE_METHOD(t_TimeDependentLOS, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TimeDependentLOS, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TimeDependentLOS, getLOS, METH_VARARGS),
          DECLARE_METHOD(t_TimeDependentLOS, getLOSDerivatives, METH_VARARGS),
          DECLARE_METHOD(t_TimeDependentLOS, getNbPixels, METH_NOARGS),
          DECLARE_METHOD(t_TimeDependentLOS, getParametersDrivers, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TimeDependentLOS)[] = {
          { Py_tp_methods, t_TimeDependentLOS__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_TimeDependentLOS__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TimeDependentLOS)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(TimeDependentLOS, t_TimeDependentLOS, TimeDependentLOS);

        void t_TimeDependentLOS::install(PyObject *module)
        {
          installType(&PY_TYPE(TimeDependentLOS), &PY_TYPE_DEF(TimeDependentLOS), module, "TimeDependentLOS", 0);
        }

        void t_TimeDependentLOS::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TimeDependentLOS), "class_", make_descriptor(TimeDependentLOS::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TimeDependentLOS), "wrapfn_", make_descriptor(t_TimeDependentLOS::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TimeDependentLOS), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_TimeDependentLOS_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TimeDependentLOS::initializeClass, 1)))
            return NULL;
          return t_TimeDependentLOS::wrap_Object(TimeDependentLOS(((t_TimeDependentLOS *) arg)->object.this$));
        }
        static PyObject *t_TimeDependentLOS_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TimeDependentLOS::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_TimeDependentLOS_getLOS(t_TimeDependentLOS *self, PyObject *args)
        {
          jint a0;
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

          if (!parseArgs(args, "Ik", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.getLOS(a0, a1));
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getLOS", args);
          return NULL;
        }

        static PyObject *t_TimeDependentLOS_getLOSDerivatives(t_TimeDependentLOS *self, PyObject *args)
        {
          jint a0;
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          ::org::orekit::rugged::utils::DerivativeGenerator a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

          if (!parseArgs(args, "IkK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::rugged::utils::DerivativeGenerator::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::rugged::utils::t_DerivativeGenerator::parameters_))
          {
            OBJ_CALL(result = self->object.getLOSDerivatives(a0, a1, a2));
            return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getLOSDerivatives", args);
          return NULL;
        }

        static PyObject *t_TimeDependentLOS_getNbPixels(t_TimeDependentLOS *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNbPixels());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_TimeDependentLOS_getParametersDrivers(t_TimeDependentLOS *self)
        {
          ::java::util::stream::Stream result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_TimeDependentLOS_get__nbPixels(t_TimeDependentLOS *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNbPixels());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_TimeDependentLOS_get__parametersDrivers(t_TimeDependentLOS *self, void *data)
        {
          ::java::util::stream::Stream value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::stream::t_Stream::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/sampling/ODEStateInterpolator.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {

        ::java::lang::Class *ODEStateInterpolator::class$ = NULL;
        jmethodID *ODEStateInterpolator::mids$ = NULL;
        bool ODEStateInterpolator::live$ = false;

        jclass ODEStateInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/sampling/ODEStateInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getCurrentState_0a798a152cb54887] = env->getMethodID(cls, "getCurrentState", "()Lorg/hipparchus/ode/ODEStateAndDerivative;");
            mids$[mid_getInterpolatedState_0a47e68426cfc9cf] = env->getMethodID(cls, "getInterpolatedState", "(D)Lorg/hipparchus/ode/ODEStateAndDerivative;");
            mids$[mid_getPreviousState_0a798a152cb54887] = env->getMethodID(cls, "getPreviousState", "()Lorg/hipparchus/ode/ODEStateAndDerivative;");
            mids$[mid_isCurrentStateInterpolated_89b302893bdbe1f1] = env->getMethodID(cls, "isCurrentStateInterpolated", "()Z");
            mids$[mid_isForward_89b302893bdbe1f1] = env->getMethodID(cls, "isForward", "()Z");
            mids$[mid_isPreviousStateInterpolated_89b302893bdbe1f1] = env->getMethodID(cls, "isPreviousStateInterpolated", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::ode::ODEStateAndDerivative ODEStateInterpolator::getCurrentState() const
        {
          return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getCurrentState_0a798a152cb54887]));
        }

        ::org::hipparchus::ode::ODEStateAndDerivative ODEStateInterpolator::getInterpolatedState(jdouble a0) const
        {
          return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getInterpolatedState_0a47e68426cfc9cf], a0));
        }

        ::org::hipparchus::ode::ODEStateAndDerivative ODEStateInterpolator::getPreviousState() const
        {
          return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getPreviousState_0a798a152cb54887]));
        }

        jboolean ODEStateInterpolator::isCurrentStateInterpolated() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isCurrentStateInterpolated_89b302893bdbe1f1]);
        }

        jboolean ODEStateInterpolator::isForward() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isForward_89b302893bdbe1f1]);
        }

        jboolean ODEStateInterpolator::isPreviousStateInterpolated() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isPreviousStateInterpolated_89b302893bdbe1f1]);
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
      namespace sampling {
        static PyObject *t_ODEStateInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ODEStateInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ODEStateInterpolator_getCurrentState(t_ODEStateInterpolator *self);
        static PyObject *t_ODEStateInterpolator_getInterpolatedState(t_ODEStateInterpolator *self, PyObject *arg);
        static PyObject *t_ODEStateInterpolator_getPreviousState(t_ODEStateInterpolator *self);
        static PyObject *t_ODEStateInterpolator_isCurrentStateInterpolated(t_ODEStateInterpolator *self);
        static PyObject *t_ODEStateInterpolator_isForward(t_ODEStateInterpolator *self);
        static PyObject *t_ODEStateInterpolator_isPreviousStateInterpolated(t_ODEStateInterpolator *self);
        static PyObject *t_ODEStateInterpolator_get__currentState(t_ODEStateInterpolator *self, void *data);
        static PyObject *t_ODEStateInterpolator_get__currentStateInterpolated(t_ODEStateInterpolator *self, void *data);
        static PyObject *t_ODEStateInterpolator_get__forward(t_ODEStateInterpolator *self, void *data);
        static PyObject *t_ODEStateInterpolator_get__previousState(t_ODEStateInterpolator *self, void *data);
        static PyObject *t_ODEStateInterpolator_get__previousStateInterpolated(t_ODEStateInterpolator *self, void *data);
        static PyGetSetDef t_ODEStateInterpolator__fields_[] = {
          DECLARE_GET_FIELD(t_ODEStateInterpolator, currentState),
          DECLARE_GET_FIELD(t_ODEStateInterpolator, currentStateInterpolated),
          DECLARE_GET_FIELD(t_ODEStateInterpolator, forward),
          DECLARE_GET_FIELD(t_ODEStateInterpolator, previousState),
          DECLARE_GET_FIELD(t_ODEStateInterpolator, previousStateInterpolated),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ODEStateInterpolator__methods_[] = {
          DECLARE_METHOD(t_ODEStateInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ODEStateInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ODEStateInterpolator, getCurrentState, METH_NOARGS),
          DECLARE_METHOD(t_ODEStateInterpolator, getInterpolatedState, METH_O),
          DECLARE_METHOD(t_ODEStateInterpolator, getPreviousState, METH_NOARGS),
          DECLARE_METHOD(t_ODEStateInterpolator, isCurrentStateInterpolated, METH_NOARGS),
          DECLARE_METHOD(t_ODEStateInterpolator, isForward, METH_NOARGS),
          DECLARE_METHOD(t_ODEStateInterpolator, isPreviousStateInterpolated, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ODEStateInterpolator)[] = {
          { Py_tp_methods, t_ODEStateInterpolator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_ODEStateInterpolator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ODEStateInterpolator)[] = {
          &PY_TYPE_DEF(::java::io::Serializable),
          NULL
        };

        DEFINE_TYPE(ODEStateInterpolator, t_ODEStateInterpolator, ODEStateInterpolator);

        void t_ODEStateInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(ODEStateInterpolator), &PY_TYPE_DEF(ODEStateInterpolator), module, "ODEStateInterpolator", 0);
        }

        void t_ODEStateInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEStateInterpolator), "class_", make_descriptor(ODEStateInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEStateInterpolator), "wrapfn_", make_descriptor(t_ODEStateInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEStateInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ODEStateInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ODEStateInterpolator::initializeClass, 1)))
            return NULL;
          return t_ODEStateInterpolator::wrap_Object(ODEStateInterpolator(((t_ODEStateInterpolator *) arg)->object.this$));
        }
        static PyObject *t_ODEStateInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ODEStateInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ODEStateInterpolator_getCurrentState(t_ODEStateInterpolator *self)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative result((jobject) NULL);
          OBJ_CALL(result = self->object.getCurrentState());
          return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(result);
        }

        static PyObject *t_ODEStateInterpolator_getInterpolatedState(t_ODEStateInterpolator *self, PyObject *arg)
        {
          jdouble a0;
          ::org::hipparchus::ode::ODEStateAndDerivative result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getInterpolatedState(a0));
            return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getInterpolatedState", arg);
          return NULL;
        }

        static PyObject *t_ODEStateInterpolator_getPreviousState(t_ODEStateInterpolator *self)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative result((jobject) NULL);
          OBJ_CALL(result = self->object.getPreviousState());
          return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(result);
        }

        static PyObject *t_ODEStateInterpolator_isCurrentStateInterpolated(t_ODEStateInterpolator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isCurrentStateInterpolated());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_ODEStateInterpolator_isForward(t_ODEStateInterpolator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isForward());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_ODEStateInterpolator_isPreviousStateInterpolated(t_ODEStateInterpolator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isPreviousStateInterpolated());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_ODEStateInterpolator_get__currentState(t_ODEStateInterpolator *self, void *data)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative value((jobject) NULL);
          OBJ_CALL(value = self->object.getCurrentState());
          return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(value);
        }

        static PyObject *t_ODEStateInterpolator_get__currentStateInterpolated(t_ODEStateInterpolator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isCurrentStateInterpolated());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_ODEStateInterpolator_get__forward(t_ODEStateInterpolator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isForward());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_ODEStateInterpolator_get__previousState(t_ODEStateInterpolator *self, void *data)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative value((jobject) NULL);
          OBJ_CALL(value = self->object.getPreviousState());
          return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(value);
        }

        static PyObject *t_ODEStateInterpolator_get__previousStateInterpolated(t_ODEStateInterpolator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isPreviousStateInterpolated());
          Py_RETURN_BOOL(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/PropagatorsParallelizer.h"
#include "org/orekit/propagation/sampling/MultiSatFixedStepHandler.h"
#include "java/util/List.h"
#include "org/orekit/propagation/sampling/MultiSatStepHandler.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *PropagatorsParallelizer::class$ = NULL;
      jmethodID *PropagatorsParallelizer::mids$ = NULL;
      bool PropagatorsParallelizer::live$ = false;

      jclass PropagatorsParallelizer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/PropagatorsParallelizer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_9720e6d1873130df] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Lorg/orekit/propagation/sampling/MultiSatStepHandler;)V");
          mids$[mid_init$_43832b78aa0998e4] = env->getMethodID(cls, "<init>", "(Ljava/util/List;DLorg/orekit/propagation/sampling/MultiSatFixedStepHandler;)V");
          mids$[mid_getPropagators_0d9551367f7ecdef] = env->getMethodID(cls, "getPropagators", "()Ljava/util/List;");
          mids$[mid_propagate_c5683b8e06424542] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PropagatorsParallelizer::PropagatorsParallelizer(const ::java::util::List & a0, const ::org::orekit::propagation::sampling::MultiSatStepHandler & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9720e6d1873130df, a0.this$, a1.this$)) {}

      PropagatorsParallelizer::PropagatorsParallelizer(const ::java::util::List & a0, jdouble a1, const ::org::orekit::propagation::sampling::MultiSatFixedStepHandler & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_43832b78aa0998e4, a0.this$, a1, a2.this$)) {}

      ::java::util::List PropagatorsParallelizer::getPropagators() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getPropagators_0d9551367f7ecdef]));
      }

      ::java::util::List PropagatorsParallelizer::propagate(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_propagate_c5683b8e06424542], a0.this$, a1.this$));
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
      static PyObject *t_PropagatorsParallelizer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PropagatorsParallelizer_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PropagatorsParallelizer_init_(t_PropagatorsParallelizer *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PropagatorsParallelizer_getPropagators(t_PropagatorsParallelizer *self);
      static PyObject *t_PropagatorsParallelizer_propagate(t_PropagatorsParallelizer *self, PyObject *args);
      static PyObject *t_PropagatorsParallelizer_get__propagators(t_PropagatorsParallelizer *self, void *data);
      static PyGetSetDef t_PropagatorsParallelizer__fields_[] = {
        DECLARE_GET_FIELD(t_PropagatorsParallelizer, propagators),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PropagatorsParallelizer__methods_[] = {
        DECLARE_METHOD(t_PropagatorsParallelizer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PropagatorsParallelizer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PropagatorsParallelizer, getPropagators, METH_NOARGS),
        DECLARE_METHOD(t_PropagatorsParallelizer, propagate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PropagatorsParallelizer)[] = {
        { Py_tp_methods, t_PropagatorsParallelizer__methods_ },
        { Py_tp_init, (void *) t_PropagatorsParallelizer_init_ },
        { Py_tp_getset, t_PropagatorsParallelizer__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PropagatorsParallelizer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PropagatorsParallelizer, t_PropagatorsParallelizer, PropagatorsParallelizer);

      void t_PropagatorsParallelizer::install(PyObject *module)
      {
        installType(&PY_TYPE(PropagatorsParallelizer), &PY_TYPE_DEF(PropagatorsParallelizer), module, "PropagatorsParallelizer", 0);
      }

      void t_PropagatorsParallelizer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PropagatorsParallelizer), "class_", make_descriptor(PropagatorsParallelizer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PropagatorsParallelizer), "wrapfn_", make_descriptor(t_PropagatorsParallelizer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PropagatorsParallelizer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_PropagatorsParallelizer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PropagatorsParallelizer::initializeClass, 1)))
          return NULL;
        return t_PropagatorsParallelizer::wrap_Object(PropagatorsParallelizer(((t_PropagatorsParallelizer *) arg)->object.this$));
      }
      static PyObject *t_PropagatorsParallelizer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PropagatorsParallelizer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PropagatorsParallelizer_init_(t_PropagatorsParallelizer *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::propagation::sampling::MultiSatStepHandler a1((jobject) NULL);
            PropagatorsParallelizer object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::java::util::List::initializeClass, ::org::orekit::propagation::sampling::MultiSatStepHandler::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1))
            {
              INT_CALL(object = PropagatorsParallelizer(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            ::org::orekit::propagation::sampling::MultiSatFixedStepHandler a2((jobject) NULL);
            PropagatorsParallelizer object((jobject) NULL);

            if (!parseArgs(args, "KDk", ::java::util::List::initializeClass, ::org::orekit::propagation::sampling::MultiSatFixedStepHandler::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2))
            {
              INT_CALL(object = PropagatorsParallelizer(a0, a1, a2));
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

      static PyObject *t_PropagatorsParallelizer_getPropagators(t_PropagatorsParallelizer *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getPropagators());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::PY_TYPE(Propagator));
      }

      static PyObject *t_PropagatorsParallelizer_propagate(t_PropagatorsParallelizer *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        ::java::util::List result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.propagate(a0, a1));
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::PY_TYPE(SpacecraftState));
        }

        PyErr_SetArgsError((PyObject *) self, "propagate", args);
        return NULL;
      }

      static PyObject *t_PropagatorsParallelizer_get__propagators(t_PropagatorsParallelizer *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getPropagators());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/NarrowLaneCombination.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *NarrowLaneCombination::class$ = NULL;
          jmethodID *NarrowLaneCombination::mids$ = NULL;
          bool NarrowLaneCombination::live$ = false;

          jclass NarrowLaneCombination::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/NarrowLaneCombination");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getCombinedValue_1aca6111050d8282] = env->getMethodID(cls, "getCombinedValue", "(DLorg/orekit/gnss/Frequency;DLorg/orekit/gnss/Frequency;)D");
              mids$[mid_getCombinedFrequency_ec5e21d51ba3cb9a] = env->getMethodID(cls, "getCombinedFrequency", "(Lorg/orekit/gnss/Frequency;Lorg/orekit/gnss/Frequency;)D");

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
          static PyObject *t_NarrowLaneCombination_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NarrowLaneCombination_instance_(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_NarrowLaneCombination__methods_[] = {
            DECLARE_METHOD(t_NarrowLaneCombination, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NarrowLaneCombination, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(NarrowLaneCombination)[] = {
            { Py_tp_methods, t_NarrowLaneCombination__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(NarrowLaneCombination)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::AbstractDualFrequencyCombination),
            NULL
          };

          DEFINE_TYPE(NarrowLaneCombination, t_NarrowLaneCombination, NarrowLaneCombination);

          void t_NarrowLaneCombination::install(PyObject *module)
          {
            installType(&PY_TYPE(NarrowLaneCombination), &PY_TYPE_DEF(NarrowLaneCombination), module, "NarrowLaneCombination", 0);
          }

          void t_NarrowLaneCombination::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(NarrowLaneCombination), "class_", make_descriptor(NarrowLaneCombination::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NarrowLaneCombination), "wrapfn_", make_descriptor(t_NarrowLaneCombination::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NarrowLaneCombination), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_NarrowLaneCombination_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, NarrowLaneCombination::initializeClass, 1)))
              return NULL;
            return t_NarrowLaneCombination::wrap_Object(NarrowLaneCombination(((t_NarrowLaneCombination *) arg)->object.this$));
          }
          static PyObject *t_NarrowLaneCombination_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, NarrowLaneCombination::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationConvention.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationConvention.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *RotationConvention::class$ = NULL;
          jmethodID *RotationConvention::mids$ = NULL;
          bool RotationConvention::live$ = false;
          RotationConvention *RotationConvention::FRAME_TRANSFORM = NULL;
          RotationConvention *RotationConvention::VECTOR_OPERATOR = NULL;

          jclass RotationConvention::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/RotationConvention");

              mids$ = new jmethodID[max_mid];
              mids$[mid_valueOf_710395c98821a651] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;");
              mids$[mid_values_61c711db04a03942] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              FRAME_TRANSFORM = new RotationConvention(env->getStaticObjectField(cls, "FRAME_TRANSFORM", "Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;"));
              VECTOR_OPERATOR = new RotationConvention(env->getStaticObjectField(cls, "VECTOR_OPERATOR", "Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RotationConvention RotationConvention::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return RotationConvention(env->callStaticObjectMethod(cls, mids$[mid_valueOf_710395c98821a651], a0.this$));
          }

          JArray< RotationConvention > RotationConvention::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< RotationConvention >(env->callStaticObjectMethod(cls, mids$[mid_values_61c711db04a03942]));
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
        namespace threed {
          static PyObject *t_RotationConvention_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RotationConvention_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RotationConvention_of_(t_RotationConvention *self, PyObject *args);
          static PyObject *t_RotationConvention_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_RotationConvention_values(PyTypeObject *type);
          static PyObject *t_RotationConvention_get__parameters_(t_RotationConvention *self, void *data);
          static PyGetSetDef t_RotationConvention__fields_[] = {
            DECLARE_GET_FIELD(t_RotationConvention, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RotationConvention__methods_[] = {
            DECLARE_METHOD(t_RotationConvention, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RotationConvention, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RotationConvention, of_, METH_VARARGS),
            DECLARE_METHOD(t_RotationConvention, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_RotationConvention, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RotationConvention)[] = {
            { Py_tp_methods, t_RotationConvention__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_RotationConvention__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RotationConvention)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(RotationConvention, t_RotationConvention, RotationConvention);
          PyObject *t_RotationConvention::wrap_Object(const RotationConvention& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RotationConvention::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RotationConvention *self = (t_RotationConvention *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_RotationConvention::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RotationConvention::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RotationConvention *self = (t_RotationConvention *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_RotationConvention::install(PyObject *module)
          {
            installType(&PY_TYPE(RotationConvention), &PY_TYPE_DEF(RotationConvention), module, "RotationConvention", 0);
          }

          void t_RotationConvention::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationConvention), "class_", make_descriptor(RotationConvention::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationConvention), "wrapfn_", make_descriptor(t_RotationConvention::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationConvention), "boxfn_", make_descriptor(boxObject));
            env->getClass(RotationConvention::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationConvention), "FRAME_TRANSFORM", make_descriptor(t_RotationConvention::wrap_Object(*RotationConvention::FRAME_TRANSFORM)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RotationConvention), "VECTOR_OPERATOR", make_descriptor(t_RotationConvention::wrap_Object(*RotationConvention::VECTOR_OPERATOR)));
          }

          static PyObject *t_RotationConvention_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RotationConvention::initializeClass, 1)))
              return NULL;
            return t_RotationConvention::wrap_Object(RotationConvention(((t_RotationConvention *) arg)->object.this$));
          }
          static PyObject *t_RotationConvention_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RotationConvention::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RotationConvention_of_(t_RotationConvention *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_RotationConvention_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            RotationConvention result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::RotationConvention::valueOf(a0));
              return t_RotationConvention::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_RotationConvention_values(PyTypeObject *type)
          {
            JArray< RotationConvention > result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::RotationConvention::values());
            return JArray<jobject>(result.this$).wrap(t_RotationConvention::wrap_jobject);
          }
          static PyObject *t_RotationConvention_get__parameters_(t_RotationConvention *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/adm/aem/AttitudeWriter.h"
#include "java/io/IOException.h"
#include "org/orekit/files/general/AttitudeEphemerisFileWriter.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemMetadata.h"
#include "java/lang/Appendable.h"
#include "java/lang/Class.h"
#include "org/orekit/files/general/AttitudeEphemerisFile.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemWriter.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmHeader.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace aem {

              ::java::lang::Class *AttitudeWriter::class$ = NULL;
              jmethodID *AttitudeWriter::mids$ = NULL;
              bool AttitudeWriter::live$ = false;

              jclass AttitudeWriter::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/aem/AttitudeWriter");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_a682dbe47c2f2556] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/adm/aem/AemWriter;Lorg/orekit/files/ccsds/ndm/adm/AdmHeader;Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadata;Lorg/orekit/files/ccsds/utils/FileFormat;Ljava/lang/String;DI)V");
                  mids$[mid_write_dd179231c59f3177] = env->getMethodID(cls, "write", "(Ljava/lang/Appendable;Lorg/orekit/files/general/AttitudeEphemerisFile;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AttitudeWriter::AttitudeWriter(const ::org::orekit::files::ccsds::ndm::adm::aem::AemWriter & a0, const ::org::orekit::files::ccsds::ndm::adm::AdmHeader & a1, const ::org::orekit::files::ccsds::ndm::adm::aem::AemMetadata & a2, const ::org::orekit::files::ccsds::utils::FileFormat & a3, const ::java::lang::String & a4, jdouble a5, jint a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a682dbe47c2f2556, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5, a6)) {}

              void AttitudeWriter::write(const ::java::lang::Appendable & a0, const ::org::orekit::files::general::AttitudeEphemerisFile & a1) const
              {
                env->callVoidMethod(this$, mids$[mid_write_dd179231c59f3177], a0.this$, a1.this$);
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
            namespace aem {
              static PyObject *t_AttitudeWriter_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeWriter_instance_(PyTypeObject *type, PyObject *arg);
              static int t_AttitudeWriter_init_(t_AttitudeWriter *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AttitudeWriter_write(t_AttitudeWriter *self, PyObject *args);

              static PyMethodDef t_AttitudeWriter__methods_[] = {
                DECLARE_METHOD(t_AttitudeWriter, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeWriter, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeWriter, write, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudeWriter)[] = {
                { Py_tp_methods, t_AttitudeWriter__methods_ },
                { Py_tp_init, (void *) t_AttitudeWriter_init_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudeWriter)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(AttitudeWriter, t_AttitudeWriter, AttitudeWriter);

              void t_AttitudeWriter::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudeWriter), &PY_TYPE_DEF(AttitudeWriter), module, "AttitudeWriter", 0);
              }

              void t_AttitudeWriter::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeWriter), "class_", make_descriptor(AttitudeWriter::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeWriter), "wrapfn_", make_descriptor(t_AttitudeWriter::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeWriter), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AttitudeWriter_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudeWriter::initializeClass, 1)))
                  return NULL;
                return t_AttitudeWriter::wrap_Object(AttitudeWriter(((t_AttitudeWriter *) arg)->object.this$));
              }
              static PyObject *t_AttitudeWriter_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudeWriter::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_AttitudeWriter_init_(t_AttitudeWriter *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::adm::aem::AemWriter a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::files::ccsds::ndm::adm::AdmHeader a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::aem::AemMetadata a2((jobject) NULL);
                ::org::orekit::files::ccsds::utils::FileFormat a3((jobject) NULL);
                PyTypeObject **p3;
                ::java::lang::String a4((jobject) NULL);
                jdouble a5;
                jint a6;
                AttitudeWriter object((jobject) NULL);

                if (!parseArgs(args, "KkkKsDI", ::org::orekit::files::ccsds::ndm::adm::aem::AemWriter::initializeClass, ::org::orekit::files::ccsds::ndm::adm::AdmHeader::initializeClass, ::org::orekit::files::ccsds::ndm::adm::aem::AemMetadata::initializeClass, ::org::orekit::files::ccsds::utils::FileFormat::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::adm::aem::t_AemWriter::parameters_, &a1, &a2, &a3, &p3, ::org::orekit::files::ccsds::utils::t_FileFormat::parameters_, &a4, &a5, &a6))
                {
                  INT_CALL(object = AttitudeWriter(a0, a1, a2, a3, a4, a5, a6));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_AttitudeWriter_write(t_AttitudeWriter *self, PyObject *args)
              {
                ::java::lang::Appendable a0((jobject) NULL);
                ::org::orekit::files::general::AttitudeEphemerisFile a1((jobject) NULL);
                PyTypeObject **p1;

                if (!parseArgs(args, "kK", ::java::lang::Appendable::initializeClass, ::org::orekit::files::general::AttitudeEphemerisFile::initializeClass, &a0, &a1, &p1, ::org::orekit::files::general::t_AttitudeEphemerisFile::parameters_))
                {
                  OBJ_CALL(self->object.write(a0, a1));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "write", args);
                return NULL;
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
#include "org/hipparchus/ode/nonstiff/EulerIntegrator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *EulerIntegrator::class$ = NULL;
        jmethodID *EulerIntegrator::mids$ = NULL;
        bool EulerIntegrator::live$ = false;

        jclass EulerIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/EulerIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_getA_8cf5267aa13a77f3] = env->getMethodID(cls, "getA", "()[[D");
            mids$[mid_getB_a53a7513ecedada2] = env->getMethodID(cls, "getB", "()[D");
            mids$[mid_getC_a53a7513ecedada2] = env->getMethodID(cls, "getC", "()[D");
            mids$[mid_createInterpolator_1c9938281777a19f] = env->getMethodID(cls, "createInterpolator", "(Z[[DLorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/EquationsMapper;)Lorg/hipparchus/ode/nonstiff/EulerStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EulerIntegrator::EulerIntegrator(jdouble a0) : ::org::hipparchus::ode::nonstiff::RungeKuttaIntegrator(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

        JArray< JArray< jdouble > > EulerIntegrator::getA() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getA_8cf5267aa13a77f3]));
        }

        JArray< jdouble > EulerIntegrator::getB() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getB_a53a7513ecedada2]));
        }

        JArray< jdouble > EulerIntegrator::getC() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getC_a53a7513ecedada2]));
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
      namespace nonstiff {
        static PyObject *t_EulerIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EulerIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_EulerIntegrator_init_(t_EulerIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EulerIntegrator_getA(t_EulerIntegrator *self, PyObject *args);
        static PyObject *t_EulerIntegrator_getB(t_EulerIntegrator *self, PyObject *args);
        static PyObject *t_EulerIntegrator_getC(t_EulerIntegrator *self, PyObject *args);
        static PyObject *t_EulerIntegrator_get__a(t_EulerIntegrator *self, void *data);
        static PyObject *t_EulerIntegrator_get__b(t_EulerIntegrator *self, void *data);
        static PyObject *t_EulerIntegrator_get__c(t_EulerIntegrator *self, void *data);
        static PyGetSetDef t_EulerIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_EulerIntegrator, a),
          DECLARE_GET_FIELD(t_EulerIntegrator, b),
          DECLARE_GET_FIELD(t_EulerIntegrator, c),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EulerIntegrator__methods_[] = {
          DECLARE_METHOD(t_EulerIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EulerIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EulerIntegrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_EulerIntegrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_EulerIntegrator, getC, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EulerIntegrator)[] = {
          { Py_tp_methods, t_EulerIntegrator__methods_ },
          { Py_tp_init, (void *) t_EulerIntegrator_init_ },
          { Py_tp_getset, t_EulerIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EulerIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::RungeKuttaIntegrator),
          NULL
        };

        DEFINE_TYPE(EulerIntegrator, t_EulerIntegrator, EulerIntegrator);

        void t_EulerIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(EulerIntegrator), &PY_TYPE_DEF(EulerIntegrator), module, "EulerIntegrator", 0);
        }

        void t_EulerIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EulerIntegrator), "class_", make_descriptor(EulerIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EulerIntegrator), "wrapfn_", make_descriptor(t_EulerIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EulerIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EulerIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EulerIntegrator::initializeClass, 1)))
            return NULL;
          return t_EulerIntegrator::wrap_Object(EulerIntegrator(((t_EulerIntegrator *) arg)->object.this$));
        }
        static PyObject *t_EulerIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EulerIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_EulerIntegrator_init_(t_EulerIntegrator *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          EulerIntegrator object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = EulerIntegrator(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_EulerIntegrator_getA(t_EulerIntegrator *self, PyObject *args)
        {
          JArray< JArray< jdouble > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(EulerIntegrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_EulerIntegrator_getB(t_EulerIntegrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return result.wrap();
          }

          return callSuper(PY_TYPE(EulerIntegrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_EulerIntegrator_getC(t_EulerIntegrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return result.wrap();
          }

          return callSuper(PY_TYPE(EulerIntegrator), (PyObject *) self, "getC", args, 2);
        }

        static PyObject *t_EulerIntegrator_get__a(t_EulerIntegrator *self, void *data)
        {
          JArray< JArray< jdouble > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_EulerIntegrator_get__b(t_EulerIntegrator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return value.wrap();
        }

        static PyObject *t_EulerIntegrator_get__c(t_EulerIntegrator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getC());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/navigation/RinexNavigationHeader.h"
#include "java/util/List.h"
#include "org/orekit/files/rinex/navigation/TimeSystemCorrection.h"
#include "org/orekit/files/rinex/navigation/IonosphericCorrectionType.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {

          ::java::lang::Class *RinexNavigationHeader::class$ = NULL;
          jmethodID *RinexNavigationHeader::mids$ = NULL;
          bool RinexNavigationHeader::live$ = false;

          jclass RinexNavigationHeader::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/navigation/RinexNavigationHeader");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_addTimeSystemCorrections_c58230bb9bf03e26] = env->getMethodID(cls, "addTimeSystemCorrections", "(Lorg/orekit/files/rinex/navigation/TimeSystemCorrection;)V");
              mids$[mid_getIonosphericCorrectionType_274c47bda8a7356f] = env->getMethodID(cls, "getIonosphericCorrectionType", "()Lorg/orekit/files/rinex/navigation/IonosphericCorrectionType;");
              mids$[mid_getMergedFiles_412668abc8d889e9] = env->getMethodID(cls, "getMergedFiles", "()I");
              mids$[mid_getNumberOfLeapSeconds_412668abc8d889e9] = env->getMethodID(cls, "getNumberOfLeapSeconds", "()I");
              mids$[mid_getTimeSystemCorrections_0d9551367f7ecdef] = env->getMethodID(cls, "getTimeSystemCorrections", "()Ljava/util/List;");
              mids$[mid_setIonosphericCorrectionType_2b2777839ed697bc] = env->getMethodID(cls, "setIonosphericCorrectionType", "(Lorg/orekit/files/rinex/navigation/IonosphericCorrectionType;)V");
              mids$[mid_setMergedFiles_a3da1a935cb37f7b] = env->getMethodID(cls, "setMergedFiles", "(I)V");
              mids$[mid_setNumberOfLeapSeconds_a3da1a935cb37f7b] = env->getMethodID(cls, "setNumberOfLeapSeconds", "(I)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RinexNavigationHeader::RinexNavigationHeader() : ::org::orekit::files::rinex::section::RinexBaseHeader(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          void RinexNavigationHeader::addTimeSystemCorrections(const ::org::orekit::files::rinex::navigation::TimeSystemCorrection & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addTimeSystemCorrections_c58230bb9bf03e26], a0.this$);
          }

          ::org::orekit::files::rinex::navigation::IonosphericCorrectionType RinexNavigationHeader::getIonosphericCorrectionType() const
          {
            return ::org::orekit::files::rinex::navigation::IonosphericCorrectionType(env->callObjectMethod(this$, mids$[mid_getIonosphericCorrectionType_274c47bda8a7356f]));
          }

          jint RinexNavigationHeader::getMergedFiles() const
          {
            return env->callIntMethod(this$, mids$[mid_getMergedFiles_412668abc8d889e9]);
          }

          jint RinexNavigationHeader::getNumberOfLeapSeconds() const
          {
            return env->callIntMethod(this$, mids$[mid_getNumberOfLeapSeconds_412668abc8d889e9]);
          }

          ::java::util::List RinexNavigationHeader::getTimeSystemCorrections() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getTimeSystemCorrections_0d9551367f7ecdef]));
          }

          void RinexNavigationHeader::setIonosphericCorrectionType(const ::org::orekit::files::rinex::navigation::IonosphericCorrectionType & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setIonosphericCorrectionType_2b2777839ed697bc], a0.this$);
          }

          void RinexNavigationHeader::setMergedFiles(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setMergedFiles_a3da1a935cb37f7b], a0);
          }

          void RinexNavigationHeader::setNumberOfLeapSeconds(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setNumberOfLeapSeconds_a3da1a935cb37f7b], a0);
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
      namespace rinex {
        namespace navigation {
          static PyObject *t_RinexNavigationHeader_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexNavigationHeader_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RinexNavigationHeader_init_(t_RinexNavigationHeader *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RinexNavigationHeader_addTimeSystemCorrections(t_RinexNavigationHeader *self, PyObject *arg);
          static PyObject *t_RinexNavigationHeader_getIonosphericCorrectionType(t_RinexNavigationHeader *self);
          static PyObject *t_RinexNavigationHeader_getMergedFiles(t_RinexNavigationHeader *self);
          static PyObject *t_RinexNavigationHeader_getNumberOfLeapSeconds(t_RinexNavigationHeader *self);
          static PyObject *t_RinexNavigationHeader_getTimeSystemCorrections(t_RinexNavigationHeader *self);
          static PyObject *t_RinexNavigationHeader_setIonosphericCorrectionType(t_RinexNavigationHeader *self, PyObject *arg);
          static PyObject *t_RinexNavigationHeader_setMergedFiles(t_RinexNavigationHeader *self, PyObject *arg);
          static PyObject *t_RinexNavigationHeader_setNumberOfLeapSeconds(t_RinexNavigationHeader *self, PyObject *arg);
          static PyObject *t_RinexNavigationHeader_get__ionosphericCorrectionType(t_RinexNavigationHeader *self, void *data);
          static int t_RinexNavigationHeader_set__ionosphericCorrectionType(t_RinexNavigationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexNavigationHeader_get__mergedFiles(t_RinexNavigationHeader *self, void *data);
          static int t_RinexNavigationHeader_set__mergedFiles(t_RinexNavigationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexNavigationHeader_get__numberOfLeapSeconds(t_RinexNavigationHeader *self, void *data);
          static int t_RinexNavigationHeader_set__numberOfLeapSeconds(t_RinexNavigationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexNavigationHeader_get__timeSystemCorrections(t_RinexNavigationHeader *self, void *data);
          static PyGetSetDef t_RinexNavigationHeader__fields_[] = {
            DECLARE_GETSET_FIELD(t_RinexNavigationHeader, ionosphericCorrectionType),
            DECLARE_GETSET_FIELD(t_RinexNavigationHeader, mergedFiles),
            DECLARE_GETSET_FIELD(t_RinexNavigationHeader, numberOfLeapSeconds),
            DECLARE_GET_FIELD(t_RinexNavigationHeader, timeSystemCorrections),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RinexNavigationHeader__methods_[] = {
            DECLARE_METHOD(t_RinexNavigationHeader, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexNavigationHeader, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexNavigationHeader, addTimeSystemCorrections, METH_O),
            DECLARE_METHOD(t_RinexNavigationHeader, getIonosphericCorrectionType, METH_NOARGS),
            DECLARE_METHOD(t_RinexNavigationHeader, getMergedFiles, METH_NOARGS),
            DECLARE_METHOD(t_RinexNavigationHeader, getNumberOfLeapSeconds, METH_NOARGS),
            DECLARE_METHOD(t_RinexNavigationHeader, getTimeSystemCorrections, METH_NOARGS),
            DECLARE_METHOD(t_RinexNavigationHeader, setIonosphericCorrectionType, METH_O),
            DECLARE_METHOD(t_RinexNavigationHeader, setMergedFiles, METH_O),
            DECLARE_METHOD(t_RinexNavigationHeader, setNumberOfLeapSeconds, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RinexNavigationHeader)[] = {
            { Py_tp_methods, t_RinexNavigationHeader__methods_ },
            { Py_tp_init, (void *) t_RinexNavigationHeader_init_ },
            { Py_tp_getset, t_RinexNavigationHeader__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RinexNavigationHeader)[] = {
            &PY_TYPE_DEF(::org::orekit::files::rinex::section::RinexBaseHeader),
            NULL
          };

          DEFINE_TYPE(RinexNavigationHeader, t_RinexNavigationHeader, RinexNavigationHeader);

          void t_RinexNavigationHeader::install(PyObject *module)
          {
            installType(&PY_TYPE(RinexNavigationHeader), &PY_TYPE_DEF(RinexNavigationHeader), module, "RinexNavigationHeader", 0);
          }

          void t_RinexNavigationHeader::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexNavigationHeader), "class_", make_descriptor(RinexNavigationHeader::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexNavigationHeader), "wrapfn_", make_descriptor(t_RinexNavigationHeader::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexNavigationHeader), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RinexNavigationHeader_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RinexNavigationHeader::initializeClass, 1)))
              return NULL;
            return t_RinexNavigationHeader::wrap_Object(RinexNavigationHeader(((t_RinexNavigationHeader *) arg)->object.this$));
          }
          static PyObject *t_RinexNavigationHeader_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RinexNavigationHeader::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RinexNavigationHeader_init_(t_RinexNavigationHeader *self, PyObject *args, PyObject *kwds)
          {
            RinexNavigationHeader object((jobject) NULL);

            INT_CALL(object = RinexNavigationHeader());
            self->object = object;

            return 0;
          }

          static PyObject *t_RinexNavigationHeader_addTimeSystemCorrections(t_RinexNavigationHeader *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::navigation::TimeSystemCorrection a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::navigation::TimeSystemCorrection::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addTimeSystemCorrections(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addTimeSystemCorrections", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigationHeader_getIonosphericCorrectionType(t_RinexNavigationHeader *self)
          {
            ::org::orekit::files::rinex::navigation::IonosphericCorrectionType result((jobject) NULL);
            OBJ_CALL(result = self->object.getIonosphericCorrectionType());
            return ::org::orekit::files::rinex::navigation::t_IonosphericCorrectionType::wrap_Object(result);
          }

          static PyObject *t_RinexNavigationHeader_getMergedFiles(t_RinexNavigationHeader *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getMergedFiles());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_RinexNavigationHeader_getNumberOfLeapSeconds(t_RinexNavigationHeader *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getNumberOfLeapSeconds());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_RinexNavigationHeader_getTimeSystemCorrections(t_RinexNavigationHeader *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getTimeSystemCorrections());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::navigation::PY_TYPE(TimeSystemCorrection));
          }

          static PyObject *t_RinexNavigationHeader_setIonosphericCorrectionType(t_RinexNavigationHeader *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::navigation::IonosphericCorrectionType a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::files::rinex::navigation::IonosphericCorrectionType::initializeClass, &a0, &p0, ::org::orekit::files::rinex::navigation::t_IonosphericCorrectionType::parameters_))
            {
              OBJ_CALL(self->object.setIonosphericCorrectionType(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setIonosphericCorrectionType", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigationHeader_setMergedFiles(t_RinexNavigationHeader *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setMergedFiles(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setMergedFiles", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigationHeader_setNumberOfLeapSeconds(t_RinexNavigationHeader *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setNumberOfLeapSeconds(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setNumberOfLeapSeconds", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigationHeader_get__ionosphericCorrectionType(t_RinexNavigationHeader *self, void *data)
          {
            ::org::orekit::files::rinex::navigation::IonosphericCorrectionType value((jobject) NULL);
            OBJ_CALL(value = self->object.getIonosphericCorrectionType());
            return ::org::orekit::files::rinex::navigation::t_IonosphericCorrectionType::wrap_Object(value);
          }
          static int t_RinexNavigationHeader_set__ionosphericCorrectionType(t_RinexNavigationHeader *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::files::rinex::navigation::IonosphericCorrectionType value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::files::rinex::navigation::IonosphericCorrectionType::initializeClass, &value))
              {
                INT_CALL(self->object.setIonosphericCorrectionType(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "ionosphericCorrectionType", arg);
            return -1;
          }

          static PyObject *t_RinexNavigationHeader_get__mergedFiles(t_RinexNavigationHeader *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getMergedFiles());
            return PyLong_FromLong((long) value);
          }
          static int t_RinexNavigationHeader_set__mergedFiles(t_RinexNavigationHeader *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setMergedFiles(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "mergedFiles", arg);
            return -1;
          }

          static PyObject *t_RinexNavigationHeader_get__numberOfLeapSeconds(t_RinexNavigationHeader *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getNumberOfLeapSeconds());
            return PyLong_FromLong((long) value);
          }
          static int t_RinexNavigationHeader_set__numberOfLeapSeconds(t_RinexNavigationHeader *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setNumberOfLeapSeconds(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "numberOfLeapSeconds", arg);
            return -1;
          }

          static PyObject *t_RinexNavigationHeader_get__timeSystemCorrections(t_RinexNavigationHeader *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getTimeSystemCorrections());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FieldEventState.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/sampling/FieldOrekitStepInterpolator.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/FieldEventState$EventOccurrence.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
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
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldEventState");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_2ffeff0ffaf1deef] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/FieldEventDetector;)V");
            mids$[mid_doEvent_f05b1228908fdafd] = env->getMethodID(cls, "doEvent", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/events/FieldEventState$EventOccurrence;");
            mids$[mid_evaluateStep_5c5863fec6dd24f0] = env->getMethodID(cls, "evaluateStep", "(Lorg/orekit/propagation/sampling/FieldOrekitStepInterpolator;)Z");
            mids$[mid_getEventDate_f1fe4daf77c66560] = env->getMethodID(cls, "getEventDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
            mids$[mid_getEventDetector_07d9256595c42b86] = env->getMethodID(cls, "getEventDetector", "()Lorg/orekit/propagation/events/FieldEventDetector;");
            mids$[mid_getPendingEvent_89b302893bdbe1f1] = env->getMethodID(cls, "getPendingEvent", "()Z");
            mids$[mid_init_811e49dad2467b67] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
            mids$[mid_reinitializeBegin_c006764357a9d9b2] = env->getMethodID(cls, "reinitializeBegin", "(Lorg/orekit/propagation/sampling/FieldOrekitStepInterpolator;)V");
            mids$[mid_tryAdvance_d2e09743b2212992] = env->getMethodID(cls, "tryAdvance", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/sampling/FieldOrekitStepInterpolator;)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldEventState::FieldEventState(const ::org::orekit::propagation::events::FieldEventDetector & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2ffeff0ffaf1deef, a0.this$)) {}

        ::org::orekit::propagation::events::FieldEventState$EventOccurrence FieldEventState::doEvent(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::orekit::propagation::events::FieldEventState$EventOccurrence(env->callObjectMethod(this$, mids$[mid_doEvent_f05b1228908fdafd], a0.this$));
        }

        jboolean FieldEventState::evaluateStep(const ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_evaluateStep_5c5863fec6dd24f0], a0.this$);
        }

        ::org::orekit::time::FieldAbsoluteDate FieldEventState::getEventDate() const
        {
          return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEventDate_f1fe4daf77c66560]));
        }

        ::org::orekit::propagation::events::FieldEventDetector FieldEventState::getEventDetector() const
        {
          return ::org::orekit::propagation::events::FieldEventDetector(env->callObjectMethod(this$, mids$[mid_getEventDetector_07d9256595c42b86]));
        }

        jboolean FieldEventState::getPendingEvent() const
        {
          return env->callBooleanMethod(this$, mids$[mid_getPendingEvent_89b302893bdbe1f1]);
        }

        void FieldEventState::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_811e49dad2467b67], a0.this$, a1.this$);
        }

        void FieldEventState::reinitializeBegin(const ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_reinitializeBegin_c006764357a9d9b2], a0.this$);
        }

        jboolean FieldEventState::tryAdvance(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator & a1) const
        {
          return env->callBooleanMethod(this$, mids$[mid_tryAdvance_d2e09743b2212992], a0.this$, a1.this$);
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
        static PyObject *t_FieldEventState_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventState_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventState_of_(t_FieldEventState *self, PyObject *args);
        static int t_FieldEventState_init_(t_FieldEventState *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldEventState_doEvent(t_FieldEventState *self, PyObject *arg);
        static PyObject *t_FieldEventState_evaluateStep(t_FieldEventState *self, PyObject *arg);
        static PyObject *t_FieldEventState_getEventDate(t_FieldEventState *self);
        static PyObject *t_FieldEventState_getEventDetector(t_FieldEventState *self);
        static PyObject *t_FieldEventState_getPendingEvent(t_FieldEventState *self);
        static PyObject *t_FieldEventState_init(t_FieldEventState *self, PyObject *args);
        static PyObject *t_FieldEventState_reinitializeBegin(t_FieldEventState *self, PyObject *arg);
        static PyObject *t_FieldEventState_tryAdvance(t_FieldEventState *self, PyObject *args);
        static PyObject *t_FieldEventState_get__eventDate(t_FieldEventState *self, void *data);
        static PyObject *t_FieldEventState_get__eventDetector(t_FieldEventState *self, void *data);
        static PyObject *t_FieldEventState_get__pendingEvent(t_FieldEventState *self, void *data);
        static PyObject *t_FieldEventState_get__parameters_(t_FieldEventState *self, void *data);
        static PyGetSetDef t_FieldEventState__fields_[] = {
          DECLARE_GET_FIELD(t_FieldEventState, eventDate),
          DECLARE_GET_FIELD(t_FieldEventState, eventDetector),
          DECLARE_GET_FIELD(t_FieldEventState, pendingEvent),
          DECLARE_GET_FIELD(t_FieldEventState, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldEventState__methods_[] = {
          DECLARE_METHOD(t_FieldEventState, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventState, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventState, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldEventState, doEvent, METH_O),
          DECLARE_METHOD(t_FieldEventState, evaluateStep, METH_O),
          DECLARE_METHOD(t_FieldEventState, getEventDate, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventState, getEventDetector, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventState, getPendingEvent, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventState, init, METH_VARARGS),
          DECLARE_METHOD(t_FieldEventState, reinitializeBegin, METH_O),
          DECLARE_METHOD(t_FieldEventState, tryAdvance, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldEventState)[] = {
          { Py_tp_methods, t_FieldEventState__methods_ },
          { Py_tp_init, (void *) t_FieldEventState_init_ },
          { Py_tp_getset, t_FieldEventState__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldEventState)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldEventState, t_FieldEventState, FieldEventState);
        PyObject *t_FieldEventState::wrap_Object(const FieldEventState& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_FieldEventState::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventState *self = (t_FieldEventState *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_FieldEventState::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_FieldEventState::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventState *self = (t_FieldEventState *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_FieldEventState::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldEventState), &PY_TYPE_DEF(FieldEventState), module, "FieldEventState", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventState), "EventOccurrence", make_descriptor(&PY_TYPE_DEF(FieldEventState$EventOccurrence)));
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
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldEventState_init_(t_FieldEventState *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::events::FieldEventDetector a0((jobject) NULL);
          PyTypeObject **p0;
          FieldEventState object((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::events::FieldEventDetector::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_))
          {
            INT_CALL(object = FieldEventState(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldEventState_doEvent(t_FieldEventState *self, PyObject *arg)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::propagation::events::FieldEventState$EventOccurrence result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.doEvent(a0));
            return ::org::orekit::propagation::events::t_FieldEventState$EventOccurrence::wrap_Object(result, self->parameters[1]);
          }

          PyErr_SetArgsError((PyObject *) self, "doEvent", arg);
          return NULL;
        }

        static PyObject *t_FieldEventState_evaluateStep(t_FieldEventState *self, PyObject *arg)
        {
          ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator a0((jobject) NULL);
          PyTypeObject **p0;
          jboolean result;

          if (!parseArg(arg, "K", ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator::initializeClass, &a0, &p0, ::org::orekit::propagation::sampling::t_FieldOrekitStepInterpolator::parameters_))
          {
            OBJ_CALL(result = self->object.evaluateStep(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "evaluateStep", arg);
          return NULL;
        }

        static PyObject *t_FieldEventState_getEventDate(t_FieldEventState *self)
        {
          ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getEventDate());
          return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[1]);
        }

        static PyObject *t_FieldEventState_getEventDetector(t_FieldEventState *self)
        {
          ::org::orekit::propagation::events::FieldEventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getEventDetector());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(result);
        }

        static PyObject *t_FieldEventState_getPendingEvent(t_FieldEventState *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.getPendingEvent());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_FieldEventState_init(t_FieldEventState *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "KK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }

        static PyObject *t_FieldEventState_reinitializeBegin(t_FieldEventState *self, PyObject *arg)
        {
          ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator::initializeClass, &a0, &p0, ::org::orekit::propagation::sampling::t_FieldOrekitStepInterpolator::parameters_))
          {
            OBJ_CALL(self->object.reinitializeBegin(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "reinitializeBegin", arg);
          return NULL;
        }

        static PyObject *t_FieldEventState_tryAdvance(t_FieldEventState *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator a1((jobject) NULL);
          PyTypeObject **p1;
          jboolean result;

          if (!parseArgs(args, "KK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::sampling::t_FieldOrekitStepInterpolator::parameters_))
          {
            OBJ_CALL(result = self->object.tryAdvance(a0, a1));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "tryAdvance", args);
          return NULL;
        }
        static PyObject *t_FieldEventState_get__parameters_(t_FieldEventState *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldEventState_get__eventDate(t_FieldEventState *self, void *data)
        {
          ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventDate());
          return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_FieldEventState_get__eventDetector(t_FieldEventState *self, void *data)
        {
          ::org::orekit::propagation::events::FieldEventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventDetector());
          return ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(value);
        }

        static PyObject *t_FieldEventState_get__pendingEvent(t_FieldEventState *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.getPendingEvent());
          Py_RETURN_BOOL(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/CelestialBodyPointed.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *CelestialBodyPointed::class$ = NULL;
      jmethodID *CelestialBodyPointed::mids$ = NULL;
      bool CelestialBodyPointed::live$ = false;

      jclass CelestialBodyPointed::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/CelestialBodyPointed");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_2a842241179c7b7e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/PVCoordinatesProvider;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_getAttitude_77e3383de01f3e48] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getAttitude_1306ac39e1d2de3f] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      CelestialBodyPointed::CelestialBodyPointed(const ::org::orekit::frames::Frame & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2a842241179c7b7e, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      ::org::orekit::attitudes::FieldAttitude CelestialBodyPointed::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_77e3383de01f3e48], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::Attitude CelestialBodyPointed::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_1306ac39e1d2de3f], a0.this$, a1.this$, a2.this$));
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
      static PyObject *t_CelestialBodyPointed_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CelestialBodyPointed_instance_(PyTypeObject *type, PyObject *arg);
      static int t_CelestialBodyPointed_init_(t_CelestialBodyPointed *self, PyObject *args, PyObject *kwds);
      static PyObject *t_CelestialBodyPointed_getAttitude(t_CelestialBodyPointed *self, PyObject *args);

      static PyMethodDef t_CelestialBodyPointed__methods_[] = {
        DECLARE_METHOD(t_CelestialBodyPointed, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyPointed, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyPointed, getAttitude, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CelestialBodyPointed)[] = {
        { Py_tp_methods, t_CelestialBodyPointed__methods_ },
        { Py_tp_init, (void *) t_CelestialBodyPointed_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CelestialBodyPointed)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CelestialBodyPointed, t_CelestialBodyPointed, CelestialBodyPointed);

      void t_CelestialBodyPointed::install(PyObject *module)
      {
        installType(&PY_TYPE(CelestialBodyPointed), &PY_TYPE_DEF(CelestialBodyPointed), module, "CelestialBodyPointed", 0);
      }

      void t_CelestialBodyPointed::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyPointed), "class_", make_descriptor(CelestialBodyPointed::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyPointed), "wrapfn_", make_descriptor(t_CelestialBodyPointed::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyPointed), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CelestialBodyPointed_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CelestialBodyPointed::initializeClass, 1)))
          return NULL;
        return t_CelestialBodyPointed::wrap_Object(CelestialBodyPointed(((t_CelestialBodyPointed *) arg)->object.this$));
      }
      static PyObject *t_CelestialBodyPointed_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CelestialBodyPointed::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_CelestialBodyPointed_init_(t_CelestialBodyPointed *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a4((jobject) NULL);
        CelestialBodyPointed object((jobject) NULL);

        if (!parseArgs(args, "kkkkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4))
        {
          INT_CALL(object = CelestialBodyPointed(a0, a1, a2, a3, a4));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_CelestialBodyPointed_getAttitude(t_CelestialBodyPointed *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::attitudes::Attitude result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getAttitude(a0, a1, a2));
              return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::attitudes::FieldAttitude result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getAttitude(a0, a1, a2));
              return ::org::orekit::attitudes::t_FieldAttitude::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getAttitude", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/gauss/LaguerreRuleFactory.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {

          ::java::lang::Class *LaguerreRuleFactory::class$ = NULL;
          jmethodID *LaguerreRuleFactory::mids$ = NULL;
          bool LaguerreRuleFactory::live$ = false;

          jclass LaguerreRuleFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/gauss/LaguerreRuleFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_computeRule_9a5adfb225849173] = env->getMethodID(cls, "computeRule", "(I)Lorg/hipparchus/util/Pair;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          LaguerreRuleFactory::LaguerreRuleFactory() : ::org::hipparchus::analysis::integration::gauss::AbstractRuleFactory(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}
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
        namespace gauss {
          static PyObject *t_LaguerreRuleFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_LaguerreRuleFactory_instance_(PyTypeObject *type, PyObject *arg);
          static int t_LaguerreRuleFactory_init_(t_LaguerreRuleFactory *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_LaguerreRuleFactory__methods_[] = {
            DECLARE_METHOD(t_LaguerreRuleFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LaguerreRuleFactory, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(LaguerreRuleFactory)[] = {
            { Py_tp_methods, t_LaguerreRuleFactory__methods_ },
            { Py_tp_init, (void *) t_LaguerreRuleFactory_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(LaguerreRuleFactory)[] = {
            &PY_TYPE_DEF(::org::hipparchus::analysis::integration::gauss::AbstractRuleFactory),
            NULL
          };

          DEFINE_TYPE(LaguerreRuleFactory, t_LaguerreRuleFactory, LaguerreRuleFactory);

          void t_LaguerreRuleFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(LaguerreRuleFactory), &PY_TYPE_DEF(LaguerreRuleFactory), module, "LaguerreRuleFactory", 0);
          }

          void t_LaguerreRuleFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(LaguerreRuleFactory), "class_", make_descriptor(LaguerreRuleFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LaguerreRuleFactory), "wrapfn_", make_descriptor(t_LaguerreRuleFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LaguerreRuleFactory), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_LaguerreRuleFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, LaguerreRuleFactory::initializeClass, 1)))
              return NULL;
            return t_LaguerreRuleFactory::wrap_Object(LaguerreRuleFactory(((t_LaguerreRuleFactory *) arg)->object.this$));
          }
          static PyObject *t_LaguerreRuleFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, LaguerreRuleFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_LaguerreRuleFactory_init_(t_LaguerreRuleFactory *self, PyObject *args, PyObject *kwds)
          {
            LaguerreRuleFactory object((jobject) NULL);

            INT_CALL(object = LaguerreRuleFactory());
            self->object = object;

            return 0;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/inference/OneWayAnova.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/util/Collection.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/stat/descriptive/StreamingStatistics.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace inference {

        ::java::lang::Class *OneWayAnova::class$ = NULL;
        jmethodID *OneWayAnova::mids$ = NULL;
        bool OneWayAnova::live$ = false;

        jclass OneWayAnova::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/inference/OneWayAnova");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_anovaFValue_1ab1799bb5ae5130] = env->getMethodID(cls, "anovaFValue", "(Ljava/util/Collection;)D");
            mids$[mid_anovaPValue_1ab1799bb5ae5130] = env->getMethodID(cls, "anovaPValue", "(Ljava/util/Collection;)D");
            mids$[mid_anovaPValue_6ee7ccf8d95c41ad] = env->getMethodID(cls, "anovaPValue", "(Ljava/util/Collection;Z)D");
            mids$[mid_anovaTest_cee28d5d28508179] = env->getMethodID(cls, "anovaTest", "(Ljava/util/Collection;D)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        OneWayAnova::OneWayAnova() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        jdouble OneWayAnova::anovaFValue(const ::java::util::Collection & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_anovaFValue_1ab1799bb5ae5130], a0.this$);
        }

        jdouble OneWayAnova::anovaPValue(const ::java::util::Collection & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_anovaPValue_1ab1799bb5ae5130], a0.this$);
        }

        jdouble OneWayAnova::anovaPValue(const ::java::util::Collection & a0, jboolean a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_anovaPValue_6ee7ccf8d95c41ad], a0.this$, a1);
        }

        jboolean OneWayAnova::anovaTest(const ::java::util::Collection & a0, jdouble a1) const
        {
          return env->callBooleanMethod(this$, mids$[mid_anovaTest_cee28d5d28508179], a0.this$, a1);
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
      namespace inference {
        static PyObject *t_OneWayAnova_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OneWayAnova_instance_(PyTypeObject *type, PyObject *arg);
        static int t_OneWayAnova_init_(t_OneWayAnova *self, PyObject *args, PyObject *kwds);
        static PyObject *t_OneWayAnova_anovaFValue(t_OneWayAnova *self, PyObject *arg);
        static PyObject *t_OneWayAnova_anovaPValue(t_OneWayAnova *self, PyObject *args);
        static PyObject *t_OneWayAnova_anovaTest(t_OneWayAnova *self, PyObject *args);

        static PyMethodDef t_OneWayAnova__methods_[] = {
          DECLARE_METHOD(t_OneWayAnova, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OneWayAnova, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OneWayAnova, anovaFValue, METH_O),
          DECLARE_METHOD(t_OneWayAnova, anovaPValue, METH_VARARGS),
          DECLARE_METHOD(t_OneWayAnova, anovaTest, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(OneWayAnova)[] = {
          { Py_tp_methods, t_OneWayAnova__methods_ },
          { Py_tp_init, (void *) t_OneWayAnova_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(OneWayAnova)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(OneWayAnova, t_OneWayAnova, OneWayAnova);

        void t_OneWayAnova::install(PyObject *module)
        {
          installType(&PY_TYPE(OneWayAnova), &PY_TYPE_DEF(OneWayAnova), module, "OneWayAnova", 0);
        }

        void t_OneWayAnova::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayAnova), "class_", make_descriptor(OneWayAnova::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayAnova), "wrapfn_", make_descriptor(t_OneWayAnova::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayAnova), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_OneWayAnova_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, OneWayAnova::initializeClass, 1)))
            return NULL;
          return t_OneWayAnova::wrap_Object(OneWayAnova(((t_OneWayAnova *) arg)->object.this$));
        }
        static PyObject *t_OneWayAnova_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, OneWayAnova::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_OneWayAnova_init_(t_OneWayAnova *self, PyObject *args, PyObject *kwds)
        {
          OneWayAnova object((jobject) NULL);

          INT_CALL(object = OneWayAnova());
          self->object = object;

          return 0;
        }

        static PyObject *t_OneWayAnova_anovaFValue(t_OneWayAnova *self, PyObject *arg)
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          jdouble result;

          if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
          {
            OBJ_CALL(result = self->object.anovaFValue(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "anovaFValue", arg);
          return NULL;
        }

        static PyObject *t_OneWayAnova_anovaPValue(t_OneWayAnova *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::java::util::Collection a0((jobject) NULL);
              PyTypeObject **p0;
              jdouble result;

              if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
              {
                OBJ_CALL(result = self->object.anovaPValue(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 2:
            {
              ::java::util::Collection a0((jobject) NULL);
              PyTypeObject **p0;
              jboolean a1;
              jdouble result;

              if (!parseArgs(args, "KZ", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_, &a1))
              {
                OBJ_CALL(result = self->object.anovaPValue(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "anovaPValue", args);
          return NULL;
        }

        static PyObject *t_OneWayAnova_anovaTest(t_OneWayAnova *self, PyObject *args)
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          jdouble a1;
          jboolean result;

          if (!parseArgs(args, "KD", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_, &a1))
          {
            OBJ_CALL(result = self->object.anovaTest(a0, a1));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "anovaTest", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/CalculusFieldMultivariateVectorFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *CalculusFieldMultivariateVectorFunction::class$ = NULL;
      jmethodID *CalculusFieldMultivariateVectorFunction::mids$ = NULL;
      bool CalculusFieldMultivariateVectorFunction::live$ = false;

      jclass CalculusFieldMultivariateVectorFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/CalculusFieldMultivariateVectorFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_a126e91ca3e53df2] = env->getMethodID(cls, "value", "([Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< ::org::hipparchus::CalculusFieldElement > CalculusFieldMultivariateVectorFunction::value(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_value_a126e91ca3e53df2], a0.this$));
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
      static PyObject *t_CalculusFieldMultivariateVectorFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CalculusFieldMultivariateVectorFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CalculusFieldMultivariateVectorFunction_of_(t_CalculusFieldMultivariateVectorFunction *self, PyObject *args);
      static PyObject *t_CalculusFieldMultivariateVectorFunction_value(t_CalculusFieldMultivariateVectorFunction *self, PyObject *arg);
      static PyObject *t_CalculusFieldMultivariateVectorFunction_get__parameters_(t_CalculusFieldMultivariateVectorFunction *self, void *data);
      static PyGetSetDef t_CalculusFieldMultivariateVectorFunction__fields_[] = {
        DECLARE_GET_FIELD(t_CalculusFieldMultivariateVectorFunction, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CalculusFieldMultivariateVectorFunction__methods_[] = {
        DECLARE_METHOD(t_CalculusFieldMultivariateVectorFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CalculusFieldMultivariateVectorFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CalculusFieldMultivariateVectorFunction, of_, METH_VARARGS),
        DECLARE_METHOD(t_CalculusFieldMultivariateVectorFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CalculusFieldMultivariateVectorFunction)[] = {
        { Py_tp_methods, t_CalculusFieldMultivariateVectorFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_CalculusFieldMultivariateVectorFunction__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CalculusFieldMultivariateVectorFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CalculusFieldMultivariateVectorFunction, t_CalculusFieldMultivariateVectorFunction, CalculusFieldMultivariateVectorFunction);
      PyObject *t_CalculusFieldMultivariateVectorFunction::wrap_Object(const CalculusFieldMultivariateVectorFunction& object, PyTypeObject *p0)
      {
        PyObject *obj = t_CalculusFieldMultivariateVectorFunction::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_CalculusFieldMultivariateVectorFunction *self = (t_CalculusFieldMultivariateVectorFunction *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_CalculusFieldMultivariateVectorFunction::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_CalculusFieldMultivariateVectorFunction::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_CalculusFieldMultivariateVectorFunction *self = (t_CalculusFieldMultivariateVectorFunction *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_CalculusFieldMultivariateVectorFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(CalculusFieldMultivariateVectorFunction), &PY_TYPE_DEF(CalculusFieldMultivariateVectorFunction), module, "CalculusFieldMultivariateVectorFunction", 0);
      }

      void t_CalculusFieldMultivariateVectorFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldMultivariateVectorFunction), "class_", make_descriptor(CalculusFieldMultivariateVectorFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldMultivariateVectorFunction), "wrapfn_", make_descriptor(t_CalculusFieldMultivariateVectorFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldMultivariateVectorFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CalculusFieldMultivariateVectorFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CalculusFieldMultivariateVectorFunction::initializeClass, 1)))
          return NULL;
        return t_CalculusFieldMultivariateVectorFunction::wrap_Object(CalculusFieldMultivariateVectorFunction(((t_CalculusFieldMultivariateVectorFunction *) arg)->object.this$));
      }
      static PyObject *t_CalculusFieldMultivariateVectorFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CalculusFieldMultivariateVectorFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_CalculusFieldMultivariateVectorFunction_of_(t_CalculusFieldMultivariateVectorFunction *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_CalculusFieldMultivariateVectorFunction_value(t_CalculusFieldMultivariateVectorFunction *self, PyObject *arg)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

        if (!parseArg(arg, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.value(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return NULL;
      }
      static PyObject *t_CalculusFieldMultivariateVectorFunction_get__parameters_(t_CalculusFieldMultivariateVectorFunction *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/PythonComparableMeasurement.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/ComparableMeasurement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *PythonComparableMeasurement::class$ = NULL;
        jmethodID *PythonComparableMeasurement::mids$ = NULL;
        bool PythonComparableMeasurement::live$ = false;

        jclass PythonComparableMeasurement::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/PythonComparableMeasurement");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_compareTo_0a393ed00cc2801f] = env->getMethodID(cls, "compareTo", "(Lorg/orekit/estimation/measurements/ComparableMeasurement;)I");
            mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getDate_7a97f7e149e79afb] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getObservedValue_a53a7513ecedada2] = env->getMethodID(cls, "getObservedValue", "()[D");
            mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonComparableMeasurement::PythonComparableMeasurement() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        void PythonComparableMeasurement::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
        }

        jlong PythonComparableMeasurement::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
        }

        void PythonComparableMeasurement::pythonExtension(jlong a0) const
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
    namespace estimation {
      namespace measurements {
        static PyObject *t_PythonComparableMeasurement_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonComparableMeasurement_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonComparableMeasurement_init_(t_PythonComparableMeasurement *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonComparableMeasurement_finalize(t_PythonComparableMeasurement *self);
        static PyObject *t_PythonComparableMeasurement_pythonExtension(t_PythonComparableMeasurement *self, PyObject *args);
        static jint JNICALL t_PythonComparableMeasurement_compareTo0(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonComparableMeasurement_getDate1(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonComparableMeasurement_getObservedValue2(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonComparableMeasurement_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonComparableMeasurement_get__self(t_PythonComparableMeasurement *self, void *data);
        static PyGetSetDef t_PythonComparableMeasurement__fields_[] = {
          DECLARE_GET_FIELD(t_PythonComparableMeasurement, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonComparableMeasurement__methods_[] = {
          DECLARE_METHOD(t_PythonComparableMeasurement, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonComparableMeasurement, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonComparableMeasurement, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonComparableMeasurement, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonComparableMeasurement)[] = {
          { Py_tp_methods, t_PythonComparableMeasurement__methods_ },
          { Py_tp_init, (void *) t_PythonComparableMeasurement_init_ },
          { Py_tp_getset, t_PythonComparableMeasurement__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonComparableMeasurement)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonComparableMeasurement, t_PythonComparableMeasurement, PythonComparableMeasurement);

        void t_PythonComparableMeasurement::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonComparableMeasurement), &PY_TYPE_DEF(PythonComparableMeasurement), module, "PythonComparableMeasurement", 1);
        }

        void t_PythonComparableMeasurement::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonComparableMeasurement), "class_", make_descriptor(PythonComparableMeasurement::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonComparableMeasurement), "wrapfn_", make_descriptor(t_PythonComparableMeasurement::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonComparableMeasurement), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonComparableMeasurement::initializeClass);
          JNINativeMethod methods[] = {
            { "compareTo", "(Lorg/orekit/estimation/measurements/ComparableMeasurement;)I", (void *) t_PythonComparableMeasurement_compareTo0 },
            { "getDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonComparableMeasurement_getDate1 },
            { "getObservedValue", "()[D", (void *) t_PythonComparableMeasurement_getObservedValue2 },
            { "pythonDecRef", "()V", (void *) t_PythonComparableMeasurement_pythonDecRef3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonComparableMeasurement_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonComparableMeasurement::initializeClass, 1)))
            return NULL;
          return t_PythonComparableMeasurement::wrap_Object(PythonComparableMeasurement(((t_PythonComparableMeasurement *) arg)->object.this$));
        }
        static PyObject *t_PythonComparableMeasurement_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonComparableMeasurement::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonComparableMeasurement_init_(t_PythonComparableMeasurement *self, PyObject *args, PyObject *kwds)
        {
          PythonComparableMeasurement object((jobject) NULL);

          INT_CALL(object = PythonComparableMeasurement());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonComparableMeasurement_finalize(t_PythonComparableMeasurement *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonComparableMeasurement_pythonExtension(t_PythonComparableMeasurement *self, PyObject *args)
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

        static jint JNICALL t_PythonComparableMeasurement_compareTo0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonComparableMeasurement::mids$[PythonComparableMeasurement::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jint value;
          PyObject *o0 = ::org::orekit::estimation::measurements::t_ComparableMeasurement::wrap_Object(::org::orekit::estimation::measurements::ComparableMeasurement(a0));
          PyObject *result = PyObject_CallMethod(obj, "compareTo", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "I", &value))
          {
            throwTypeError("compareTo", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jint) 0;
        }

        static jobject JNICALL t_PythonComparableMeasurement_getDate1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonComparableMeasurement::mids$[PythonComparableMeasurement::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getDate", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
          {
            throwTypeError("getDate", result);
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

        static jobject JNICALL t_PythonComparableMeasurement_getObservedValue2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonComparableMeasurement::mids$[PythonComparableMeasurement::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          JArray< jdouble > value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getObservedValue", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "[D", &value))
          {
            throwTypeError("getObservedValue", result);
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

        static void JNICALL t_PythonComparableMeasurement_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonComparableMeasurement::mids$[PythonComparableMeasurement::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonComparableMeasurement::mids$[PythonComparableMeasurement::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonComparableMeasurement_get__self(t_PythonComparableMeasurement *self, void *data)
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
#include "org/hipparchus/special/elliptic/jacobi/CopolarD.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {

          ::java::lang::Class *CopolarD::class$ = NULL;
          jmethodID *CopolarD::mids$ = NULL;
          bool CopolarD::live$ = false;

          jclass CopolarD::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/special/elliptic/jacobi/CopolarD");

              mids$ = new jmethodID[max_mid];
              mids$[mid_cd_557b8123390d8d0c] = env->getMethodID(cls, "cd", "()D");
              mids$[mid_nd_557b8123390d8d0c] = env->getMethodID(cls, "nd", "()D");
              mids$[mid_sd_557b8123390d8d0c] = env->getMethodID(cls, "sd", "()D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble CopolarD::cd() const
          {
            return env->callDoubleMethod(this$, mids$[mid_cd_557b8123390d8d0c]);
          }

          jdouble CopolarD::nd() const
          {
            return env->callDoubleMethod(this$, mids$[mid_nd_557b8123390d8d0c]);
          }

          jdouble CopolarD::sd() const
          {
            return env->callDoubleMethod(this$, mids$[mid_sd_557b8123390d8d0c]);
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
    namespace special {
      namespace elliptic {
        namespace jacobi {
          static PyObject *t_CopolarD_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CopolarD_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CopolarD_cd(t_CopolarD *self);
          static PyObject *t_CopolarD_nd(t_CopolarD *self);
          static PyObject *t_CopolarD_sd(t_CopolarD *self);

          static PyMethodDef t_CopolarD__methods_[] = {
            DECLARE_METHOD(t_CopolarD, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CopolarD, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CopolarD, cd, METH_NOARGS),
            DECLARE_METHOD(t_CopolarD, nd, METH_NOARGS),
            DECLARE_METHOD(t_CopolarD, sd, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CopolarD)[] = {
            { Py_tp_methods, t_CopolarD__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CopolarD)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(CopolarD, t_CopolarD, CopolarD);

          void t_CopolarD::install(PyObject *module)
          {
            installType(&PY_TYPE(CopolarD), &PY_TYPE_DEF(CopolarD), module, "CopolarD", 0);
          }

          void t_CopolarD::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CopolarD), "class_", make_descriptor(CopolarD::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CopolarD), "wrapfn_", make_descriptor(t_CopolarD::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CopolarD), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_CopolarD_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CopolarD::initializeClass, 1)))
              return NULL;
            return t_CopolarD::wrap_Object(CopolarD(((t_CopolarD *) arg)->object.this$));
          }
          static PyObject *t_CopolarD_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CopolarD::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_CopolarD_cd(t_CopolarD *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.cd());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CopolarD_nd(t_CopolarD *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.nd());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CopolarD_sd(t_CopolarD *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.sd());
            return PyFloat_FromDouble((double) result);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/text/ParseException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace text {

    ::java::lang::Class *ParseException::class$ = NULL;
    jmethodID *ParseException::mids$ = NULL;
    bool ParseException::live$ = false;

    jclass ParseException::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/text/ParseException");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_358501078068b45e] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;I)V");
        mids$[mid_getErrorOffset_412668abc8d889e9] = env->getMethodID(cls, "getErrorOffset", "()I");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ParseException::ParseException(const ::java::lang::String & a0, jint a1) : ::java::lang::Exception(env->newObject(initializeClass, &mids$, mid_init$_358501078068b45e, a0.this$, a1)) {}

    jint ParseException::getErrorOffset() const
    {
      return env->callIntMethod(this$, mids$[mid_getErrorOffset_412668abc8d889e9]);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace text {
    static PyObject *t_ParseException_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ParseException_instance_(PyTypeObject *type, PyObject *arg);
    static int t_ParseException_init_(t_ParseException *self, PyObject *args, PyObject *kwds);
    static PyObject *t_ParseException_getErrorOffset(t_ParseException *self);
    static PyObject *t_ParseException_get__errorOffset(t_ParseException *self, void *data);
    static PyGetSetDef t_ParseException__fields_[] = {
      DECLARE_GET_FIELD(t_ParseException, errorOffset),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_ParseException__methods_[] = {
      DECLARE_METHOD(t_ParseException, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ParseException, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ParseException, getErrorOffset, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(ParseException)[] = {
      { Py_tp_methods, t_ParseException__methods_ },
      { Py_tp_init, (void *) t_ParseException_init_ },
      { Py_tp_getset, t_ParseException__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(ParseException)[] = {
      &PY_TYPE_DEF(::java::lang::Exception),
      NULL
    };

    DEFINE_TYPE(ParseException, t_ParseException, ParseException);

    void t_ParseException::install(PyObject *module)
    {
      installType(&PY_TYPE(ParseException), &PY_TYPE_DEF(ParseException), module, "ParseException", 0);
    }

    void t_ParseException::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(ParseException), "class_", make_descriptor(ParseException::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ParseException), "wrapfn_", make_descriptor(t_ParseException::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ParseException), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_ParseException_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, ParseException::initializeClass, 1)))
        return NULL;
      return t_ParseException::wrap_Object(ParseException(((t_ParseException *) arg)->object.this$));
    }
    static PyObject *t_ParseException_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, ParseException::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_ParseException_init_(t_ParseException *self, PyObject *args, PyObject *kwds)
    {
      ::java::lang::String a0((jobject) NULL);
      jint a1;
      ParseException object((jobject) NULL);

      if (!parseArgs(args, "sI", &a0, &a1))
      {
        INT_CALL(object = ParseException(a0, a1));
        self->object = object;
      }
      else
      {
        PyErr_SetArgsError((PyObject *) self, "__init__", args);
        return -1;
      }

      return 0;
    }

    static PyObject *t_ParseException_getErrorOffset(t_ParseException *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getErrorOffset());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_ParseException_get__errorOffset(t_ParseException *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getErrorOffset());
      return PyLong_FromLong((long) value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/regression/UpdatingMultipleLinearRegression.h"
#include "org/hipparchus/stat/regression/RegressionResults.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace regression {

        ::java::lang::Class *UpdatingMultipleLinearRegression::class$ = NULL;
        jmethodID *UpdatingMultipleLinearRegression::mids$ = NULL;
        bool UpdatingMultipleLinearRegression::live$ = false;

        jclass UpdatingMultipleLinearRegression::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/regression/UpdatingMultipleLinearRegression");

            mids$ = new jmethodID[max_mid];
            mids$[mid_addObservation_3682f2e0c8382fe5] = env->getMethodID(cls, "addObservation", "([DD)V");
            mids$[mid_addObservations_122207bd161e9ddc] = env->getMethodID(cls, "addObservations", "([[D[D)V");
            mids$[mid_clear_0640e6acf969ed28] = env->getMethodID(cls, "clear", "()V");
            mids$[mid_getN_9e26256fb0d384a2] = env->getMethodID(cls, "getN", "()J");
            mids$[mid_hasIntercept_89b302893bdbe1f1] = env->getMethodID(cls, "hasIntercept", "()Z");
            mids$[mid_regress_2f78c8eefa6215e0] = env->getMethodID(cls, "regress", "()Lorg/hipparchus/stat/regression/RegressionResults;");
            mids$[mid_regress_bfd11e26913ff479] = env->getMethodID(cls, "regress", "([I)Lorg/hipparchus/stat/regression/RegressionResults;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void UpdatingMultipleLinearRegression::addObservation(const JArray< jdouble > & a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addObservation_3682f2e0c8382fe5], a0.this$, a1);
        }

        void UpdatingMultipleLinearRegression::addObservations(const JArray< JArray< jdouble > > & a0, const JArray< jdouble > & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addObservations_122207bd161e9ddc], a0.this$, a1.this$);
        }

        void UpdatingMultipleLinearRegression::clear() const
        {
          env->callVoidMethod(this$, mids$[mid_clear_0640e6acf969ed28]);
        }

        jlong UpdatingMultipleLinearRegression::getN() const
        {
          return env->callLongMethod(this$, mids$[mid_getN_9e26256fb0d384a2]);
        }

        jboolean UpdatingMultipleLinearRegression::hasIntercept() const
        {
          return env->callBooleanMethod(this$, mids$[mid_hasIntercept_89b302893bdbe1f1]);
        }

        ::org::hipparchus::stat::regression::RegressionResults UpdatingMultipleLinearRegression::regress() const
        {
          return ::org::hipparchus::stat::regression::RegressionResults(env->callObjectMethod(this$, mids$[mid_regress_2f78c8eefa6215e0]));
        }

        ::org::hipparchus::stat::regression::RegressionResults UpdatingMultipleLinearRegression::regress(const JArray< jint > & a0) const
        {
          return ::org::hipparchus::stat::regression::RegressionResults(env->callObjectMethod(this$, mids$[mid_regress_bfd11e26913ff479], a0.this$));
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
      namespace regression {
        static PyObject *t_UpdatingMultipleLinearRegression_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UpdatingMultipleLinearRegression_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UpdatingMultipleLinearRegression_addObservation(t_UpdatingMultipleLinearRegression *self, PyObject *args);
        static PyObject *t_UpdatingMultipleLinearRegression_addObservations(t_UpdatingMultipleLinearRegression *self, PyObject *args);
        static PyObject *t_UpdatingMultipleLinearRegression_clear(t_UpdatingMultipleLinearRegression *self);
        static PyObject *t_UpdatingMultipleLinearRegression_getN(t_UpdatingMultipleLinearRegression *self);
        static PyObject *t_UpdatingMultipleLinearRegression_hasIntercept(t_UpdatingMultipleLinearRegression *self);
        static PyObject *t_UpdatingMultipleLinearRegression_regress(t_UpdatingMultipleLinearRegression *self, PyObject *args);
        static PyObject *t_UpdatingMultipleLinearRegression_get__n(t_UpdatingMultipleLinearRegression *self, void *data);
        static PyGetSetDef t_UpdatingMultipleLinearRegression__fields_[] = {
          DECLARE_GET_FIELD(t_UpdatingMultipleLinearRegression, n),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_UpdatingMultipleLinearRegression__methods_[] = {
          DECLARE_METHOD(t_UpdatingMultipleLinearRegression, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UpdatingMultipleLinearRegression, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UpdatingMultipleLinearRegression, addObservation, METH_VARARGS),
          DECLARE_METHOD(t_UpdatingMultipleLinearRegression, addObservations, METH_VARARGS),
          DECLARE_METHOD(t_UpdatingMultipleLinearRegression, clear, METH_NOARGS),
          DECLARE_METHOD(t_UpdatingMultipleLinearRegression, getN, METH_NOARGS),
          DECLARE_METHOD(t_UpdatingMultipleLinearRegression, hasIntercept, METH_NOARGS),
          DECLARE_METHOD(t_UpdatingMultipleLinearRegression, regress, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UpdatingMultipleLinearRegression)[] = {
          { Py_tp_methods, t_UpdatingMultipleLinearRegression__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_UpdatingMultipleLinearRegression__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UpdatingMultipleLinearRegression)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UpdatingMultipleLinearRegression, t_UpdatingMultipleLinearRegression, UpdatingMultipleLinearRegression);

        void t_UpdatingMultipleLinearRegression::install(PyObject *module)
        {
          installType(&PY_TYPE(UpdatingMultipleLinearRegression), &PY_TYPE_DEF(UpdatingMultipleLinearRegression), module, "UpdatingMultipleLinearRegression", 0);
        }

        void t_UpdatingMultipleLinearRegression::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UpdatingMultipleLinearRegression), "class_", make_descriptor(UpdatingMultipleLinearRegression::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UpdatingMultipleLinearRegression), "wrapfn_", make_descriptor(t_UpdatingMultipleLinearRegression::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UpdatingMultipleLinearRegression), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UpdatingMultipleLinearRegression_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UpdatingMultipleLinearRegression::initializeClass, 1)))
            return NULL;
          return t_UpdatingMultipleLinearRegression::wrap_Object(UpdatingMultipleLinearRegression(((t_UpdatingMultipleLinearRegression *) arg)->object.this$));
        }
        static PyObject *t_UpdatingMultipleLinearRegression_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UpdatingMultipleLinearRegression::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UpdatingMultipleLinearRegression_addObservation(t_UpdatingMultipleLinearRegression *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          jdouble a1;

          if (!parseArgs(args, "[DD", &a0, &a1))
          {
            OBJ_CALL(self->object.addObservation(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addObservation", args);
          return NULL;
        }

        static PyObject *t_UpdatingMultipleLinearRegression_addObservations(t_UpdatingMultipleLinearRegression *self, PyObject *args)
        {
          JArray< JArray< jdouble > > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);

          if (!parseArgs(args, "[[D[D", &a0, &a1))
          {
            OBJ_CALL(self->object.addObservations(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addObservations", args);
          return NULL;
        }

        static PyObject *t_UpdatingMultipleLinearRegression_clear(t_UpdatingMultipleLinearRegression *self)
        {
          OBJ_CALL(self->object.clear());
          Py_RETURN_NONE;
        }

        static PyObject *t_UpdatingMultipleLinearRegression_getN(t_UpdatingMultipleLinearRegression *self)
        {
          jlong result;
          OBJ_CALL(result = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        static PyObject *t_UpdatingMultipleLinearRegression_hasIntercept(t_UpdatingMultipleLinearRegression *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.hasIntercept());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_UpdatingMultipleLinearRegression_regress(t_UpdatingMultipleLinearRegression *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::hipparchus::stat::regression::RegressionResults result((jobject) NULL);
              OBJ_CALL(result = self->object.regress());
              return ::org::hipparchus::stat::regression::t_RegressionResults::wrap_Object(result);
            }
            break;
           case 1:
            {
              JArray< jint > a0((jobject) NULL);
              ::org::hipparchus::stat::regression::RegressionResults result((jobject) NULL);

              if (!parseArgs(args, "[I", &a0))
              {
                OBJ_CALL(result = self->object.regress(a0));
                return ::org::hipparchus::stat::regression::t_RegressionResults::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "regress", args);
          return NULL;
        }

        static PyObject *t_UpdatingMultipleLinearRegression_get__n(t_UpdatingMultipleLinearRegression *self, void *data)
        {
          jlong value;
          OBJ_CALL(value = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/UnixCompressFilter.h"
#include "org/orekit/data/DataFilter.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataSource.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *UnixCompressFilter::class$ = NULL;
      jmethodID *UnixCompressFilter::mids$ = NULL;
      bool UnixCompressFilter::live$ = false;

      jclass UnixCompressFilter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/UnixCompressFilter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_filter_d33f4b0b3a1030ad] = env->getMethodID(cls, "filter", "(Lorg/orekit/data/DataSource;)Lorg/orekit/data/DataSource;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      UnixCompressFilter::UnixCompressFilter() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      ::org::orekit::data::DataSource UnixCompressFilter::filter(const ::org::orekit::data::DataSource & a0) const
      {
        return ::org::orekit::data::DataSource(env->callObjectMethod(this$, mids$[mid_filter_d33f4b0b3a1030ad], a0.this$));
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
      static PyObject *t_UnixCompressFilter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UnixCompressFilter_instance_(PyTypeObject *type, PyObject *arg);
      static int t_UnixCompressFilter_init_(t_UnixCompressFilter *self, PyObject *args, PyObject *kwds);
      static PyObject *t_UnixCompressFilter_filter(t_UnixCompressFilter *self, PyObject *arg);

      static PyMethodDef t_UnixCompressFilter__methods_[] = {
        DECLARE_METHOD(t_UnixCompressFilter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UnixCompressFilter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UnixCompressFilter, filter, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UnixCompressFilter)[] = {
        { Py_tp_methods, t_UnixCompressFilter__methods_ },
        { Py_tp_init, (void *) t_UnixCompressFilter_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UnixCompressFilter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(UnixCompressFilter, t_UnixCompressFilter, UnixCompressFilter);

      void t_UnixCompressFilter::install(PyObject *module)
      {
        installType(&PY_TYPE(UnixCompressFilter), &PY_TYPE_DEF(UnixCompressFilter), module, "UnixCompressFilter", 0);
      }

      void t_UnixCompressFilter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnixCompressFilter), "class_", make_descriptor(UnixCompressFilter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnixCompressFilter), "wrapfn_", make_descriptor(t_UnixCompressFilter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnixCompressFilter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_UnixCompressFilter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UnixCompressFilter::initializeClass, 1)))
          return NULL;
        return t_UnixCompressFilter::wrap_Object(UnixCompressFilter(((t_UnixCompressFilter *) arg)->object.this$));
      }
      static PyObject *t_UnixCompressFilter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UnixCompressFilter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_UnixCompressFilter_init_(t_UnixCompressFilter *self, PyObject *args, PyObject *kwds)
      {
        UnixCompressFilter object((jobject) NULL);

        INT_CALL(object = UnixCompressFilter());
        self->object = object;

        return 0;
      }

      static PyObject *t_UnixCompressFilter_filter(t_UnixCompressFilter *self, PyObject *arg)
      {
        ::org::orekit::data::DataSource a0((jobject) NULL);
        ::org::orekit::data::DataSource result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.filter(a0));
          return ::org::orekit::data::t_DataSource::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "filter", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/events/FieldODEEventHandler.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "org/hipparchus/ode/FieldODEState.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/events/FieldODEEventDetector.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/ode/events/Action.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *FieldODEEventHandler::class$ = NULL;
        jmethodID *FieldODEEventHandler::mids$ = NULL;
        bool FieldODEEventHandler::live$ = false;

        jclass FieldODEEventHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/FieldODEEventHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_eventOccurred_8cd57f25ffb2a49d] = env->getMethodID(cls, "eventOccurred", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/events/FieldODEEventDetector;Z)Lorg/hipparchus/ode/events/Action;");
            mids$[mid_init_cde3ce643bd77a29] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/ode/events/FieldODEEventDetector;)V");
            mids$[mid_resetState_89a2130370baafc4] = env->getMethodID(cls, "resetState", "(Lorg/hipparchus/ode/events/FieldODEEventDetector;Lorg/hipparchus/ode/FieldODEStateAndDerivative;)Lorg/hipparchus/ode/FieldODEState;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::ode::events::Action FieldODEEventHandler::eventOccurred(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, const ::org::hipparchus::ode::events::FieldODEEventDetector & a1, jboolean a2) const
        {
          return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_eventOccurred_8cd57f25ffb2a49d], a0.this$, a1.this$, a2));
        }

        void FieldODEEventHandler::init(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::ode::events::FieldODEEventDetector & a2) const
        {
          env->callVoidMethod(this$, mids$[mid_init_cde3ce643bd77a29], a0.this$, a1.this$, a2.this$);
        }

        ::org::hipparchus::ode::FieldODEState FieldODEEventHandler::resetState(const ::org::hipparchus::ode::events::FieldODEEventDetector & a0, const ::org::hipparchus::ode::FieldODEStateAndDerivative & a1) const
        {
          return ::org::hipparchus::ode::FieldODEState(env->callObjectMethod(this$, mids$[mid_resetState_89a2130370baafc4], a0.this$, a1.this$));
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
        static PyObject *t_FieldODEEventHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldODEEventHandler_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldODEEventHandler_of_(t_FieldODEEventHandler *self, PyObject *args);
        static PyObject *t_FieldODEEventHandler_eventOccurred(t_FieldODEEventHandler *self, PyObject *args);
        static PyObject *t_FieldODEEventHandler_init(t_FieldODEEventHandler *self, PyObject *args);
        static PyObject *t_FieldODEEventHandler_resetState(t_FieldODEEventHandler *self, PyObject *args);
        static PyObject *t_FieldODEEventHandler_get__parameters_(t_FieldODEEventHandler *self, void *data);
        static PyGetSetDef t_FieldODEEventHandler__fields_[] = {
          DECLARE_GET_FIELD(t_FieldODEEventHandler, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldODEEventHandler__methods_[] = {
          DECLARE_METHOD(t_FieldODEEventHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldODEEventHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldODEEventHandler, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldODEEventHandler, eventOccurred, METH_VARARGS),
          DECLARE_METHOD(t_FieldODEEventHandler, init, METH_VARARGS),
          DECLARE_METHOD(t_FieldODEEventHandler, resetState, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldODEEventHandler)[] = {
          { Py_tp_methods, t_FieldODEEventHandler__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldODEEventHandler__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldODEEventHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldODEEventHandler, t_FieldODEEventHandler, FieldODEEventHandler);
        PyObject *t_FieldODEEventHandler::wrap_Object(const FieldODEEventHandler& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldODEEventHandler::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldODEEventHandler *self = (t_FieldODEEventHandler *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldODEEventHandler::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldODEEventHandler::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldODEEventHandler *self = (t_FieldODEEventHandler *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldODEEventHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldODEEventHandler), &PY_TYPE_DEF(FieldODEEventHandler), module, "FieldODEEventHandler", 0);
        }

        void t_FieldODEEventHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEEventHandler), "class_", make_descriptor(FieldODEEventHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEEventHandler), "wrapfn_", make_descriptor(t_FieldODEEventHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEEventHandler), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldODEEventHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldODEEventHandler::initializeClass, 1)))
            return NULL;
          return t_FieldODEEventHandler::wrap_Object(FieldODEEventHandler(((t_FieldODEEventHandler *) arg)->object.this$));
        }
        static PyObject *t_FieldODEEventHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldODEEventHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldODEEventHandler_of_(t_FieldODEEventHandler *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldODEEventHandler_eventOccurred(t_FieldODEEventHandler *self, PyObject *args)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::ode::events::FieldODEEventDetector a1((jobject) NULL);
          PyTypeObject **p1;
          jboolean a2;
          ::org::hipparchus::ode::events::Action result((jobject) NULL);

          if (!parseArgs(args, "KKZ", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, ::org::hipparchus::ode::events::FieldODEEventDetector::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_, &a1, &p1, ::org::hipparchus::ode::events::t_FieldODEEventDetector::parameters_, &a2))
          {
            OBJ_CALL(result = self->object.eventOccurred(a0, a1, a2));
            return ::org::hipparchus::ode::events::t_Action::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "eventOccurred", args);
          return NULL;
        }

        static PyObject *t_FieldODEEventHandler_init(t_FieldODEEventHandler *self, PyObject *args)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::ode::events::FieldODEEventDetector a2((jobject) NULL);
          PyTypeObject **p2;

          if (!parseArgs(args, "KKK", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::ode::events::FieldODEEventDetector::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::ode::events::t_FieldODEEventDetector::parameters_))
          {
            OBJ_CALL(self->object.init(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }

        static PyObject *t_FieldODEEventHandler_resetState(t_FieldODEEventHandler *self, PyObject *args)
        {
          ::org::hipparchus::ode::events::FieldODEEventDetector a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::ode::FieldODEStateAndDerivative a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::ode::FieldODEState result((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::hipparchus::ode::events::FieldODEEventDetector::initializeClass, ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, &a0, &p0, ::org::hipparchus::ode::events::t_FieldODEEventDetector::parameters_, &a1, &p1, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_))
          {
            OBJ_CALL(result = self->object.resetState(a0, a1));
            return ::org::hipparchus::ode::t_FieldODEState::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "resetState", args);
          return NULL;
        }
        static PyObject *t_FieldODEEventHandler_get__parameters_(t_FieldODEEventHandler *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/FieldEcksteinHechlerPropagator.h"
#include "org/orekit/orbits/FieldCircularOrbit.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/util/List.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/orbits/FieldCartesianOrbit.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *FieldEcksteinHechlerPropagator::class$ = NULL;
        jmethodID *FieldEcksteinHechlerPropagator::mids$ = NULL;
        bool FieldEcksteinHechlerPropagator::live$ = false;

        jclass FieldEcksteinHechlerPropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/FieldEcksteinHechlerPropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ec031b66b07ecb90] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;)V");
            mids$[mid_init$_80a234ce81e37abb] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/propagation/PropagationType;)V");
            mids$[mid_init$_9cdfb4061632fec8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;)V");
            mids$[mid_init$_b34f75489d96f207] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;)V");
            mids$[mid_init$_bde9c375988a3010] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;)V");
            mids$[mid_init$_82f8dc253d3c59b3] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/propagation/PropagationType;)V");
            mids$[mid_init$_d0b2761d0f0f5a83] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;)V");
            mids$[mid_init$_06877b6db7691a80] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;Lorg/orekit/propagation/PropagationType;)V");
            mids$[mid_init$_b2558ce47031fa19] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;DLorg/hipparchus/CalculusFieldElement;DDDDD)V");
            mids$[mid_init$_64c0f5b0e2fdabea] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/hipparchus/CalculusFieldElement;DLorg/hipparchus/CalculusFieldElement;DDDDD)V");
            mids$[mid_init$_2a9edbe7aceb100e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;DLorg/hipparchus/CalculusFieldElement;DDDDD)V");
            mids$[mid_init$_0b72d5dce7fcac4a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;DLorg/hipparchus/CalculusFieldElement;DDDDD)V");
            mids$[mid_init$_99caca8adc04a715] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;DLorg/hipparchus/CalculusFieldElement;DDDDDLorg/orekit/propagation/PropagationType;)V");
            mids$[mid_init$_9f779a5d6e916e5e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;DLorg/hipparchus/CalculusFieldElement;DDDDDLorg/orekit/propagation/PropagationType;DI)V");
            mids$[mid_computeMeanOrbit_eee8410a133b4699] = env->getStaticMethodID(cls, "computeMeanOrbit", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;)Lorg/orekit/orbits/FieldCircularOrbit;");
            mids$[mid_computeMeanOrbit_63fa5e3123158b2a] = env->getStaticMethodID(cls, "computeMeanOrbit", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;DI)Lorg/orekit/orbits/FieldCircularOrbit;");
            mids$[mid_computeMeanOrbit_ce208041cae640be] = env->getStaticMethodID(cls, "computeMeanOrbit", "(Lorg/orekit/orbits/FieldOrbit;DDDDDDDDI)Lorg/orekit/orbits/FieldCircularOrbit;");
            mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_propagateOrbit_e5485dda82f9ba8c] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/orbits/FieldCartesianOrbit;");
            mids$[mid_resetInitialState_b66c84a5711243d5] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
            mids$[mid_resetInitialState_9c62e0ce1624c4ca] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/PropagationType;)V");
            mids$[mid_resetInitialState_239ff49419dc21a7] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/PropagationType;DI)V");
            mids$[mid_resetIntermediateState_585702d5a402c590] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/FieldSpacecraftState;Z)V");
            mids$[mid_resetIntermediateState_9d68be2ff2b1080e] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/FieldSpacecraftState;ZDI)V");
            mids$[mid_getMass_b884068a2c99f6ca] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldEcksteinHechlerPropagator::FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_ec031b66b07ecb90, a0.this$, a1.this$)) {}

        FieldEcksteinHechlerPropagator::FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, const ::org::orekit::propagation::PropagationType & a2) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_80a234ce81e37abb, a0.this$, a1.this$, a2.this$)) {}

        FieldEcksteinHechlerPropagator::FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a2) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_9cdfb4061632fec8, a0.this$, a1.this$, a2.this$)) {}

        FieldEcksteinHechlerPropagator::FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a2) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_b34f75489d96f207, a0.this$, a1.this$, a2.this$)) {}

        FieldEcksteinHechlerPropagator::FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_bde9c375988a3010, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        FieldEcksteinHechlerPropagator::FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3, const ::org::orekit::propagation::PropagationType & a4) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_82f8dc253d3c59b3, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

        FieldEcksteinHechlerPropagator::FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics & a4) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_d0b2761d0f0f5a83, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

        FieldEcksteinHechlerPropagator::FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics & a4, const ::org::orekit::propagation::PropagationType & a5) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_06877b6db7691a80, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

        FieldEcksteinHechlerPropagator::FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit & a0, jdouble a1, const ::org::hipparchus::CalculusFieldElement & a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_b2558ce47031fa19, a0.this$, a1, a2.this$, a3, a4, a5, a6, a7)) {}

        FieldEcksteinHechlerPropagator::FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::hipparchus::CalculusFieldElement & a1, jdouble a2, const ::org::hipparchus::CalculusFieldElement & a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_64c0f5b0e2fdabea, a0.this$, a1.this$, a2, a3.this$, a4, a5, a6, a7, a8)) {}

        FieldEcksteinHechlerPropagator::FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, const ::org::hipparchus::CalculusFieldElement & a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_2a9edbe7aceb100e, a0.this$, a1.this$, a2, a3.this$, a4, a5, a6, a7, a8)) {}

        FieldEcksteinHechlerPropagator::FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, jdouble a3, const ::org::hipparchus::CalculusFieldElement & a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_0b72d5dce7fcac4a, a0.this$, a1.this$, a2.this$, a3, a4.this$, a5, a6, a7, a8, a9)) {}

        FieldEcksteinHechlerPropagator::FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, jdouble a3, const ::org::hipparchus::CalculusFieldElement & a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, const ::org::orekit::propagation::PropagationType & a10) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_99caca8adc04a715, a0.this$, a1.this$, a2.this$, a3, a4.this$, a5, a6, a7, a8, a9, a10.this$)) {}

        FieldEcksteinHechlerPropagator::FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, jdouble a3, const ::org::hipparchus::CalculusFieldElement & a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, const ::org::orekit::propagation::PropagationType & a10, jdouble a11, jint a12) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_9f779a5d6e916e5e, a0.this$, a1.this$, a2.this$, a3, a4.this$, a5, a6, a7, a8, a9, a10.this$, a11, a12)) {}

        ::org::orekit::orbits::FieldCircularOrbit FieldEcksteinHechlerPropagator::computeMeanOrbit(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics & a2)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::orbits::FieldCircularOrbit(env->callStaticObjectMethod(cls, mids$[mid_computeMeanOrbit_eee8410a133b4699], a0.this$, a1.this$, a2.this$));
        }

        ::org::orekit::orbits::FieldCircularOrbit FieldEcksteinHechlerPropagator::computeMeanOrbit(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics & a2, jdouble a3, jint a4)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::orbits::FieldCircularOrbit(env->callStaticObjectMethod(cls, mids$[mid_computeMeanOrbit_63fa5e3123158b2a], a0.this$, a1.this$, a2.this$, a3, a4));
        }

        ::org::orekit::orbits::FieldCircularOrbit FieldEcksteinHechlerPropagator::computeMeanOrbit(const ::org::orekit::orbits::FieldOrbit & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jint a9)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::orbits::FieldCircularOrbit(env->callStaticObjectMethod(cls, mids$[mid_computeMeanOrbit_ce208041cae640be], a0.this$, a1, a2, a3, a4, a5, a6, a7, a8, a9));
        }

        ::java::util::List FieldEcksteinHechlerPropagator::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
        }

        ::org::orekit::orbits::FieldCartesianOrbit FieldEcksteinHechlerPropagator::propagateOrbit(const ::org::orekit::time::FieldAbsoluteDate & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::orekit::orbits::FieldCartesianOrbit(env->callObjectMethod(this$, mids$[mid_propagateOrbit_e5485dda82f9ba8c], a0.this$, a1.this$));
        }

        void FieldEcksteinHechlerPropagator::resetInitialState(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_b66c84a5711243d5], a0.this$);
        }

        void FieldEcksteinHechlerPropagator::resetInitialState(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::PropagationType & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_9c62e0ce1624c4ca], a0.this$, a1.this$);
        }

        void FieldEcksteinHechlerPropagator::resetInitialState(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::PropagationType & a1, jdouble a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_239ff49419dc21a7], a0.this$, a1.this$, a2, a3);
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
        static PyObject *t_FieldEcksteinHechlerPropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEcksteinHechlerPropagator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEcksteinHechlerPropagator_of_(t_FieldEcksteinHechlerPropagator *self, PyObject *args);
        static int t_FieldEcksteinHechlerPropagator_init_(t_FieldEcksteinHechlerPropagator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldEcksteinHechlerPropagator_computeMeanOrbit(PyTypeObject *type, PyObject *args);
        static PyObject *t_FieldEcksteinHechlerPropagator_getParametersDrivers(t_FieldEcksteinHechlerPropagator *self, PyObject *args);
        static PyObject *t_FieldEcksteinHechlerPropagator_propagateOrbit(t_FieldEcksteinHechlerPropagator *self, PyObject *args);
        static PyObject *t_FieldEcksteinHechlerPropagator_resetInitialState(t_FieldEcksteinHechlerPropagator *self, PyObject *args);
        static PyObject *t_FieldEcksteinHechlerPropagator_get__parametersDrivers(t_FieldEcksteinHechlerPropagator *self, void *data);
        static PyObject *t_FieldEcksteinHechlerPropagator_get__parameters_(t_FieldEcksteinHechlerPropagator *self, void *data);
        static PyGetSetDef t_FieldEcksteinHechlerPropagator__fields_[] = {
          DECLARE_GET_FIELD(t_FieldEcksteinHechlerPropagator, parametersDrivers),
          DECLARE_GET_FIELD(t_FieldEcksteinHechlerPropagator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldEcksteinHechlerPropagator__methods_[] = {
          DECLARE_METHOD(t_FieldEcksteinHechlerPropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEcksteinHechlerPropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEcksteinHechlerPropagator, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldEcksteinHechlerPropagator, computeMeanOrbit, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_FieldEcksteinHechlerPropagator, getParametersDrivers, METH_VARARGS),
          DECLARE_METHOD(t_FieldEcksteinHechlerPropagator, propagateOrbit, METH_VARARGS),
          DECLARE_METHOD(t_FieldEcksteinHechlerPropagator, resetInitialState, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldEcksteinHechlerPropagator)[] = {
          { Py_tp_methods, t_FieldEcksteinHechlerPropagator__methods_ },
          { Py_tp_init, (void *) t_FieldEcksteinHechlerPropagator_init_ },
          { Py_tp_getset, t_FieldEcksteinHechlerPropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldEcksteinHechlerPropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator),
          NULL
        };

        DEFINE_TYPE(FieldEcksteinHechlerPropagator, t_FieldEcksteinHechlerPropagator, FieldEcksteinHechlerPropagator);
        PyObject *t_FieldEcksteinHechlerPropagator::wrap_Object(const FieldEcksteinHechlerPropagator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEcksteinHechlerPropagator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEcksteinHechlerPropagator *self = (t_FieldEcksteinHechlerPropagator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldEcksteinHechlerPropagator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEcksteinHechlerPropagator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEcksteinHechlerPropagator *self = (t_FieldEcksteinHechlerPropagator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldEcksteinHechlerPropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldEcksteinHechlerPropagator), &PY_TYPE_DEF(FieldEcksteinHechlerPropagator), module, "FieldEcksteinHechlerPropagator", 0);
        }

        void t_FieldEcksteinHechlerPropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEcksteinHechlerPropagator), "class_", make_descriptor(FieldEcksteinHechlerPropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEcksteinHechlerPropagator), "wrapfn_", make_descriptor(t_FieldEcksteinHechlerPropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEcksteinHechlerPropagator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldEcksteinHechlerPropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldEcksteinHechlerPropagator::initializeClass, 1)))
            return NULL;
          return t_FieldEcksteinHechlerPropagator::wrap_Object(FieldEcksteinHechlerPropagator(((t_FieldEcksteinHechlerPropagator *) arg)->object.this$));
        }
        static PyObject *t_FieldEcksteinHechlerPropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldEcksteinHechlerPropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldEcksteinHechlerPropagator_of_(t_FieldEcksteinHechlerPropagator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldEcksteinHechlerPropagator_init_(t_FieldEcksteinHechlerPropagator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              FieldEcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "Kk", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1))
              {
                INT_CALL(object = FieldEcksteinHechlerPropagator(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              ::org::orekit::propagation::PropagationType a2((jobject) NULL);
              PyTypeObject **p2;
              FieldEcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "KkK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &p2, ::org::orekit::propagation::t_PropagationType::parameters_))
              {
                INT_CALL(object = FieldEcksteinHechlerPropagator(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a2((jobject) NULL);
              FieldEcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "KKk", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2))
              {
                INT_CALL(object = FieldEcksteinHechlerPropagator(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a2((jobject) NULL);
              FieldEcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "Kkk", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2))
              {
                INT_CALL(object = FieldEcksteinHechlerPropagator(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a3((jobject) NULL);
              FieldEcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "KkKk", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                INT_CALL(object = FieldEcksteinHechlerPropagator(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a3((jobject) NULL);
              ::org::orekit::propagation::PropagationType a4((jobject) NULL);
              PyTypeObject **p4;
              FieldEcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "KkKkK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::orekit::propagation::t_PropagationType::parameters_))
              {
                INT_CALL(object = FieldEcksteinHechlerPropagator(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a3((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics a4((jobject) NULL);
              FieldEcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "KkKkk", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4))
              {
                INT_CALL(object = FieldEcksteinHechlerPropagator(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
            goto err;
           case 6:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a3((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics a4((jobject) NULL);
              ::org::orekit::propagation::PropagationType a5((jobject) NULL);
              PyTypeObject **p5;
              FieldEcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "KkKkkK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &a5, &p5, ::org::orekit::propagation::t_PropagationType::parameters_))
              {
                INT_CALL(object = FieldEcksteinHechlerPropagator(a0, a1, a2, a3, a4, a5));
                self->object = object;
                break;
              }
            }
            goto err;
           case 8:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              jdouble a1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              FieldEcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "KDKDDDDD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &a5, &a6, &a7))
              {
                INT_CALL(object = FieldEcksteinHechlerPropagator(a0, a1, a2, a3, a4, a5, a6, a7));
                self->object = object;
                break;
              }
            }
            goto err;
           case 9:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              FieldEcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "KKDKDDDDD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &a5, &a6, &a7, &a8))
              {
                INT_CALL(object = FieldEcksteinHechlerPropagator(a0, a1, a2, a3, a4, a5, a6, a7, a8));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              jdouble a2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              FieldEcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "KkDKDDDDD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &a5, &a6, &a7, &a8))
              {
                INT_CALL(object = FieldEcksteinHechlerPropagator(a0, a1, a2, a3, a4, a5, a6, a7, a8));
                self->object = object;
                break;
              }
            }
            goto err;
           case 10:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              jdouble a3;
              ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
              PyTypeObject **p4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              jdouble a9;
              FieldEcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "KkKDKDDDDD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &a6, &a7, &a8, &a9))
              {
                INT_CALL(object = FieldEcksteinHechlerPropagator(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
                self->object = object;
                break;
              }
            }
            goto err;
           case 11:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              jdouble a3;
              ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
              PyTypeObject **p4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              jdouble a9;
              ::org::orekit::propagation::PropagationType a10((jobject) NULL);
              PyTypeObject **p10;
              FieldEcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "KkKDKDDDDDK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &a6, &a7, &a8, &a9, &a10, &p10, ::org::orekit::propagation::t_PropagationType::parameters_))
              {
                INT_CALL(object = FieldEcksteinHechlerPropagator(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10));
                self->object = object;
                break;
              }
            }
            goto err;
           case 13:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              jdouble a3;
              ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
              PyTypeObject **p4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              jdouble a9;
              ::org::orekit::propagation::PropagationType a10((jobject) NULL);
              PyTypeObject **p10;
              jdouble a11;
              jint a12;
              FieldEcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "KkKDKDDDDDKDI", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &a6, &a7, &a8, &a9, &a10, &p10, ::org::orekit::propagation::t_PropagationType::parameters_, &a11, &a12))
              {
                INT_CALL(object = FieldEcksteinHechlerPropagator(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12));
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

        static PyObject *t_FieldEcksteinHechlerPropagator_computeMeanOrbit(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics a2((jobject) NULL);
              ::org::orekit::orbits::FieldCircularOrbit result((jobject) NULL);

              if (!parseArgs(args, "Kkk", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2))
              {
                OBJ_CALL(result = ::org::orekit::propagation::analytical::FieldEcksteinHechlerPropagator::computeMeanOrbit(a0, a1, a2));
                return ::org::orekit::orbits::t_FieldCircularOrbit::wrap_Object(result);
              }
            }
            break;
           case 5:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics a2((jobject) NULL);
              jdouble a3;
              jint a4;
              ::org::orekit::orbits::FieldCircularOrbit result((jobject) NULL);

              if (!parseArgs(args, "KkkDI", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &a3, &a4))
              {
                OBJ_CALL(result = ::org::orekit::propagation::analytical::FieldEcksteinHechlerPropagator::computeMeanOrbit(a0, a1, a2, a3, a4));
                return ::org::orekit::orbits::t_FieldCircularOrbit::wrap_Object(result);
              }
            }
            break;
           case 10:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              jint a9;
              ::org::orekit::orbits::FieldCircularOrbit result((jobject) NULL);

              if (!parseArgs(args, "KDDDDDDDDI", ::org::orekit::orbits::FieldOrbit::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9))
              {
                OBJ_CALL(result = ::org::orekit::propagation::analytical::FieldEcksteinHechlerPropagator::computeMeanOrbit(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
                return ::org::orekit::orbits::t_FieldCircularOrbit::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError(type, "computeMeanOrbit", args);
          return NULL;
        }

        static PyObject *t_FieldEcksteinHechlerPropagator_getParametersDrivers(t_FieldEcksteinHechlerPropagator *self, PyObject *args)
        {
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          return callSuper(PY_TYPE(FieldEcksteinHechlerPropagator), (PyObject *) self, "getParametersDrivers", args, 2);
        }

        static PyObject *t_FieldEcksteinHechlerPropagator_propagateOrbit(t_FieldEcksteinHechlerPropagator *self, PyObject *args)
        {
          ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::orbits::FieldCartesianOrbit result((jobject) NULL);

          if (!parseArgs(args, "K[K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.propagateOrbit(a0, a1));
            return ::org::orekit::orbits::t_FieldCartesianOrbit::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "propagateOrbit", args);
          return NULL;
        }

        static PyObject *t_FieldEcksteinHechlerPropagator_resetInitialState(t_FieldEcksteinHechlerPropagator *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
              {
                OBJ_CALL(self->object.resetInitialState(a0));
                Py_RETURN_NONE;
              }
            }
            break;
           case 2:
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::propagation::PropagationType a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "KK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_))
              {
                OBJ_CALL(self->object.resetInitialState(a0, a1));
                Py_RETURN_NONE;
              }
            }
            break;
           case 4:
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::propagation::PropagationType a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              jint a3;

              if (!parseArgs(args, "KKDI", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_, &a2, &a3))
              {
                OBJ_CALL(self->object.resetInitialState(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          return callSuper(PY_TYPE(FieldEcksteinHechlerPropagator), (PyObject *) self, "resetInitialState", args, 2);
        }
        static PyObject *t_FieldEcksteinHechlerPropagator_get__parameters_(t_FieldEcksteinHechlerPropagator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldEcksteinHechlerPropagator_get__parametersDrivers(t_FieldEcksteinHechlerPropagator *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}

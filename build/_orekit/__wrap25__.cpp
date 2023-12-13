#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment.h"
#include "org/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *SpacecraftBodyFrame$BaseEquipment::class$ = NULL;
          jmethodID *SpacecraftBodyFrame$BaseEquipment::mids$ = NULL;
          bool SpacecraftBodyFrame$BaseEquipment::live$ = false;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::ACC = NULL;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::ACTUATOR = NULL;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::AST = NULL;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::CSS = NULL;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::DSS = NULL;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::ESA = NULL;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::GYRO = NULL;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::GYRO_FRAME = NULL;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::IMU_FRAME = NULL;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::INSTRUMENT = NULL;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::MTA = NULL;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::RW = NULL;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::SA = NULL;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::SC_BODY = NULL;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::SENSOR = NULL;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::STARTRACKER = NULL;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::TAM = NULL;

          jclass SpacecraftBodyFrame$BaseEquipment::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment");

              mids$ = new jmethodID[max_mid];
              mids$[mid_valueOf_c2d81f675eebcce6] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;");
              mids$[mid_values_250ddefb6ebe6a52] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              ACC = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "ACC", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              ACTUATOR = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "ACTUATOR", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              AST = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "AST", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              CSS = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "CSS", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              DSS = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "DSS", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              ESA = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "ESA", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              GYRO = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "GYRO", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              GYRO_FRAME = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "GYRO_FRAME", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              IMU_FRAME = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "IMU_FRAME", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              INSTRUMENT = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "INSTRUMENT", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              MTA = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "MTA", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              RW = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "RW", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              SA = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "SA", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              SC_BODY = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "SC_BODY", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              SENSOR = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "SENSOR", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              STARTRACKER = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "STARTRACKER", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              TAM = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "TAM", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SpacecraftBodyFrame$BaseEquipment SpacecraftBodyFrame$BaseEquipment::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return SpacecraftBodyFrame$BaseEquipment(env->callStaticObjectMethod(cls, mids$[mid_valueOf_c2d81f675eebcce6], a0.this$));
          }

          JArray< SpacecraftBodyFrame$BaseEquipment > SpacecraftBodyFrame$BaseEquipment::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< SpacecraftBodyFrame$BaseEquipment >(env->callStaticObjectMethod(cls, mids$[mid_values_250ddefb6ebe6a52]));
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
          static PyObject *t_SpacecraftBodyFrame$BaseEquipment_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SpacecraftBodyFrame$BaseEquipment_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SpacecraftBodyFrame$BaseEquipment_of_(t_SpacecraftBodyFrame$BaseEquipment *self, PyObject *args);
          static PyObject *t_SpacecraftBodyFrame$BaseEquipment_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_SpacecraftBodyFrame$BaseEquipment_values(PyTypeObject *type);
          static PyObject *t_SpacecraftBodyFrame$BaseEquipment_get__parameters_(t_SpacecraftBodyFrame$BaseEquipment *self, void *data);
          static PyGetSetDef t_SpacecraftBodyFrame$BaseEquipment__fields_[] = {
            DECLARE_GET_FIELD(t_SpacecraftBodyFrame$BaseEquipment, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SpacecraftBodyFrame$BaseEquipment__methods_[] = {
            DECLARE_METHOD(t_SpacecraftBodyFrame$BaseEquipment, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SpacecraftBodyFrame$BaseEquipment, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SpacecraftBodyFrame$BaseEquipment, of_, METH_VARARGS),
            DECLARE_METHOD(t_SpacecraftBodyFrame$BaseEquipment, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_SpacecraftBodyFrame$BaseEquipment, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SpacecraftBodyFrame$BaseEquipment)[] = {
            { Py_tp_methods, t_SpacecraftBodyFrame$BaseEquipment__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SpacecraftBodyFrame$BaseEquipment__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SpacecraftBodyFrame$BaseEquipment)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(SpacecraftBodyFrame$BaseEquipment, t_SpacecraftBodyFrame$BaseEquipment, SpacecraftBodyFrame$BaseEquipment);
          PyObject *t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(const SpacecraftBodyFrame$BaseEquipment& object, PyTypeObject *p0)
          {
            PyObject *obj = t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SpacecraftBodyFrame$BaseEquipment *self = (t_SpacecraftBodyFrame$BaseEquipment *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_SpacecraftBodyFrame$BaseEquipment::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_SpacecraftBodyFrame$BaseEquipment::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SpacecraftBodyFrame$BaseEquipment *self = (t_SpacecraftBodyFrame$BaseEquipment *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_SpacecraftBodyFrame$BaseEquipment::install(PyObject *module)
          {
            installType(&PY_TYPE(SpacecraftBodyFrame$BaseEquipment), &PY_TYPE_DEF(SpacecraftBodyFrame$BaseEquipment), module, "SpacecraftBodyFrame$BaseEquipment", 0);
          }

          void t_SpacecraftBodyFrame$BaseEquipment::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "class_", make_descriptor(SpacecraftBodyFrame$BaseEquipment::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "wrapfn_", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "boxfn_", make_descriptor(boxObject));
            env->getClass(SpacecraftBodyFrame$BaseEquipment::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "ACC", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::ACC)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "ACTUATOR", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::ACTUATOR)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "AST", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::AST)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "CSS", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::CSS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "DSS", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::DSS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "ESA", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::ESA)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "GYRO", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::GYRO)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "GYRO_FRAME", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::GYRO_FRAME)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "IMU_FRAME", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::IMU_FRAME)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "INSTRUMENT", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::INSTRUMENT)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "MTA", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::MTA)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "RW", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::RW)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "SA", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::SA)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "SC_BODY", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::SC_BODY)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "SENSOR", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::SENSOR)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "STARTRACKER", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::STARTRACKER)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "TAM", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::TAM)));
          }

          static PyObject *t_SpacecraftBodyFrame$BaseEquipment_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SpacecraftBodyFrame$BaseEquipment::initializeClass, 1)))
              return NULL;
            return t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(SpacecraftBodyFrame$BaseEquipment(((t_SpacecraftBodyFrame$BaseEquipment *) arg)->object.this$));
          }
          static PyObject *t_SpacecraftBodyFrame$BaseEquipment_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SpacecraftBodyFrame$BaseEquipment::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SpacecraftBodyFrame$BaseEquipment_of_(t_SpacecraftBodyFrame$BaseEquipment *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_SpacecraftBodyFrame$BaseEquipment_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            SpacecraftBodyFrame$BaseEquipment result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame$BaseEquipment::valueOf(a0));
              return t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_SpacecraftBodyFrame$BaseEquipment_values(PyTypeObject *type)
          {
            JArray< SpacecraftBodyFrame$BaseEquipment > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame$BaseEquipment::values());
            return JArray<jobject>(result.this$).wrap(t_SpacecraftBodyFrame$BaseEquipment::wrap_jobject);
          }
          static PyObject *t_SpacecraftBodyFrame$BaseEquipment_get__parameters_(t_SpacecraftBodyFrame$BaseEquipment *self, void *data)
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
#include "org/hipparchus/geometry/euclidean/threed/Euclidean3D.h"
#include "org/hipparchus/geometry/Space.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/geometry/euclidean/threed/Euclidean3D.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/twod/Euclidean2D.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *Euclidean3D::class$ = NULL;
          jmethodID *Euclidean3D::mids$ = NULL;
          bool Euclidean3D::live$ = false;

          jclass Euclidean3D::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/Euclidean3D");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getDimension_55546ef6a647f39b] = env->getMethodID(cls, "getDimension", "()I");
              mids$[mid_getInstance_88ee1c467f3fd489] = env->getStaticMethodID(cls, "getInstance", "()Lorg/hipparchus/geometry/euclidean/threed/Euclidean3D;");
              mids$[mid_getSubSpace_378fd1928e817aa0] = env->getMethodID(cls, "getSubSpace", "()Lorg/hipparchus/geometry/euclidean/twod/Euclidean2D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jint Euclidean3D::getDimension() const
          {
            return env->callIntMethod(this$, mids$[mid_getDimension_55546ef6a647f39b]);
          }

          Euclidean3D Euclidean3D::getInstance()
          {
            jclass cls = env->getClass(initializeClass);
            return Euclidean3D(env->callStaticObjectMethod(cls, mids$[mid_getInstance_88ee1c467f3fd489]));
          }

          ::org::hipparchus::geometry::euclidean::twod::Euclidean2D Euclidean3D::getSubSpace() const
          {
            return ::org::hipparchus::geometry::euclidean::twod::Euclidean2D(env->callObjectMethod(this$, mids$[mid_getSubSpace_378fd1928e817aa0]));
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
          static PyObject *t_Euclidean3D_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Euclidean3D_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Euclidean3D_getDimension(t_Euclidean3D *self);
          static PyObject *t_Euclidean3D_getInstance(PyTypeObject *type);
          static PyObject *t_Euclidean3D_getSubSpace(t_Euclidean3D *self);
          static PyObject *t_Euclidean3D_get__dimension(t_Euclidean3D *self, void *data);
          static PyObject *t_Euclidean3D_get__instance(t_Euclidean3D *self, void *data);
          static PyObject *t_Euclidean3D_get__subSpace(t_Euclidean3D *self, void *data);
          static PyGetSetDef t_Euclidean3D__fields_[] = {
            DECLARE_GET_FIELD(t_Euclidean3D, dimension),
            DECLARE_GET_FIELD(t_Euclidean3D, instance),
            DECLARE_GET_FIELD(t_Euclidean3D, subSpace),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Euclidean3D__methods_[] = {
            DECLARE_METHOD(t_Euclidean3D, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Euclidean3D, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Euclidean3D, getDimension, METH_NOARGS),
            DECLARE_METHOD(t_Euclidean3D, getInstance, METH_NOARGS | METH_CLASS),
            DECLARE_METHOD(t_Euclidean3D, getSubSpace, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Euclidean3D)[] = {
            { Py_tp_methods, t_Euclidean3D__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_Euclidean3D__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Euclidean3D)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Euclidean3D, t_Euclidean3D, Euclidean3D);

          void t_Euclidean3D::install(PyObject *module)
          {
            installType(&PY_TYPE(Euclidean3D), &PY_TYPE_DEF(Euclidean3D), module, "Euclidean3D", 0);
          }

          void t_Euclidean3D::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Euclidean3D), "class_", make_descriptor(Euclidean3D::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Euclidean3D), "wrapfn_", make_descriptor(t_Euclidean3D::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Euclidean3D), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Euclidean3D_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Euclidean3D::initializeClass, 1)))
              return NULL;
            return t_Euclidean3D::wrap_Object(Euclidean3D(((t_Euclidean3D *) arg)->object.this$));
          }
          static PyObject *t_Euclidean3D_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Euclidean3D::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Euclidean3D_getDimension(t_Euclidean3D *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getDimension());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_Euclidean3D_getInstance(PyTypeObject *type)
          {
            Euclidean3D result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::Euclidean3D::getInstance());
            return t_Euclidean3D::wrap_Object(result);
          }

          static PyObject *t_Euclidean3D_getSubSpace(t_Euclidean3D *self)
          {
            ::org::hipparchus::geometry::euclidean::twod::Euclidean2D result((jobject) NULL);
            OBJ_CALL(result = self->object.getSubSpace());
            return ::org::hipparchus::geometry::euclidean::twod::t_Euclidean2D::wrap_Object(result);
          }

          static PyObject *t_Euclidean3D_get__dimension(t_Euclidean3D *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getDimension());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_Euclidean3D_get__instance(t_Euclidean3D *self, void *data)
          {
            Euclidean3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getInstance());
            return t_Euclidean3D::wrap_Object(value);
          }

          static PyObject *t_Euclidean3D_get__subSpace(t_Euclidean3D *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::twod::Euclidean2D value((jobject) NULL);
            OBJ_CALL(value = self->object.getSubSpace());
            return ::org::hipparchus::geometry::euclidean::twod::t_Euclidean2D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/YawCompensation.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/AttitudeProviderModifier.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *YawCompensation::class$ = NULL;
      jmethodID *YawCompensation::mids$ = NULL;
      bool YawCompensation::live$ = false;

      jclass YawCompensation::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/YawCompensation");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_4fd6b68216eca075] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/attitudes/GroundPointing;)V");
          mids$[mid_getAttitude_21845cfb0034fe1c] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getAttitude_896ee4d68989b1e8] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getBaseState_896ee4d68989b1e8] = env->getMethodID(cls, "getBaseState", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getBaseState_21845cfb0034fe1c] = env->getMethodID(cls, "getBaseState", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getTargetPV_0c9a6603286e7c6f] = env->getMethodID(cls, "getTargetPV", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getTargetPV_4a6b199bd28f952f] = env->getMethodID(cls, "getTargetPV", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_getUnderlyingAttitudeProvider_331f12bb6017243b] = env->getMethodID(cls, "getUnderlyingAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");
          mids$[mid_getYawAngle_d53e9b0dc6051605] = env->getMethodID(cls, "getYawAngle", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getYawAngle_b886623ec50269a5] = env->getMethodID(cls, "getYawAngle", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      YawCompensation::YawCompensation(const ::org::orekit::frames::Frame & a0, const ::org::orekit::attitudes::GroundPointing & a1) : ::org::orekit::attitudes::GroundPointing(env->newObject(initializeClass, &mids$, mid_init$_4fd6b68216eca075, a0.this$, a1.this$)) {}

      ::org::orekit::attitudes::Attitude YawCompensation::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_21845cfb0034fe1c], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::FieldAttitude YawCompensation::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_896ee4d68989b1e8], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::FieldAttitude YawCompensation::getBaseState(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getBaseState_896ee4d68989b1e8], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::Attitude YawCompensation::getBaseState(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getBaseState_21845cfb0034fe1c], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates YawCompensation::getTargetPV(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getTargetPV_0c9a6603286e7c6f], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates YawCompensation::getTargetPV(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getTargetPV_4a6b199bd28f952f], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::AttitudeProvider YawCompensation::getUnderlyingAttitudeProvider() const
      {
        return ::org::orekit::attitudes::AttitudeProvider(env->callObjectMethod(this$, mids$[mid_getUnderlyingAttitudeProvider_331f12bb6017243b]));
      }

      ::org::hipparchus::CalculusFieldElement YawCompensation::getYawAngle(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getYawAngle_d53e9b0dc6051605], a0.this$, a1.this$, a2.this$));
      }

      jdouble YawCompensation::getYawAngle(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getYawAngle_b886623ec50269a5], a0.this$, a1.this$, a2.this$);
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
      static PyObject *t_YawCompensation_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_YawCompensation_instance_(PyTypeObject *type, PyObject *arg);
      static int t_YawCompensation_init_(t_YawCompensation *self, PyObject *args, PyObject *kwds);
      static PyObject *t_YawCompensation_getAttitude(t_YawCompensation *self, PyObject *args);
      static PyObject *t_YawCompensation_getBaseState(t_YawCompensation *self, PyObject *args);
      static PyObject *t_YawCompensation_getTargetPV(t_YawCompensation *self, PyObject *args);
      static PyObject *t_YawCompensation_getUnderlyingAttitudeProvider(t_YawCompensation *self);
      static PyObject *t_YawCompensation_getYawAngle(t_YawCompensation *self, PyObject *args);
      static PyObject *t_YawCompensation_get__underlyingAttitudeProvider(t_YawCompensation *self, void *data);
      static PyGetSetDef t_YawCompensation__fields_[] = {
        DECLARE_GET_FIELD(t_YawCompensation, underlyingAttitudeProvider),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_YawCompensation__methods_[] = {
        DECLARE_METHOD(t_YawCompensation, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_YawCompensation, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_YawCompensation, getAttitude, METH_VARARGS),
        DECLARE_METHOD(t_YawCompensation, getBaseState, METH_VARARGS),
        DECLARE_METHOD(t_YawCompensation, getTargetPV, METH_VARARGS),
        DECLARE_METHOD(t_YawCompensation, getUnderlyingAttitudeProvider, METH_NOARGS),
        DECLARE_METHOD(t_YawCompensation, getYawAngle, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(YawCompensation)[] = {
        { Py_tp_methods, t_YawCompensation__methods_ },
        { Py_tp_init, (void *) t_YawCompensation_init_ },
        { Py_tp_getset, t_YawCompensation__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(YawCompensation)[] = {
        &PY_TYPE_DEF(::org::orekit::attitudes::GroundPointing),
        NULL
      };

      DEFINE_TYPE(YawCompensation, t_YawCompensation, YawCompensation);

      void t_YawCompensation::install(PyObject *module)
      {
        installType(&PY_TYPE(YawCompensation), &PY_TYPE_DEF(YawCompensation), module, "YawCompensation", 0);
      }

      void t_YawCompensation::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(YawCompensation), "class_", make_descriptor(YawCompensation::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(YawCompensation), "wrapfn_", make_descriptor(t_YawCompensation::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(YawCompensation), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_YawCompensation_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, YawCompensation::initializeClass, 1)))
          return NULL;
        return t_YawCompensation::wrap_Object(YawCompensation(((t_YawCompensation *) arg)->object.this$));
      }
      static PyObject *t_YawCompensation_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, YawCompensation::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_YawCompensation_init_(t_YawCompensation *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::orekit::attitudes::GroundPointing a1((jobject) NULL);
        YawCompensation object((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::attitudes::GroundPointing::initializeClass, &a0, &a1))
        {
          INT_CALL(object = YawCompensation(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_YawCompensation_getAttitude(t_YawCompensation *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
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
        }

        return callSuper(PY_TYPE(YawCompensation), (PyObject *) self, "getAttitude", args, 2);
      }

      static PyObject *t_YawCompensation_getBaseState(t_YawCompensation *self, PyObject *args)
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
              OBJ_CALL(result = self->object.getBaseState(a0, a1, a2));
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
              OBJ_CALL(result = self->object.getBaseState(a0, a1, a2));
              return ::org::orekit::attitudes::t_FieldAttitude::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getBaseState", args);
        return NULL;
      }

      static PyObject *t_YawCompensation_getTargetPV(t_YawCompensation *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getTargetPV(a0, a1, a2));
              return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getTargetPV(a0, a1, a2));
              return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getTargetPV", args);
        return NULL;
      }

      static PyObject *t_YawCompensation_getUnderlyingAttitudeProvider(t_YawCompensation *self)
      {
        ::org::orekit::attitudes::AttitudeProvider result((jobject) NULL);
        OBJ_CALL(result = self->object.getUnderlyingAttitudeProvider());
        return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(result);
      }

      static PyObject *t_YawCompensation_getYawAngle(t_YawCompensation *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getYawAngle(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getYawAngle(a0, a1, a2));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getYawAngle", args);
        return NULL;
      }

      static PyObject *t_YawCompensation_get__underlyingAttitudeProvider(t_YawCompensation *self, void *data)
      {
        ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
        OBJ_CALL(value = self->object.getUnderlyingAttitudeProvider());
        return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/PythonAbstractLambdaMethod.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *PythonAbstractLambdaMethod::class$ = NULL;
          jmethodID *PythonAbstractLambdaMethod::mids$ = NULL;
          bool PythonAbstractLambdaMethod::live$ = false;

          jclass PythonAbstractLambdaMethod::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/PythonAbstractLambdaMethod");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_discreteSearch_a1fa5dae97ea5ed2] = env->getMethodID(cls, "discreteSearch", "()V");
              mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_inverseDecomposition_a1fa5dae97ea5ed2] = env->getMethodID(cls, "inverseDecomposition", "()V");
              mids$[mid_ltdlDecomposition_a1fa5dae97ea5ed2] = env->getMethodID(cls, "ltdlDecomposition", "()V");
              mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");
              mids$[mid_reduction_a1fa5dae97ea5ed2] = env->getMethodID(cls, "reduction", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonAbstractLambdaMethod::PythonAbstractLambdaMethod() : ::org::orekit::estimation::measurements::gnss::AbstractLambdaMethod(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          void PythonAbstractLambdaMethod::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
          }

          jlong PythonAbstractLambdaMethod::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
          }

          void PythonAbstractLambdaMethod::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
          static PyObject *t_PythonAbstractLambdaMethod_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractLambdaMethod_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonAbstractLambdaMethod_init_(t_PythonAbstractLambdaMethod *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonAbstractLambdaMethod_finalize(t_PythonAbstractLambdaMethod *self);
          static PyObject *t_PythonAbstractLambdaMethod_pythonExtension(t_PythonAbstractLambdaMethod *self, PyObject *args);
          static void JNICALL t_PythonAbstractLambdaMethod_discreteSearch0(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonAbstractLambdaMethod_inverseDecomposition1(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonAbstractLambdaMethod_ltdlDecomposition2(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonAbstractLambdaMethod_pythonDecRef3(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonAbstractLambdaMethod_reduction4(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonAbstractLambdaMethod_get__self(t_PythonAbstractLambdaMethod *self, void *data);
          static PyGetSetDef t_PythonAbstractLambdaMethod__fields_[] = {
            DECLARE_GET_FIELD(t_PythonAbstractLambdaMethod, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonAbstractLambdaMethod__methods_[] = {
            DECLARE_METHOD(t_PythonAbstractLambdaMethod, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractLambdaMethod, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractLambdaMethod, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractLambdaMethod, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonAbstractLambdaMethod)[] = {
            { Py_tp_methods, t_PythonAbstractLambdaMethod__methods_ },
            { Py_tp_init, (void *) t_PythonAbstractLambdaMethod_init_ },
            { Py_tp_getset, t_PythonAbstractLambdaMethod__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonAbstractLambdaMethod)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::AbstractLambdaMethod),
            NULL
          };

          DEFINE_TYPE(PythonAbstractLambdaMethod, t_PythonAbstractLambdaMethod, PythonAbstractLambdaMethod);

          void t_PythonAbstractLambdaMethod::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonAbstractLambdaMethod), &PY_TYPE_DEF(PythonAbstractLambdaMethod), module, "PythonAbstractLambdaMethod", 1);
          }

          void t_PythonAbstractLambdaMethod::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractLambdaMethod), "class_", make_descriptor(PythonAbstractLambdaMethod::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractLambdaMethod), "wrapfn_", make_descriptor(t_PythonAbstractLambdaMethod::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractLambdaMethod), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonAbstractLambdaMethod::initializeClass);
            JNINativeMethod methods[] = {
              { "discreteSearch", "()V", (void *) t_PythonAbstractLambdaMethod_discreteSearch0 },
              { "inverseDecomposition", "()V", (void *) t_PythonAbstractLambdaMethod_inverseDecomposition1 },
              { "ltdlDecomposition", "()V", (void *) t_PythonAbstractLambdaMethod_ltdlDecomposition2 },
              { "pythonDecRef", "()V", (void *) t_PythonAbstractLambdaMethod_pythonDecRef3 },
              { "reduction", "()V", (void *) t_PythonAbstractLambdaMethod_reduction4 },
            };
            env->registerNatives(cls, methods, 5);
          }

          static PyObject *t_PythonAbstractLambdaMethod_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonAbstractLambdaMethod::initializeClass, 1)))
              return NULL;
            return t_PythonAbstractLambdaMethod::wrap_Object(PythonAbstractLambdaMethod(((t_PythonAbstractLambdaMethod *) arg)->object.this$));
          }
          static PyObject *t_PythonAbstractLambdaMethod_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonAbstractLambdaMethod::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonAbstractLambdaMethod_init_(t_PythonAbstractLambdaMethod *self, PyObject *args, PyObject *kwds)
          {
            PythonAbstractLambdaMethod object((jobject) NULL);

            INT_CALL(object = PythonAbstractLambdaMethod());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonAbstractLambdaMethod_finalize(t_PythonAbstractLambdaMethod *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonAbstractLambdaMethod_pythonExtension(t_PythonAbstractLambdaMethod *self, PyObject *args)
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

          static void JNICALL t_PythonAbstractLambdaMethod_discreteSearch0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractLambdaMethod::mids$[PythonAbstractLambdaMethod::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *result = PyObject_CallMethod(obj, "discreteSearch", "");
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonAbstractLambdaMethod_inverseDecomposition1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractLambdaMethod::mids$[PythonAbstractLambdaMethod::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *result = PyObject_CallMethod(obj, "inverseDecomposition", "");
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonAbstractLambdaMethod_ltdlDecomposition2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractLambdaMethod::mids$[PythonAbstractLambdaMethod::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *result = PyObject_CallMethod(obj, "ltdlDecomposition", "");
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonAbstractLambdaMethod_pythonDecRef3(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractLambdaMethod::mids$[PythonAbstractLambdaMethod::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonAbstractLambdaMethod::mids$[PythonAbstractLambdaMethod::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static void JNICALL t_PythonAbstractLambdaMethod_reduction4(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractLambdaMethod::mids$[PythonAbstractLambdaMethod::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *result = PyObject_CallMethod(obj, "reduction", "");
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static PyObject *t_PythonAbstractLambdaMethod_get__self(t_PythonAbstractLambdaMethod *self, void *data)
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
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/threed/Plane.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "org/hipparchus/geometry/partitioning/Embedding.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "org/hipparchus/geometry/euclidean/threed/Line.h"
#include "org/hipparchus/geometry/euclidean/threed/Euclidean3D.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Plane.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/geometry/euclidean/threed/SubPlane.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/hipparchus/geometry/euclidean/threed/PolyhedronsSet.h"
#include "org/hipparchus/geometry/Vector.h"
#include "org/hipparchus/geometry/euclidean/twod/Euclidean2D.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *Plane::class$ = NULL;
          jmethodID *Plane::mids$ = NULL;
          bool Plane::live$ = false;

          jclass Plane::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/Plane");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_4f2529905f184526] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)V");
              mids$[mid_init$_4fbea8fa1cddeb2d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)V");
              mids$[mid_init$_0035d60a845c4ec5] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)V");
              mids$[mid_contains_82d995e738c9e027] = env->getMethodID(cls, "contains", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Z");
              mids$[mid_copySelf_b56871b2e706380d] = env->getMethodID(cls, "copySelf", "()Lorg/hipparchus/geometry/euclidean/threed/Plane;");
              mids$[mid_emptyHyperplane_25ec594b320f384f] = env->getMethodID(cls, "emptyHyperplane", "()Lorg/hipparchus/geometry/euclidean/threed/SubPlane;");
              mids$[mid_getNormal_8b724f8b4fdad1a2] = env->getMethodID(cls, "getNormal", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getOffset_194128a9734e96f1] = env->getMethodID(cls, "getOffset", "(Lorg/hipparchus/geometry/euclidean/threed/Plane;)D");
              mids$[mid_getOffset_f0dd8cb59ea09794] = env->getMethodID(cls, "getOffset", "(Lorg/hipparchus/geometry/Point;)D");
              mids$[mid_getOffset_2f915fa9762130df] = env->getMethodID(cls, "getOffset", "(Lorg/hipparchus/geometry/Vector;)D");
              mids$[mid_getOrigin_8b724f8b4fdad1a2] = env->getMethodID(cls, "getOrigin", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getPointAt_a46843b09338a6b2] = env->getMethodID(cls, "getPointAt", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getTolerance_b74f83833fdad017] = env->getMethodID(cls, "getTolerance", "()D");
              mids$[mid_getU_8b724f8b4fdad1a2] = env->getMethodID(cls, "getU", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getV_8b724f8b4fdad1a2] = env->getMethodID(cls, "getV", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_intersection_e47e722c2bd142aa] = env->getMethodID(cls, "intersection", "(Lorg/hipparchus/geometry/euclidean/threed/Line;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_intersection_9a2d2d972a13926d] = env->getMethodID(cls, "intersection", "(Lorg/hipparchus/geometry/euclidean/threed/Plane;)Lorg/hipparchus/geometry/euclidean/threed/Line;");
              mids$[mid_intersection_c1a28ed04e77e58a] = env->getStaticMethodID(cls, "intersection", "(Lorg/hipparchus/geometry/euclidean/threed/Plane;Lorg/hipparchus/geometry/euclidean/threed/Plane;Lorg/hipparchus/geometry/euclidean/threed/Plane;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_isSimilarTo_0ce9611235040c3a] = env->getMethodID(cls, "isSimilarTo", "(Lorg/hipparchus/geometry/euclidean/threed/Plane;)Z");
              mids$[mid_project_2214f7ad5b6ca158] = env->getMethodID(cls, "project", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/Point;");
              mids$[mid_reset_f1cc4a0d1d70e436] = env->getMethodID(cls, "reset", "(Lorg/hipparchus/geometry/euclidean/threed/Plane;)V");
              mids$[mid_reset_b651b5ef96594ce8] = env->getMethodID(cls, "reset", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_revertSelf_a1fa5dae97ea5ed2] = env->getMethodID(cls, "revertSelf", "()V");
              mids$[mid_rotate_8cce0f7fbdd637a5] = env->getMethodID(cls, "rotate", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Rotation;)Lorg/hipparchus/geometry/euclidean/threed/Plane;");
              mids$[mid_sameOrientationAs_806ecfbca1984226] = env->getMethodID(cls, "sameOrientationAs", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;)Z");
              mids$[mid_toSpace_c015d3ffc61ff7f9] = env->getMethodID(cls, "toSpace", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_toSpace_e21381ba36e4ea13] = env->getMethodID(cls, "toSpace", "(Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_toSubSpace_541d7608593f5738] = env->getMethodID(cls, "toSubSpace", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_toSubSpace_4f90fdb34b7d1107] = env->getMethodID(cls, "toSubSpace", "(Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_translate_80ab4636868c985a] = env->getMethodID(cls, "translate", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Plane;");
              mids$[mid_wholeHyperplane_25ec594b320f384f] = env->getMethodID(cls, "wholeHyperplane", "()Lorg/hipparchus/geometry/euclidean/threed/SubPlane;");
              mids$[mid_wholeSpace_9d13f34dd62656fc] = env->getMethodID(cls, "wholeSpace", "()Lorg/hipparchus/geometry/euclidean/threed/PolyhedronsSet;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Plane::Plane(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4f2529905f184526, a0.this$, a1)) {}

          Plane::Plane(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4fbea8fa1cddeb2d, a0.this$, a1.this$, a2)) {}

          Plane::Plane(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0035d60a845c4ec5, a0.this$, a1.this$, a2.this$, a3)) {}

          jboolean Plane::contains(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_contains_82d995e738c9e027], a0.this$);
          }

          Plane Plane::copySelf() const
          {
            return Plane(env->callObjectMethod(this$, mids$[mid_copySelf_b56871b2e706380d]));
          }

          ::org::hipparchus::geometry::euclidean::threed::SubPlane Plane::emptyHyperplane() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::SubPlane(env->callObjectMethod(this$, mids$[mid_emptyHyperplane_25ec594b320f384f]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Plane::getNormal() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getNormal_8b724f8b4fdad1a2]));
          }

          jdouble Plane::getOffset(const Plane & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOffset_194128a9734e96f1], a0.this$);
          }

          jdouble Plane::getOffset(const ::org::hipparchus::geometry::Point & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOffset_f0dd8cb59ea09794], a0.this$);
          }

          jdouble Plane::getOffset(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOffset_2f915fa9762130df], a0.this$);
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Plane::getOrigin() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getOrigin_8b724f8b4fdad1a2]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Plane::getPointAt(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0, jdouble a1) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPointAt_a46843b09338a6b2], a0.this$, a1));
          }

          jdouble Plane::getTolerance() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getTolerance_b74f83833fdad017]);
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Plane::getU() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getU_8b724f8b4fdad1a2]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Plane::getV() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getV_8b724f8b4fdad1a2]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Plane::intersection(const ::org::hipparchus::geometry::euclidean::threed::Line & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_intersection_e47e722c2bd142aa], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Line Plane::intersection(const Plane & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Line(env->callObjectMethod(this$, mids$[mid_intersection_9a2d2d972a13926d], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Plane::intersection(const Plane & a0, const Plane & a1, const Plane & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callStaticObjectMethod(cls, mids$[mid_intersection_c1a28ed04e77e58a], a0.this$, a1.this$, a2.this$));
          }

          jboolean Plane::isSimilarTo(const Plane & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_isSimilarTo_0ce9611235040c3a], a0.this$);
          }

          ::org::hipparchus::geometry::Point Plane::project(const ::org::hipparchus::geometry::Point & a0) const
          {
            return ::org::hipparchus::geometry::Point(env->callObjectMethod(this$, mids$[mid_project_2214f7ad5b6ca158], a0.this$));
          }

          void Plane::reset(const Plane & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_reset_f1cc4a0d1d70e436], a0.this$);
          }

          void Plane::reset(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_reset_b651b5ef96594ce8], a0.this$, a1.this$);
          }

          void Plane::revertSelf() const
          {
            env->callVoidMethod(this$, mids$[mid_revertSelf_a1fa5dae97ea5ed2]);
          }

          Plane Plane::rotate(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Rotation & a1) const
          {
            return Plane(env->callObjectMethod(this$, mids$[mid_rotate_8cce0f7fbdd637a5], a0.this$, a1.this$));
          }

          jboolean Plane::sameOrientationAs(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_sameOrientationAs_806ecfbca1984226], a0.this$);
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Plane::toSpace(const ::org::hipparchus::geometry::Point & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_toSpace_c015d3ffc61ff7f9], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Plane::toSpace(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_toSpace_e21381ba36e4ea13], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::twod::Vector2D Plane::toSubSpace(const ::org::hipparchus::geometry::Point & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_toSubSpace_541d7608593f5738], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::twod::Vector2D Plane::toSubSpace(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_toSubSpace_4f90fdb34b7d1107], a0.this$));
          }

          Plane Plane::translate(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return Plane(env->callObjectMethod(this$, mids$[mid_translate_80ab4636868c985a], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::SubPlane Plane::wholeHyperplane() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::SubPlane(env->callObjectMethod(this$, mids$[mid_wholeHyperplane_25ec594b320f384f]));
          }

          ::org::hipparchus::geometry::euclidean::threed::PolyhedronsSet Plane::wholeSpace() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::PolyhedronsSet(env->callObjectMethod(this$, mids$[mid_wholeSpace_9d13f34dd62656fc]));
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
          static PyObject *t_Plane_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Plane_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Plane_init_(t_Plane *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Plane_contains(t_Plane *self, PyObject *arg);
          static PyObject *t_Plane_copySelf(t_Plane *self);
          static PyObject *t_Plane_emptyHyperplane(t_Plane *self);
          static PyObject *t_Plane_getNormal(t_Plane *self);
          static PyObject *t_Plane_getOffset(t_Plane *self, PyObject *args);
          static PyObject *t_Plane_getOrigin(t_Plane *self);
          static PyObject *t_Plane_getPointAt(t_Plane *self, PyObject *args);
          static PyObject *t_Plane_getTolerance(t_Plane *self);
          static PyObject *t_Plane_getU(t_Plane *self);
          static PyObject *t_Plane_getV(t_Plane *self);
          static PyObject *t_Plane_intersection(t_Plane *self, PyObject *args);
          static PyObject *t_Plane_intersection_(PyTypeObject *type, PyObject *args);
          static PyObject *t_Plane_isSimilarTo(t_Plane *self, PyObject *arg);
          static PyObject *t_Plane_project(t_Plane *self, PyObject *arg);
          static PyObject *t_Plane_reset(t_Plane *self, PyObject *args);
          static PyObject *t_Plane_revertSelf(t_Plane *self);
          static PyObject *t_Plane_rotate(t_Plane *self, PyObject *args);
          static PyObject *t_Plane_sameOrientationAs(t_Plane *self, PyObject *arg);
          static PyObject *t_Plane_toSpace(t_Plane *self, PyObject *args);
          static PyObject *t_Plane_toSubSpace(t_Plane *self, PyObject *args);
          static PyObject *t_Plane_translate(t_Plane *self, PyObject *arg);
          static PyObject *t_Plane_wholeHyperplane(t_Plane *self);
          static PyObject *t_Plane_wholeSpace(t_Plane *self);
          static PyObject *t_Plane_get__normal(t_Plane *self, void *data);
          static PyObject *t_Plane_get__origin(t_Plane *self, void *data);
          static PyObject *t_Plane_get__tolerance(t_Plane *self, void *data);
          static PyObject *t_Plane_get__u(t_Plane *self, void *data);
          static PyObject *t_Plane_get__v(t_Plane *self, void *data);
          static PyGetSetDef t_Plane__fields_[] = {
            DECLARE_GET_FIELD(t_Plane, normal),
            DECLARE_GET_FIELD(t_Plane, origin),
            DECLARE_GET_FIELD(t_Plane, tolerance),
            DECLARE_GET_FIELD(t_Plane, u),
            DECLARE_GET_FIELD(t_Plane, v),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Plane__methods_[] = {
            DECLARE_METHOD(t_Plane, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Plane, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Plane, contains, METH_O),
            DECLARE_METHOD(t_Plane, copySelf, METH_NOARGS),
            DECLARE_METHOD(t_Plane, emptyHyperplane, METH_NOARGS),
            DECLARE_METHOD(t_Plane, getNormal, METH_NOARGS),
            DECLARE_METHOD(t_Plane, getOffset, METH_VARARGS),
            DECLARE_METHOD(t_Plane, getOrigin, METH_NOARGS),
            DECLARE_METHOD(t_Plane, getPointAt, METH_VARARGS),
            DECLARE_METHOD(t_Plane, getTolerance, METH_NOARGS),
            DECLARE_METHOD(t_Plane, getU, METH_NOARGS),
            DECLARE_METHOD(t_Plane, getV, METH_NOARGS),
            DECLARE_METHOD(t_Plane, intersection, METH_VARARGS),
            DECLARE_METHOD(t_Plane, intersection_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Plane, isSimilarTo, METH_O),
            DECLARE_METHOD(t_Plane, project, METH_O),
            DECLARE_METHOD(t_Plane, reset, METH_VARARGS),
            DECLARE_METHOD(t_Plane, revertSelf, METH_NOARGS),
            DECLARE_METHOD(t_Plane, rotate, METH_VARARGS),
            DECLARE_METHOD(t_Plane, sameOrientationAs, METH_O),
            DECLARE_METHOD(t_Plane, toSpace, METH_VARARGS),
            DECLARE_METHOD(t_Plane, toSubSpace, METH_VARARGS),
            DECLARE_METHOD(t_Plane, translate, METH_O),
            DECLARE_METHOD(t_Plane, wholeHyperplane, METH_NOARGS),
            DECLARE_METHOD(t_Plane, wholeSpace, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Plane)[] = {
            { Py_tp_methods, t_Plane__methods_ },
            { Py_tp_init, (void *) t_Plane_init_ },
            { Py_tp_getset, t_Plane__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Plane)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Plane, t_Plane, Plane);

          void t_Plane::install(PyObject *module)
          {
            installType(&PY_TYPE(Plane), &PY_TYPE_DEF(Plane), module, "Plane", 0);
          }

          void t_Plane::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Plane), "class_", make_descriptor(Plane::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Plane), "wrapfn_", make_descriptor(t_Plane::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Plane), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Plane_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Plane::initializeClass, 1)))
              return NULL;
            return t_Plane::wrap_Object(Plane(((t_Plane *) arg)->object.this$));
          }
          static PyObject *t_Plane_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Plane::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Plane_init_(t_Plane *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                jdouble a1;
                Plane object((jobject) NULL);

                if (!parseArgs(args, "kD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = Plane(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                jdouble a2;
                Plane object((jobject) NULL);

                if (!parseArgs(args, "kkD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = Plane(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
                jdouble a3;
                Plane object((jobject) NULL);

                if (!parseArgs(args, "kkkD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = Plane(a0, a1, a2, a3));
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

          static PyObject *t_Plane_contains(t_Plane *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.contains(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "contains", arg);
            return NULL;
          }

          static PyObject *t_Plane_copySelf(t_Plane *self)
          {
            Plane result((jobject) NULL);
            OBJ_CALL(result = self->object.copySelf());
            return t_Plane::wrap_Object(result);
          }

          static PyObject *t_Plane_emptyHyperplane(t_Plane *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::SubPlane result((jobject) NULL);
            OBJ_CALL(result = self->object.emptyHyperplane());
            return ::org::hipparchus::geometry::euclidean::threed::t_SubPlane::wrap_Object(result);
          }

          static PyObject *t_Plane_getNormal(t_Plane *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getNormal());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Plane_getOffset(t_Plane *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                Plane a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k", Plane::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getOffset(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::geometry::Point a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble result;

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
                {
                  OBJ_CALL(result = self->object.getOffset(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::geometry::Vector a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble result;

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.getOffset(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getOffset", args);
            return NULL;
          }

          static PyObject *t_Plane_getOrigin(t_Plane *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getOrigin());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Plane_getPointAt(t_Plane *self, PyObject *args)
          {
            ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
            jdouble a1;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getPointAt(a0, a1));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getPointAt", args);
            return NULL;
          }

          static PyObject *t_Plane_getTolerance(t_Plane *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getTolerance());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Plane_getU(t_Plane *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getU());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Plane_getV(t_Plane *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getV());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Plane_intersection(t_Plane *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::euclidean::threed::Line a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Line::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.intersection(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
              {
                Plane a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Line result((jobject) NULL);

                if (!parseArgs(args, "k", Plane::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.intersection(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Line::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "intersection", args);
            return NULL;
          }

          static PyObject *t_Plane_intersection_(PyTypeObject *type, PyObject *args)
          {
            Plane a0((jobject) NULL);
            Plane a1((jobject) NULL);
            Plane a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "kkk", Plane::initializeClass, Plane::initializeClass, Plane::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::Plane::intersection(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "intersection_", args);
            return NULL;
          }

          static PyObject *t_Plane_isSimilarTo(t_Plane *self, PyObject *arg)
          {
            Plane a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "k", Plane::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.isSimilarTo(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "isSimilarTo", arg);
            return NULL;
          }

          static PyObject *t_Plane_project(t_Plane *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Point a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::Point result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
            {
              OBJ_CALL(result = self->object.project(a0));
              return ::org::hipparchus::geometry::t_Point::wrap_Object(result, ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Euclidean3D));
            }

            PyErr_SetArgsError((PyObject *) self, "project", arg);
            return NULL;
          }

          static PyObject *t_Plane_reset(t_Plane *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                Plane a0((jobject) NULL);

                if (!parseArgs(args, "k", Plane::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.reset(a0));
                  Py_RETURN_NONE;
                }
              }
              break;
             case 2:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(self->object.reset(a0, a1));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "reset", args);
            return NULL;
          }

          static PyObject *t_Plane_revertSelf(t_Plane *self)
          {
            OBJ_CALL(self->object.revertSelf());
            Py_RETURN_NONE;
          }

          static PyObject *t_Plane_rotate(t_Plane *self, PyObject *args)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation a1((jobject) NULL);
            Plane result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.rotate(a0, a1));
              return t_Plane::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "rotate", args);
            return NULL;
          }

          static PyObject *t_Plane_sameOrientationAs(t_Plane *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_))
            {
              OBJ_CALL(result = self->object.sameOrientationAs(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "sameOrientationAs", arg);
            return NULL;
          }

          static PyObject *t_Plane_toSpace(t_Plane *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::Point a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
                {
                  OBJ_CALL(result = self->object.toSpace(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::Vector a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.toSpace(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "toSpace", args);
            return NULL;
          }

          static PyObject *t_Plane_toSubSpace(t_Plane *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::Point a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
                {
                  OBJ_CALL(result = self->object.toSubSpace(a0));
                  return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::Vector a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.toSubSpace(a0));
                  return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "toSubSpace", args);
            return NULL;
          }

          static PyObject *t_Plane_translate(t_Plane *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            Plane result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.translate(a0));
              return t_Plane::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "translate", arg);
            return NULL;
          }

          static PyObject *t_Plane_wholeHyperplane(t_Plane *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::SubPlane result((jobject) NULL);
            OBJ_CALL(result = self->object.wholeHyperplane());
            return ::org::hipparchus::geometry::euclidean::threed::t_SubPlane::wrap_Object(result);
          }

          static PyObject *t_Plane_wholeSpace(t_Plane *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::PolyhedronsSet result((jobject) NULL);
            OBJ_CALL(result = self->object.wholeSpace());
            return ::org::hipparchus::geometry::euclidean::threed::t_PolyhedronsSet::wrap_Object(result);
          }

          static PyObject *t_Plane_get__normal(t_Plane *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getNormal());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }

          static PyObject *t_Plane_get__origin(t_Plane *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getOrigin());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }

          static PyObject *t_Plane_get__tolerance(t_Plane *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getTolerance());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Plane_get__u(t_Plane *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getU());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }

          static PyObject *t_Plane_get__v(t_Plane *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getV());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/ShapiroOneWayGNSSRangeModifier.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/gnss/OneWayGNSSRange.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *ShapiroOneWayGNSSRangeModifier::class$ = NULL;
          jmethodID *ShapiroOneWayGNSSRangeModifier::mids$ = NULL;
          bool ShapiroOneWayGNSSRangeModifier::live$ = false;

          jclass ShapiroOneWayGNSSRangeModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/ShapiroOneWayGNSSRangeModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ShapiroOneWayGNSSRangeModifier::ShapiroOneWayGNSSRangeModifier(jdouble a0) : ::org::orekit::estimation::measurements::modifiers::AbstractShapiroBaseModifier(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

          ::java::util::List ShapiroOneWayGNSSRangeModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
          }

          void ShapiroOneWayGNSSRangeModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66], a0.this$);
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
          static PyObject *t_ShapiroOneWayGNSSRangeModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ShapiroOneWayGNSSRangeModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ShapiroOneWayGNSSRangeModifier_init_(t_ShapiroOneWayGNSSRangeModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ShapiroOneWayGNSSRangeModifier_getParametersDrivers(t_ShapiroOneWayGNSSRangeModifier *self);
          static PyObject *t_ShapiroOneWayGNSSRangeModifier_modifyWithoutDerivatives(t_ShapiroOneWayGNSSRangeModifier *self, PyObject *arg);
          static PyObject *t_ShapiroOneWayGNSSRangeModifier_get__parametersDrivers(t_ShapiroOneWayGNSSRangeModifier *self, void *data);
          static PyGetSetDef t_ShapiroOneWayGNSSRangeModifier__fields_[] = {
            DECLARE_GET_FIELD(t_ShapiroOneWayGNSSRangeModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ShapiroOneWayGNSSRangeModifier__methods_[] = {
            DECLARE_METHOD(t_ShapiroOneWayGNSSRangeModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ShapiroOneWayGNSSRangeModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ShapiroOneWayGNSSRangeModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_ShapiroOneWayGNSSRangeModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ShapiroOneWayGNSSRangeModifier)[] = {
            { Py_tp_methods, t_ShapiroOneWayGNSSRangeModifier__methods_ },
            { Py_tp_init, (void *) t_ShapiroOneWayGNSSRangeModifier_init_ },
            { Py_tp_getset, t_ShapiroOneWayGNSSRangeModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ShapiroOneWayGNSSRangeModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractShapiroBaseModifier),
            NULL
          };

          DEFINE_TYPE(ShapiroOneWayGNSSRangeModifier, t_ShapiroOneWayGNSSRangeModifier, ShapiroOneWayGNSSRangeModifier);

          void t_ShapiroOneWayGNSSRangeModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(ShapiroOneWayGNSSRangeModifier), &PY_TYPE_DEF(ShapiroOneWayGNSSRangeModifier), module, "ShapiroOneWayGNSSRangeModifier", 0);
          }

          void t_ShapiroOneWayGNSSRangeModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroOneWayGNSSRangeModifier), "class_", make_descriptor(ShapiroOneWayGNSSRangeModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroOneWayGNSSRangeModifier), "wrapfn_", make_descriptor(t_ShapiroOneWayGNSSRangeModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroOneWayGNSSRangeModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ShapiroOneWayGNSSRangeModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ShapiroOneWayGNSSRangeModifier::initializeClass, 1)))
              return NULL;
            return t_ShapiroOneWayGNSSRangeModifier::wrap_Object(ShapiroOneWayGNSSRangeModifier(((t_ShapiroOneWayGNSSRangeModifier *) arg)->object.this$));
          }
          static PyObject *t_ShapiroOneWayGNSSRangeModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ShapiroOneWayGNSSRangeModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ShapiroOneWayGNSSRangeModifier_init_(t_ShapiroOneWayGNSSRangeModifier *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            ShapiroOneWayGNSSRangeModifier object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = ShapiroOneWayGNSSRangeModifier(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ShapiroOneWayGNSSRangeModifier_getParametersDrivers(t_ShapiroOneWayGNSSRangeModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_ShapiroOneWayGNSSRangeModifier_modifyWithoutDerivatives(t_ShapiroOneWayGNSSRangeModifier *self, PyObject *arg)
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

          static PyObject *t_ShapiroOneWayGNSSRangeModifier_get__parametersDrivers(t_ShapiroOneWayGNSSRangeModifier *self, void *data)
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
#include "org/hipparchus/stat/descriptive/rank/RandomPercentile.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/stat/descriptive/rank/RandomPercentile.h"
#include "org/hipparchus/stat/descriptive/AggregatableStatistic.h"
#include "java/io/Serializable.h"
#include "java/util/Collection.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace rank {

          ::java::lang::Class *RandomPercentile::class$ = NULL;
          jmethodID *RandomPercentile::mids$ = NULL;
          bool RandomPercentile::live$ = false;
          jdouble RandomPercentile::DEFAULT_EPSILON = (jdouble) 0;

          jclass RandomPercentile::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/rank/RandomPercentile");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_init$_f1c8159898f25396] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/RandomGenerator;)V");
              mids$[mid_init$_6f61eb577a811a32] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/random/RandomGenerator;)V");
              mids$[mid_aggregate_29e91062f5743be3] = env->getMethodID(cls, "aggregate", "(Lorg/hipparchus/stat/descriptive/rank/RandomPercentile;)V");
              mids$[mid_clear_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_copy_0a1c21202907a51b] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/rank/RandomPercentile;");
              mids$[mid_evaluate_e45651f63bcd931a] = env->getMethodID(cls, "evaluate", "(D[D)D");
              mids$[mid_evaluate_1567a80062adb31b] = env->getMethodID(cls, "evaluate", "([DII)D");
              mids$[mid_evaluate_77eb5de7403bd8c7] = env->getMethodID(cls, "evaluate", "(D[DII)D");
              mids$[mid_getAggregateN_b19699bf13064258] = env->getMethodID(cls, "getAggregateN", "(Ljava/util/Collection;)D");
              mids$[mid_getAggregateQuantileRank_14d6020fc6898a6b] = env->getMethodID(cls, "getAggregateQuantileRank", "(DLjava/util/Collection;)D");
              mids$[mid_getAggregateRank_14d6020fc6898a6b] = env->getMethodID(cls, "getAggregateRank", "(DLjava/util/Collection;)D");
              mids$[mid_getN_6c0ce7e438e5ded4] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getQuantileRank_04fd0666b613d2ab] = env->getMethodID(cls, "getQuantileRank", "(D)D");
              mids$[mid_getRank_04fd0666b613d2ab] = env->getMethodID(cls, "getRank", "(D)D");
              mids$[mid_getResult_b74f83833fdad017] = env->getMethodID(cls, "getResult", "()D");
              mids$[mid_getResult_04fd0666b613d2ab] = env->getMethodID(cls, "getResult", "(D)D");
              mids$[mid_increment_8ba9fe7a847cecad] = env->getMethodID(cls, "increment", "(D)V");
              mids$[mid_maxValuesRetained_12ed7e7112604870] = env->getStaticMethodID(cls, "maxValuesRetained", "(D)J");
              mids$[mid_reduce_14d6020fc6898a6b] = env->getMethodID(cls, "reduce", "(DLjava/util/Collection;)D");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              DEFAULT_EPSILON = env->getStaticDoubleField(cls, "DEFAULT_EPSILON");
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RandomPercentile::RandomPercentile() : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          RandomPercentile::RandomPercentile(jdouble a0) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

          RandomPercentile::RandomPercentile(const ::org::hipparchus::random::RandomGenerator & a0) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_f1c8159898f25396, a0.this$)) {}

          RandomPercentile::RandomPercentile(jdouble a0, const ::org::hipparchus::random::RandomGenerator & a1) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_6f61eb577a811a32, a0, a1.this$)) {}

          void RandomPercentile::aggregate(const RandomPercentile & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_aggregate_29e91062f5743be3], a0.this$);
          }

          void RandomPercentile::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_a1fa5dae97ea5ed2]);
          }

          RandomPercentile RandomPercentile::copy() const
          {
            return RandomPercentile(env->callObjectMethod(this$, mids$[mid_copy_0a1c21202907a51b]));
          }

          jdouble RandomPercentile::evaluate(jdouble a0, const JArray< jdouble > & a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_e45651f63bcd931a], a0, a1.this$);
          }

          jdouble RandomPercentile::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_1567a80062adb31b], a0.this$, a1, a2);
          }

          jdouble RandomPercentile::evaluate(jdouble a0, const JArray< jdouble > & a1, jint a2, jint a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_77eb5de7403bd8c7], a0, a1.this$, a2, a3);
          }

          jdouble RandomPercentile::getAggregateN(const ::java::util::Collection & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAggregateN_b19699bf13064258], a0.this$);
          }

          jdouble RandomPercentile::getAggregateQuantileRank(jdouble a0, const ::java::util::Collection & a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAggregateQuantileRank_14d6020fc6898a6b], a0, a1.this$);
          }

          jdouble RandomPercentile::getAggregateRank(jdouble a0, const ::java::util::Collection & a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAggregateRank_14d6020fc6898a6b], a0, a1.this$);
          }

          jlong RandomPercentile::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_6c0ce7e438e5ded4]);
          }

          jdouble RandomPercentile::getQuantileRank(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getQuantileRank_04fd0666b613d2ab], a0);
          }

          jdouble RandomPercentile::getRank(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getRank_04fd0666b613d2ab], a0);
          }

          jdouble RandomPercentile::getResult() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_b74f83833fdad017]);
          }

          jdouble RandomPercentile::getResult(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_04fd0666b613d2ab], a0);
          }

          void RandomPercentile::increment(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_increment_8ba9fe7a847cecad], a0);
          }

          jlong RandomPercentile::maxValuesRetained(jdouble a0)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticLongMethod(cls, mids$[mid_maxValuesRetained_12ed7e7112604870], a0);
          }

          jdouble RandomPercentile::reduce(jdouble a0, const ::java::util::Collection & a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_reduce_14d6020fc6898a6b], a0, a1.this$);
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
        namespace rank {
          static PyObject *t_RandomPercentile_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RandomPercentile_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RandomPercentile_init_(t_RandomPercentile *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RandomPercentile_aggregate(t_RandomPercentile *self, PyObject *arg);
          static PyObject *t_RandomPercentile_clear(t_RandomPercentile *self, PyObject *args);
          static PyObject *t_RandomPercentile_copy(t_RandomPercentile *self, PyObject *args);
          static PyObject *t_RandomPercentile_evaluate(t_RandomPercentile *self, PyObject *args);
          static PyObject *t_RandomPercentile_getAggregateN(t_RandomPercentile *self, PyObject *arg);
          static PyObject *t_RandomPercentile_getAggregateQuantileRank(t_RandomPercentile *self, PyObject *args);
          static PyObject *t_RandomPercentile_getAggregateRank(t_RandomPercentile *self, PyObject *args);
          static PyObject *t_RandomPercentile_getN(t_RandomPercentile *self, PyObject *args);
          static PyObject *t_RandomPercentile_getQuantileRank(t_RandomPercentile *self, PyObject *arg);
          static PyObject *t_RandomPercentile_getRank(t_RandomPercentile *self, PyObject *arg);
          static PyObject *t_RandomPercentile_getResult(t_RandomPercentile *self, PyObject *args);
          static PyObject *t_RandomPercentile_increment(t_RandomPercentile *self, PyObject *args);
          static PyObject *t_RandomPercentile_maxValuesRetained(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RandomPercentile_reduce(t_RandomPercentile *self, PyObject *args);
          static PyObject *t_RandomPercentile_get__n(t_RandomPercentile *self, void *data);
          static PyObject *t_RandomPercentile_get__result(t_RandomPercentile *self, void *data);
          static PyGetSetDef t_RandomPercentile__fields_[] = {
            DECLARE_GET_FIELD(t_RandomPercentile, n),
            DECLARE_GET_FIELD(t_RandomPercentile, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RandomPercentile__methods_[] = {
            DECLARE_METHOD(t_RandomPercentile, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RandomPercentile, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RandomPercentile, aggregate, METH_O),
            DECLARE_METHOD(t_RandomPercentile, clear, METH_VARARGS),
            DECLARE_METHOD(t_RandomPercentile, copy, METH_VARARGS),
            DECLARE_METHOD(t_RandomPercentile, evaluate, METH_VARARGS),
            DECLARE_METHOD(t_RandomPercentile, getAggregateN, METH_O),
            DECLARE_METHOD(t_RandomPercentile, getAggregateQuantileRank, METH_VARARGS),
            DECLARE_METHOD(t_RandomPercentile, getAggregateRank, METH_VARARGS),
            DECLARE_METHOD(t_RandomPercentile, getN, METH_VARARGS),
            DECLARE_METHOD(t_RandomPercentile, getQuantileRank, METH_O),
            DECLARE_METHOD(t_RandomPercentile, getRank, METH_O),
            DECLARE_METHOD(t_RandomPercentile, getResult, METH_VARARGS),
            DECLARE_METHOD(t_RandomPercentile, increment, METH_VARARGS),
            DECLARE_METHOD(t_RandomPercentile, maxValuesRetained, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RandomPercentile, reduce, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RandomPercentile)[] = {
            { Py_tp_methods, t_RandomPercentile__methods_ },
            { Py_tp_init, (void *) t_RandomPercentile_init_ },
            { Py_tp_getset, t_RandomPercentile__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RandomPercentile)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(RandomPercentile, t_RandomPercentile, RandomPercentile);

          void t_RandomPercentile::install(PyObject *module)
          {
            installType(&PY_TYPE(RandomPercentile), &PY_TYPE_DEF(RandomPercentile), module, "RandomPercentile", 0);
          }

          void t_RandomPercentile::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RandomPercentile), "class_", make_descriptor(RandomPercentile::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RandomPercentile), "wrapfn_", make_descriptor(t_RandomPercentile::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RandomPercentile), "boxfn_", make_descriptor(boxObject));
            env->getClass(RandomPercentile::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(RandomPercentile), "DEFAULT_EPSILON", make_descriptor(RandomPercentile::DEFAULT_EPSILON));
          }

          static PyObject *t_RandomPercentile_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RandomPercentile::initializeClass, 1)))
              return NULL;
            return t_RandomPercentile::wrap_Object(RandomPercentile(((t_RandomPercentile *) arg)->object.this$));
          }
          static PyObject *t_RandomPercentile_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RandomPercentile::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RandomPercentile_init_(t_RandomPercentile *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                RandomPercentile object((jobject) NULL);

                INT_CALL(object = RandomPercentile());
                self->object = object;
                break;
              }
             case 1:
              {
                jdouble a0;
                RandomPercentile object((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  INT_CALL(object = RandomPercentile(a0));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::random::RandomGenerator a0((jobject) NULL);
                RandomPercentile object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0))
                {
                  INT_CALL(object = RandomPercentile(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                jdouble a0;
                ::org::hipparchus::random::RandomGenerator a1((jobject) NULL);
                RandomPercentile object((jobject) NULL);

                if (!parseArgs(args, "Dk", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = RandomPercentile(a0, a1));
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

          static PyObject *t_RandomPercentile_aggregate(t_RandomPercentile *self, PyObject *arg)
          {
            RandomPercentile a0((jobject) NULL);

            if (!parseArg(arg, "k", RandomPercentile::initializeClass, &a0))
            {
              OBJ_CALL(self->object.aggregate(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "aggregate", arg);
            return NULL;
          }

          static PyObject *t_RandomPercentile_clear(t_RandomPercentile *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.clear());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(RandomPercentile), (PyObject *) self, "clear", args, 2);
          }

          static PyObject *t_RandomPercentile_copy(t_RandomPercentile *self, PyObject *args)
          {
            RandomPercentile result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_RandomPercentile::wrap_Object(result);
            }

            return callSuper(PY_TYPE(RandomPercentile), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_RandomPercentile_evaluate(t_RandomPercentile *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                jdouble a0;
                JArray< jdouble > a1((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "D[D", &a0, &a1))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
              break;
             case 3:
              {
                JArray< jdouble > a0((jobject) NULL);
                jint a1;
                jint a2;
                jdouble result;

                if (!parseArgs(args, "[DII", &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1, a2));
                  return PyFloat_FromDouble((double) result);
                }
              }
              break;
             case 4:
              {
                jdouble a0;
                JArray< jdouble > a1((jobject) NULL);
                jint a2;
                jint a3;
                jdouble result;

                if (!parseArgs(args, "D[DII", &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            return callSuper(PY_TYPE(RandomPercentile), (PyObject *) self, "evaluate", args, 2);
          }

          static PyObject *t_RandomPercentile_getAggregateN(t_RandomPercentile *self, PyObject *arg)
          {
            ::java::util::Collection a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble result;

            if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
            {
              OBJ_CALL(result = self->object.getAggregateN(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getAggregateN", arg);
            return NULL;
          }

          static PyObject *t_RandomPercentile_getAggregateQuantileRank(t_RandomPercentile *self, PyObject *args)
          {
            jdouble a0;
            ::java::util::Collection a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble result;

            if (!parseArgs(args, "DK", ::java::util::Collection::initializeClass, &a0, &a1, &p1, ::java::util::t_Collection::parameters_))
            {
              OBJ_CALL(result = self->object.getAggregateQuantileRank(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getAggregateQuantileRank", args);
            return NULL;
          }

          static PyObject *t_RandomPercentile_getAggregateRank(t_RandomPercentile *self, PyObject *args)
          {
            jdouble a0;
            ::java::util::Collection a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble result;

            if (!parseArgs(args, "DK", ::java::util::Collection::initializeClass, &a0, &a1, &p1, ::java::util::t_Collection::parameters_))
            {
              OBJ_CALL(result = self->object.getAggregateRank(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getAggregateRank", args);
            return NULL;
          }

          static PyObject *t_RandomPercentile_getN(t_RandomPercentile *self, PyObject *args)
          {
            jlong result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getN());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            return callSuper(PY_TYPE(RandomPercentile), (PyObject *) self, "getN", args, 2);
          }

          static PyObject *t_RandomPercentile_getQuantileRank(t_RandomPercentile *self, PyObject *arg)
          {
            jdouble a0;
            jdouble result;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.getQuantileRank(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getQuantileRank", arg);
            return NULL;
          }

          static PyObject *t_RandomPercentile_getRank(t_RandomPercentile *self, PyObject *arg)
          {
            jdouble a0;
            jdouble result;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.getRank(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getRank", arg);
            return NULL;
          }

          static PyObject *t_RandomPercentile_getResult(t_RandomPercentile *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                jdouble result;
                OBJ_CALL(result = self->object.getResult());
                return PyFloat_FromDouble((double) result);
              }
              break;
             case 1:
              {
                jdouble a0;
                jdouble result;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.getResult(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            return callSuper(PY_TYPE(RandomPercentile), (PyObject *) self, "getResult", args, 2);
          }

          static PyObject *t_RandomPercentile_increment(t_RandomPercentile *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(RandomPercentile), (PyObject *) self, "increment", args, 2);
          }

          static PyObject *t_RandomPercentile_maxValuesRetained(PyTypeObject *type, PyObject *arg)
          {
            jdouble a0;
            jlong result;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::descriptive::rank::RandomPercentile::maxValuesRetained(a0));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            PyErr_SetArgsError(type, "maxValuesRetained", arg);
            return NULL;
          }

          static PyObject *t_RandomPercentile_reduce(t_RandomPercentile *self, PyObject *args)
          {
            jdouble a0;
            ::java::util::Collection a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble result;

            if (!parseArgs(args, "DK", ::java::util::Collection::initializeClass, &a0, &a1, &p1, ::java::util::t_Collection::parameters_))
            {
              OBJ_CALL(result = self->object.reduce(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "reduce", args);
            return NULL;
          }

          static PyObject *t_RandomPercentile_get__n(t_RandomPercentile *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }

          static PyObject *t_RandomPercentile_get__result(t_RandomPercentile *self, void *data)
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
#include "org/orekit/propagation/PythonFieldEphemerisGenerator.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldEphemerisGenerator.h"
#include "org/orekit/propagation/FieldBoundedPropagator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *PythonFieldEphemerisGenerator::class$ = NULL;
      jmethodID *PythonFieldEphemerisGenerator::mids$ = NULL;
      bool PythonFieldEphemerisGenerator::live$ = false;

      jclass PythonFieldEphemerisGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/PythonFieldEphemerisGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getGeneratedEphemeris_a6ef4ff996c2247f] = env->getMethodID(cls, "getGeneratedEphemeris", "()Lorg/orekit/propagation/FieldBoundedPropagator;");
          mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonFieldEphemerisGenerator::PythonFieldEphemerisGenerator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      void PythonFieldEphemerisGenerator::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
      }

      jlong PythonFieldEphemerisGenerator::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
      }

      void PythonFieldEphemerisGenerator::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
      static PyObject *t_PythonFieldEphemerisGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldEphemerisGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldEphemerisGenerator_of_(t_PythonFieldEphemerisGenerator *self, PyObject *args);
      static int t_PythonFieldEphemerisGenerator_init_(t_PythonFieldEphemerisGenerator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonFieldEphemerisGenerator_finalize(t_PythonFieldEphemerisGenerator *self);
      static PyObject *t_PythonFieldEphemerisGenerator_pythonExtension(t_PythonFieldEphemerisGenerator *self, PyObject *args);
      static jobject JNICALL t_PythonFieldEphemerisGenerator_getGeneratedEphemeris0(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonFieldEphemerisGenerator_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonFieldEphemerisGenerator_get__self(t_PythonFieldEphemerisGenerator *self, void *data);
      static PyObject *t_PythonFieldEphemerisGenerator_get__parameters_(t_PythonFieldEphemerisGenerator *self, void *data);
      static PyGetSetDef t_PythonFieldEphemerisGenerator__fields_[] = {
        DECLARE_GET_FIELD(t_PythonFieldEphemerisGenerator, self),
        DECLARE_GET_FIELD(t_PythonFieldEphemerisGenerator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonFieldEphemerisGenerator__methods_[] = {
        DECLARE_METHOD(t_PythonFieldEphemerisGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldEphemerisGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldEphemerisGenerator, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonFieldEphemerisGenerator, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonFieldEphemerisGenerator, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonFieldEphemerisGenerator)[] = {
        { Py_tp_methods, t_PythonFieldEphemerisGenerator__methods_ },
        { Py_tp_init, (void *) t_PythonFieldEphemerisGenerator_init_ },
        { Py_tp_getset, t_PythonFieldEphemerisGenerator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonFieldEphemerisGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonFieldEphemerisGenerator, t_PythonFieldEphemerisGenerator, PythonFieldEphemerisGenerator);
      PyObject *t_PythonFieldEphemerisGenerator::wrap_Object(const PythonFieldEphemerisGenerator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonFieldEphemerisGenerator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldEphemerisGenerator *self = (t_PythonFieldEphemerisGenerator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PythonFieldEphemerisGenerator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonFieldEphemerisGenerator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldEphemerisGenerator *self = (t_PythonFieldEphemerisGenerator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PythonFieldEphemerisGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonFieldEphemerisGenerator), &PY_TYPE_DEF(PythonFieldEphemerisGenerator), module, "PythonFieldEphemerisGenerator", 1);
      }

      void t_PythonFieldEphemerisGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldEphemerisGenerator), "class_", make_descriptor(PythonFieldEphemerisGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldEphemerisGenerator), "wrapfn_", make_descriptor(t_PythonFieldEphemerisGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldEphemerisGenerator), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonFieldEphemerisGenerator::initializeClass);
        JNINativeMethod methods[] = {
          { "getGeneratedEphemeris", "()Lorg/orekit/propagation/FieldBoundedPropagator;", (void *) t_PythonFieldEphemerisGenerator_getGeneratedEphemeris0 },
          { "pythonDecRef", "()V", (void *) t_PythonFieldEphemerisGenerator_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonFieldEphemerisGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonFieldEphemerisGenerator::initializeClass, 1)))
          return NULL;
        return t_PythonFieldEphemerisGenerator::wrap_Object(PythonFieldEphemerisGenerator(((t_PythonFieldEphemerisGenerator *) arg)->object.this$));
      }
      static PyObject *t_PythonFieldEphemerisGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonFieldEphemerisGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonFieldEphemerisGenerator_of_(t_PythonFieldEphemerisGenerator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonFieldEphemerisGenerator_init_(t_PythonFieldEphemerisGenerator *self, PyObject *args, PyObject *kwds)
      {
        PythonFieldEphemerisGenerator object((jobject) NULL);

        INT_CALL(object = PythonFieldEphemerisGenerator());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonFieldEphemerisGenerator_finalize(t_PythonFieldEphemerisGenerator *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonFieldEphemerisGenerator_pythonExtension(t_PythonFieldEphemerisGenerator *self, PyObject *args)
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

      static jobject JNICALL t_PythonFieldEphemerisGenerator_getGeneratedEphemeris0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldEphemerisGenerator::mids$[PythonFieldEphemerisGenerator::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::FieldBoundedPropagator value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getGeneratedEphemeris", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::FieldBoundedPropagator::initializeClass, &value))
        {
          throwTypeError("getGeneratedEphemeris", result);
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

      static void JNICALL t_PythonFieldEphemerisGenerator_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldEphemerisGenerator::mids$[PythonFieldEphemerisGenerator::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonFieldEphemerisGenerator::mids$[PythonFieldEphemerisGenerator::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonFieldEphemerisGenerator_get__self(t_PythonFieldEphemerisGenerator *self, void *data)
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
      static PyObject *t_PythonFieldEphemerisGenerator_get__parameters_(t_PythonFieldEphemerisGenerator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/StreamingAemWriter$SegmentWriter.h"
#include "org/orekit/propagation/sampling/OrekitFixedStepHandler.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/StreamingAemWriter.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace aem {

              ::java::lang::Class *StreamingAemWriter$SegmentWriter::class$ = NULL;
              jmethodID *StreamingAemWriter$SegmentWriter::mids$ = NULL;
              bool StreamingAemWriter$SegmentWriter::live$ = false;

              jclass StreamingAemWriter$SegmentWriter::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/aem/StreamingAemWriter$SegmentWriter");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_a93b59d1b6b34cee] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/adm/aem/StreamingAemWriter;)V");
                  mids$[mid_finish_280c3390961e0a50] = env->getMethodID(cls, "finish", "(Lorg/orekit/propagation/SpacecraftState;)V");
                  mids$[mid_handleStep_280c3390961e0a50] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/SpacecraftState;)V");
                  mids$[mid_init_3189c7446dbbb87e] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              StreamingAemWriter$SegmentWriter::StreamingAemWriter$SegmentWriter(const ::org::orekit::files::ccsds::ndm::adm::aem::StreamingAemWriter & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a93b59d1b6b34cee, a0.this$)) {}

              void StreamingAemWriter$SegmentWriter::finish(const ::org::orekit::propagation::SpacecraftState & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_finish_280c3390961e0a50], a0.this$);
              }

              void StreamingAemWriter$SegmentWriter::handleStep(const ::org::orekit::propagation::SpacecraftState & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_handleStep_280c3390961e0a50], a0.this$);
              }

              void StreamingAemWriter$SegmentWriter::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2) const
              {
                env->callVoidMethod(this$, mids$[mid_init_3189c7446dbbb87e], a0.this$, a1.this$, a2);
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
              static PyObject *t_StreamingAemWriter$SegmentWriter_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_StreamingAemWriter$SegmentWriter_instance_(PyTypeObject *type, PyObject *arg);
              static int t_StreamingAemWriter$SegmentWriter_init_(t_StreamingAemWriter$SegmentWriter *self, PyObject *args, PyObject *kwds);
              static PyObject *t_StreamingAemWriter$SegmentWriter_finish(t_StreamingAemWriter$SegmentWriter *self, PyObject *arg);
              static PyObject *t_StreamingAemWriter$SegmentWriter_handleStep(t_StreamingAemWriter$SegmentWriter *self, PyObject *arg);
              static PyObject *t_StreamingAemWriter$SegmentWriter_init(t_StreamingAemWriter$SegmentWriter *self, PyObject *args);

              static PyMethodDef t_StreamingAemWriter$SegmentWriter__methods_[] = {
                DECLARE_METHOD(t_StreamingAemWriter$SegmentWriter, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_StreamingAemWriter$SegmentWriter, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_StreamingAemWriter$SegmentWriter, finish, METH_O),
                DECLARE_METHOD(t_StreamingAemWriter$SegmentWriter, handleStep, METH_O),
                DECLARE_METHOD(t_StreamingAemWriter$SegmentWriter, init, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(StreamingAemWriter$SegmentWriter)[] = {
                { Py_tp_methods, t_StreamingAemWriter$SegmentWriter__methods_ },
                { Py_tp_init, (void *) t_StreamingAemWriter$SegmentWriter_init_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(StreamingAemWriter$SegmentWriter)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(StreamingAemWriter$SegmentWriter, t_StreamingAemWriter$SegmentWriter, StreamingAemWriter$SegmentWriter);

              void t_StreamingAemWriter$SegmentWriter::install(PyObject *module)
              {
                installType(&PY_TYPE(StreamingAemWriter$SegmentWriter), &PY_TYPE_DEF(StreamingAemWriter$SegmentWriter), module, "StreamingAemWriter$SegmentWriter", 0);
              }

              void t_StreamingAemWriter$SegmentWriter::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingAemWriter$SegmentWriter), "class_", make_descriptor(StreamingAemWriter$SegmentWriter::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingAemWriter$SegmentWriter), "wrapfn_", make_descriptor(t_StreamingAemWriter$SegmentWriter::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingAemWriter$SegmentWriter), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_StreamingAemWriter$SegmentWriter_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, StreamingAemWriter$SegmentWriter::initializeClass, 1)))
                  return NULL;
                return t_StreamingAemWriter$SegmentWriter::wrap_Object(StreamingAemWriter$SegmentWriter(((t_StreamingAemWriter$SegmentWriter *) arg)->object.this$));
              }
              static PyObject *t_StreamingAemWriter$SegmentWriter_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, StreamingAemWriter$SegmentWriter::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_StreamingAemWriter$SegmentWriter_init_(t_StreamingAemWriter$SegmentWriter *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::adm::aem::StreamingAemWriter a0((jobject) NULL);
                StreamingAemWriter$SegmentWriter object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::files::ccsds::ndm::adm::aem::StreamingAemWriter::initializeClass, &a0))
                {
                  INT_CALL(object = StreamingAemWriter$SegmentWriter(a0));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_StreamingAemWriter$SegmentWriter_finish(t_StreamingAemWriter$SegmentWriter *self, PyObject *arg)
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.finish(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "finish", arg);
                return NULL;
              }

              static PyObject *t_StreamingAemWriter$SegmentWriter_handleStep(t_StreamingAemWriter$SegmentWriter *self, PyObject *arg)
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.handleStep(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
                return NULL;
              }

              static PyObject *t_StreamingAemWriter$SegmentWriter_init(t_StreamingAemWriter$SegmentWriter *self, PyObject *args)
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
                jdouble a2;

                if (!parseArgs(args, "kkD", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(self->object.init(a0, a1, a2));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "init", args);
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
#include "org/orekit/estimation/sequential/AbstractKalmanEstimator.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *AbstractKalmanEstimator::class$ = NULL;
        jmethodID *AbstractKalmanEstimator::mids$ = NULL;
        bool AbstractKalmanEstimator::live$ = false;

        jclass AbstractKalmanEstimator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/AbstractKalmanEstimator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getCurrentDate_c325492395d89b24] = env->getMethodID(cls, "getCurrentDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getCurrentMeasurementNumber_55546ef6a647f39b] = env->getMethodID(cls, "getCurrentMeasurementNumber", "()I");
            mids$[mid_getEstimatedMeasurementsParameters_cfb822366e8ab425] = env->getMethodID(cls, "getEstimatedMeasurementsParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getOrbitalParametersDrivers_f4ab92625193d439] = env->getMethodID(cls, "getOrbitalParametersDrivers", "(Z)Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getPhysicalEstimatedCovarianceMatrix_f77d745f2128c391] = env->getMethodID(cls, "getPhysicalEstimatedCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalEstimatedState_3a10cc75bd070d84] = env->getMethodID(cls, "getPhysicalEstimatedState", "()Lorg/hipparchus/linear/RealVector;");
            mids$[mid_getPropagationParametersDrivers_f4ab92625193d439] = env->getMethodID(cls, "getPropagationParametersDrivers", "(Z)Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getKalmanEstimation_10690b877ea302f7] = env->getMethodID(cls, "getKalmanEstimation", "()Lorg/orekit/estimation/sequential/KalmanEstimation;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::time::AbsoluteDate AbstractKalmanEstimator::getCurrentDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getCurrentDate_c325492395d89b24]));
        }

        jint AbstractKalmanEstimator::getCurrentMeasurementNumber() const
        {
          return env->callIntMethod(this$, mids$[mid_getCurrentMeasurementNumber_55546ef6a647f39b]);
        }

        ::org::orekit::utils::ParameterDriversList AbstractKalmanEstimator::getEstimatedMeasurementsParameters() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getEstimatedMeasurementsParameters_cfb822366e8ab425]));
        }

        ::org::orekit::utils::ParameterDriversList AbstractKalmanEstimator::getOrbitalParametersDrivers(jboolean a0) const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getOrbitalParametersDrivers_f4ab92625193d439], a0));
        }

        ::org::hipparchus::linear::RealMatrix AbstractKalmanEstimator::getPhysicalEstimatedCovarianceMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalEstimatedCovarianceMatrix_f77d745f2128c391]));
        }

        ::org::hipparchus::linear::RealVector AbstractKalmanEstimator::getPhysicalEstimatedState() const
        {
          return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getPhysicalEstimatedState_3a10cc75bd070d84]));
        }

        ::org::orekit::utils::ParameterDriversList AbstractKalmanEstimator::getPropagationParametersDrivers(jboolean a0) const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getPropagationParametersDrivers_f4ab92625193d439], a0));
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
        static PyObject *t_AbstractKalmanEstimator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractKalmanEstimator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractKalmanEstimator_getCurrentDate(t_AbstractKalmanEstimator *self);
        static PyObject *t_AbstractKalmanEstimator_getCurrentMeasurementNumber(t_AbstractKalmanEstimator *self);
        static PyObject *t_AbstractKalmanEstimator_getEstimatedMeasurementsParameters(t_AbstractKalmanEstimator *self);
        static PyObject *t_AbstractKalmanEstimator_getOrbitalParametersDrivers(t_AbstractKalmanEstimator *self, PyObject *arg);
        static PyObject *t_AbstractKalmanEstimator_getPhysicalEstimatedCovarianceMatrix(t_AbstractKalmanEstimator *self);
        static PyObject *t_AbstractKalmanEstimator_getPhysicalEstimatedState(t_AbstractKalmanEstimator *self);
        static PyObject *t_AbstractKalmanEstimator_getPropagationParametersDrivers(t_AbstractKalmanEstimator *self, PyObject *arg);
        static PyObject *t_AbstractKalmanEstimator_get__currentDate(t_AbstractKalmanEstimator *self, void *data);
        static PyObject *t_AbstractKalmanEstimator_get__currentMeasurementNumber(t_AbstractKalmanEstimator *self, void *data);
        static PyObject *t_AbstractKalmanEstimator_get__estimatedMeasurementsParameters(t_AbstractKalmanEstimator *self, void *data);
        static PyObject *t_AbstractKalmanEstimator_get__physicalEstimatedCovarianceMatrix(t_AbstractKalmanEstimator *self, void *data);
        static PyObject *t_AbstractKalmanEstimator_get__physicalEstimatedState(t_AbstractKalmanEstimator *self, void *data);
        static PyGetSetDef t_AbstractKalmanEstimator__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractKalmanEstimator, currentDate),
          DECLARE_GET_FIELD(t_AbstractKalmanEstimator, currentMeasurementNumber),
          DECLARE_GET_FIELD(t_AbstractKalmanEstimator, estimatedMeasurementsParameters),
          DECLARE_GET_FIELD(t_AbstractKalmanEstimator, physicalEstimatedCovarianceMatrix),
          DECLARE_GET_FIELD(t_AbstractKalmanEstimator, physicalEstimatedState),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractKalmanEstimator__methods_[] = {
          DECLARE_METHOD(t_AbstractKalmanEstimator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractKalmanEstimator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractKalmanEstimator, getCurrentDate, METH_NOARGS),
          DECLARE_METHOD(t_AbstractKalmanEstimator, getCurrentMeasurementNumber, METH_NOARGS),
          DECLARE_METHOD(t_AbstractKalmanEstimator, getEstimatedMeasurementsParameters, METH_NOARGS),
          DECLARE_METHOD(t_AbstractKalmanEstimator, getOrbitalParametersDrivers, METH_O),
          DECLARE_METHOD(t_AbstractKalmanEstimator, getPhysicalEstimatedCovarianceMatrix, METH_NOARGS),
          DECLARE_METHOD(t_AbstractKalmanEstimator, getPhysicalEstimatedState, METH_NOARGS),
          DECLARE_METHOD(t_AbstractKalmanEstimator, getPropagationParametersDrivers, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractKalmanEstimator)[] = {
          { Py_tp_methods, t_AbstractKalmanEstimator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractKalmanEstimator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractKalmanEstimator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractKalmanEstimator, t_AbstractKalmanEstimator, AbstractKalmanEstimator);

        void t_AbstractKalmanEstimator::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractKalmanEstimator), &PY_TYPE_DEF(AbstractKalmanEstimator), module, "AbstractKalmanEstimator", 0);
        }

        void t_AbstractKalmanEstimator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractKalmanEstimator), "class_", make_descriptor(AbstractKalmanEstimator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractKalmanEstimator), "wrapfn_", make_descriptor(t_AbstractKalmanEstimator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractKalmanEstimator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractKalmanEstimator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractKalmanEstimator::initializeClass, 1)))
            return NULL;
          return t_AbstractKalmanEstimator::wrap_Object(AbstractKalmanEstimator(((t_AbstractKalmanEstimator *) arg)->object.this$));
        }
        static PyObject *t_AbstractKalmanEstimator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractKalmanEstimator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractKalmanEstimator_getCurrentDate(t_AbstractKalmanEstimator *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getCurrentDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_AbstractKalmanEstimator_getCurrentMeasurementNumber(t_AbstractKalmanEstimator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getCurrentMeasurementNumber());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_AbstractKalmanEstimator_getEstimatedMeasurementsParameters(t_AbstractKalmanEstimator *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedMeasurementsParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_AbstractKalmanEstimator_getOrbitalParametersDrivers(t_AbstractKalmanEstimator *self, PyObject *arg)
        {
          jboolean a0;
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(result = self->object.getOrbitalParametersDrivers(a0));
            return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getOrbitalParametersDrivers", arg);
          return NULL;
        }

        static PyObject *t_AbstractKalmanEstimator_getPhysicalEstimatedCovarianceMatrix(t_AbstractKalmanEstimator *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalEstimatedCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_AbstractKalmanEstimator_getPhysicalEstimatedState(t_AbstractKalmanEstimator *self)
        {
          ::org::hipparchus::linear::RealVector result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalEstimatedState());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        static PyObject *t_AbstractKalmanEstimator_getPropagationParametersDrivers(t_AbstractKalmanEstimator *self, PyObject *arg)
        {
          jboolean a0;
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(result = self->object.getPropagationParametersDrivers(a0));
            return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getPropagationParametersDrivers", arg);
          return NULL;
        }

        static PyObject *t_AbstractKalmanEstimator_get__currentDate(t_AbstractKalmanEstimator *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getCurrentDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_AbstractKalmanEstimator_get__currentMeasurementNumber(t_AbstractKalmanEstimator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getCurrentMeasurementNumber());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_AbstractKalmanEstimator_get__estimatedMeasurementsParameters(t_AbstractKalmanEstimator *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedMeasurementsParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_AbstractKalmanEstimator_get__physicalEstimatedCovarianceMatrix(t_AbstractKalmanEstimator *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalEstimatedCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_AbstractKalmanEstimator_get__physicalEstimatedState(t_AbstractKalmanEstimator *self, void *data)
        {
          ::org::hipparchus::linear::RealVector value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalEstimatedState());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/intersection/IgnoreDEMAlgorithm.h"
#include "org/orekit/rugged/intersection/IntersectionAlgorithm.h"
#include "org/orekit/rugged/utils/ExtendedEllipsoid.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/rugged/api/AlgorithmId.h"
#include "org/orekit/rugged/utils/NormalizedGeodeticPoint.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace intersection {

        ::java::lang::Class *IgnoreDEMAlgorithm::class$ = NULL;
        jmethodID *IgnoreDEMAlgorithm::mids$ = NULL;
        bool IgnoreDEMAlgorithm::live$ = false;

        jclass IgnoreDEMAlgorithm::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/intersection/IgnoreDEMAlgorithm");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getAlgorithmId_d67e2fdbea04a3ee] = env->getMethodID(cls, "getAlgorithmId", "()Lorg/orekit/rugged/api/AlgorithmId;");
            mids$[mid_getElevation_99e3200dafc19573] = env->getMethodID(cls, "getElevation", "(DD)D");
            mids$[mid_intersection_7819c980b8c560ad] = env->getMethodID(cls, "intersection", "(Lorg/orekit/rugged/utils/ExtendedEllipsoid;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;");
            mids$[mid_refineIntersection_882cf21796738f1c] = env->getMethodID(cls, "refineIntersection", "(Lorg/orekit/rugged/utils/ExtendedEllipsoid;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        IgnoreDEMAlgorithm::IgnoreDEMAlgorithm() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        ::org::orekit::rugged::api::AlgorithmId IgnoreDEMAlgorithm::getAlgorithmId() const
        {
          return ::org::orekit::rugged::api::AlgorithmId(env->callObjectMethod(this$, mids$[mid_getAlgorithmId_d67e2fdbea04a3ee]));
        }

        jdouble IgnoreDEMAlgorithm::getElevation(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getElevation_99e3200dafc19573], a0, a1);
        }

        ::org::orekit::rugged::utils::NormalizedGeodeticPoint IgnoreDEMAlgorithm::intersection(const ::org::orekit::rugged::utils::ExtendedEllipsoid & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2) const
        {
          return ::org::orekit::rugged::utils::NormalizedGeodeticPoint(env->callObjectMethod(this$, mids$[mid_intersection_7819c980b8c560ad], a0.this$, a1.this$, a2.this$));
        }

        ::org::orekit::rugged::utils::NormalizedGeodeticPoint IgnoreDEMAlgorithm::refineIntersection(const ::org::orekit::rugged::utils::ExtendedEllipsoid & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::orekit::rugged::utils::NormalizedGeodeticPoint & a3) const
        {
          return ::org::orekit::rugged::utils::NormalizedGeodeticPoint(env->callObjectMethod(this$, mids$[mid_refineIntersection_882cf21796738f1c], a0.this$, a1.this$, a2.this$, a3.this$));
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
      namespace intersection {
        static PyObject *t_IgnoreDEMAlgorithm_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IgnoreDEMAlgorithm_instance_(PyTypeObject *type, PyObject *arg);
        static int t_IgnoreDEMAlgorithm_init_(t_IgnoreDEMAlgorithm *self, PyObject *args, PyObject *kwds);
        static PyObject *t_IgnoreDEMAlgorithm_getAlgorithmId(t_IgnoreDEMAlgorithm *self);
        static PyObject *t_IgnoreDEMAlgorithm_getElevation(t_IgnoreDEMAlgorithm *self, PyObject *args);
        static PyObject *t_IgnoreDEMAlgorithm_intersection(t_IgnoreDEMAlgorithm *self, PyObject *args);
        static PyObject *t_IgnoreDEMAlgorithm_refineIntersection(t_IgnoreDEMAlgorithm *self, PyObject *args);
        static PyObject *t_IgnoreDEMAlgorithm_get__algorithmId(t_IgnoreDEMAlgorithm *self, void *data);
        static PyGetSetDef t_IgnoreDEMAlgorithm__fields_[] = {
          DECLARE_GET_FIELD(t_IgnoreDEMAlgorithm, algorithmId),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_IgnoreDEMAlgorithm__methods_[] = {
          DECLARE_METHOD(t_IgnoreDEMAlgorithm, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IgnoreDEMAlgorithm, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IgnoreDEMAlgorithm, getAlgorithmId, METH_NOARGS),
          DECLARE_METHOD(t_IgnoreDEMAlgorithm, getElevation, METH_VARARGS),
          DECLARE_METHOD(t_IgnoreDEMAlgorithm, intersection, METH_VARARGS),
          DECLARE_METHOD(t_IgnoreDEMAlgorithm, refineIntersection, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(IgnoreDEMAlgorithm)[] = {
          { Py_tp_methods, t_IgnoreDEMAlgorithm__methods_ },
          { Py_tp_init, (void *) t_IgnoreDEMAlgorithm_init_ },
          { Py_tp_getset, t_IgnoreDEMAlgorithm__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(IgnoreDEMAlgorithm)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(IgnoreDEMAlgorithm, t_IgnoreDEMAlgorithm, IgnoreDEMAlgorithm);

        void t_IgnoreDEMAlgorithm::install(PyObject *module)
        {
          installType(&PY_TYPE(IgnoreDEMAlgorithm), &PY_TYPE_DEF(IgnoreDEMAlgorithm), module, "IgnoreDEMAlgorithm", 0);
        }

        void t_IgnoreDEMAlgorithm::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(IgnoreDEMAlgorithm), "class_", make_descriptor(IgnoreDEMAlgorithm::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IgnoreDEMAlgorithm), "wrapfn_", make_descriptor(t_IgnoreDEMAlgorithm::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IgnoreDEMAlgorithm), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_IgnoreDEMAlgorithm_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, IgnoreDEMAlgorithm::initializeClass, 1)))
            return NULL;
          return t_IgnoreDEMAlgorithm::wrap_Object(IgnoreDEMAlgorithm(((t_IgnoreDEMAlgorithm *) arg)->object.this$));
        }
        static PyObject *t_IgnoreDEMAlgorithm_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, IgnoreDEMAlgorithm::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_IgnoreDEMAlgorithm_init_(t_IgnoreDEMAlgorithm *self, PyObject *args, PyObject *kwds)
        {
          IgnoreDEMAlgorithm object((jobject) NULL);

          INT_CALL(object = IgnoreDEMAlgorithm());
          self->object = object;

          return 0;
        }

        static PyObject *t_IgnoreDEMAlgorithm_getAlgorithmId(t_IgnoreDEMAlgorithm *self)
        {
          ::org::orekit::rugged::api::AlgorithmId result((jobject) NULL);
          OBJ_CALL(result = self->object.getAlgorithmId());
          return ::org::orekit::rugged::api::t_AlgorithmId::wrap_Object(result);
        }

        static PyObject *t_IgnoreDEMAlgorithm_getElevation(t_IgnoreDEMAlgorithm *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.getElevation(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getElevation", args);
          return NULL;
        }

        static PyObject *t_IgnoreDEMAlgorithm_intersection(t_IgnoreDEMAlgorithm *self, PyObject *args)
        {
          ::org::orekit::rugged::utils::ExtendedEllipsoid a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint result((jobject) NULL);

          if (!parseArgs(args, "kkk", ::org::orekit::rugged::utils::ExtendedEllipsoid::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.intersection(a0, a1, a2));
            return ::org::orekit::rugged::utils::t_NormalizedGeodeticPoint::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "intersection", args);
          return NULL;
        }

        static PyObject *t_IgnoreDEMAlgorithm_refineIntersection(t_IgnoreDEMAlgorithm *self, PyObject *args)
        {
          ::org::orekit::rugged::utils::ExtendedEllipsoid a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint a3((jobject) NULL);
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint result((jobject) NULL);

          if (!parseArgs(args, "kkkk", ::org::orekit::rugged::utils::ExtendedEllipsoid::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::rugged::utils::NormalizedGeodeticPoint::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.refineIntersection(a0, a1, a2, a3));
            return ::org::orekit::rugged::utils::t_NormalizedGeodeticPoint::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "refineIntersection", args);
          return NULL;
        }

        static PyObject *t_IgnoreDEMAlgorithm_get__algorithmId(t_IgnoreDEMAlgorithm *self, void *data)
        {
          ::org::orekit::rugged::api::AlgorithmId value((jobject) NULL);
          OBJ_CALL(value = self->object.getAlgorithmId());
          return ::org::orekit::rugged::api::t_AlgorithmId::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/VisibilityTrigger.h"
#include "org/orekit/propagation/events/VisibilityTrigger.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *VisibilityTrigger::class$ = NULL;
        jmethodID *VisibilityTrigger::mids$ = NULL;
        bool VisibilityTrigger::live$ = false;
        VisibilityTrigger *VisibilityTrigger::VISIBLE_AS_SOON_AS_PARTIALLY_IN_FOV = NULL;
        VisibilityTrigger *VisibilityTrigger::VISIBLE_ONLY_WHEN_FULLY_IN_FOV = NULL;

        jclass VisibilityTrigger::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/VisibilityTrigger");

            mids$ = new jmethodID[max_mid];
            mids$[mid_radiusCorrection_04fd0666b613d2ab] = env->getMethodID(cls, "radiusCorrection", "(D)D");
            mids$[mid_valueOf_5a1a072746181151] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/propagation/events/VisibilityTrigger;");
            mids$[mid_values_75fa6be774bc9359] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/propagation/events/VisibilityTrigger;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            VISIBLE_AS_SOON_AS_PARTIALLY_IN_FOV = new VisibilityTrigger(env->getStaticObjectField(cls, "VISIBLE_AS_SOON_AS_PARTIALLY_IN_FOV", "Lorg/orekit/propagation/events/VisibilityTrigger;"));
            VISIBLE_ONLY_WHEN_FULLY_IN_FOV = new VisibilityTrigger(env->getStaticObjectField(cls, "VISIBLE_ONLY_WHEN_FULLY_IN_FOV", "Lorg/orekit/propagation/events/VisibilityTrigger;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble VisibilityTrigger::radiusCorrection(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_radiusCorrection_04fd0666b613d2ab], a0);
        }

        VisibilityTrigger VisibilityTrigger::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return VisibilityTrigger(env->callStaticObjectMethod(cls, mids$[mid_valueOf_5a1a072746181151], a0.this$));
        }

        JArray< VisibilityTrigger > VisibilityTrigger::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< VisibilityTrigger >(env->callStaticObjectMethod(cls, mids$[mid_values_75fa6be774bc9359]));
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
        static PyObject *t_VisibilityTrigger_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_VisibilityTrigger_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_VisibilityTrigger_of_(t_VisibilityTrigger *self, PyObject *args);
        static PyObject *t_VisibilityTrigger_radiusCorrection(t_VisibilityTrigger *self, PyObject *arg);
        static PyObject *t_VisibilityTrigger_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_VisibilityTrigger_values(PyTypeObject *type);
        static PyObject *t_VisibilityTrigger_get__parameters_(t_VisibilityTrigger *self, void *data);
        static PyGetSetDef t_VisibilityTrigger__fields_[] = {
          DECLARE_GET_FIELD(t_VisibilityTrigger, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_VisibilityTrigger__methods_[] = {
          DECLARE_METHOD(t_VisibilityTrigger, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_VisibilityTrigger, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_VisibilityTrigger, of_, METH_VARARGS),
          DECLARE_METHOD(t_VisibilityTrigger, radiusCorrection, METH_O),
          DECLARE_METHOD(t_VisibilityTrigger, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_VisibilityTrigger, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(VisibilityTrigger)[] = {
          { Py_tp_methods, t_VisibilityTrigger__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_VisibilityTrigger__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(VisibilityTrigger)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(VisibilityTrigger, t_VisibilityTrigger, VisibilityTrigger);
        PyObject *t_VisibilityTrigger::wrap_Object(const VisibilityTrigger& object, PyTypeObject *p0)
        {
          PyObject *obj = t_VisibilityTrigger::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_VisibilityTrigger *self = (t_VisibilityTrigger *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_VisibilityTrigger::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_VisibilityTrigger::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_VisibilityTrigger *self = (t_VisibilityTrigger *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_VisibilityTrigger::install(PyObject *module)
        {
          installType(&PY_TYPE(VisibilityTrigger), &PY_TYPE_DEF(VisibilityTrigger), module, "VisibilityTrigger", 0);
        }

        void t_VisibilityTrigger::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(VisibilityTrigger), "class_", make_descriptor(VisibilityTrigger::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(VisibilityTrigger), "wrapfn_", make_descriptor(t_VisibilityTrigger::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(VisibilityTrigger), "boxfn_", make_descriptor(boxObject));
          env->getClass(VisibilityTrigger::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(VisibilityTrigger), "VISIBLE_AS_SOON_AS_PARTIALLY_IN_FOV", make_descriptor(t_VisibilityTrigger::wrap_Object(*VisibilityTrigger::VISIBLE_AS_SOON_AS_PARTIALLY_IN_FOV)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(VisibilityTrigger), "VISIBLE_ONLY_WHEN_FULLY_IN_FOV", make_descriptor(t_VisibilityTrigger::wrap_Object(*VisibilityTrigger::VISIBLE_ONLY_WHEN_FULLY_IN_FOV)));
        }

        static PyObject *t_VisibilityTrigger_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, VisibilityTrigger::initializeClass, 1)))
            return NULL;
          return t_VisibilityTrigger::wrap_Object(VisibilityTrigger(((t_VisibilityTrigger *) arg)->object.this$));
        }
        static PyObject *t_VisibilityTrigger_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, VisibilityTrigger::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_VisibilityTrigger_of_(t_VisibilityTrigger *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_VisibilityTrigger_radiusCorrection(t_VisibilityTrigger *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.radiusCorrection(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "radiusCorrection", arg);
          return NULL;
        }

        static PyObject *t_VisibilityTrigger_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          VisibilityTrigger result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::propagation::events::VisibilityTrigger::valueOf(a0));
            return t_VisibilityTrigger::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_VisibilityTrigger_values(PyTypeObject *type)
        {
          JArray< VisibilityTrigger > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::propagation::events::VisibilityTrigger::values());
          return JArray<jobject>(result.this$).wrap(t_VisibilityTrigger::wrap_jobject);
        }
        static PyObject *t_VisibilityTrigger_get__parameters_(t_VisibilityTrigger *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/FDOABuilder.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "java/util/Map.h"
#include "org/orekit/estimation/measurements/FDOA.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *FDOABuilder::class$ = NULL;
          jmethodID *FDOABuilder::mids$ = NULL;
          bool FDOABuilder::live$ = false;

          jclass FDOABuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/FDOABuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0ca6a68995d89781] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/CorrelatedRandomVectorGenerator;Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/estimation/measurements/GroundStation;DDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_build_7088be0b1e29a5c1] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/FDOA;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FDOABuilder::FDOABuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, const ::org::orekit::estimation::measurements::GroundStation & a2, jdouble a3, jdouble a4, jdouble a5, const ::org::orekit::estimation::measurements::ObservableSatellite & a6) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(env->newObject(initializeClass, &mids$, mid_init$_0ca6a68995d89781, a0.this$, a1.this$, a2.this$, a3, a4, a5, a6.this$)) {}

          ::org::orekit::estimation::measurements::FDOA FDOABuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::FDOA(env->callObjectMethod(this$, mids$[mid_build_7088be0b1e29a5c1], a0.this$, a1.this$));
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
        namespace generation {
          static PyObject *t_FDOABuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FDOABuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FDOABuilder_of_(t_FDOABuilder *self, PyObject *args);
          static int t_FDOABuilder_init_(t_FDOABuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FDOABuilder_build(t_FDOABuilder *self, PyObject *args);
          static PyObject *t_FDOABuilder_get__parameters_(t_FDOABuilder *self, void *data);
          static PyGetSetDef t_FDOABuilder__fields_[] = {
            DECLARE_GET_FIELD(t_FDOABuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FDOABuilder__methods_[] = {
            DECLARE_METHOD(t_FDOABuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FDOABuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FDOABuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_FDOABuilder, build, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FDOABuilder)[] = {
            { Py_tp_methods, t_FDOABuilder__methods_ },
            { Py_tp_init, (void *) t_FDOABuilder_init_ },
            { Py_tp_getset, t_FDOABuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FDOABuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder),
            NULL
          };

          DEFINE_TYPE(FDOABuilder, t_FDOABuilder, FDOABuilder);
          PyObject *t_FDOABuilder::wrap_Object(const FDOABuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FDOABuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FDOABuilder *self = (t_FDOABuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FDOABuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FDOABuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FDOABuilder *self = (t_FDOABuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FDOABuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(FDOABuilder), &PY_TYPE_DEF(FDOABuilder), module, "FDOABuilder", 0);
          }

          void t_FDOABuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FDOABuilder), "class_", make_descriptor(FDOABuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FDOABuilder), "wrapfn_", make_descriptor(t_FDOABuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FDOABuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FDOABuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FDOABuilder::initializeClass, 1)))
              return NULL;
            return t_FDOABuilder::wrap_Object(FDOABuilder(((t_FDOABuilder *) arg)->object.this$));
          }
          static PyObject *t_FDOABuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FDOABuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FDOABuilder_of_(t_FDOABuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FDOABuilder_init_(t_FDOABuilder *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::random::CorrelatedRandomVectorGenerator a0((jobject) NULL);
            ::org::orekit::estimation::measurements::GroundStation a1((jobject) NULL);
            ::org::orekit::estimation::measurements::GroundStation a2((jobject) NULL);
            jdouble a3;
            jdouble a4;
            jdouble a5;
            ::org::orekit::estimation::measurements::ObservableSatellite a6((jobject) NULL);
            FDOABuilder object((jobject) NULL);

            if (!parseArgs(args, "kkkDDDk", ::org::hipparchus::random::CorrelatedRandomVectorGenerator::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
            {
              INT_CALL(object = FDOABuilder(a0, a1, a2, a3, a4, a5, a6));
              self->object = object;
              self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(FDOA);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_FDOABuilder_build(t_FDOABuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::FDOA result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return ::org::orekit::estimation::measurements::t_FDOA::wrap_Object(result);
            }

            return callSuper(PY_TYPE(FDOABuilder), (PyObject *) self, "build", args, 2);
          }
          static PyObject *t_FDOABuilder_get__parameters_(t_FDOABuilder *self, void *data)
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
#include "org/orekit/utils/LegendrePolynomials.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *LegendrePolynomials::class$ = NULL;
      jmethodID *LegendrePolynomials::mids$ = NULL;
      bool LegendrePolynomials::live$ = false;

      jclass LegendrePolynomials::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/LegendrePolynomials");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_94fe8d9ffeb50676] = env->getMethodID(cls, "<init>", "(IID)V");
          mids$[mid_getPnm_cad98089d00f8a5b] = env->getMethodID(cls, "getPnm", "(II)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LegendrePolynomials::LegendrePolynomials(jint a0, jint a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_94fe8d9ffeb50676, a0, a1, a2)) {}

      jdouble LegendrePolynomials::getPnm(jint a0, jint a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getPnm_cad98089d00f8a5b], a0, a1);
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
      static PyObject *t_LegendrePolynomials_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LegendrePolynomials_instance_(PyTypeObject *type, PyObject *arg);
      static int t_LegendrePolynomials_init_(t_LegendrePolynomials *self, PyObject *args, PyObject *kwds);
      static PyObject *t_LegendrePolynomials_getPnm(t_LegendrePolynomials *self, PyObject *args);

      static PyMethodDef t_LegendrePolynomials__methods_[] = {
        DECLARE_METHOD(t_LegendrePolynomials, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LegendrePolynomials, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LegendrePolynomials, getPnm, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LegendrePolynomials)[] = {
        { Py_tp_methods, t_LegendrePolynomials__methods_ },
        { Py_tp_init, (void *) t_LegendrePolynomials_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LegendrePolynomials)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(LegendrePolynomials, t_LegendrePolynomials, LegendrePolynomials);

      void t_LegendrePolynomials::install(PyObject *module)
      {
        installType(&PY_TYPE(LegendrePolynomials), &PY_TYPE_DEF(LegendrePolynomials), module, "LegendrePolynomials", 0);
      }

      void t_LegendrePolynomials::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LegendrePolynomials), "class_", make_descriptor(LegendrePolynomials::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LegendrePolynomials), "wrapfn_", make_descriptor(t_LegendrePolynomials::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LegendrePolynomials), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LegendrePolynomials_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LegendrePolynomials::initializeClass, 1)))
          return NULL;
        return t_LegendrePolynomials::wrap_Object(LegendrePolynomials(((t_LegendrePolynomials *) arg)->object.this$));
      }
      static PyObject *t_LegendrePolynomials_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LegendrePolynomials::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_LegendrePolynomials_init_(t_LegendrePolynomials *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        jint a1;
        jdouble a2;
        LegendrePolynomials object((jobject) NULL);

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          INT_CALL(object = LegendrePolynomials(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_LegendrePolynomials_getPnm(t_LegendrePolynomials *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getPnm(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getPnm", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/gauss/FieldLegendreRuleFactory.h"
#include "org/hipparchus/util/Pair.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {

          ::java::lang::Class *FieldLegendreRuleFactory::class$ = NULL;
          jmethodID *FieldLegendreRuleFactory::mids$ = NULL;
          bool FieldLegendreRuleFactory::live$ = false;

          jclass FieldLegendreRuleFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/gauss/FieldLegendreRuleFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_02ab84aa7626616d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
              mids$[mid_computeRule_acde278e36767299] = env->getMethodID(cls, "computeRule", "(I)Lorg/hipparchus/util/Pair;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldLegendreRuleFactory::FieldLegendreRuleFactory(const ::org::hipparchus::Field & a0) : ::org::hipparchus::analysis::integration::gauss::FieldAbstractRuleFactory(env->newObject(initializeClass, &mids$, mid_init$_02ab84aa7626616d, a0.this$)) {}

          ::org::hipparchus::util::Pair FieldLegendreRuleFactory::computeRule(jint a0) const
          {
            return ::org::hipparchus::util::Pair(env->callObjectMethod(this$, mids$[mid_computeRule_acde278e36767299], a0));
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
    namespace analysis {
      namespace integration {
        namespace gauss {
          static PyObject *t_FieldLegendreRuleFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldLegendreRuleFactory_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldLegendreRuleFactory_of_(t_FieldLegendreRuleFactory *self, PyObject *args);
          static int t_FieldLegendreRuleFactory_init_(t_FieldLegendreRuleFactory *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldLegendreRuleFactory_computeRule(t_FieldLegendreRuleFactory *self, PyObject *arg);
          static PyObject *t_FieldLegendreRuleFactory_get__parameters_(t_FieldLegendreRuleFactory *self, void *data);
          static PyGetSetDef t_FieldLegendreRuleFactory__fields_[] = {
            DECLARE_GET_FIELD(t_FieldLegendreRuleFactory, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldLegendreRuleFactory__methods_[] = {
            DECLARE_METHOD(t_FieldLegendreRuleFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldLegendreRuleFactory, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldLegendreRuleFactory, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldLegendreRuleFactory, computeRule, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldLegendreRuleFactory)[] = {
            { Py_tp_methods, t_FieldLegendreRuleFactory__methods_ },
            { Py_tp_init, (void *) t_FieldLegendreRuleFactory_init_ },
            { Py_tp_getset, t_FieldLegendreRuleFactory__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldLegendreRuleFactory)[] = {
            &PY_TYPE_DEF(::org::hipparchus::analysis::integration::gauss::FieldAbstractRuleFactory),
            NULL
          };

          DEFINE_TYPE(FieldLegendreRuleFactory, t_FieldLegendreRuleFactory, FieldLegendreRuleFactory);
          PyObject *t_FieldLegendreRuleFactory::wrap_Object(const FieldLegendreRuleFactory& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldLegendreRuleFactory::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldLegendreRuleFactory *self = (t_FieldLegendreRuleFactory *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldLegendreRuleFactory::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldLegendreRuleFactory::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldLegendreRuleFactory *self = (t_FieldLegendreRuleFactory *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldLegendreRuleFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldLegendreRuleFactory), &PY_TYPE_DEF(FieldLegendreRuleFactory), module, "FieldLegendreRuleFactory", 0);
          }

          void t_FieldLegendreRuleFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLegendreRuleFactory), "class_", make_descriptor(FieldLegendreRuleFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLegendreRuleFactory), "wrapfn_", make_descriptor(t_FieldLegendreRuleFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLegendreRuleFactory), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldLegendreRuleFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldLegendreRuleFactory::initializeClass, 1)))
              return NULL;
            return t_FieldLegendreRuleFactory::wrap_Object(FieldLegendreRuleFactory(((t_FieldLegendreRuleFactory *) arg)->object.this$));
          }
          static PyObject *t_FieldLegendreRuleFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldLegendreRuleFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldLegendreRuleFactory_of_(t_FieldLegendreRuleFactory *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldLegendreRuleFactory_init_(t_FieldLegendreRuleFactory *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldLegendreRuleFactory object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              INT_CALL(object = FieldLegendreRuleFactory(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_FieldLegendreRuleFactory_computeRule(t_FieldLegendreRuleFactory *self, PyObject *arg)
          {
            jint a0;
            ::org::hipparchus::util::Pair result((jobject) NULL);

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.computeRule(a0));
              return ::org::hipparchus::util::t_Pair::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "computeRule", arg);
            return NULL;
          }
          static PyObject *t_FieldLegendreRuleFactory_get__parameters_(t_FieldLegendreRuleFactory *self, void *data)
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
#include "org/orekit/gnss/antenna/PythonPhaseCenterVariationFunction.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/antenna/PhaseCenterVariationFunction.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace antenna {

        ::java::lang::Class *PythonPhaseCenterVariationFunction::class$ = NULL;
        jmethodID *PythonPhaseCenterVariationFunction::mids$ = NULL;
        bool PythonPhaseCenterVariationFunction::live$ = false;

        jclass PythonPhaseCenterVariationFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/antenna/PythonPhaseCenterVariationFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_value_99e3200dafc19573] = env->getMethodID(cls, "value", "(DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonPhaseCenterVariationFunction::PythonPhaseCenterVariationFunction() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        void PythonPhaseCenterVariationFunction::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
        }

        jlong PythonPhaseCenterVariationFunction::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
        }

        void PythonPhaseCenterVariationFunction::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
      namespace antenna {
        static PyObject *t_PythonPhaseCenterVariationFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonPhaseCenterVariationFunction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonPhaseCenterVariationFunction_init_(t_PythonPhaseCenterVariationFunction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonPhaseCenterVariationFunction_finalize(t_PythonPhaseCenterVariationFunction *self);
        static PyObject *t_PythonPhaseCenterVariationFunction_pythonExtension(t_PythonPhaseCenterVariationFunction *self, PyObject *args);
        static void JNICALL t_PythonPhaseCenterVariationFunction_pythonDecRef0(JNIEnv *jenv, jobject jobj);
        static jdouble JNICALL t_PythonPhaseCenterVariationFunction_value1(JNIEnv *jenv, jobject jobj, jdouble a0, jdouble a1);
        static PyObject *t_PythonPhaseCenterVariationFunction_get__self(t_PythonPhaseCenterVariationFunction *self, void *data);
        static PyGetSetDef t_PythonPhaseCenterVariationFunction__fields_[] = {
          DECLARE_GET_FIELD(t_PythonPhaseCenterVariationFunction, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonPhaseCenterVariationFunction__methods_[] = {
          DECLARE_METHOD(t_PythonPhaseCenterVariationFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonPhaseCenterVariationFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonPhaseCenterVariationFunction, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonPhaseCenterVariationFunction, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonPhaseCenterVariationFunction)[] = {
          { Py_tp_methods, t_PythonPhaseCenterVariationFunction__methods_ },
          { Py_tp_init, (void *) t_PythonPhaseCenterVariationFunction_init_ },
          { Py_tp_getset, t_PythonPhaseCenterVariationFunction__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonPhaseCenterVariationFunction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonPhaseCenterVariationFunction, t_PythonPhaseCenterVariationFunction, PythonPhaseCenterVariationFunction);

        void t_PythonPhaseCenterVariationFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonPhaseCenterVariationFunction), &PY_TYPE_DEF(PythonPhaseCenterVariationFunction), module, "PythonPhaseCenterVariationFunction", 1);
        }

        void t_PythonPhaseCenterVariationFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPhaseCenterVariationFunction), "class_", make_descriptor(PythonPhaseCenterVariationFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPhaseCenterVariationFunction), "wrapfn_", make_descriptor(t_PythonPhaseCenterVariationFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPhaseCenterVariationFunction), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonPhaseCenterVariationFunction::initializeClass);
          JNINativeMethod methods[] = {
            { "pythonDecRef", "()V", (void *) t_PythonPhaseCenterVariationFunction_pythonDecRef0 },
            { "value", "(DD)D", (void *) t_PythonPhaseCenterVariationFunction_value1 },
          };
          env->registerNatives(cls, methods, 2);
        }

        static PyObject *t_PythonPhaseCenterVariationFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonPhaseCenterVariationFunction::initializeClass, 1)))
            return NULL;
          return t_PythonPhaseCenterVariationFunction::wrap_Object(PythonPhaseCenterVariationFunction(((t_PythonPhaseCenterVariationFunction *) arg)->object.this$));
        }
        static PyObject *t_PythonPhaseCenterVariationFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonPhaseCenterVariationFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonPhaseCenterVariationFunction_init_(t_PythonPhaseCenterVariationFunction *self, PyObject *args, PyObject *kwds)
        {
          PythonPhaseCenterVariationFunction object((jobject) NULL);

          INT_CALL(object = PythonPhaseCenterVariationFunction());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonPhaseCenterVariationFunction_finalize(t_PythonPhaseCenterVariationFunction *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonPhaseCenterVariationFunction_pythonExtension(t_PythonPhaseCenterVariationFunction *self, PyObject *args)
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

        static void JNICALL t_PythonPhaseCenterVariationFunction_pythonDecRef0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPhaseCenterVariationFunction::mids$[PythonPhaseCenterVariationFunction::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonPhaseCenterVariationFunction::mids$[PythonPhaseCenterVariationFunction::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static jdouble JNICALL t_PythonPhaseCenterVariationFunction_value1(JNIEnv *jenv, jobject jobj, jdouble a0, jdouble a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPhaseCenterVariationFunction::mids$[PythonPhaseCenterVariationFunction::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jdouble value;
          PyObject *result = PyObject_CallMethod(obj, "value", "dd", (double) a0, (double) a1);
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

        static PyObject *t_PythonPhaseCenterVariationFunction_get__self(t_PythonPhaseCenterVariationFunction *self, void *data)
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
#include "org/orekit/propagation/events/handlers/FieldStopOnDecreasing.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/ode/events/Action.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/events/handlers/FieldEventHandler.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {

          ::java::lang::Class *FieldStopOnDecreasing::class$ = NULL;
          jmethodID *FieldStopOnDecreasing::mids$ = NULL;
          bool FieldStopOnDecreasing::live$ = false;

          jclass FieldStopOnDecreasing::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/events/handlers/FieldStopOnDecreasing");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_eventOccurred_839b1f3ec2c4fbf6] = env->getMethodID(cls, "eventOccurred", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/events/FieldEventDetector;Z)Lorg/hipparchus/ode/events/Action;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldStopOnDecreasing::FieldStopOnDecreasing() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          ::org::hipparchus::ode::events::Action FieldStopOnDecreasing::eventOccurred(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::events::FieldEventDetector & a1, jboolean a2) const
          {
            return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_eventOccurred_839b1f3ec2c4fbf6], a0.this$, a1.this$, a2));
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
          static PyObject *t_FieldStopOnDecreasing_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldStopOnDecreasing_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldStopOnDecreasing_of_(t_FieldStopOnDecreasing *self, PyObject *args);
          static int t_FieldStopOnDecreasing_init_(t_FieldStopOnDecreasing *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldStopOnDecreasing_eventOccurred(t_FieldStopOnDecreasing *self, PyObject *args);
          static PyObject *t_FieldStopOnDecreasing_get__parameters_(t_FieldStopOnDecreasing *self, void *data);
          static PyGetSetDef t_FieldStopOnDecreasing__fields_[] = {
            DECLARE_GET_FIELD(t_FieldStopOnDecreasing, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldStopOnDecreasing__methods_[] = {
            DECLARE_METHOD(t_FieldStopOnDecreasing, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldStopOnDecreasing, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldStopOnDecreasing, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldStopOnDecreasing, eventOccurred, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldStopOnDecreasing)[] = {
            { Py_tp_methods, t_FieldStopOnDecreasing__methods_ },
            { Py_tp_init, (void *) t_FieldStopOnDecreasing_init_ },
            { Py_tp_getset, t_FieldStopOnDecreasing__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldStopOnDecreasing)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldStopOnDecreasing, t_FieldStopOnDecreasing, FieldStopOnDecreasing);
          PyObject *t_FieldStopOnDecreasing::wrap_Object(const FieldStopOnDecreasing& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldStopOnDecreasing::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldStopOnDecreasing *self = (t_FieldStopOnDecreasing *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldStopOnDecreasing::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldStopOnDecreasing::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldStopOnDecreasing *self = (t_FieldStopOnDecreasing *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldStopOnDecreasing::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldStopOnDecreasing), &PY_TYPE_DEF(FieldStopOnDecreasing), module, "FieldStopOnDecreasing", 0);
          }

          void t_FieldStopOnDecreasing::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStopOnDecreasing), "class_", make_descriptor(FieldStopOnDecreasing::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStopOnDecreasing), "wrapfn_", make_descriptor(t_FieldStopOnDecreasing::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStopOnDecreasing), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldStopOnDecreasing_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldStopOnDecreasing::initializeClass, 1)))
              return NULL;
            return t_FieldStopOnDecreasing::wrap_Object(FieldStopOnDecreasing(((t_FieldStopOnDecreasing *) arg)->object.this$));
          }
          static PyObject *t_FieldStopOnDecreasing_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldStopOnDecreasing::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldStopOnDecreasing_of_(t_FieldStopOnDecreasing *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldStopOnDecreasing_init_(t_FieldStopOnDecreasing *self, PyObject *args, PyObject *kwds)
          {
            FieldStopOnDecreasing object((jobject) NULL);

            INT_CALL(object = FieldStopOnDecreasing());
            self->object = object;

            return 0;
          }

          static PyObject *t_FieldStopOnDecreasing_eventOccurred(t_FieldStopOnDecreasing *self, PyObject *args)
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
          static PyObject *t_FieldStopOnDecreasing_get__parameters_(t_FieldStopOnDecreasing *self, void *data)
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
#include "org/orekit/gnss/rflink/gps/SubFrame2.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {

          ::java::lang::Class *SubFrame2::class$ = NULL;
          jmethodID *SubFrame2::mids$ = NULL;
          bool SubFrame2::live$ = false;

          jclass SubFrame2::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/rflink/gps/SubFrame2");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getAODO_55546ef6a647f39b] = env->getMethodID(cls, "getAODO", "()I");
              mids$[mid_getCrs_b74f83833fdad017] = env->getMethodID(cls, "getCrs", "()D");
              mids$[mid_getCuc_b74f83833fdad017] = env->getMethodID(cls, "getCuc", "()D");
              mids$[mid_getCus_b74f83833fdad017] = env->getMethodID(cls, "getCus", "()D");
              mids$[mid_getDeltaN_b74f83833fdad017] = env->getMethodID(cls, "getDeltaN", "()D");
              mids$[mid_getE_b74f83833fdad017] = env->getMethodID(cls, "getE", "()D");
              mids$[mid_getFitInterval_55546ef6a647f39b] = env->getMethodID(cls, "getFitInterval", "()I");
              mids$[mid_getIODE_55546ef6a647f39b] = env->getMethodID(cls, "getIODE", "()I");
              mids$[mid_getM0_b74f83833fdad017] = env->getMethodID(cls, "getM0", "()D");
              mids$[mid_getSqrtA_b74f83833fdad017] = env->getMethodID(cls, "getSqrtA", "()D");
              mids$[mid_getToe_55546ef6a647f39b] = env->getMethodID(cls, "getToe", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jint SubFrame2::getAODO() const
          {
            return env->callIntMethod(this$, mids$[mid_getAODO_55546ef6a647f39b]);
          }

          jdouble SubFrame2::getCrs() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getCrs_b74f83833fdad017]);
          }

          jdouble SubFrame2::getCuc() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getCuc_b74f83833fdad017]);
          }

          jdouble SubFrame2::getCus() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getCus_b74f83833fdad017]);
          }

          jdouble SubFrame2::getDeltaN() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDeltaN_b74f83833fdad017]);
          }

          jdouble SubFrame2::getE() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getE_b74f83833fdad017]);
          }

          jint SubFrame2::getFitInterval() const
          {
            return env->callIntMethod(this$, mids$[mid_getFitInterval_55546ef6a647f39b]);
          }

          jint SubFrame2::getIODE() const
          {
            return env->callIntMethod(this$, mids$[mid_getIODE_55546ef6a647f39b]);
          }

          jdouble SubFrame2::getM0() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getM0_b74f83833fdad017]);
          }

          jdouble SubFrame2::getSqrtA() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getSqrtA_b74f83833fdad017]);
          }

          jint SubFrame2::getToe() const
          {
            return env->callIntMethod(this$, mids$[mid_getToe_55546ef6a647f39b]);
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
          static PyObject *t_SubFrame2_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame2_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame2_getAODO(t_SubFrame2 *self);
          static PyObject *t_SubFrame2_getCrs(t_SubFrame2 *self);
          static PyObject *t_SubFrame2_getCuc(t_SubFrame2 *self);
          static PyObject *t_SubFrame2_getCus(t_SubFrame2 *self);
          static PyObject *t_SubFrame2_getDeltaN(t_SubFrame2 *self);
          static PyObject *t_SubFrame2_getE(t_SubFrame2 *self);
          static PyObject *t_SubFrame2_getFitInterval(t_SubFrame2 *self);
          static PyObject *t_SubFrame2_getIODE(t_SubFrame2 *self);
          static PyObject *t_SubFrame2_getM0(t_SubFrame2 *self);
          static PyObject *t_SubFrame2_getSqrtA(t_SubFrame2 *self);
          static PyObject *t_SubFrame2_getToe(t_SubFrame2 *self);
          static PyObject *t_SubFrame2_get__aODO(t_SubFrame2 *self, void *data);
          static PyObject *t_SubFrame2_get__crs(t_SubFrame2 *self, void *data);
          static PyObject *t_SubFrame2_get__cuc(t_SubFrame2 *self, void *data);
          static PyObject *t_SubFrame2_get__cus(t_SubFrame2 *self, void *data);
          static PyObject *t_SubFrame2_get__deltaN(t_SubFrame2 *self, void *data);
          static PyObject *t_SubFrame2_get__e(t_SubFrame2 *self, void *data);
          static PyObject *t_SubFrame2_get__fitInterval(t_SubFrame2 *self, void *data);
          static PyObject *t_SubFrame2_get__iODE(t_SubFrame2 *self, void *data);
          static PyObject *t_SubFrame2_get__m0(t_SubFrame2 *self, void *data);
          static PyObject *t_SubFrame2_get__sqrtA(t_SubFrame2 *self, void *data);
          static PyObject *t_SubFrame2_get__toe(t_SubFrame2 *self, void *data);
          static PyGetSetDef t_SubFrame2__fields_[] = {
            DECLARE_GET_FIELD(t_SubFrame2, aODO),
            DECLARE_GET_FIELD(t_SubFrame2, crs),
            DECLARE_GET_FIELD(t_SubFrame2, cuc),
            DECLARE_GET_FIELD(t_SubFrame2, cus),
            DECLARE_GET_FIELD(t_SubFrame2, deltaN),
            DECLARE_GET_FIELD(t_SubFrame2, e),
            DECLARE_GET_FIELD(t_SubFrame2, fitInterval),
            DECLARE_GET_FIELD(t_SubFrame2, iODE),
            DECLARE_GET_FIELD(t_SubFrame2, m0),
            DECLARE_GET_FIELD(t_SubFrame2, sqrtA),
            DECLARE_GET_FIELD(t_SubFrame2, toe),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SubFrame2__methods_[] = {
            DECLARE_METHOD(t_SubFrame2, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame2, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame2, getAODO, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame2, getCrs, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame2, getCuc, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame2, getCus, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame2, getDeltaN, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame2, getE, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame2, getFitInterval, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame2, getIODE, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame2, getM0, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame2, getSqrtA, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame2, getToe, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubFrame2)[] = {
            { Py_tp_methods, t_SubFrame2__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SubFrame2__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubFrame2)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::rflink::gps::SubFrame),
            NULL
          };

          DEFINE_TYPE(SubFrame2, t_SubFrame2, SubFrame2);

          void t_SubFrame2::install(PyObject *module)
          {
            installType(&PY_TYPE(SubFrame2), &PY_TYPE_DEF(SubFrame2), module, "SubFrame2", 0);
          }

          void t_SubFrame2::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame2), "class_", make_descriptor(SubFrame2::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame2), "wrapfn_", make_descriptor(t_SubFrame2::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame2), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SubFrame2_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubFrame2::initializeClass, 1)))
              return NULL;
            return t_SubFrame2::wrap_Object(SubFrame2(((t_SubFrame2 *) arg)->object.this$));
          }
          static PyObject *t_SubFrame2_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubFrame2::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SubFrame2_getAODO(t_SubFrame2 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getAODO());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame2_getCrs(t_SubFrame2 *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getCrs());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame2_getCuc(t_SubFrame2 *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getCuc());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame2_getCus(t_SubFrame2 *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getCus());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame2_getDeltaN(t_SubFrame2 *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getDeltaN());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame2_getE(t_SubFrame2 *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getE());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame2_getFitInterval(t_SubFrame2 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getFitInterval());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame2_getIODE(t_SubFrame2 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getIODE());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame2_getM0(t_SubFrame2 *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getM0());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame2_getSqrtA(t_SubFrame2 *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getSqrtA());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame2_getToe(t_SubFrame2 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getToe());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame2_get__aODO(t_SubFrame2 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getAODO());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame2_get__crs(t_SubFrame2 *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getCrs());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame2_get__cuc(t_SubFrame2 *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getCuc());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame2_get__cus(t_SubFrame2 *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getCus());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame2_get__deltaN(t_SubFrame2 *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getDeltaN());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame2_get__e(t_SubFrame2 *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getE());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame2_get__fitInterval(t_SubFrame2 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getFitInterval());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame2_get__iODE(t_SubFrame2 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getIODE());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame2_get__m0(t_SubFrame2 *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getM0());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame2_get__sqrtA(t_SubFrame2 *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getSqrtA());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame2_get__toe(t_SubFrame2 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getToe());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/PythonAbstractMeasurement.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *PythonAbstractMeasurement::class$ = NULL;
        jmethodID *PythonAbstractMeasurement::mids$ = NULL;
        bool PythonAbstractMeasurement::live$ = false;

        jclass PythonAbstractMeasurement::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/PythonAbstractMeasurement");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1b561c9d2427f59f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DDDLjava/util/List;)V");
            mids$[mid_addParameterDriver_5791d10af4720a8e] = env->getMethodID(cls, "addParameterDriver", "(Lorg/orekit/utils/ParameterDriver;)V");
            mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_theoreticalEvaluation_d598991c5cac8ab0] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_theoreticalEvaluationWithoutDerivatives_9347cf3b1f0dd85a] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractMeasurement::PythonAbstractMeasurement(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2, jdouble a3, const ::java::util::List & a4) : ::org::orekit::estimation::measurements::AbstractMeasurement(env->newObject(initializeClass, &mids$, mid_init$_1b561c9d2427f59f, a0.this$, a1, a2, a3, a4.this$)) {}

        void PythonAbstractMeasurement::addParameterDriver(const ::org::orekit::utils::ParameterDriver & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addParameterDriver_5791d10af4720a8e], a0.this$);
        }

        void PythonAbstractMeasurement::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
        }

        jlong PythonAbstractMeasurement::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
        }

        void PythonAbstractMeasurement::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
        static PyObject *t_PythonAbstractMeasurement_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractMeasurement_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractMeasurement_of_(t_PythonAbstractMeasurement *self, PyObject *args);
        static int t_PythonAbstractMeasurement_init_(t_PythonAbstractMeasurement *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAbstractMeasurement_addParameterDriver(t_PythonAbstractMeasurement *self, PyObject *arg);
        static PyObject *t_PythonAbstractMeasurement_finalize(t_PythonAbstractMeasurement *self);
        static PyObject *t_PythonAbstractMeasurement_pythonExtension(t_PythonAbstractMeasurement *self, PyObject *args);
        static void JNICALL t_PythonAbstractMeasurement_pythonDecRef0(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonAbstractMeasurement_theoreticalEvaluation1(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jobject a2);
        static jobject JNICALL t_PythonAbstractMeasurement_theoreticalEvaluationWithoutDerivatives2(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jobject a2);
        static PyObject *t_PythonAbstractMeasurement_get__self(t_PythonAbstractMeasurement *self, void *data);
        static PyObject *t_PythonAbstractMeasurement_get__parameters_(t_PythonAbstractMeasurement *self, void *data);
        static PyGetSetDef t_PythonAbstractMeasurement__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAbstractMeasurement, self),
          DECLARE_GET_FIELD(t_PythonAbstractMeasurement, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAbstractMeasurement__methods_[] = {
          DECLARE_METHOD(t_PythonAbstractMeasurement, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractMeasurement, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractMeasurement, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonAbstractMeasurement, addParameterDriver, METH_O),
          DECLARE_METHOD(t_PythonAbstractMeasurement, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAbstractMeasurement, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAbstractMeasurement)[] = {
          { Py_tp_methods, t_PythonAbstractMeasurement__methods_ },
          { Py_tp_init, (void *) t_PythonAbstractMeasurement_init_ },
          { Py_tp_getset, t_PythonAbstractMeasurement__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAbstractMeasurement)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::measurements::AbstractMeasurement),
          NULL
        };

        DEFINE_TYPE(PythonAbstractMeasurement, t_PythonAbstractMeasurement, PythonAbstractMeasurement);
        PyObject *t_PythonAbstractMeasurement::wrap_Object(const PythonAbstractMeasurement& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonAbstractMeasurement::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonAbstractMeasurement *self = (t_PythonAbstractMeasurement *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PythonAbstractMeasurement::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonAbstractMeasurement::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonAbstractMeasurement *self = (t_PythonAbstractMeasurement *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PythonAbstractMeasurement::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAbstractMeasurement), &PY_TYPE_DEF(PythonAbstractMeasurement), module, "PythonAbstractMeasurement", 1);
        }

        void t_PythonAbstractMeasurement::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMeasurement), "class_", make_descriptor(PythonAbstractMeasurement::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMeasurement), "wrapfn_", make_descriptor(t_PythonAbstractMeasurement::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMeasurement), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAbstractMeasurement::initializeClass);
          JNINativeMethod methods[] = {
            { "pythonDecRef", "()V", (void *) t_PythonAbstractMeasurement_pythonDecRef0 },
            { "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;", (void *) t_PythonAbstractMeasurement_theoreticalEvaluation1 },
            { "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;", (void *) t_PythonAbstractMeasurement_theoreticalEvaluationWithoutDerivatives2 },
          };
          env->registerNatives(cls, methods, 3);
        }

        static PyObject *t_PythonAbstractMeasurement_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAbstractMeasurement::initializeClass, 1)))
            return NULL;
          return t_PythonAbstractMeasurement::wrap_Object(PythonAbstractMeasurement(((t_PythonAbstractMeasurement *) arg)->object.this$));
        }
        static PyObject *t_PythonAbstractMeasurement_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAbstractMeasurement::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonAbstractMeasurement_of_(t_PythonAbstractMeasurement *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonAbstractMeasurement_init_(t_PythonAbstractMeasurement *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          jdouble a1;
          jdouble a2;
          jdouble a3;
          ::java::util::List a4((jobject) NULL);
          PyTypeObject **p4;
          PythonAbstractMeasurement object((jobject) NULL);

          if (!parseArgs(args, "kDDDK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::java::util::t_List::parameters_))
          {
            INT_CALL(object = PythonAbstractMeasurement(a0, a1, a2, a3, a4));
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

        static PyObject *t_PythonAbstractMeasurement_addParameterDriver(t_PythonAbstractMeasurement *self, PyObject *arg)
        {
          ::org::orekit::utils::ParameterDriver a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::utils::ParameterDriver::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addParameterDriver(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addParameterDriver", arg);
          return NULL;
        }

        static PyObject *t_PythonAbstractMeasurement_finalize(t_PythonAbstractMeasurement *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAbstractMeasurement_pythonExtension(t_PythonAbstractMeasurement *self, PyObject *args)
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

        static void JNICALL t_PythonAbstractMeasurement_pythonDecRef0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMeasurement::mids$[PythonAbstractMeasurement::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAbstractMeasurement::mids$[PythonAbstractMeasurement::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static jobject JNICALL t_PythonAbstractMeasurement_theoreticalEvaluation1(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMeasurement::mids$[PythonAbstractMeasurement::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::estimation::measurements::EstimatedMeasurement value((jobject) NULL);
          PyObject *o2 = JArray<jobject>(a2).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
          PyObject *result = PyObject_CallMethod(obj, "theoreticalEvaluation", "iiO", (int) a0, (int) a1, o2);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &value))
          {
            throwTypeError("theoreticalEvaluation", result);
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

        static jobject JNICALL t_PythonAbstractMeasurement_theoreticalEvaluationWithoutDerivatives2(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMeasurement::mids$[PythonAbstractMeasurement::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::estimation::measurements::EstimatedMeasurementBase value((jobject) NULL);
          PyObject *o2 = JArray<jobject>(a2).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
          PyObject *result = PyObject_CallMethod(obj, "theoreticalEvaluationWithoutDerivatives", "iiO", (int) a0, (int) a1, o2);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::estimation::measurements::EstimatedMeasurementBase::initializeClass, &value))
          {
            throwTypeError("theoreticalEvaluationWithoutDerivatives", result);
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

        static PyObject *t_PythonAbstractMeasurement_get__self(t_PythonAbstractMeasurement *self, void *data)
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
        static PyObject *t_PythonAbstractMeasurement_get__parameters_(t_PythonAbstractMeasurement *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/orekit/frames/TransformProvider.h"
#include "java/io/Serializable.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/frames/FieldStaticTransform.h"
#include "org/orekit/frames/StaticTransform.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *Frame::class$ = NULL;
      jmethodID *Frame::mids$ = NULL;
      bool Frame::live$ = false;

      jclass Frame::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/Frame");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_c6446c6a66066a58] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/Transform;Ljava/lang/String;)V");
          mids$[mid_init$_23023eb409a55d5d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/TransformProvider;Ljava/lang/String;)V");
          mids$[mid_init$_9ce69abbd2d1e9a2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/Transform;Ljava/lang/String;Z)V");
          mids$[mid_init$_6546c0395cc39710] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/TransformProvider;Ljava/lang/String;Z)V");
          mids$[mid_getAncestor_afef5fc5bd79fa39] = env->getMethodID(cls, "getAncestor", "(I)Lorg/orekit/frames/Frame;");
          mids$[mid_getDepth_55546ef6a647f39b] = env->getMethodID(cls, "getDepth", "()I");
          mids$[mid_getFrozenFrame_7ad0d084f0482520] = env->getMethodID(cls, "getFrozenFrame", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;Ljava/lang/String;)Lorg/orekit/frames/Frame;");
          mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_getParent_2c51111cc6894ba1] = env->getMethodID(cls, "getParent", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getRoot_2c51111cc6894ba1] = env->getStaticMethodID(cls, "getRoot", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getStaticTransformTo_b4721e0f5ffc3fd2] = env->getMethodID(cls, "getStaticTransformTo", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/StaticTransform;");
          mids$[mid_getStaticTransformTo_d4e6616065ea0772] = env->getMethodID(cls, "getStaticTransformTo", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_getTransformProvider_51018934a5745bab] = env->getMethodID(cls, "getTransformProvider", "()Lorg/orekit/frames/TransformProvider;");
          mids$[mid_getTransformTo_6ac19f02e66fc896] = env->getMethodID(cls, "getTransformTo", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
          mids$[mid_getTransformTo_72dd5326d829caa3] = env->getMethodID(cls, "getTransformTo", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldTransform;");
          mids$[mid_isChildOf_388bd29d78cd2abf] = env->getMethodID(cls, "isChildOf", "(Lorg/orekit/frames/Frame;)Z");
          mids$[mid_isPseudoInertial_9ab94ac1dc23b105] = env->getMethodID(cls, "isPseudoInertial", "()Z");
          mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Frame::Frame(const Frame & a0, const ::org::orekit::frames::Transform & a1, const ::java::lang::String & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c6446c6a66066a58, a0.this$, a1.this$, a2.this$)) {}

      Frame::Frame(const Frame & a0, const ::org::orekit::frames::TransformProvider & a1, const ::java::lang::String & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_23023eb409a55d5d, a0.this$, a1.this$, a2.this$)) {}

      Frame::Frame(const Frame & a0, const ::org::orekit::frames::Transform & a1, const ::java::lang::String & a2, jboolean a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9ce69abbd2d1e9a2, a0.this$, a1.this$, a2.this$, a3)) {}

      Frame::Frame(const Frame & a0, const ::org::orekit::frames::TransformProvider & a1, const ::java::lang::String & a2, jboolean a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6546c0395cc39710, a0.this$, a1.this$, a2.this$, a3)) {}

      Frame Frame::getAncestor(jint a0) const
      {
        return Frame(env->callObjectMethod(this$, mids$[mid_getAncestor_afef5fc5bd79fa39], a0));
      }

      jint Frame::getDepth() const
      {
        return env->callIntMethod(this$, mids$[mid_getDepth_55546ef6a647f39b]);
      }

      Frame Frame::getFrozenFrame(const Frame & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::java::lang::String & a2) const
      {
        return Frame(env->callObjectMethod(this$, mids$[mid_getFrozenFrame_7ad0d084f0482520], a0.this$, a1.this$, a2.this$));
      }

      ::java::lang::String Frame::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_1c1fa1e935d6cdcf]));
      }

      Frame Frame::getParent() const
      {
        return Frame(env->callObjectMethod(this$, mids$[mid_getParent_2c51111cc6894ba1]));
      }

      Frame Frame::getRoot()
      {
        jclass cls = env->getClass(initializeClass);
        return Frame(env->callStaticObjectMethod(cls, mids$[mid_getRoot_2c51111cc6894ba1]));
      }

      ::org::orekit::frames::StaticTransform Frame::getStaticTransformTo(const Frame & a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        return ::org::orekit::frames::StaticTransform(env->callObjectMethod(this$, mids$[mid_getStaticTransformTo_b4721e0f5ffc3fd2], a0.this$, a1.this$));
      }

      ::org::orekit::frames::FieldStaticTransform Frame::getStaticTransformTo(const Frame & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
      {
        return ::org::orekit::frames::FieldStaticTransform(env->callObjectMethod(this$, mids$[mid_getStaticTransformTo_d4e6616065ea0772], a0.this$, a1.this$));
      }

      ::org::orekit::frames::TransformProvider Frame::getTransformProvider() const
      {
        return ::org::orekit::frames::TransformProvider(env->callObjectMethod(this$, mids$[mid_getTransformProvider_51018934a5745bab]));
      }

      ::org::orekit::frames::Transform Frame::getTransformTo(const Frame & a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getTransformTo_6ac19f02e66fc896], a0.this$, a1.this$));
      }

      ::org::orekit::frames::FieldTransform Frame::getTransformTo(const Frame & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
      {
        return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_getTransformTo_72dd5326d829caa3], a0.this$, a1.this$));
      }

      jboolean Frame::isChildOf(const Frame & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isChildOf_388bd29d78cd2abf], a0.this$);
      }

      jboolean Frame::isPseudoInertial() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isPseudoInertial_9ab94ac1dc23b105]);
      }

      ::java::lang::String Frame::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
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
      static PyObject *t_Frame_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Frame_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Frame_init_(t_Frame *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Frame_getAncestor(t_Frame *self, PyObject *arg);
      static PyObject *t_Frame_getDepth(t_Frame *self);
      static PyObject *t_Frame_getFrozenFrame(t_Frame *self, PyObject *args);
      static PyObject *t_Frame_getName(t_Frame *self);
      static PyObject *t_Frame_getParent(t_Frame *self);
      static PyObject *t_Frame_getRoot(PyTypeObject *type);
      static PyObject *t_Frame_getStaticTransformTo(t_Frame *self, PyObject *args);
      static PyObject *t_Frame_getTransformProvider(t_Frame *self);
      static PyObject *t_Frame_getTransformTo(t_Frame *self, PyObject *args);
      static PyObject *t_Frame_isChildOf(t_Frame *self, PyObject *arg);
      static PyObject *t_Frame_isPseudoInertial(t_Frame *self);
      static PyObject *t_Frame_toString(t_Frame *self, PyObject *args);
      static PyObject *t_Frame_get__depth(t_Frame *self, void *data);
      static PyObject *t_Frame_get__name(t_Frame *self, void *data);
      static PyObject *t_Frame_get__parent(t_Frame *self, void *data);
      static PyObject *t_Frame_get__pseudoInertial(t_Frame *self, void *data);
      static PyObject *t_Frame_get__root(t_Frame *self, void *data);
      static PyObject *t_Frame_get__transformProvider(t_Frame *self, void *data);
      static PyGetSetDef t_Frame__fields_[] = {
        DECLARE_GET_FIELD(t_Frame, depth),
        DECLARE_GET_FIELD(t_Frame, name),
        DECLARE_GET_FIELD(t_Frame, parent),
        DECLARE_GET_FIELD(t_Frame, pseudoInertial),
        DECLARE_GET_FIELD(t_Frame, root),
        DECLARE_GET_FIELD(t_Frame, transformProvider),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Frame__methods_[] = {
        DECLARE_METHOD(t_Frame, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Frame, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Frame, getAncestor, METH_O),
        DECLARE_METHOD(t_Frame, getDepth, METH_NOARGS),
        DECLARE_METHOD(t_Frame, getFrozenFrame, METH_VARARGS),
        DECLARE_METHOD(t_Frame, getName, METH_NOARGS),
        DECLARE_METHOD(t_Frame, getParent, METH_NOARGS),
        DECLARE_METHOD(t_Frame, getRoot, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_Frame, getStaticTransformTo, METH_VARARGS),
        DECLARE_METHOD(t_Frame, getTransformProvider, METH_NOARGS),
        DECLARE_METHOD(t_Frame, getTransformTo, METH_VARARGS),
        DECLARE_METHOD(t_Frame, isChildOf, METH_O),
        DECLARE_METHOD(t_Frame, isPseudoInertial, METH_NOARGS),
        DECLARE_METHOD(t_Frame, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Frame)[] = {
        { Py_tp_methods, t_Frame__methods_ },
        { Py_tp_init, (void *) t_Frame_init_ },
        { Py_tp_getset, t_Frame__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Frame)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Frame, t_Frame, Frame);

      void t_Frame::install(PyObject *module)
      {
        installType(&PY_TYPE(Frame), &PY_TYPE_DEF(Frame), module, "Frame", 0);
      }

      void t_Frame::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frame), "class_", make_descriptor(Frame::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frame), "wrapfn_", make_descriptor(t_Frame::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frame), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Frame_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Frame::initializeClass, 1)))
          return NULL;
        return t_Frame::wrap_Object(Frame(((t_Frame *) arg)->object.this$));
      }
      static PyObject *t_Frame_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Frame::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Frame_init_(t_Frame *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            Frame a0((jobject) NULL);
            ::org::orekit::frames::Transform a1((jobject) NULL);
            ::java::lang::String a2((jobject) NULL);
            Frame object((jobject) NULL);

            if (!parseArgs(args, "kks", Frame::initializeClass, ::org::orekit::frames::Transform::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = Frame(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            Frame a0((jobject) NULL);
            ::org::orekit::frames::TransformProvider a1((jobject) NULL);
            ::java::lang::String a2((jobject) NULL);
            Frame object((jobject) NULL);

            if (!parseArgs(args, "kks", Frame::initializeClass, ::org::orekit::frames::TransformProvider::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = Frame(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            Frame a0((jobject) NULL);
            ::org::orekit::frames::Transform a1((jobject) NULL);
            ::java::lang::String a2((jobject) NULL);
            jboolean a3;
            Frame object((jobject) NULL);

            if (!parseArgs(args, "kksZ", Frame::initializeClass, ::org::orekit::frames::Transform::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = Frame(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          {
            Frame a0((jobject) NULL);
            ::org::orekit::frames::TransformProvider a1((jobject) NULL);
            ::java::lang::String a2((jobject) NULL);
            jboolean a3;
            Frame object((jobject) NULL);

            if (!parseArgs(args, "kksZ", Frame::initializeClass, ::org::orekit::frames::TransformProvider::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = Frame(a0, a1, a2, a3));
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

      static PyObject *t_Frame_getAncestor(t_Frame *self, PyObject *arg)
      {
        jint a0;
        Frame result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getAncestor(a0));
          return t_Frame::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getAncestor", arg);
        return NULL;
      }

      static PyObject *t_Frame_getDepth(t_Frame *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDepth());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Frame_getFrozenFrame(t_Frame *self, PyObject *args)
      {
        Frame a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        ::java::lang::String a2((jobject) NULL);
        Frame result((jobject) NULL);

        if (!parseArgs(args, "kks", Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.getFrozenFrame(a0, a1, a2));
          return t_Frame::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getFrozenFrame", args);
        return NULL;
      }

      static PyObject *t_Frame_getName(t_Frame *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_Frame_getParent(t_Frame *self)
      {
        Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getParent());
        return t_Frame::wrap_Object(result);
      }

      static PyObject *t_Frame_getRoot(PyTypeObject *type)
      {
        Frame result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::Frame::getRoot());
        return t_Frame::wrap_Object(result);
      }

      static PyObject *t_Frame_getStaticTransformTo(t_Frame *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            Frame a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::StaticTransform result((jobject) NULL);

            if (!parseArgs(args, "kk", Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getStaticTransformTo(a0, a1));
              return ::org::orekit::frames::t_StaticTransform::wrap_Object(result);
            }
          }
          {
            Frame a0((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::FieldStaticTransform result((jobject) NULL);

            if (!parseArgs(args, "kK", Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getStaticTransformTo(a0, a1));
              return ::org::orekit::frames::t_FieldStaticTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getStaticTransformTo", args);
        return NULL;
      }

      static PyObject *t_Frame_getTransformProvider(t_Frame *self)
      {
        ::org::orekit::frames::TransformProvider result((jobject) NULL);
        OBJ_CALL(result = self->object.getTransformProvider());
        return ::org::orekit::frames::t_TransformProvider::wrap_Object(result);
      }

      static PyObject *t_Frame_getTransformTo(t_Frame *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            Frame a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Transform result((jobject) NULL);

            if (!parseArgs(args, "kk", Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getTransformTo(a0, a1));
              return ::org::orekit::frames::t_Transform::wrap_Object(result);
            }
          }
          {
            Frame a0((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::FieldTransform result((jobject) NULL);

            if (!parseArgs(args, "kK", Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getTransformTo(a0, a1));
              return ::org::orekit::frames::t_FieldTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getTransformTo", args);
        return NULL;
      }

      static PyObject *t_Frame_isChildOf(t_Frame *self, PyObject *arg)
      {
        Frame a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "k", Frame::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.isChildOf(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isChildOf", arg);
        return NULL;
      }

      static PyObject *t_Frame_isPseudoInertial(t_Frame *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isPseudoInertial());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Frame_toString(t_Frame *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(Frame), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_Frame_get__depth(t_Frame *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDepth());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_Frame_get__name(t_Frame *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }

      static PyObject *t_Frame_get__parent(t_Frame *self, void *data)
      {
        Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getParent());
        return t_Frame::wrap_Object(value);
      }

      static PyObject *t_Frame_get__pseudoInertial(t_Frame *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isPseudoInertial());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_Frame_get__root(t_Frame *self, void *data)
      {
        Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getRoot());
        return t_Frame::wrap_Object(value);
      }

      static PyObject *t_Frame_get__transformProvider(t_Frame *self, void *data)
      {
        ::org::orekit::frames::TransformProvider value((jobject) NULL);
        OBJ_CALL(value = self->object.getTransformProvider());
        return ::org::orekit::frames::t_TransformProvider::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/gauss/FieldRuleFactory.h"
#include "org/hipparchus/util/Pair.h"
#include "org/hipparchus/FieldElement.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {

          ::java::lang::Class *FieldRuleFactory::class$ = NULL;
          jmethodID *FieldRuleFactory::mids$ = NULL;
          bool FieldRuleFactory::live$ = false;

          jclass FieldRuleFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/gauss/FieldRuleFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getRule_acde278e36767299] = env->getMethodID(cls, "getRule", "(I)Lorg/hipparchus/util/Pair;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::util::Pair FieldRuleFactory::getRule(jint a0) const
          {
            return ::org::hipparchus::util::Pair(env->callObjectMethod(this$, mids$[mid_getRule_acde278e36767299], a0));
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
    namespace analysis {
      namespace integration {
        namespace gauss {
          static PyObject *t_FieldRuleFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldRuleFactory_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldRuleFactory_of_(t_FieldRuleFactory *self, PyObject *args);
          static PyObject *t_FieldRuleFactory_getRule(t_FieldRuleFactory *self, PyObject *arg);
          static PyObject *t_FieldRuleFactory_get__parameters_(t_FieldRuleFactory *self, void *data);
          static PyGetSetDef t_FieldRuleFactory__fields_[] = {
            DECLARE_GET_FIELD(t_FieldRuleFactory, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldRuleFactory__methods_[] = {
            DECLARE_METHOD(t_FieldRuleFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldRuleFactory, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldRuleFactory, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldRuleFactory, getRule, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldRuleFactory)[] = {
            { Py_tp_methods, t_FieldRuleFactory__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_FieldRuleFactory__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldRuleFactory)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldRuleFactory, t_FieldRuleFactory, FieldRuleFactory);
          PyObject *t_FieldRuleFactory::wrap_Object(const FieldRuleFactory& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldRuleFactory::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldRuleFactory *self = (t_FieldRuleFactory *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldRuleFactory::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldRuleFactory::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldRuleFactory *self = (t_FieldRuleFactory *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldRuleFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldRuleFactory), &PY_TYPE_DEF(FieldRuleFactory), module, "FieldRuleFactory", 0);
          }

          void t_FieldRuleFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRuleFactory), "class_", make_descriptor(FieldRuleFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRuleFactory), "wrapfn_", make_descriptor(t_FieldRuleFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRuleFactory), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldRuleFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldRuleFactory::initializeClass, 1)))
              return NULL;
            return t_FieldRuleFactory::wrap_Object(FieldRuleFactory(((t_FieldRuleFactory *) arg)->object.this$));
          }
          static PyObject *t_FieldRuleFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldRuleFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldRuleFactory_of_(t_FieldRuleFactory *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_FieldRuleFactory_getRule(t_FieldRuleFactory *self, PyObject *arg)
          {
            jint a0;
            ::org::hipparchus::util::Pair result((jobject) NULL);

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.getRule(a0));
              return ::org::hipparchus::util::t_Pair::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getRule", arg);
            return NULL;
          }
          static PyObject *t_FieldRuleFactory_get__parameters_(t_FieldRuleFactory *self, void *data)
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
#include "org/orekit/estimation/measurements/modifiers/Bias.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *Bias::class$ = NULL;
          jmethodID *Bias::mids$ = NULL;
          bool Bias::live$ = false;

          jclass Bias::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/Bias");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_bcdc5583e798238f] = env->getMethodID(cls, "<init>", "([Ljava/lang/String;[D[D[D[D)V");
              mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modify_f784f7724d44a90a] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Bias::Bias(const JArray< ::java::lang::String > & a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2, const JArray< jdouble > & a3, const JArray< jdouble > & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bcdc5583e798238f, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

          ::java::util::List Bias::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
          }

          void Bias::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_f784f7724d44a90a], a0.this$);
          }

          void Bias::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66], a0.this$);
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
          static PyObject *t_Bias_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Bias_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Bias_of_(t_Bias *self, PyObject *args);
          static int t_Bias_init_(t_Bias *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Bias_getParametersDrivers(t_Bias *self);
          static PyObject *t_Bias_modify(t_Bias *self, PyObject *arg);
          static PyObject *t_Bias_modifyWithoutDerivatives(t_Bias *self, PyObject *arg);
          static PyObject *t_Bias_get__parametersDrivers(t_Bias *self, void *data);
          static PyObject *t_Bias_get__parameters_(t_Bias *self, void *data);
          static PyGetSetDef t_Bias__fields_[] = {
            DECLARE_GET_FIELD(t_Bias, parametersDrivers),
            DECLARE_GET_FIELD(t_Bias, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Bias__methods_[] = {
            DECLARE_METHOD(t_Bias, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Bias, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Bias, of_, METH_VARARGS),
            DECLARE_METHOD(t_Bias, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_Bias, modify, METH_O),
            DECLARE_METHOD(t_Bias, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Bias)[] = {
            { Py_tp_methods, t_Bias__methods_ },
            { Py_tp_init, (void *) t_Bias_init_ },
            { Py_tp_getset, t_Bias__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Bias)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Bias, t_Bias, Bias);
          PyObject *t_Bias::wrap_Object(const Bias& object, PyTypeObject *p0)
          {
            PyObject *obj = t_Bias::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Bias *self = (t_Bias *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_Bias::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_Bias::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Bias *self = (t_Bias *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_Bias::install(PyObject *module)
          {
            installType(&PY_TYPE(Bias), &PY_TYPE_DEF(Bias), module, "Bias", 0);
          }

          void t_Bias::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Bias), "class_", make_descriptor(Bias::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Bias), "wrapfn_", make_descriptor(t_Bias::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Bias), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Bias_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Bias::initializeClass, 1)))
              return NULL;
            return t_Bias::wrap_Object(Bias(((t_Bias *) arg)->object.this$));
          }
          static PyObject *t_Bias_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Bias::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Bias_of_(t_Bias *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_Bias_init_(t_Bias *self, PyObject *args, PyObject *kwds)
          {
            JArray< ::java::lang::String > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            JArray< jdouble > a2((jobject) NULL);
            JArray< jdouble > a3((jobject) NULL);
            JArray< jdouble > a4((jobject) NULL);
            Bias object((jobject) NULL);

            if (!parseArgs(args, "[s[D[D[D[D", &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = Bias(a0, a1, a2, a3, a4));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_Bias_getParametersDrivers(t_Bias *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_Bias_modify(t_Bias *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurement a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurement::parameters_))
            {
              OBJ_CALL(self->object.modify(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "modify", arg);
            return NULL;
          }

          static PyObject *t_Bias_modifyWithoutDerivatives(t_Bias *self, PyObject *arg)
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
          static PyObject *t_Bias_get__parameters_(t_Bias *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_Bias_get__parametersDrivers(t_Bias *self, void *data)
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
#include "org/hipparchus/fraction/Fraction$ConvergenceTest.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fraction {

      ::java::lang::Class *Fraction$ConvergenceTest::class$ = NULL;
      jmethodID *Fraction$ConvergenceTest::mids$ = NULL;
      bool Fraction$ConvergenceTest::live$ = false;

      jclass Fraction$ConvergenceTest::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fraction/Fraction$ConvergenceTest");

          mids$ = new jmethodID[max_mid];
          mids$[mid_test_75f431eefaad4f32] = env->getMethodID(cls, "test", "(II)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jboolean Fraction$ConvergenceTest::test(jint a0, jint a1) const
      {
        return env->callBooleanMethod(this$, mids$[mid_test_75f431eefaad4f32], a0, a1);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace fraction {
      static PyObject *t_Fraction$ConvergenceTest_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Fraction$ConvergenceTest_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Fraction$ConvergenceTest_test(t_Fraction$ConvergenceTest *self, PyObject *args);

      static PyMethodDef t_Fraction$ConvergenceTest__methods_[] = {
        DECLARE_METHOD(t_Fraction$ConvergenceTest, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Fraction$ConvergenceTest, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Fraction$ConvergenceTest, test, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Fraction$ConvergenceTest)[] = {
        { Py_tp_methods, t_Fraction$ConvergenceTest__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Fraction$ConvergenceTest)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Fraction$ConvergenceTest, t_Fraction$ConvergenceTest, Fraction$ConvergenceTest);

      void t_Fraction$ConvergenceTest::install(PyObject *module)
      {
        installType(&PY_TYPE(Fraction$ConvergenceTest), &PY_TYPE_DEF(Fraction$ConvergenceTest), module, "Fraction$ConvergenceTest", 0);
      }

      void t_Fraction$ConvergenceTest::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction$ConvergenceTest), "class_", make_descriptor(Fraction$ConvergenceTest::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction$ConvergenceTest), "wrapfn_", make_descriptor(t_Fraction$ConvergenceTest::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction$ConvergenceTest), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Fraction$ConvergenceTest_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Fraction$ConvergenceTest::initializeClass, 1)))
          return NULL;
        return t_Fraction$ConvergenceTest::wrap_Object(Fraction$ConvergenceTest(((t_Fraction$ConvergenceTest *) arg)->object.this$));
      }
      static PyObject *t_Fraction$ConvergenceTest_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Fraction$ConvergenceTest::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Fraction$ConvergenceTest_test(t_Fraction$ConvergenceTest *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jboolean result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.test(a0, a1));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "test", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/TabulatedLofOffset.h"
#include "java/util/List.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/frames/LOF.h"
#include "org/orekit/attitudes/BoundedAttitudeProvider.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "org/orekit/attitudes/Attitude.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *TabulatedLofOffset::class$ = NULL;
      jmethodID *TabulatedLofOffset::mids$ = NULL;
      bool TabulatedLofOffset::live$ = false;

      jclass TabulatedLofOffset::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/TabulatedLofOffset");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_2876403b42e11bdd] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/LOF;Ljava/util/List;ILorg/orekit/utils/AngularDerivativesFilter;)V");
          mids$[mid_init$_0a429198a7f4db2d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/LOF;Ljava/util/List;ILorg/orekit/utils/AngularDerivativesFilter;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_getAttitude_21845cfb0034fe1c] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getAttitude_896ee4d68989b1e8] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getMaxDate_c325492395d89b24] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getMinDate_c325492395d89b24] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getTable_e62d3bb06d56d7e3] = env->getMethodID(cls, "getTable", "()Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TabulatedLofOffset::TabulatedLofOffset(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::LOF & a1, const ::java::util::List & a2, jint a3, const ::org::orekit::utils::AngularDerivativesFilter & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2876403b42e11bdd, a0.this$, a1.this$, a2.this$, a3, a4.this$)) {}

      TabulatedLofOffset::TabulatedLofOffset(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::LOF & a1, const ::java::util::List & a2, jint a3, const ::org::orekit::utils::AngularDerivativesFilter & a4, const ::org::orekit::time::AbsoluteDate & a5, const ::org::orekit::time::AbsoluteDate & a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0a429198a7f4db2d, a0.this$, a1.this$, a2.this$, a3, a4.this$, a5.this$, a6.this$)) {}

      ::org::orekit::attitudes::Attitude TabulatedLofOffset::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_21845cfb0034fe1c], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::FieldAttitude TabulatedLofOffset::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_896ee4d68989b1e8], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::time::AbsoluteDate TabulatedLofOffset::getMaxDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_c325492395d89b24]));
      }

      ::org::orekit::time::AbsoluteDate TabulatedLofOffset::getMinDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_c325492395d89b24]));
      }

      ::java::util::List TabulatedLofOffset::getTable() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getTable_e62d3bb06d56d7e3]));
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
      static PyObject *t_TabulatedLofOffset_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TabulatedLofOffset_instance_(PyTypeObject *type, PyObject *arg);
      static int t_TabulatedLofOffset_init_(t_TabulatedLofOffset *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TabulatedLofOffset_getAttitude(t_TabulatedLofOffset *self, PyObject *args);
      static PyObject *t_TabulatedLofOffset_getMaxDate(t_TabulatedLofOffset *self);
      static PyObject *t_TabulatedLofOffset_getMinDate(t_TabulatedLofOffset *self);
      static PyObject *t_TabulatedLofOffset_getTable(t_TabulatedLofOffset *self);
      static PyObject *t_TabulatedLofOffset_get__maxDate(t_TabulatedLofOffset *self, void *data);
      static PyObject *t_TabulatedLofOffset_get__minDate(t_TabulatedLofOffset *self, void *data);
      static PyObject *t_TabulatedLofOffset_get__table(t_TabulatedLofOffset *self, void *data);
      static PyGetSetDef t_TabulatedLofOffset__fields_[] = {
        DECLARE_GET_FIELD(t_TabulatedLofOffset, maxDate),
        DECLARE_GET_FIELD(t_TabulatedLofOffset, minDate),
        DECLARE_GET_FIELD(t_TabulatedLofOffset, table),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TabulatedLofOffset__methods_[] = {
        DECLARE_METHOD(t_TabulatedLofOffset, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TabulatedLofOffset, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TabulatedLofOffset, getAttitude, METH_VARARGS),
        DECLARE_METHOD(t_TabulatedLofOffset, getMaxDate, METH_NOARGS),
        DECLARE_METHOD(t_TabulatedLofOffset, getMinDate, METH_NOARGS),
        DECLARE_METHOD(t_TabulatedLofOffset, getTable, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TabulatedLofOffset)[] = {
        { Py_tp_methods, t_TabulatedLofOffset__methods_ },
        { Py_tp_init, (void *) t_TabulatedLofOffset_init_ },
        { Py_tp_getset, t_TabulatedLofOffset__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TabulatedLofOffset)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TabulatedLofOffset, t_TabulatedLofOffset, TabulatedLofOffset);

      void t_TabulatedLofOffset::install(PyObject *module)
      {
        installType(&PY_TYPE(TabulatedLofOffset), &PY_TYPE_DEF(TabulatedLofOffset), module, "TabulatedLofOffset", 0);
      }

      void t_TabulatedLofOffset::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TabulatedLofOffset), "class_", make_descriptor(TabulatedLofOffset::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TabulatedLofOffset), "wrapfn_", make_descriptor(t_TabulatedLofOffset::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TabulatedLofOffset), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TabulatedLofOffset_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TabulatedLofOffset::initializeClass, 1)))
          return NULL;
        return t_TabulatedLofOffset::wrap_Object(TabulatedLofOffset(((t_TabulatedLofOffset *) arg)->object.this$));
      }
      static PyObject *t_TabulatedLofOffset_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TabulatedLofOffset::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_TabulatedLofOffset_init_(t_TabulatedLofOffset *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 5:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::frames::LOF a1((jobject) NULL);
            ::java::util::List a2((jobject) NULL);
            PyTypeObject **p2;
            jint a3;
            ::org::orekit::utils::AngularDerivativesFilter a4((jobject) NULL);
            PyTypeObject **p4;
            TabulatedLofOffset object((jobject) NULL);

            if (!parseArgs(args, "kkKIK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::LOF::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_List::parameters_, &a3, &a4, &p4, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_))
            {
              INT_CALL(object = TabulatedLofOffset(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          goto err;
         case 7:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::frames::LOF a1((jobject) NULL);
            ::java::util::List a2((jobject) NULL);
            PyTypeObject **p2;
            jint a3;
            ::org::orekit::utils::AngularDerivativesFilter a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::orekit::time::AbsoluteDate a5((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a6((jobject) NULL);
            TabulatedLofOffset object((jobject) NULL);

            if (!parseArgs(args, "kkKIKkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::LOF::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_List::parameters_, &a3, &a4, &p4, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_, &a5, &a6))
            {
              INT_CALL(object = TabulatedLofOffset(a0, a1, a2, a3, a4, a5, a6));
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

      static PyObject *t_TabulatedLofOffset_getAttitude(t_TabulatedLofOffset *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
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
        }

        PyErr_SetArgsError((PyObject *) self, "getAttitude", args);
        return NULL;
      }

      static PyObject *t_TabulatedLofOffset_getMaxDate(t_TabulatedLofOffset *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getMaxDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TabulatedLofOffset_getMinDate(t_TabulatedLofOffset *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getMinDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TabulatedLofOffset_getTable(t_TabulatedLofOffset *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getTable());
        return ::java::util::t_List::wrap_Object(result);
      }

      static PyObject *t_TabulatedLofOffset_get__maxDate(t_TabulatedLofOffset *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getMaxDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TabulatedLofOffset_get__minDate(t_TabulatedLofOffset *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getMinDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TabulatedLofOffset_get__table(t_TabulatedLofOffset *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getTable());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/Frames.h"
#include "org/orekit/frames/Frames.h"
#include "java/util/function/Supplier.h"
#include "org/orekit/frames/VersionedITRF.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/bodies/CelestialBodies.h"
#include "org/orekit/time/UT1Scale.h"
#include "org/orekit/frames/Predefined.h"
#include "org/orekit/frames/EOPHistory.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/FactoryManagedFrame.h"
#include "org/orekit/frames/ITRFVersion.h"
#include "org/orekit/time/TimeScales.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *Frames::class$ = NULL;
      jmethodID *Frames::mids$ = NULL;
      bool Frames::live$ = false;

      jclass Frames::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/Frames");

          mids$ = new jmethodID[max_mid];
          mids$[mid_buildUncachedITRF_de25c2adba5180fc] = env->getMethodID(cls, "buildUncachedITRF", "(Lorg/orekit/time/UT1Scale;)Lorg/orekit/frames/Frame;");
          mids$[mid_getCIRF_b8f4087626aff39a] = env->getMethodID(cls, "getCIRF", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getEME2000_38d89ffeb32a6f21] = env->getMethodID(cls, "getEME2000", "()Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getEOPHistory_a77e9d6bc0da2439] = env->getMethodID(cls, "getEOPHistory", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/EOPHistory;");
          mids$[mid_getEcliptic_15d291dcc172f59b] = env->getMethodID(cls, "getEcliptic", "(Lorg/orekit/utils/IERSConventions;)Lorg/orekit/frames/Frame;");
          mids$[mid_getFrame_acd75386f33c2984] = env->getMethodID(cls, "getFrame", "(Lorg/orekit/frames/Predefined;)Lorg/orekit/frames/Frame;");
          mids$[mid_getGCRF_2c51111cc6894ba1] = env->getMethodID(cls, "getGCRF", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getGTOD_816956b542562f07] = env->getMethodID(cls, "getGTOD", "(Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getGTOD_b8f4087626aff39a] = env->getMethodID(cls, "getGTOD", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getICRF_2c51111cc6894ba1] = env->getMethodID(cls, "getICRF", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getITRF_b8f4087626aff39a] = env->getMethodID(cls, "getITRF", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getITRF_2e00eadcfbf4fef8] = env->getMethodID(cls, "getITRF", "(Lorg/orekit/frames/ITRFVersion;Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/VersionedITRF;");
          mids$[mid_getITRFEquinox_b8f4087626aff39a] = env->getMethodID(cls, "getITRFEquinox", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getMOD_5e99e4a3c4469bb0] = env->getMethodID(cls, "getMOD", "(Lorg/orekit/utils/IERSConventions;)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getMOD_816956b542562f07] = env->getMethodID(cls, "getMOD", "(Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getPZ9011_b8f4087626aff39a] = env->getMethodID(cls, "getPZ9011", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTEME_38d89ffeb32a6f21] = env->getMethodID(cls, "getTEME", "()Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTIRF_5e99e4a3c4469bb0] = env->getMethodID(cls, "getTIRF", "(Lorg/orekit/utils/IERSConventions;)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTIRF_b8f4087626aff39a] = env->getMethodID(cls, "getTIRF", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTOD_816956b542562f07] = env->getMethodID(cls, "getTOD", "(Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTOD_b8f4087626aff39a] = env->getMethodID(cls, "getTOD", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getVeis1950_38d89ffeb32a6f21] = env->getMethodID(cls, "getVeis1950", "()Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_of_604f334613061825] = env->getStaticMethodID(cls, "of", "(Lorg/orekit/time/TimeScales;Ljava/util/function/Supplier;)Lorg/orekit/frames/Frames;");
          mids$[mid_of_a0251166f4fef4d1] = env->getStaticMethodID(cls, "of", "(Lorg/orekit/time/TimeScales;Lorg/orekit/bodies/CelestialBodies;)Lorg/orekit/frames/Frames;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::frames::Frame Frames::buildUncachedITRF(const ::org::orekit::time::UT1Scale & a0) const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_buildUncachedITRF_de25c2adba5180fc], a0.this$));
      }

      ::org::orekit::frames::FactoryManagedFrame Frames::getCIRF(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getCIRF_b8f4087626aff39a], a0.this$, a1));
      }

      ::org::orekit::frames::FactoryManagedFrame Frames::getEME2000() const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getEME2000_38d89ffeb32a6f21]));
      }

      ::org::orekit::frames::EOPHistory Frames::getEOPHistory(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::frames::EOPHistory(env->callObjectMethod(this$, mids$[mid_getEOPHistory_a77e9d6bc0da2439], a0.this$, a1));
      }

      ::org::orekit::frames::Frame Frames::getEcliptic(const ::org::orekit::utils::IERSConventions & a0) const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getEcliptic_15d291dcc172f59b], a0.this$));
      }

      ::org::orekit::frames::Frame Frames::getFrame(const ::org::orekit::frames::Predefined & a0) const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_acd75386f33c2984], a0.this$));
      }

      ::org::orekit::frames::Frame Frames::getGCRF() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getGCRF_2c51111cc6894ba1]));
      }

      ::org::orekit::frames::FactoryManagedFrame Frames::getGTOD(jboolean a0) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getGTOD_816956b542562f07], a0));
      }

      ::org::orekit::frames::FactoryManagedFrame Frames::getGTOD(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getGTOD_b8f4087626aff39a], a0.this$, a1));
      }

      ::org::orekit::frames::Frame Frames::getICRF() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getICRF_2c51111cc6894ba1]));
      }

      ::org::orekit::frames::FactoryManagedFrame Frames::getITRF(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getITRF_b8f4087626aff39a], a0.this$, a1));
      }

      ::org::orekit::frames::VersionedITRF Frames::getITRF(const ::org::orekit::frames::ITRFVersion & a0, const ::org::orekit::utils::IERSConventions & a1, jboolean a2) const
      {
        return ::org::orekit::frames::VersionedITRF(env->callObjectMethod(this$, mids$[mid_getITRF_2e00eadcfbf4fef8], a0.this$, a1.this$, a2));
      }

      ::org::orekit::frames::FactoryManagedFrame Frames::getITRFEquinox(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getITRFEquinox_b8f4087626aff39a], a0.this$, a1));
      }

      ::org::orekit::frames::FactoryManagedFrame Frames::getMOD(const ::org::orekit::utils::IERSConventions & a0) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getMOD_5e99e4a3c4469bb0], a0.this$));
      }

      ::org::orekit::frames::FactoryManagedFrame Frames::getMOD(jboolean a0) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getMOD_816956b542562f07], a0));
      }

      ::org::orekit::frames::FactoryManagedFrame Frames::getPZ9011(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getPZ9011_b8f4087626aff39a], a0.this$, a1));
      }

      ::org::orekit::frames::FactoryManagedFrame Frames::getTEME() const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getTEME_38d89ffeb32a6f21]));
      }

      ::org::orekit::frames::FactoryManagedFrame Frames::getTIRF(const ::org::orekit::utils::IERSConventions & a0) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getTIRF_5e99e4a3c4469bb0], a0.this$));
      }

      ::org::orekit::frames::FactoryManagedFrame Frames::getTIRF(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getTIRF_b8f4087626aff39a], a0.this$, a1));
      }

      ::org::orekit::frames::FactoryManagedFrame Frames::getTOD(jboolean a0) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getTOD_816956b542562f07], a0));
      }

      ::org::orekit::frames::FactoryManagedFrame Frames::getTOD(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getTOD_b8f4087626aff39a], a0.this$, a1));
      }

      ::org::orekit::frames::FactoryManagedFrame Frames::getVeis1950() const
      {
        return ::org::orekit::frames::FactoryManagedFrame(env->callObjectMethod(this$, mids$[mid_getVeis1950_38d89ffeb32a6f21]));
      }

      Frames Frames::of(const ::org::orekit::time::TimeScales & a0, const ::java::util::function::Supplier & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return Frames(env->callStaticObjectMethod(cls, mids$[mid_of_604f334613061825], a0.this$, a1.this$));
      }

      Frames Frames::of(const ::org::orekit::time::TimeScales & a0, const ::org::orekit::bodies::CelestialBodies & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return Frames(env->callStaticObjectMethod(cls, mids$[mid_of_a0251166f4fef4d1], a0.this$, a1.this$));
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
      static PyObject *t_Frames_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Frames_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Frames_buildUncachedITRF(t_Frames *self, PyObject *arg);
      static PyObject *t_Frames_getCIRF(t_Frames *self, PyObject *args);
      static PyObject *t_Frames_getEME2000(t_Frames *self);
      static PyObject *t_Frames_getEOPHistory(t_Frames *self, PyObject *args);
      static PyObject *t_Frames_getEcliptic(t_Frames *self, PyObject *arg);
      static PyObject *t_Frames_getFrame(t_Frames *self, PyObject *arg);
      static PyObject *t_Frames_getGCRF(t_Frames *self);
      static PyObject *t_Frames_getGTOD(t_Frames *self, PyObject *args);
      static PyObject *t_Frames_getICRF(t_Frames *self);
      static PyObject *t_Frames_getITRF(t_Frames *self, PyObject *args);
      static PyObject *t_Frames_getITRFEquinox(t_Frames *self, PyObject *args);
      static PyObject *t_Frames_getMOD(t_Frames *self, PyObject *args);
      static PyObject *t_Frames_getPZ9011(t_Frames *self, PyObject *args);
      static PyObject *t_Frames_getTEME(t_Frames *self);
      static PyObject *t_Frames_getTIRF(t_Frames *self, PyObject *args);
      static PyObject *t_Frames_getTOD(t_Frames *self, PyObject *args);
      static PyObject *t_Frames_getVeis1950(t_Frames *self);
      static PyObject *t_Frames_of(PyTypeObject *type, PyObject *args);
      static PyObject *t_Frames_get__eME2000(t_Frames *self, void *data);
      static PyObject *t_Frames_get__gCRF(t_Frames *self, void *data);
      static PyObject *t_Frames_get__iCRF(t_Frames *self, void *data);
      static PyObject *t_Frames_get__tEME(t_Frames *self, void *data);
      static PyObject *t_Frames_get__veis1950(t_Frames *self, void *data);
      static PyGetSetDef t_Frames__fields_[] = {
        DECLARE_GET_FIELD(t_Frames, eME2000),
        DECLARE_GET_FIELD(t_Frames, gCRF),
        DECLARE_GET_FIELD(t_Frames, iCRF),
        DECLARE_GET_FIELD(t_Frames, tEME),
        DECLARE_GET_FIELD(t_Frames, veis1950),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Frames__methods_[] = {
        DECLARE_METHOD(t_Frames, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Frames, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Frames, buildUncachedITRF, METH_O),
        DECLARE_METHOD(t_Frames, getCIRF, METH_VARARGS),
        DECLARE_METHOD(t_Frames, getEME2000, METH_NOARGS),
        DECLARE_METHOD(t_Frames, getEOPHistory, METH_VARARGS),
        DECLARE_METHOD(t_Frames, getEcliptic, METH_O),
        DECLARE_METHOD(t_Frames, getFrame, METH_O),
        DECLARE_METHOD(t_Frames, getGCRF, METH_NOARGS),
        DECLARE_METHOD(t_Frames, getGTOD, METH_VARARGS),
        DECLARE_METHOD(t_Frames, getICRF, METH_NOARGS),
        DECLARE_METHOD(t_Frames, getITRF, METH_VARARGS),
        DECLARE_METHOD(t_Frames, getITRFEquinox, METH_VARARGS),
        DECLARE_METHOD(t_Frames, getMOD, METH_VARARGS),
        DECLARE_METHOD(t_Frames, getPZ9011, METH_VARARGS),
        DECLARE_METHOD(t_Frames, getTEME, METH_NOARGS),
        DECLARE_METHOD(t_Frames, getTIRF, METH_VARARGS),
        DECLARE_METHOD(t_Frames, getTOD, METH_VARARGS),
        DECLARE_METHOD(t_Frames, getVeis1950, METH_NOARGS),
        DECLARE_METHOD(t_Frames, of, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Frames)[] = {
        { Py_tp_methods, t_Frames__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_Frames__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Frames)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Frames, t_Frames, Frames);

      void t_Frames::install(PyObject *module)
      {
        installType(&PY_TYPE(Frames), &PY_TYPE_DEF(Frames), module, "Frames", 0);
      }

      void t_Frames::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frames), "class_", make_descriptor(Frames::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frames), "wrapfn_", make_descriptor(t_Frames::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frames), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Frames_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Frames::initializeClass, 1)))
          return NULL;
        return t_Frames::wrap_Object(Frames(((t_Frames *) arg)->object.this$));
      }
      static PyObject *t_Frames_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Frames::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Frames_buildUncachedITRF(t_Frames *self, PyObject *arg)
      {
        ::org::orekit::time::UT1Scale a0((jobject) NULL);
        ::org::orekit::frames::Frame result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::UT1Scale::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.buildUncachedITRF(a0));
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "buildUncachedITRF", arg);
        return NULL;
      }

      static PyObject *t_Frames_getCIRF(t_Frames *self, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

        if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.getCIRF(a0, a1));
          return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getCIRF", args);
        return NULL;
      }

      static PyObject *t_Frames_getEME2000(t_Frames *self)
      {
        ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);
        OBJ_CALL(result = self->object.getEME2000());
        return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
      }

      static PyObject *t_Frames_getEOPHistory(t_Frames *self, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        ::org::orekit::frames::EOPHistory result((jobject) NULL);

        if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.getEOPHistory(a0, a1));
          return ::org::orekit::frames::t_EOPHistory::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getEOPHistory", args);
        return NULL;
      }

      static PyObject *t_Frames_getEcliptic(t_Frames *self, PyObject *arg)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::Frame result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_))
        {
          OBJ_CALL(result = self->object.getEcliptic(a0));
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getEcliptic", arg);
        return NULL;
      }

      static PyObject *t_Frames_getFrame(t_Frames *self, PyObject *arg)
      {
        ::org::orekit::frames::Predefined a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::Frame result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::frames::Predefined::initializeClass, &a0, &p0, ::org::orekit::frames::t_Predefined::parameters_))
        {
          OBJ_CALL(result = self->object.getFrame(a0));
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getFrame", arg);
        return NULL;
      }

      static PyObject *t_Frames_getGCRF(t_Frames *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getGCRF());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_Frames_getGTOD(t_Frames *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jboolean a0;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "Z", &a0))
            {
              OBJ_CALL(result = self->object.getGTOD(a0));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean a1;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.getGTOD(a0, a1));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getGTOD", args);
        return NULL;
      }

      static PyObject *t_Frames_getICRF(t_Frames *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getICRF());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_Frames_getITRF(t_Frames *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean a1;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.getITRF(a0, a1));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::orekit::frames::ITRFVersion a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::IERSConventions a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;
            ::org::orekit::frames::VersionedITRF result((jobject) NULL);

            if (!parseArgs(args, "KKZ", ::org::orekit::frames::ITRFVersion::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::frames::t_ITRFVersion::parameters_, &a1, &p1, ::org::orekit::utils::t_IERSConventions::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getITRF(a0, a1, a2));
              return ::org::orekit::frames::t_VersionedITRF::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getITRF", args);
        return NULL;
      }

      static PyObject *t_Frames_getITRFEquinox(t_Frames *self, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

        if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.getITRFEquinox(a0, a1));
          return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getITRFEquinox", args);
        return NULL;
      }

      static PyObject *t_Frames_getMOD(t_Frames *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_))
            {
              OBJ_CALL(result = self->object.getMOD(a0));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
          {
            jboolean a0;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "Z", &a0))
            {
              OBJ_CALL(result = self->object.getMOD(a0));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getMOD", args);
        return NULL;
      }

      static PyObject *t_Frames_getPZ9011(t_Frames *self, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

        if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.getPZ9011(a0, a1));
          return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getPZ9011", args);
        return NULL;
      }

      static PyObject *t_Frames_getTEME(t_Frames *self)
      {
        ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);
        OBJ_CALL(result = self->object.getTEME());
        return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
      }

      static PyObject *t_Frames_getTIRF(t_Frames *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_))
            {
              OBJ_CALL(result = self->object.getTIRF(a0));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean a1;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.getTIRF(a0, a1));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getTIRF", args);
        return NULL;
      }

      static PyObject *t_Frames_getTOD(t_Frames *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jboolean a0;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "Z", &a0))
            {
              OBJ_CALL(result = self->object.getTOD(a0));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean a1;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.getTOD(a0, a1));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getTOD", args);
        return NULL;
      }

      static PyObject *t_Frames_getVeis1950(t_Frames *self)
      {
        ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);
        OBJ_CALL(result = self->object.getVeis1950());
        return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
      }

      static PyObject *t_Frames_of(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::TimeScales a0((jobject) NULL);
            ::java::util::function::Supplier a1((jobject) NULL);
            PyTypeObject **p1;
            Frames result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::TimeScales::initializeClass, ::java::util::function::Supplier::initializeClass, &a0, &a1, &p1, ::java::util::function::t_Supplier::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::frames::Frames::of(a0, a1));
              return t_Frames::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::TimeScales a0((jobject) NULL);
            ::org::orekit::bodies::CelestialBodies a1((jobject) NULL);
            Frames result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::TimeScales::initializeClass, ::org::orekit::bodies::CelestialBodies::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::orekit::frames::Frames::of(a0, a1));
              return t_Frames::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "of", args);
        return NULL;
      }

      static PyObject *t_Frames_get__eME2000(t_Frames *self, void *data)
      {
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        OBJ_CALL(value = self->object.getEME2000());
        return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(value);
      }

      static PyObject *t_Frames_get__gCRF(t_Frames *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getGCRF());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_Frames_get__iCRF(t_Frames *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getICRF());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_Frames_get__tEME(t_Frames *self, void *data)
      {
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        OBJ_CALL(value = self->object.getTEME());
        return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(value);
      }

      static PyObject *t_Frames_get__veis1950(t_Frames *self, void *data)
      {
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        OBJ_CALL(value = self->object.getVeis1950());
        return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/AbstractTimeInterpolator.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/util/List.h"
#include "java/util/Collection.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/time/TimeInterpolator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *AbstractTimeInterpolator::class$ = NULL;
      jmethodID *AbstractTimeInterpolator::mids$ = NULL;
      bool AbstractTimeInterpolator::live$ = false;
      jdouble AbstractTimeInterpolator::DEFAULT_EXTRAPOLATION_THRESHOLD_SEC = (jdouble) 0;
      jint AbstractTimeInterpolator::DEFAULT_INTERPOLATION_POINTS = (jint) 0;

      jclass AbstractTimeInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/AbstractTimeInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_d5322b8b512aeb26] = env->getMethodID(cls, "<init>", "(ID)V");
          mids$[mid_checkInterpolatorCompatibilityWithSampleSize_86e8035ddd3b6fb5] = env->getStaticMethodID(cls, "checkInterpolatorCompatibilityWithSampleSize", "(Lorg/orekit/time/TimeInterpolator;I)V");
          mids$[mid_getExtrapolationThreshold_b74f83833fdad017] = env->getMethodID(cls, "getExtrapolationThreshold", "()D");
          mids$[mid_getNbInterpolationPoints_55546ef6a647f39b] = env->getMethodID(cls, "getNbInterpolationPoints", "()I");
          mids$[mid_getSubInterpolators_e62d3bb06d56d7e3] = env->getMethodID(cls, "getSubInterpolators", "()Ljava/util/List;");
          mids$[mid_interpolate_0ccd3950902c0411] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Collection;)Lorg/orekit/time/TimeStamped;");
          mids$[mid_interpolate_510d3bf17898cb55] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/stream/Stream;)Lorg/orekit/time/TimeStamped;");
          mids$[mid_interpolate_7256d27895569924] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractTimeInterpolator$InterpolationData;)Lorg/orekit/time/TimeStamped;");
          mids$[mid_addOptionalSubInterpolatorIfDefined_4f12b60006b411d5] = env->getMethodID(cls, "addOptionalSubInterpolatorIfDefined", "(Lorg/orekit/time/TimeInterpolator;Ljava/util/List;)V");
          mids$[mid_getTimeParameter_b3f978f59484aa1f] = env->getMethodID(cls, "getTimeParameter", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)D");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_EXTRAPOLATION_THRESHOLD_SEC = env->getStaticDoubleField(cls, "DEFAULT_EXTRAPOLATION_THRESHOLD_SEC");
          DEFAULT_INTERPOLATION_POINTS = env->getStaticIntField(cls, "DEFAULT_INTERPOLATION_POINTS");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AbstractTimeInterpolator::AbstractTimeInterpolator(jint a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d5322b8b512aeb26, a0, a1)) {}

      void AbstractTimeInterpolator::checkInterpolatorCompatibilityWithSampleSize(const ::org::orekit::time::TimeInterpolator & a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkInterpolatorCompatibilityWithSampleSize_86e8035ddd3b6fb5], a0.this$, a1);
      }

      jdouble AbstractTimeInterpolator::getExtrapolationThreshold() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getExtrapolationThreshold_b74f83833fdad017]);
      }

      jint AbstractTimeInterpolator::getNbInterpolationPoints() const
      {
        return env->callIntMethod(this$, mids$[mid_getNbInterpolationPoints_55546ef6a647f39b]);
      }

      ::java::util::List AbstractTimeInterpolator::getSubInterpolators() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSubInterpolators_e62d3bb06d56d7e3]));
      }

      ::org::orekit::time::TimeStamped AbstractTimeInterpolator::interpolate(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Collection & a1) const
      {
        return ::org::orekit::time::TimeStamped(env->callObjectMethod(this$, mids$[mid_interpolate_0ccd3950902c0411], a0.this$, a1.this$));
      }

      ::org::orekit::time::TimeStamped AbstractTimeInterpolator::interpolate(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::stream::Stream & a1) const
      {
        return ::org::orekit::time::TimeStamped(env->callObjectMethod(this$, mids$[mid_interpolate_510d3bf17898cb55], a0.this$, a1.this$));
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
      static PyObject *t_AbstractTimeInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractTimeInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractTimeInterpolator_of_(t_AbstractTimeInterpolator *self, PyObject *args);
      static int t_AbstractTimeInterpolator_init_(t_AbstractTimeInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AbstractTimeInterpolator_checkInterpolatorCompatibilityWithSampleSize(PyTypeObject *type, PyObject *args);
      static PyObject *t_AbstractTimeInterpolator_getExtrapolationThreshold(t_AbstractTimeInterpolator *self);
      static PyObject *t_AbstractTimeInterpolator_getNbInterpolationPoints(t_AbstractTimeInterpolator *self);
      static PyObject *t_AbstractTimeInterpolator_getSubInterpolators(t_AbstractTimeInterpolator *self);
      static PyObject *t_AbstractTimeInterpolator_interpolate(t_AbstractTimeInterpolator *self, PyObject *args);
      static PyObject *t_AbstractTimeInterpolator_get__extrapolationThreshold(t_AbstractTimeInterpolator *self, void *data);
      static PyObject *t_AbstractTimeInterpolator_get__nbInterpolationPoints(t_AbstractTimeInterpolator *self, void *data);
      static PyObject *t_AbstractTimeInterpolator_get__subInterpolators(t_AbstractTimeInterpolator *self, void *data);
      static PyObject *t_AbstractTimeInterpolator_get__parameters_(t_AbstractTimeInterpolator *self, void *data);
      static PyGetSetDef t_AbstractTimeInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractTimeInterpolator, extrapolationThreshold),
        DECLARE_GET_FIELD(t_AbstractTimeInterpolator, nbInterpolationPoints),
        DECLARE_GET_FIELD(t_AbstractTimeInterpolator, subInterpolators),
        DECLARE_GET_FIELD(t_AbstractTimeInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractTimeInterpolator__methods_[] = {
        DECLARE_METHOD(t_AbstractTimeInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractTimeInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractTimeInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_AbstractTimeInterpolator, checkInterpolatorCompatibilityWithSampleSize, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_AbstractTimeInterpolator, getExtrapolationThreshold, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeInterpolator, getNbInterpolationPoints, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeInterpolator, getSubInterpolators, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeInterpolator, interpolate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractTimeInterpolator)[] = {
        { Py_tp_methods, t_AbstractTimeInterpolator__methods_ },
        { Py_tp_init, (void *) t_AbstractTimeInterpolator_init_ },
        { Py_tp_getset, t_AbstractTimeInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractTimeInterpolator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractTimeInterpolator, t_AbstractTimeInterpolator, AbstractTimeInterpolator);
      PyObject *t_AbstractTimeInterpolator::wrap_Object(const AbstractTimeInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractTimeInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractTimeInterpolator *self = (t_AbstractTimeInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_AbstractTimeInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractTimeInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractTimeInterpolator *self = (t_AbstractTimeInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_AbstractTimeInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractTimeInterpolator), &PY_TYPE_DEF(AbstractTimeInterpolator), module, "AbstractTimeInterpolator", 0);
      }

      void t_AbstractTimeInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractTimeInterpolator), "class_", make_descriptor(AbstractTimeInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractTimeInterpolator), "wrapfn_", make_descriptor(t_AbstractTimeInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractTimeInterpolator), "boxfn_", make_descriptor(boxObject));
        env->getClass(AbstractTimeInterpolator::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractTimeInterpolator), "DEFAULT_EXTRAPOLATION_THRESHOLD_SEC", make_descriptor(AbstractTimeInterpolator::DEFAULT_EXTRAPOLATION_THRESHOLD_SEC));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractTimeInterpolator), "DEFAULT_INTERPOLATION_POINTS", make_descriptor(AbstractTimeInterpolator::DEFAULT_INTERPOLATION_POINTS));
      }

      static PyObject *t_AbstractTimeInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractTimeInterpolator::initializeClass, 1)))
          return NULL;
        return t_AbstractTimeInterpolator::wrap_Object(AbstractTimeInterpolator(((t_AbstractTimeInterpolator *) arg)->object.this$));
      }
      static PyObject *t_AbstractTimeInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractTimeInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractTimeInterpolator_of_(t_AbstractTimeInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_AbstractTimeInterpolator_init_(t_AbstractTimeInterpolator *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        jdouble a1;
        AbstractTimeInterpolator object((jobject) NULL);

        if (!parseArgs(args, "ID", &a0, &a1))
        {
          INT_CALL(object = AbstractTimeInterpolator(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_AbstractTimeInterpolator_checkInterpolatorCompatibilityWithSampleSize(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::time::TimeInterpolator a0((jobject) NULL);
        PyTypeObject **p0;
        jint a1;

        if (!parseArgs(args, "KI", ::org::orekit::time::TimeInterpolator::initializeClass, &a0, &p0, ::org::orekit::time::t_TimeInterpolator::parameters_, &a1))
        {
          OBJ_CALL(::org::orekit::time::AbstractTimeInterpolator::checkInterpolatorCompatibilityWithSampleSize(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkInterpolatorCompatibilityWithSampleSize", args);
        return NULL;
      }

      static PyObject *t_AbstractTimeInterpolator_getExtrapolationThreshold(t_AbstractTimeInterpolator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getExtrapolationThreshold());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_AbstractTimeInterpolator_getNbInterpolationPoints(t_AbstractTimeInterpolator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNbInterpolationPoints());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_AbstractTimeInterpolator_getSubInterpolators(t_AbstractTimeInterpolator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getSubInterpolators());
        return ::java::util::t_List::wrap_Object(result);
      }

      static PyObject *t_AbstractTimeInterpolator_interpolate(t_AbstractTimeInterpolator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Collection a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::time::TimeStamped result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Collection::initializeClass, &a0, &a1, &p1, ::java::util::t_Collection::parameters_))
            {
              OBJ_CALL(result = self->object.interpolate(a0, a1));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_TimeStamped::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::stream::Stream a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::time::TimeStamped result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::stream::Stream::initializeClass, &a0, &a1, &p1, ::java::util::stream::t_Stream::parameters_))
            {
              OBJ_CALL(result = self->object.interpolate(a0, a1));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_TimeStamped::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "interpolate", args);
        return NULL;
      }
      static PyObject *t_AbstractTimeInterpolator_get__parameters_(t_AbstractTimeInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_AbstractTimeInterpolator_get__extrapolationThreshold(t_AbstractTimeInterpolator *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getExtrapolationThreshold());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_AbstractTimeInterpolator_get__nbInterpolationPoints(t_AbstractTimeInterpolator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNbInterpolationPoints());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_AbstractTimeInterpolator_get__subInterpolators(t_AbstractTimeInterpolator *self, void *data)
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
#include "org/hipparchus/random/Well19937c.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *Well19937c::class$ = NULL;
      jmethodID *Well19937c::mids$ = NULL;
      bool Well19937c::live$ = false;

      jclass Well19937c::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/Well19937c");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_86a2769cb881d388] = env->getMethodID(cls, "<init>", "([I)V");
          mids$[mid_init$_44ed599e93e8a30c] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_3d7dd2314a0dd456] = env->getMethodID(cls, "<init>", "(J)V");
          mids$[mid_nextInt_55546ef6a647f39b] = env->getMethodID(cls, "nextInt", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Well19937c::Well19937c() : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      Well19937c::Well19937c(const JArray< jint > & a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_86a2769cb881d388, a0.this$)) {}

      Well19937c::Well19937c(jint a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_44ed599e93e8a30c, a0)) {}

      Well19937c::Well19937c(jlong a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_3d7dd2314a0dd456, a0)) {}

      jint Well19937c::nextInt() const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_55546ef6a647f39b]);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace random {
      static PyObject *t_Well19937c_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Well19937c_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Well19937c_init_(t_Well19937c *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Well19937c_nextInt(t_Well19937c *self, PyObject *args);

      static PyMethodDef t_Well19937c__methods_[] = {
        DECLARE_METHOD(t_Well19937c, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Well19937c, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Well19937c, nextInt, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Well19937c)[] = {
        { Py_tp_methods, t_Well19937c__methods_ },
        { Py_tp_init, (void *) t_Well19937c_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Well19937c)[] = {
        &PY_TYPE_DEF(::org::hipparchus::random::AbstractWell),
        NULL
      };

      DEFINE_TYPE(Well19937c, t_Well19937c, Well19937c);

      void t_Well19937c::install(PyObject *module)
      {
        installType(&PY_TYPE(Well19937c), &PY_TYPE_DEF(Well19937c), module, "Well19937c", 0);
      }

      void t_Well19937c::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well19937c), "class_", make_descriptor(Well19937c::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well19937c), "wrapfn_", make_descriptor(t_Well19937c::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well19937c), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Well19937c_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Well19937c::initializeClass, 1)))
          return NULL;
        return t_Well19937c::wrap_Object(Well19937c(((t_Well19937c *) arg)->object.this$));
      }
      static PyObject *t_Well19937c_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Well19937c::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Well19937c_init_(t_Well19937c *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            Well19937c object((jobject) NULL);

            INT_CALL(object = Well19937c());
            self->object = object;
            break;
          }
         case 1:
          {
            JArray< jint > a0((jobject) NULL);
            Well19937c object((jobject) NULL);

            if (!parseArgs(args, "[I", &a0))
            {
              INT_CALL(object = Well19937c(a0));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            Well19937c object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = Well19937c(a0));
              self->object = object;
              break;
            }
          }
          {
            jlong a0;
            Well19937c object((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              INT_CALL(object = Well19937c(a0));
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

      static PyObject *t_Well19937c_nextInt(t_Well19937c *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextInt());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Well19937c), (PyObject *) self, "nextInt", args, 2);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/FramesFactory.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/frames/VersionedITRF.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/Predefined.h"
#include "org/orekit/frames/EOPHistory.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/frames/LazyLoadedFrames.h"
#include "java/lang/Class.h"
#include "org/orekit/time/UTCScale.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/frames/FactoryManagedFrame.h"
#include "org/orekit/frames/ITRFVersion.h"
#include "org/orekit/frames/EopHistoryLoader.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *FramesFactory::class$ = NULL;
      jmethodID *FramesFactory::mids$ = NULL;
      bool FramesFactory::live$ = false;
      ::java::lang::String *FramesFactory::BULLETINA_FILENAME = NULL;
      ::java::lang::String *FramesFactory::BULLETINB_1980_FILENAME = NULL;
      ::java::lang::String *FramesFactory::BULLETINB_2000_FILENAME = NULL;
      ::java::lang::String *FramesFactory::CSV_FILENAME = NULL;
      ::java::lang::String *FramesFactory::EOPC04_1980_FILENAME = NULL;
      ::java::lang::String *FramesFactory::EOPC04_2000_FILENAME = NULL;
      ::java::lang::String *FramesFactory::RAPID_DATA_PREDICTION_COLUMNS_1980_FILENAME = NULL;
      ::java::lang::String *FramesFactory::RAPID_DATA_PREDICTION_COLUMNS_2000_FILENAME = NULL;
      ::java::lang::String *FramesFactory::XML_1980_FILENAME = NULL;
      ::java::lang::String *FramesFactory::XML_2000_FILENAME = NULL;

      jclass FramesFactory::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/FramesFactory");

          mids$ = new jmethodID[max_mid];
          mids$[mid_addDefaultEOP1980HistoryLoaders_e39b9463875d2aea] = env->getStaticMethodID(cls, "addDefaultEOP1980HistoryLoaders", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
          mids$[mid_addDefaultEOP2000HistoryLoaders_e39b9463875d2aea] = env->getStaticMethodID(cls, "addDefaultEOP2000HistoryLoaders", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
          mids$[mid_addEOPHistoryLoader_f075adbabba5d6bc] = env->getStaticMethodID(cls, "addEOPHistoryLoader", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/frames/EopHistoryLoader;)V");
          mids$[mid_buildUncachedITRF_01e80ae3803485ac] = env->getStaticMethodID(cls, "buildUncachedITRF", "(Lorg/orekit/frames/EOPHistory;Lorg/orekit/time/UTCScale;)Lorg/orekit/frames/Frame;");
          mids$[mid_clearEOPHistoryLoaders_a1fa5dae97ea5ed2] = env->getStaticMethodID(cls, "clearEOPHistoryLoaders", "()V");
          mids$[mid_findEOP_c247e78135557d7e] = env->getStaticMethodID(cls, "findEOP", "(Lorg/orekit/frames/Frame;)Lorg/orekit/frames/EOPHistory;");
          mids$[mid_getCIRF_b8f4087626aff39a] = env->getStaticMethodID(cls, "getCIRF", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getEME2000_38d89ffeb32a6f21] = env->getStaticMethodID(cls, "getEME2000", "()Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getEOPHistory_a77e9d6bc0da2439] = env->getStaticMethodID(cls, "getEOPHistory", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/EOPHistory;");
          mids$[mid_getEcliptic_15d291dcc172f59b] = env->getStaticMethodID(cls, "getEcliptic", "(Lorg/orekit/utils/IERSConventions;)Lorg/orekit/frames/Frame;");
          mids$[mid_getFrame_acd75386f33c2984] = env->getStaticMethodID(cls, "getFrame", "(Lorg/orekit/frames/Predefined;)Lorg/orekit/frames/Frame;");
          mids$[mid_getFrames_5dce20e74866c277] = env->getStaticMethodID(cls, "getFrames", "()Lorg/orekit/frames/LazyLoadedFrames;");
          mids$[mid_getGCRF_2c51111cc6894ba1] = env->getStaticMethodID(cls, "getGCRF", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getGTOD_816956b542562f07] = env->getStaticMethodID(cls, "getGTOD", "(Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getGTOD_b8f4087626aff39a] = env->getStaticMethodID(cls, "getGTOD", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getICRF_2c51111cc6894ba1] = env->getStaticMethodID(cls, "getICRF", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getITRF_b8f4087626aff39a] = env->getStaticMethodID(cls, "getITRF", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getITRF_2e00eadcfbf4fef8] = env->getStaticMethodID(cls, "getITRF", "(Lorg/orekit/frames/ITRFVersion;Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/VersionedITRF;");
          mids$[mid_getITRFEquinox_b8f4087626aff39a] = env->getStaticMethodID(cls, "getITRFEquinox", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getMOD_5e99e4a3c4469bb0] = env->getStaticMethodID(cls, "getMOD", "(Lorg/orekit/utils/IERSConventions;)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getMOD_816956b542562f07] = env->getStaticMethodID(cls, "getMOD", "(Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getNonInterpolatingTransform_4144c620244f368d] = env->getStaticMethodID(cls, "getNonInterpolatingTransform", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
          mids$[mid_getNonInterpolatingTransform_12e9f713a8248456] = env->getStaticMethodID(cls, "getNonInterpolatingTransform", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldTransform;");
          mids$[mid_getPZ9011_b8f4087626aff39a] = env->getStaticMethodID(cls, "getPZ9011", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTEME_38d89ffeb32a6f21] = env->getStaticMethodID(cls, "getTEME", "()Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTIRF_5e99e4a3c4469bb0] = env->getStaticMethodID(cls, "getTIRF", "(Lorg/orekit/utils/IERSConventions;)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTIRF_b8f4087626aff39a] = env->getStaticMethodID(cls, "getTIRF", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTOD_816956b542562f07] = env->getStaticMethodID(cls, "getTOD", "(Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTOD_b8f4087626aff39a] = env->getStaticMethodID(cls, "getTOD", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getVeis1950_38d89ffeb32a6f21] = env->getStaticMethodID(cls, "getVeis1950", "()Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_setEOPContinuityThreshold_8ba9fe7a847cecad] = env->getStaticMethodID(cls, "setEOPContinuityThreshold", "(D)V");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          BULLETINA_FILENAME = new ::java::lang::String(env->getStaticObjectField(cls, "BULLETINA_FILENAME", "Ljava/lang/String;"));
          BULLETINB_1980_FILENAME = new ::java::lang::String(env->getStaticObjectField(cls, "BULLETINB_1980_FILENAME", "Ljava/lang/String;"));
          BULLETINB_2000_FILENAME = new ::java::lang::String(env->getStaticObjectField(cls, "BULLETINB_2000_FILENAME", "Ljava/lang/String;"));
          CSV_FILENAME = new ::java::lang::String(env->getStaticObjectField(cls, "CSV_FILENAME", "Ljava/lang/String;"));
          EOPC04_1980_FILENAME = new ::java::lang::String(env->getStaticObjectField(cls, "EOPC04_1980_FILENAME", "Ljava/lang/String;"));
          EOPC04_2000_FILENAME = new ::java::lang::String(env->getStaticObjectField(cls, "EOPC04_2000_FILENAME", "Ljava/lang/String;"));
          RAPID_DATA_PREDICTION_COLUMNS_1980_FILENAME = new ::java::lang::String(env->getStaticObjectField(cls, "RAPID_DATA_PREDICTION_COLUMNS_1980_FILENAME", "Ljava/lang/String;"));
          RAPID_DATA_PREDICTION_COLUMNS_2000_FILENAME = new ::java::lang::String(env->getStaticObjectField(cls, "RAPID_DATA_PREDICTION_COLUMNS_2000_FILENAME", "Ljava/lang/String;"));
          XML_1980_FILENAME = new ::java::lang::String(env->getStaticObjectField(cls, "XML_1980_FILENAME", "Ljava/lang/String;"));
          XML_2000_FILENAME = new ::java::lang::String(env->getStaticObjectField(cls, "XML_2000_FILENAME", "Ljava/lang/String;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void FramesFactory::addDefaultEOP1980HistoryLoaders(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::lang::String & a3, const ::java::lang::String & a4, const ::java::lang::String & a5)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_addDefaultEOP1980HistoryLoaders_e39b9463875d2aea], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$);
      }

      void FramesFactory::addDefaultEOP2000HistoryLoaders(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::lang::String & a3, const ::java::lang::String & a4, const ::java::lang::String & a5)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_addDefaultEOP2000HistoryLoaders_e39b9463875d2aea], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$);
      }

      void FramesFactory::addEOPHistoryLoader(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::frames::EopHistoryLoader & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_addEOPHistoryLoader_f075adbabba5d6bc], a0.this$, a1.this$);
      }

      ::org::orekit::frames::Frame FramesFactory::buildUncachedITRF(const ::org::orekit::frames::EOPHistory & a0, const ::org::orekit::time::UTCScale & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::Frame(env->callStaticObjectMethod(cls, mids$[mid_buildUncachedITRF_01e80ae3803485ac], a0.this$, a1.this$));
      }

      void FramesFactory::clearEOPHistoryLoaders()
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_clearEOPHistoryLoaders_a1fa5dae97ea5ed2]);
      }

      ::org::orekit::frames::EOPHistory FramesFactory::findEOP(const ::org::orekit::frames::Frame & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::EOPHistory(env->callStaticObjectMethod(cls, mids$[mid_findEOP_c247e78135557d7e], a0.this$));
      }

      ::org::orekit::frames::FactoryManagedFrame FramesFactory::getCIRF(const ::org::orekit::utils::IERSConventions & a0, jboolean a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FactoryManagedFrame(env->callStaticObjectMethod(cls, mids$[mid_getCIRF_b8f4087626aff39a], a0.this$, a1));
      }

      ::org::orekit::frames::FactoryManagedFrame FramesFactory::getEME2000()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FactoryManagedFrame(env->callStaticObjectMethod(cls, mids$[mid_getEME2000_38d89ffeb32a6f21]));
      }

      ::org::orekit::frames::EOPHistory FramesFactory::getEOPHistory(const ::org::orekit::utils::IERSConventions & a0, jboolean a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::EOPHistory(env->callStaticObjectMethod(cls, mids$[mid_getEOPHistory_a77e9d6bc0da2439], a0.this$, a1));
      }

      ::org::orekit::frames::Frame FramesFactory::getEcliptic(const ::org::orekit::utils::IERSConventions & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::Frame(env->callStaticObjectMethod(cls, mids$[mid_getEcliptic_15d291dcc172f59b], a0.this$));
      }

      ::org::orekit::frames::Frame FramesFactory::getFrame(const ::org::orekit::frames::Predefined & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::Frame(env->callStaticObjectMethod(cls, mids$[mid_getFrame_acd75386f33c2984], a0.this$));
      }

      ::org::orekit::frames::LazyLoadedFrames FramesFactory::getFrames()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::LazyLoadedFrames(env->callStaticObjectMethod(cls, mids$[mid_getFrames_5dce20e74866c277]));
      }

      ::org::orekit::frames::Frame FramesFactory::getGCRF()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::Frame(env->callStaticObjectMethod(cls, mids$[mid_getGCRF_2c51111cc6894ba1]));
      }

      ::org::orekit::frames::FactoryManagedFrame FramesFactory::getGTOD(jboolean a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FactoryManagedFrame(env->callStaticObjectMethod(cls, mids$[mid_getGTOD_816956b542562f07], a0));
      }

      ::org::orekit::frames::FactoryManagedFrame FramesFactory::getGTOD(const ::org::orekit::utils::IERSConventions & a0, jboolean a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FactoryManagedFrame(env->callStaticObjectMethod(cls, mids$[mid_getGTOD_b8f4087626aff39a], a0.this$, a1));
      }

      ::org::orekit::frames::Frame FramesFactory::getICRF()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::Frame(env->callStaticObjectMethod(cls, mids$[mid_getICRF_2c51111cc6894ba1]));
      }

      ::org::orekit::frames::FactoryManagedFrame FramesFactory::getITRF(const ::org::orekit::utils::IERSConventions & a0, jboolean a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FactoryManagedFrame(env->callStaticObjectMethod(cls, mids$[mid_getITRF_b8f4087626aff39a], a0.this$, a1));
      }

      ::org::orekit::frames::VersionedITRF FramesFactory::getITRF(const ::org::orekit::frames::ITRFVersion & a0, const ::org::orekit::utils::IERSConventions & a1, jboolean a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::VersionedITRF(env->callStaticObjectMethod(cls, mids$[mid_getITRF_2e00eadcfbf4fef8], a0.this$, a1.this$, a2));
      }

      ::org::orekit::frames::FactoryManagedFrame FramesFactory::getITRFEquinox(const ::org::orekit::utils::IERSConventions & a0, jboolean a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FactoryManagedFrame(env->callStaticObjectMethod(cls, mids$[mid_getITRFEquinox_b8f4087626aff39a], a0.this$, a1));
      }

      ::org::orekit::frames::FactoryManagedFrame FramesFactory::getMOD(const ::org::orekit::utils::IERSConventions & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FactoryManagedFrame(env->callStaticObjectMethod(cls, mids$[mid_getMOD_5e99e4a3c4469bb0], a0.this$));
      }

      ::org::orekit::frames::FactoryManagedFrame FramesFactory::getMOD(jboolean a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FactoryManagedFrame(env->callStaticObjectMethod(cls, mids$[mid_getMOD_816956b542562f07], a0));
      }

      ::org::orekit::frames::Transform FramesFactory::getNonInterpolatingTransform(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::Transform(env->callStaticObjectMethod(cls, mids$[mid_getNonInterpolatingTransform_4144c620244f368d], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::frames::FieldTransform FramesFactory::getNonInterpolatingTransform(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::FieldAbsoluteDate & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FieldTransform(env->callStaticObjectMethod(cls, mids$[mid_getNonInterpolatingTransform_12e9f713a8248456], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::frames::FactoryManagedFrame FramesFactory::getPZ9011(const ::org::orekit::utils::IERSConventions & a0, jboolean a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FactoryManagedFrame(env->callStaticObjectMethod(cls, mids$[mid_getPZ9011_b8f4087626aff39a], a0.this$, a1));
      }

      ::org::orekit::frames::FactoryManagedFrame FramesFactory::getTEME()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FactoryManagedFrame(env->callStaticObjectMethod(cls, mids$[mid_getTEME_38d89ffeb32a6f21]));
      }

      ::org::orekit::frames::FactoryManagedFrame FramesFactory::getTIRF(const ::org::orekit::utils::IERSConventions & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FactoryManagedFrame(env->callStaticObjectMethod(cls, mids$[mid_getTIRF_5e99e4a3c4469bb0], a0.this$));
      }

      ::org::orekit::frames::FactoryManagedFrame FramesFactory::getTIRF(const ::org::orekit::utils::IERSConventions & a0, jboolean a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FactoryManagedFrame(env->callStaticObjectMethod(cls, mids$[mid_getTIRF_b8f4087626aff39a], a0.this$, a1));
      }

      ::org::orekit::frames::FactoryManagedFrame FramesFactory::getTOD(jboolean a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FactoryManagedFrame(env->callStaticObjectMethod(cls, mids$[mid_getTOD_816956b542562f07], a0));
      }

      ::org::orekit::frames::FactoryManagedFrame FramesFactory::getTOD(const ::org::orekit::utils::IERSConventions & a0, jboolean a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FactoryManagedFrame(env->callStaticObjectMethod(cls, mids$[mid_getTOD_b8f4087626aff39a], a0.this$, a1));
      }

      ::org::orekit::frames::FactoryManagedFrame FramesFactory::getVeis1950()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FactoryManagedFrame(env->callStaticObjectMethod(cls, mids$[mid_getVeis1950_38d89ffeb32a6f21]));
      }

      void FramesFactory::setEOPContinuityThreshold(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_setEOPContinuityThreshold_8ba9fe7a847cecad], a0);
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
      static PyObject *t_FramesFactory_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FramesFactory_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FramesFactory_addDefaultEOP1980HistoryLoaders(PyTypeObject *type, PyObject *args);
      static PyObject *t_FramesFactory_addDefaultEOP2000HistoryLoaders(PyTypeObject *type, PyObject *args);
      static PyObject *t_FramesFactory_addEOPHistoryLoader(PyTypeObject *type, PyObject *args);
      static PyObject *t_FramesFactory_buildUncachedITRF(PyTypeObject *type, PyObject *args);
      static PyObject *t_FramesFactory_clearEOPHistoryLoaders(PyTypeObject *type);
      static PyObject *t_FramesFactory_findEOP(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FramesFactory_getCIRF(PyTypeObject *type, PyObject *args);
      static PyObject *t_FramesFactory_getEME2000(PyTypeObject *type);
      static PyObject *t_FramesFactory_getEOPHistory(PyTypeObject *type, PyObject *args);
      static PyObject *t_FramesFactory_getEcliptic(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FramesFactory_getFrame(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FramesFactory_getFrames(PyTypeObject *type);
      static PyObject *t_FramesFactory_getGCRF(PyTypeObject *type);
      static PyObject *t_FramesFactory_getGTOD(PyTypeObject *type, PyObject *args);
      static PyObject *t_FramesFactory_getICRF(PyTypeObject *type);
      static PyObject *t_FramesFactory_getITRF(PyTypeObject *type, PyObject *args);
      static PyObject *t_FramesFactory_getITRFEquinox(PyTypeObject *type, PyObject *args);
      static PyObject *t_FramesFactory_getMOD(PyTypeObject *type, PyObject *args);
      static PyObject *t_FramesFactory_getNonInterpolatingTransform(PyTypeObject *type, PyObject *args);
      static PyObject *t_FramesFactory_getPZ9011(PyTypeObject *type, PyObject *args);
      static PyObject *t_FramesFactory_getTEME(PyTypeObject *type);
      static PyObject *t_FramesFactory_getTIRF(PyTypeObject *type, PyObject *args);
      static PyObject *t_FramesFactory_getTOD(PyTypeObject *type, PyObject *args);
      static PyObject *t_FramesFactory_getVeis1950(PyTypeObject *type);
      static PyObject *t_FramesFactory_setEOPContinuityThreshold(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FramesFactory_get__eME2000(t_FramesFactory *self, void *data);
      static int t_FramesFactory_set__eOPContinuityThreshold(t_FramesFactory *self, PyObject *arg, void *data);
      static PyObject *t_FramesFactory_get__frames(t_FramesFactory *self, void *data);
      static PyObject *t_FramesFactory_get__gCRF(t_FramesFactory *self, void *data);
      static PyObject *t_FramesFactory_get__iCRF(t_FramesFactory *self, void *data);
      static PyObject *t_FramesFactory_get__tEME(t_FramesFactory *self, void *data);
      static PyObject *t_FramesFactory_get__veis1950(t_FramesFactory *self, void *data);
      static PyGetSetDef t_FramesFactory__fields_[] = {
        DECLARE_GET_FIELD(t_FramesFactory, eME2000),
        DECLARE_SET_FIELD(t_FramesFactory, eOPContinuityThreshold),
        DECLARE_GET_FIELD(t_FramesFactory, frames),
        DECLARE_GET_FIELD(t_FramesFactory, gCRF),
        DECLARE_GET_FIELD(t_FramesFactory, iCRF),
        DECLARE_GET_FIELD(t_FramesFactory, tEME),
        DECLARE_GET_FIELD(t_FramesFactory, veis1950),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FramesFactory__methods_[] = {
        DECLARE_METHOD(t_FramesFactory, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, addDefaultEOP1980HistoryLoaders, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, addDefaultEOP2000HistoryLoaders, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, addEOPHistoryLoader, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, buildUncachedITRF, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, clearEOPHistoryLoaders, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, findEOP, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getCIRF, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getEME2000, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getEOPHistory, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getEcliptic, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getFrame, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getFrames, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getGCRF, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getGTOD, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getICRF, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getITRF, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getITRFEquinox, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getMOD, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getNonInterpolatingTransform, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getPZ9011, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getTEME, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getTIRF, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getTOD, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getVeis1950, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, setEOPContinuityThreshold, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FramesFactory)[] = {
        { Py_tp_methods, t_FramesFactory__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FramesFactory__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FramesFactory)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FramesFactory, t_FramesFactory, FramesFactory);

      void t_FramesFactory::install(PyObject *module)
      {
        installType(&PY_TYPE(FramesFactory), &PY_TYPE_DEF(FramesFactory), module, "FramesFactory", 0);
      }

      void t_FramesFactory::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FramesFactory), "class_", make_descriptor(FramesFactory::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FramesFactory), "wrapfn_", make_descriptor(t_FramesFactory::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FramesFactory), "boxfn_", make_descriptor(boxObject));
        env->getClass(FramesFactory::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(FramesFactory), "BULLETINA_FILENAME", make_descriptor(j2p(*FramesFactory::BULLETINA_FILENAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FramesFactory), "BULLETINB_1980_FILENAME", make_descriptor(j2p(*FramesFactory::BULLETINB_1980_FILENAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FramesFactory), "BULLETINB_2000_FILENAME", make_descriptor(j2p(*FramesFactory::BULLETINB_2000_FILENAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FramesFactory), "CSV_FILENAME", make_descriptor(j2p(*FramesFactory::CSV_FILENAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FramesFactory), "EOPC04_1980_FILENAME", make_descriptor(j2p(*FramesFactory::EOPC04_1980_FILENAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FramesFactory), "EOPC04_2000_FILENAME", make_descriptor(j2p(*FramesFactory::EOPC04_2000_FILENAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FramesFactory), "RAPID_DATA_PREDICTION_COLUMNS_1980_FILENAME", make_descriptor(j2p(*FramesFactory::RAPID_DATA_PREDICTION_COLUMNS_1980_FILENAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FramesFactory), "RAPID_DATA_PREDICTION_COLUMNS_2000_FILENAME", make_descriptor(j2p(*FramesFactory::RAPID_DATA_PREDICTION_COLUMNS_2000_FILENAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FramesFactory), "XML_1980_FILENAME", make_descriptor(j2p(*FramesFactory::XML_1980_FILENAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FramesFactory), "XML_2000_FILENAME", make_descriptor(j2p(*FramesFactory::XML_2000_FILENAME)));
      }

      static PyObject *t_FramesFactory_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FramesFactory::initializeClass, 1)))
          return NULL;
        return t_FramesFactory::wrap_Object(FramesFactory(((t_FramesFactory *) arg)->object.this$));
      }
      static PyObject *t_FramesFactory_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FramesFactory::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FramesFactory_addDefaultEOP1980HistoryLoaders(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);
        ::java::lang::String a2((jobject) NULL);
        ::java::lang::String a3((jobject) NULL);
        ::java::lang::String a4((jobject) NULL);
        ::java::lang::String a5((jobject) NULL);

        if (!parseArgs(args, "ssssss", &a0, &a1, &a2, &a3, &a4, &a5))
        {
          OBJ_CALL(::org::orekit::frames::FramesFactory::addDefaultEOP1980HistoryLoaders(a0, a1, a2, a3, a4, a5));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "addDefaultEOP1980HistoryLoaders", args);
        return NULL;
      }

      static PyObject *t_FramesFactory_addDefaultEOP2000HistoryLoaders(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);
        ::java::lang::String a2((jobject) NULL);
        ::java::lang::String a3((jobject) NULL);
        ::java::lang::String a4((jobject) NULL);
        ::java::lang::String a5((jobject) NULL);

        if (!parseArgs(args, "ssssss", &a0, &a1, &a2, &a3, &a4, &a5))
        {
          OBJ_CALL(::org::orekit::frames::FramesFactory::addDefaultEOP2000HistoryLoaders(a0, a1, a2, a3, a4, a5));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "addDefaultEOP2000HistoryLoaders", args);
        return NULL;
      }

      static PyObject *t_FramesFactory_addEOPHistoryLoader(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::EopHistoryLoader a1((jobject) NULL);

        if (!parseArgs(args, "Kk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::frames::EopHistoryLoader::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(::org::orekit::frames::FramesFactory::addEOPHistoryLoader(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "addEOPHistoryLoader", args);
        return NULL;
      }

      static PyObject *t_FramesFactory_buildUncachedITRF(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::frames::EOPHistory a0((jobject) NULL);
        ::org::orekit::time::UTCScale a1((jobject) NULL);
        ::org::orekit::frames::Frame result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::frames::EOPHistory::initializeClass, ::org::orekit::time::UTCScale::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::frames::FramesFactory::buildUncachedITRF(a0, a1));
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "buildUncachedITRF", args);
        return NULL;
      }

      static PyObject *t_FramesFactory_clearEOPHistoryLoaders(PyTypeObject *type)
      {
        OBJ_CALL(::org::orekit::frames::FramesFactory::clearEOPHistoryLoaders());
        Py_RETURN_NONE;
      }

      static PyObject *t_FramesFactory_findEOP(PyTypeObject *type, PyObject *arg)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::orekit::frames::EOPHistory result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::orekit::frames::FramesFactory::findEOP(a0));
          return ::org::orekit::frames::t_EOPHistory::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "findEOP", arg);
        return NULL;
      }

      static PyObject *t_FramesFactory_getCIRF(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

        if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getCIRF(a0, a1));
          return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getCIRF", args);
        return NULL;
      }

      static PyObject *t_FramesFactory_getEME2000(PyTypeObject *type)
      {
        ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getEME2000());
        return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
      }

      static PyObject *t_FramesFactory_getEOPHistory(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        ::org::orekit::frames::EOPHistory result((jobject) NULL);

        if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getEOPHistory(a0, a1));
          return ::org::orekit::frames::t_EOPHistory::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getEOPHistory", args);
        return NULL;
      }

      static PyObject *t_FramesFactory_getEcliptic(PyTypeObject *type, PyObject *arg)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::Frame result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getEcliptic(a0));
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getEcliptic", arg);
        return NULL;
      }

      static PyObject *t_FramesFactory_getFrame(PyTypeObject *type, PyObject *arg)
      {
        ::org::orekit::frames::Predefined a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::Frame result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::frames::Predefined::initializeClass, &a0, &p0, ::org::orekit::frames::t_Predefined::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getFrame(a0));
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getFrame", arg);
        return NULL;
      }

      static PyObject *t_FramesFactory_getFrames(PyTypeObject *type)
      {
        ::org::orekit::frames::LazyLoadedFrames result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getFrames());
        return ::org::orekit::frames::t_LazyLoadedFrames::wrap_Object(result);
      }

      static PyObject *t_FramesFactory_getGCRF(PyTypeObject *type)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getGCRF());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_FramesFactory_getGTOD(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jboolean a0;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "Z", &a0))
            {
              OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getGTOD(a0));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean a1;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getGTOD(a0, a1));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "getGTOD", args);
        return NULL;
      }

      static PyObject *t_FramesFactory_getICRF(PyTypeObject *type)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getICRF());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_FramesFactory_getITRF(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean a1;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getITRF(a0, a1));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::orekit::frames::ITRFVersion a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::IERSConventions a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;
            ::org::orekit::frames::VersionedITRF result((jobject) NULL);

            if (!parseArgs(args, "KKZ", ::org::orekit::frames::ITRFVersion::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::frames::t_ITRFVersion::parameters_, &a1, &p1, ::org::orekit::utils::t_IERSConventions::parameters_, &a2))
            {
              OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getITRF(a0, a1, a2));
              return ::org::orekit::frames::t_VersionedITRF::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "getITRF", args);
        return NULL;
      }

      static PyObject *t_FramesFactory_getITRFEquinox(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

        if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getITRFEquinox(a0, a1));
          return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getITRFEquinox", args);
        return NULL;
      }

      static PyObject *t_FramesFactory_getMOD(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getMOD(a0));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
          {
            jboolean a0;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "Z", &a0))
            {
              OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getMOD(a0));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "getMOD", args);
        return NULL;
      }

      static PyObject *t_FramesFactory_getNonInterpolatingTransform(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            ::org::orekit::frames::Transform result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getNonInterpolatingTransform(a0, a1, a2));
              return ::org::orekit::frames::t_Transform::wrap_Object(result);
            }
          }
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::frames::FieldTransform result((jobject) NULL);

            if (!parseArgs(args, "kkK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getNonInterpolatingTransform(a0, a1, a2));
              return ::org::orekit::frames::t_FieldTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "getNonInterpolatingTransform", args);
        return NULL;
      }

      static PyObject *t_FramesFactory_getPZ9011(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

        if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getPZ9011(a0, a1));
          return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getPZ9011", args);
        return NULL;
      }

      static PyObject *t_FramesFactory_getTEME(PyTypeObject *type)
      {
        ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getTEME());
        return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
      }

      static PyObject *t_FramesFactory_getTIRF(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getTIRF(a0));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean a1;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getTIRF(a0, a1));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "getTIRF", args);
        return NULL;
      }

      static PyObject *t_FramesFactory_getTOD(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jboolean a0;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "Z", &a0))
            {
              OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getTOD(a0));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean a1;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getTOD(a0, a1));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "getTOD", args);
        return NULL;
      }

      static PyObject *t_FramesFactory_getVeis1950(PyTypeObject *type)
      {
        ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getVeis1950());
        return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
      }

      static PyObject *t_FramesFactory_setEOPContinuityThreshold(PyTypeObject *type, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(::org::orekit::frames::FramesFactory::setEOPContinuityThreshold(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "setEOPContinuityThreshold", arg);
        return NULL;
      }

      static PyObject *t_FramesFactory_get__eME2000(t_FramesFactory *self, void *data)
      {
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        OBJ_CALL(value = self->object.getEME2000());
        return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(value);
      }

      static int t_FramesFactory_set__eOPContinuityThreshold(t_FramesFactory *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setEOPContinuityThreshold(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "eOPContinuityThreshold", arg);
        return -1;
      }

      static PyObject *t_FramesFactory_get__frames(t_FramesFactory *self, void *data)
      {
        ::org::orekit::frames::LazyLoadedFrames value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrames());
        return ::org::orekit::frames::t_LazyLoadedFrames::wrap_Object(value);
      }

      static PyObject *t_FramesFactory_get__gCRF(t_FramesFactory *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getGCRF());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_FramesFactory_get__iCRF(t_FramesFactory *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getICRF());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_FramesFactory_get__tEME(t_FramesFactory *self, void *data)
      {
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        OBJ_CALL(value = self->object.getTEME());
        return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(value);
      }

      static PyObject *t_FramesFactory_get__veis1950(t_FramesFactory *self, void *data)
      {
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        OBJ_CALL(value = self->object.getVeis1950());
        return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/PythonOrbit.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "java/lang/Throwable.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/IllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *PythonOrbit::class$ = NULL;
      jmethodID *PythonOrbit::mids$ = NULL;
      bool PythonOrbit::live$ = false;

      jclass PythonOrbit::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/PythonOrbit");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_18124f64d7fce8bd] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/TimeStampedPVCoordinates;Lorg/orekit/frames/Frame;D)V");
          mids$[mid_init$_9782eb8ed3559570] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;D)V");
          mids$[mid_addKeplerContribution_2a5649bc1625306e] = env->getMethodID(cls, "addKeplerContribution", "(Lorg/orekit/orbits/PositionAngleType;D[D)V");
          mids$[mid_computeJacobianEccentricWrtCartesian_3b7b373db8e7887f] = env->getMethodID(cls, "computeJacobianEccentricWrtCartesian", "()[[D");
          mids$[mid_computeJacobianMeanWrtCartesian_3b7b373db8e7887f] = env->getMethodID(cls, "computeJacobianMeanWrtCartesian", "()[[D");
          mids$[mid_computeJacobianTrueWrtCartesian_3b7b373db8e7887f] = env->getMethodID(cls, "computeJacobianTrueWrtCartesian", "()[[D");
          mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getA_b74f83833fdad017] = env->getMethodID(cls, "getA", "()D");
          mids$[mid_getADot_b74f83833fdad017] = env->getMethodID(cls, "getADot", "()D");
          mids$[mid_getE_b74f83833fdad017] = env->getMethodID(cls, "getE", "()D");
          mids$[mid_getEDot_b74f83833fdad017] = env->getMethodID(cls, "getEDot", "()D");
          mids$[mid_getEquinoctialEx_b74f83833fdad017] = env->getMethodID(cls, "getEquinoctialEx", "()D");
          mids$[mid_getEquinoctialExDot_b74f83833fdad017] = env->getMethodID(cls, "getEquinoctialExDot", "()D");
          mids$[mid_getEquinoctialEy_b74f83833fdad017] = env->getMethodID(cls, "getEquinoctialEy", "()D");
          mids$[mid_getEquinoctialEyDot_b74f83833fdad017] = env->getMethodID(cls, "getEquinoctialEyDot", "()D");
          mids$[mid_getHx_b74f83833fdad017] = env->getMethodID(cls, "getHx", "()D");
          mids$[mid_getHxDot_b74f83833fdad017] = env->getMethodID(cls, "getHxDot", "()D");
          mids$[mid_getHy_b74f83833fdad017] = env->getMethodID(cls, "getHy", "()D");
          mids$[mid_getHyDot_b74f83833fdad017] = env->getMethodID(cls, "getHyDot", "()D");
          mids$[mid_getI_b74f83833fdad017] = env->getMethodID(cls, "getI", "()D");
          mids$[mid_getIDot_b74f83833fdad017] = env->getMethodID(cls, "getIDot", "()D");
          mids$[mid_getLE_b74f83833fdad017] = env->getMethodID(cls, "getLE", "()D");
          mids$[mid_getLEDot_b74f83833fdad017] = env->getMethodID(cls, "getLEDot", "()D");
          mids$[mid_getLM_b74f83833fdad017] = env->getMethodID(cls, "getLM", "()D");
          mids$[mid_getLMDot_b74f83833fdad017] = env->getMethodID(cls, "getLMDot", "()D");
          mids$[mid_getLv_b74f83833fdad017] = env->getMethodID(cls, "getLv", "()D");
          mids$[mid_getLvDot_b74f83833fdad017] = env->getMethodID(cls, "getLvDot", "()D");
          mids$[mid_getType_c7d4737d7afca612] = env->getMethodID(cls, "getType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_initPVCoordinates_136cc8ba23b21c29] = env->getMethodID(cls, "initPVCoordinates", "()Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_initPosition_8b724f8b4fdad1a2] = env->getMethodID(cls, "initPosition", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_shiftedBy_93453d78b4f95a28] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/orbits/Orbit;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonOrbit::PythonOrbit(const ::org::orekit::utils::TimeStampedPVCoordinates & a0, const ::org::orekit::frames::Frame & a1, jdouble a2) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_18124f64d7fce8bd, a0.this$, a1.this$, a2)) {}

      PythonOrbit::PythonOrbit(const ::org::orekit::frames::Frame & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_9782eb8ed3559570, a0.this$, a1.this$, a2)) {}

      void PythonOrbit::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
      }

      jlong PythonOrbit::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
      }

      void PythonOrbit::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
      static PyObject *t_PythonOrbit_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonOrbit_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonOrbit_init_(t_PythonOrbit *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonOrbit_finalize(t_PythonOrbit *self);
      static PyObject *t_PythonOrbit_pythonExtension(t_PythonOrbit *self, PyObject *args);
      static void JNICALL t_PythonOrbit_addKeplerContribution0(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jobject a2);
      static jobject JNICALL t_PythonOrbit_computeJacobianEccentricWrtCartesian1(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonOrbit_computeJacobianMeanWrtCartesian2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonOrbit_computeJacobianTrueWrtCartesian3(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getA4(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getADot5(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getE6(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getEDot7(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getEquinoctialEx8(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getEquinoctialExDot9(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getEquinoctialEy10(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getEquinoctialEyDot11(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getHx12(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getHxDot13(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getHy14(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getHyDot15(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getI16(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getIDot17(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getLE18(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getLEDot19(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getLM20(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getLMDot21(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getLv22(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getLvDot23(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonOrbit_getType24(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonOrbit_initPVCoordinates25(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonOrbit_initPosition26(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonOrbit_pythonDecRef27(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonOrbit_shiftedBy28(JNIEnv *jenv, jobject jobj, jdouble a0);
      static PyObject *t_PythonOrbit_get__self(t_PythonOrbit *self, void *data);
      static PyGetSetDef t_PythonOrbit__fields_[] = {
        DECLARE_GET_FIELD(t_PythonOrbit, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonOrbit__methods_[] = {
        DECLARE_METHOD(t_PythonOrbit, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonOrbit, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonOrbit, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonOrbit, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonOrbit)[] = {
        { Py_tp_methods, t_PythonOrbit__methods_ },
        { Py_tp_init, (void *) t_PythonOrbit_init_ },
        { Py_tp_getset, t_PythonOrbit__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonOrbit)[] = {
        &PY_TYPE_DEF(::org::orekit::orbits::Orbit),
        NULL
      };

      DEFINE_TYPE(PythonOrbit, t_PythonOrbit, PythonOrbit);

      void t_PythonOrbit::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonOrbit), &PY_TYPE_DEF(PythonOrbit), module, "PythonOrbit", 1);
      }

      void t_PythonOrbit::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonOrbit), "class_", make_descriptor(PythonOrbit::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonOrbit), "wrapfn_", make_descriptor(t_PythonOrbit::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonOrbit), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonOrbit::initializeClass);
        JNINativeMethod methods[] = {
          { "addKeplerContribution", "(Lorg/orekit/orbits/PositionAngleType;D[D)V", (void *) t_PythonOrbit_addKeplerContribution0 },
          { "computeJacobianEccentricWrtCartesian", "()[[D", (void *) t_PythonOrbit_computeJacobianEccentricWrtCartesian1 },
          { "computeJacobianMeanWrtCartesian", "()[[D", (void *) t_PythonOrbit_computeJacobianMeanWrtCartesian2 },
          { "computeJacobianTrueWrtCartesian", "()[[D", (void *) t_PythonOrbit_computeJacobianTrueWrtCartesian3 },
          { "getA", "()D", (void *) t_PythonOrbit_getA4 },
          { "getADot", "()D", (void *) t_PythonOrbit_getADot5 },
          { "getE", "()D", (void *) t_PythonOrbit_getE6 },
          { "getEDot", "()D", (void *) t_PythonOrbit_getEDot7 },
          { "getEquinoctialEx", "()D", (void *) t_PythonOrbit_getEquinoctialEx8 },
          { "getEquinoctialExDot", "()D", (void *) t_PythonOrbit_getEquinoctialExDot9 },
          { "getEquinoctialEy", "()D", (void *) t_PythonOrbit_getEquinoctialEy10 },
          { "getEquinoctialEyDot", "()D", (void *) t_PythonOrbit_getEquinoctialEyDot11 },
          { "getHx", "()D", (void *) t_PythonOrbit_getHx12 },
          { "getHxDot", "()D", (void *) t_PythonOrbit_getHxDot13 },
          { "getHy", "()D", (void *) t_PythonOrbit_getHy14 },
          { "getHyDot", "()D", (void *) t_PythonOrbit_getHyDot15 },
          { "getI", "()D", (void *) t_PythonOrbit_getI16 },
          { "getIDot", "()D", (void *) t_PythonOrbit_getIDot17 },
          { "getLE", "()D", (void *) t_PythonOrbit_getLE18 },
          { "getLEDot", "()D", (void *) t_PythonOrbit_getLEDot19 },
          { "getLM", "()D", (void *) t_PythonOrbit_getLM20 },
          { "getLMDot", "()D", (void *) t_PythonOrbit_getLMDot21 },
          { "getLv", "()D", (void *) t_PythonOrbit_getLv22 },
          { "getLvDot", "()D", (void *) t_PythonOrbit_getLvDot23 },
          { "getType", "()Lorg/orekit/orbits/OrbitType;", (void *) t_PythonOrbit_getType24 },
          { "initPVCoordinates", "()Lorg/orekit/utils/TimeStampedPVCoordinates;", (void *) t_PythonOrbit_initPVCoordinates25 },
          { "initPosition", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonOrbit_initPosition26 },
          { "pythonDecRef", "()V", (void *) t_PythonOrbit_pythonDecRef27 },
          { "shiftedBy", "(D)Lorg/orekit/orbits/Orbit;", (void *) t_PythonOrbit_shiftedBy28 },
        };
        env->registerNatives(cls, methods, 29);
      }

      static PyObject *t_PythonOrbit_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonOrbit::initializeClass, 1)))
          return NULL;
        return t_PythonOrbit::wrap_Object(PythonOrbit(((t_PythonOrbit *) arg)->object.this$));
      }
      static PyObject *t_PythonOrbit_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonOrbit::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonOrbit_init_(t_PythonOrbit *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::TimeStampedPVCoordinates a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            jdouble a2;
            PythonOrbit object((jobject) NULL);

            if (!parseArgs(args, "kkD", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = PythonOrbit(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            jdouble a2;
            PythonOrbit object((jobject) NULL);

            if (!parseArgs(args, "kkD", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = PythonOrbit(a0, a1, a2));
              self->object = object;
              break;
            }
          }
         default:
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonOrbit_finalize(t_PythonOrbit *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonOrbit_pythonExtension(t_PythonOrbit *self, PyObject *args)
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

      static void JNICALL t_PythonOrbit_addKeplerContribution0(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::orbits::t_PositionAngleType::wrap_Object(::org::orekit::orbits::PositionAngleType(a0));
        PyObject *o2 = JArray<jdouble>(a2).wrap();
        PyObject *result = PyObject_CallMethod(obj, "addKeplerContribution", "OdO", o0, (double) a1, o2);
        Py_DECREF(o0);
        Py_DECREF(o2);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static jobject JNICALL t_PythonOrbit_computeJacobianEccentricWrtCartesian1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        JArray< JArray< jdouble > > value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "computeJacobianEccentricWrtCartesian", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "[[D", &value))
        {
          throwTypeError("computeJacobianEccentricWrtCartesian", result);
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

      static jobject JNICALL t_PythonOrbit_computeJacobianMeanWrtCartesian2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        JArray< JArray< jdouble > > value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "computeJacobianMeanWrtCartesian", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "[[D", &value))
        {
          throwTypeError("computeJacobianMeanWrtCartesian", result);
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

      static jobject JNICALL t_PythonOrbit_computeJacobianTrueWrtCartesian3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        JArray< JArray< jdouble > > value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "computeJacobianTrueWrtCartesian", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "[[D", &value))
        {
          throwTypeError("computeJacobianTrueWrtCartesian", result);
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

      static jdouble JNICALL t_PythonOrbit_getA4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getA", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getA", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getADot5(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getADot", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getADot", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getE6(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getE", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getE", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getEDot7(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getEDot", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getEDot", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getEquinoctialEx8(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getEquinoctialEx", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getEquinoctialEx", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getEquinoctialExDot9(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getEquinoctialExDot", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getEquinoctialExDot", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getEquinoctialEy10(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getEquinoctialEy", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getEquinoctialEy", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getEquinoctialEyDot11(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getEquinoctialEyDot", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getEquinoctialEyDot", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getHx12(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getHx", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getHx", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getHxDot13(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getHxDot", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getHxDot", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getHy14(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getHy", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getHy", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getHyDot15(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getHyDot", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getHyDot", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getI16(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getI", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getI", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getIDot17(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getIDot", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getIDot", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getLE18(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getLE", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getLE", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getLEDot19(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getLEDot", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getLEDot", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getLM20(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getLM", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getLM", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getLMDot21(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getLMDot", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getLMDot", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getLv22(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getLv", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getLv", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getLvDot23(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getLvDot", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getLvDot", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jobject JNICALL t_PythonOrbit_getType24(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::orbits::OrbitType value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getType", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::orbits::OrbitType::initializeClass, &value))
        {
          throwTypeError("getType", result);
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

      static jobject JNICALL t_PythonOrbit_initPVCoordinates25(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::utils::TimeStampedPVCoordinates value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "initPVCoordinates", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &value))
        {
          throwTypeError("initPVCoordinates", result);
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

      static jobject JNICALL t_PythonOrbit_initPosition26(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "initPosition", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
        {
          throwTypeError("initPosition", result);
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

      static void JNICALL t_PythonOrbit_pythonDecRef27(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jobject JNICALL t_PythonOrbit_shiftedBy28(JNIEnv *jenv, jobject jobj, jdouble a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::orbits::Orbit value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "shiftedBy", "d", (double) a0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::orbits::Orbit::initializeClass, &value))
        {
          throwTypeError("shiftedBy", result);
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

      static PyObject *t_PythonOrbit_get__self(t_PythonOrbit *self, void *data)
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
#include "org/orekit/models/earth/tessellation/PythonTileAiming.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/models/earth/tessellation/TileAiming.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace tessellation {

          ::java::lang::Class *PythonTileAiming::class$ = NULL;
          jmethodID *PythonTileAiming::mids$ = NULL;
          bool PythonTileAiming::live$ = false;

          jclass PythonTileAiming::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/tessellation/PythonTileAiming");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_alongTileDirection_636e2b82319b8646] = env->getMethodID(cls, "alongTileDirection", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/bodies/GeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getSingularPoints_e62d3bb06d56d7e3] = env->getMethodID(cls, "getSingularPoints", "()Ljava/util/List;");
              mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonTileAiming::PythonTileAiming() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          void PythonTileAiming::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
          }

          jlong PythonTileAiming::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
          }

          void PythonTileAiming::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
    namespace models {
      namespace earth {
        namespace tessellation {
          static PyObject *t_PythonTileAiming_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonTileAiming_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonTileAiming_init_(t_PythonTileAiming *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonTileAiming_finalize(t_PythonTileAiming *self);
          static PyObject *t_PythonTileAiming_pythonExtension(t_PythonTileAiming *self, PyObject *args);
          static jobject JNICALL t_PythonTileAiming_alongTileDirection0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static jobject JNICALL t_PythonTileAiming_getSingularPoints1(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonTileAiming_pythonDecRef2(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonTileAiming_get__self(t_PythonTileAiming *self, void *data);
          static PyGetSetDef t_PythonTileAiming__fields_[] = {
            DECLARE_GET_FIELD(t_PythonTileAiming, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonTileAiming__methods_[] = {
            DECLARE_METHOD(t_PythonTileAiming, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonTileAiming, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonTileAiming, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonTileAiming, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonTileAiming)[] = {
            { Py_tp_methods, t_PythonTileAiming__methods_ },
            { Py_tp_init, (void *) t_PythonTileAiming_init_ },
            { Py_tp_getset, t_PythonTileAiming__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonTileAiming)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonTileAiming, t_PythonTileAiming, PythonTileAiming);

          void t_PythonTileAiming::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonTileAiming), &PY_TYPE_DEF(PythonTileAiming), module, "PythonTileAiming", 1);
          }

          void t_PythonTileAiming::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTileAiming), "class_", make_descriptor(PythonTileAiming::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTileAiming), "wrapfn_", make_descriptor(t_PythonTileAiming::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTileAiming), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonTileAiming::initializeClass);
            JNINativeMethod methods[] = {
              { "alongTileDirection", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/bodies/GeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonTileAiming_alongTileDirection0 },
              { "getSingularPoints", "()Ljava/util/List;", (void *) t_PythonTileAiming_getSingularPoints1 },
              { "pythonDecRef", "()V", (void *) t_PythonTileAiming_pythonDecRef2 },
            };
            env->registerNatives(cls, methods, 3);
          }

          static PyObject *t_PythonTileAiming_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonTileAiming::initializeClass, 1)))
              return NULL;
            return t_PythonTileAiming::wrap_Object(PythonTileAiming(((t_PythonTileAiming *) arg)->object.this$));
          }
          static PyObject *t_PythonTileAiming_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonTileAiming::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonTileAiming_init_(t_PythonTileAiming *self, PyObject *args, PyObject *kwds)
          {
            PythonTileAiming object((jobject) NULL);

            INT_CALL(object = PythonTileAiming());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonTileAiming_finalize(t_PythonTileAiming *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonTileAiming_pythonExtension(t_PythonTileAiming *self, PyObject *args)
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

          static jobject JNICALL t_PythonTileAiming_alongTileDirection0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonTileAiming::mids$[PythonTileAiming::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a0));
            PyObject *o1 = ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(::org::orekit::bodies::GeodeticPoint(a1));
            PyObject *result = PyObject_CallMethod(obj, "alongTileDirection", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
            {
              throwTypeError("alongTileDirection", result);
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

          static jobject JNICALL t_PythonTileAiming_getSingularPoints1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonTileAiming::mids$[PythonTileAiming::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::java::util::List value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getSingularPoints", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
            {
              throwTypeError("getSingularPoints", result);
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

          static void JNICALL t_PythonTileAiming_pythonDecRef2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonTileAiming::mids$[PythonTileAiming::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonTileAiming::mids$[PythonTileAiming::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonTileAiming_get__self(t_PythonTileAiming *self, void *data)
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
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/PythonAbstractDetector.h"
#include "org/orekit/propagation/events/handlers/EventHandler.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/events/AdaptableInterval.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *PythonAbstractDetector::class$ = NULL;
        jmethodID *PythonAbstractDetector::mids$ = NULL;
        bool PythonAbstractDetector::live$ = false;

        jclass PythonAbstractDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/PythonAbstractDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_413caef65c5524ff] = env->getMethodID(cls, "<init>", "(DDILorg/orekit/propagation/events/handlers/EventHandler;)V");
            mids$[mid_create_193e21d57a66206a] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/AbstractDetector;");
            mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_g_a17ea857ce74d258] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractDetector::PythonAbstractDetector(jdouble a0, jdouble a1, jint a2, const ::org::orekit::propagation::events::handlers::EventHandler & a3) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_413caef65c5524ff, a0, a1, a2, a3.this$)) {}

        void PythonAbstractDetector::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
        }

        jlong PythonAbstractDetector::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
        }

        void PythonAbstractDetector::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
        static PyObject *t_PythonAbstractDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractDetector_of_(t_PythonAbstractDetector *self, PyObject *args);
        static int t_PythonAbstractDetector_init_(t_PythonAbstractDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAbstractDetector_finalize(t_PythonAbstractDetector *self);
        static PyObject *t_PythonAbstractDetector_pythonExtension(t_PythonAbstractDetector *self, PyObject *args);
        static jobject JNICALL t_PythonAbstractDetector_create0(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jint a2, jobject a3);
        static jdouble JNICALL t_PythonAbstractDetector_g1(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonAbstractDetector_pythonDecRef2(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonAbstractDetector_get__self(t_PythonAbstractDetector *self, void *data);
        static PyObject *t_PythonAbstractDetector_get__parameters_(t_PythonAbstractDetector *self, void *data);
        static PyGetSetDef t_PythonAbstractDetector__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAbstractDetector, self),
          DECLARE_GET_FIELD(t_PythonAbstractDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAbstractDetector__methods_[] = {
          DECLARE_METHOD(t_PythonAbstractDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonAbstractDetector, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAbstractDetector, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAbstractDetector)[] = {
          { Py_tp_methods, t_PythonAbstractDetector__methods_ },
          { Py_tp_init, (void *) t_PythonAbstractDetector_init_ },
          { Py_tp_getset, t_PythonAbstractDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAbstractDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(PythonAbstractDetector, t_PythonAbstractDetector, PythonAbstractDetector);
        PyObject *t_PythonAbstractDetector::wrap_Object(const PythonAbstractDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonAbstractDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonAbstractDetector *self = (t_PythonAbstractDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PythonAbstractDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonAbstractDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonAbstractDetector *self = (t_PythonAbstractDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PythonAbstractDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAbstractDetector), &PY_TYPE_DEF(PythonAbstractDetector), module, "PythonAbstractDetector", 1);
        }

        void t_PythonAbstractDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractDetector), "class_", make_descriptor(PythonAbstractDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractDetector), "wrapfn_", make_descriptor(t_PythonAbstractDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractDetector), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAbstractDetector::initializeClass);
          JNINativeMethod methods[] = {
            { "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/AbstractDetector;", (void *) t_PythonAbstractDetector_create0 },
            { "g", "(Lorg/orekit/propagation/SpacecraftState;)D", (void *) t_PythonAbstractDetector_g1 },
            { "pythonDecRef", "()V", (void *) t_PythonAbstractDetector_pythonDecRef2 },
          };
          env->registerNatives(cls, methods, 3);
        }

        static PyObject *t_PythonAbstractDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAbstractDetector::initializeClass, 1)))
            return NULL;
          return t_PythonAbstractDetector::wrap_Object(PythonAbstractDetector(((t_PythonAbstractDetector *) arg)->object.this$));
        }
        static PyObject *t_PythonAbstractDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAbstractDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonAbstractDetector_of_(t_PythonAbstractDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonAbstractDetector_init_(t_PythonAbstractDetector *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          jint a2;
          ::org::orekit::propagation::events::handlers::EventHandler a3((jobject) NULL);
          PythonAbstractDetector object((jobject) NULL);

          if (!parseArgs(args, "DDIk", ::org::orekit::propagation::events::handlers::EventHandler::initializeClass, &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = PythonAbstractDetector(a0, a1, a2, a3));
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

        static PyObject *t_PythonAbstractDetector_finalize(t_PythonAbstractDetector *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAbstractDetector_pythonExtension(t_PythonAbstractDetector *self, PyObject *args)
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

        static jobject JNICALL t_PythonAbstractDetector_create0(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jint a2, jobject a3)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractDetector::mids$[PythonAbstractDetector::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::events::AbstractDetector value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::events::t_AdaptableInterval::wrap_Object(::org::orekit::propagation::events::AdaptableInterval(a0));
          PyObject *o3 = ::org::orekit::propagation::events::handlers::t_EventHandler::wrap_Object(::org::orekit::propagation::events::handlers::EventHandler(a3));
          PyObject *result = PyObject_CallMethod(obj, "create", "OdiO", o0, (double) a1, (int) a2, o3);
          Py_DECREF(o0);
          Py_DECREF(o3);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::events::AbstractDetector::initializeClass, &value))
          {
            throwTypeError("create", result);
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

        static jdouble JNICALL t_PythonAbstractDetector_g1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractDetector::mids$[PythonAbstractDetector::mid_pythonExtension_6c0ce7e438e5ded4]);
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

        static void JNICALL t_PythonAbstractDetector_pythonDecRef2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractDetector::mids$[PythonAbstractDetector::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAbstractDetector::mids$[PythonAbstractDetector::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonAbstractDetector_get__self(t_PythonAbstractDetector *self, void *data)
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
        static PyObject *t_PythonAbstractDetector_get__parameters_(t_PythonAbstractDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FieldAdaptableInterval.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldAdaptableInterval::class$ = NULL;
        jmethodID *FieldAdaptableInterval::mids$ = NULL;
        bool FieldAdaptableInterval::live$ = false;

        jclass FieldAdaptableInterval::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldAdaptableInterval");

            mids$ = new jmethodID[max_mid];
            mids$[mid_currentInterval_262a70fffff568ce] = env->getMethodID(cls, "currentInterval", "(Lorg/orekit/propagation/FieldSpacecraftState;)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble FieldAdaptableInterval::currentInterval(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_currentInterval_262a70fffff568ce], a0.this$);
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
        static PyObject *t_FieldAdaptableInterval_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAdaptableInterval_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAdaptableInterval_of_(t_FieldAdaptableInterval *self, PyObject *args);
        static PyObject *t_FieldAdaptableInterval_currentInterval(t_FieldAdaptableInterval *self, PyObject *arg);
        static PyObject *t_FieldAdaptableInterval_get__parameters_(t_FieldAdaptableInterval *self, void *data);
        static PyGetSetDef t_FieldAdaptableInterval__fields_[] = {
          DECLARE_GET_FIELD(t_FieldAdaptableInterval, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldAdaptableInterval__methods_[] = {
          DECLARE_METHOD(t_FieldAdaptableInterval, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAdaptableInterval, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAdaptableInterval, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldAdaptableInterval, currentInterval, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldAdaptableInterval)[] = {
          { Py_tp_methods, t_FieldAdaptableInterval__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldAdaptableInterval__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldAdaptableInterval)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldAdaptableInterval, t_FieldAdaptableInterval, FieldAdaptableInterval);
        PyObject *t_FieldAdaptableInterval::wrap_Object(const FieldAdaptableInterval& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldAdaptableInterval::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAdaptableInterval *self = (t_FieldAdaptableInterval *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldAdaptableInterval::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldAdaptableInterval::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAdaptableInterval *self = (t_FieldAdaptableInterval *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldAdaptableInterval::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldAdaptableInterval), &PY_TYPE_DEF(FieldAdaptableInterval), module, "FieldAdaptableInterval", 0);
        }

        void t_FieldAdaptableInterval::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAdaptableInterval), "class_", make_descriptor(FieldAdaptableInterval::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAdaptableInterval), "wrapfn_", make_descriptor(t_FieldAdaptableInterval::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAdaptableInterval), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldAdaptableInterval_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldAdaptableInterval::initializeClass, 1)))
            return NULL;
          return t_FieldAdaptableInterval::wrap_Object(FieldAdaptableInterval(((t_FieldAdaptableInterval *) arg)->object.this$));
        }
        static PyObject *t_FieldAdaptableInterval_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldAdaptableInterval::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldAdaptableInterval_of_(t_FieldAdaptableInterval *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldAdaptableInterval_currentInterval(t_FieldAdaptableInterval *self, PyObject *arg)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          jdouble result;

          if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.currentInterval(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "currentInterval", arg);
          return NULL;
        }
        static PyObject *t_FieldAdaptableInterval_get__parameters_(t_FieldAdaptableInterval *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}

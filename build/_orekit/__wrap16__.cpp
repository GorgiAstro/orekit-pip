#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/errors/RuggedMessages.h"
#include "java/util/Locale.h"
#include "org/orekit/rugged/errors/RuggedMessages.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace errors {

        ::java::lang::Class *RuggedMessages::class$ = NULL;
        jmethodID *RuggedMessages::mids$ = NULL;
        bool RuggedMessages::live$ = false;
        RuggedMessages *RuggedMessages::ABERRATION_OF_LIGHT_CORRECTION_REDEFINED = NULL;
        RuggedMessages *RuggedMessages::ATMOSPHERIC_REFRACTION_REDEFINED = NULL;
        RuggedMessages *RuggedMessages::CANNOT_PARSE_LINE = NULL;
        RuggedMessages *RuggedMessages::DEBUG_DUMP_ACTIVATION_ERROR = NULL;
        RuggedMessages *RuggedMessages::DEBUG_DUMP_ALREADY_ACTIVE = NULL;
        RuggedMessages *RuggedMessages::DEBUG_DUMP_NOT_ACTIVE = NULL;
        RuggedMessages *RuggedMessages::DEM_ENTRY_POINT_IS_BEHIND_SPACECRAFT = NULL;
        RuggedMessages *RuggedMessages::DUPLICATED_PARAMETER_NAME = NULL;
        RuggedMessages *RuggedMessages::EMPTY_TILE = NULL;
        RuggedMessages *RuggedMessages::FRAMES_MISMATCH_WITH_INTERPOLATOR_DUMP = NULL;
        RuggedMessages *RuggedMessages::INTERNAL_ERROR = NULL;
        RuggedMessages *RuggedMessages::INVALID_RANGE_FOR_LINES = NULL;
        RuggedMessages *RuggedMessages::INVALID_RUGGED_NAME = NULL;
        RuggedMessages *RuggedMessages::INVALID_STEP = NULL;
        RuggedMessages *RuggedMessages::LIGHT_TIME_CORRECTION_REDEFINED = NULL;
        RuggedMessages *RuggedMessages::LINE_OF_SIGHT_DOES_NOT_REACH_GROUND = NULL;
        RuggedMessages *RuggedMessages::LINE_OF_SIGHT_NEVER_CROSSES_ALTITUDE = NULL;
        RuggedMessages *RuggedMessages::LINE_OF_SIGHT_NEVER_CROSSES_LATITUDE = NULL;
        RuggedMessages *RuggedMessages::LINE_OF_SIGHT_NEVER_CROSSES_LONGITUDE = NULL;
        RuggedMessages *RuggedMessages::NOT_INTERPOLATOR_DUMP_DATA = NULL;
        RuggedMessages *RuggedMessages::NO_DEM_DATA = NULL;
        RuggedMessages *RuggedMessages::NO_LAYER_DATA = NULL;
        RuggedMessages *RuggedMessages::NO_PARAMETERS_SELECTED = NULL;
        RuggedMessages *RuggedMessages::NO_REFERENCE_MAPPINGS = NULL;
        RuggedMessages *RuggedMessages::OUT_OF_TILE_ANGLES = NULL;
        RuggedMessages *RuggedMessages::OUT_OF_TILE_INDICES = NULL;
        RuggedMessages *RuggedMessages::OUT_OF_TIME_RANGE = NULL;
        RuggedMessages *RuggedMessages::SENSOR_PIXEL_NOT_FOUND_IN_PIXELS_LINE = NULL;
        RuggedMessages *RuggedMessages::SENSOR_PIXEL_NOT_FOUND_IN_RANGE_LINES = NULL;
        RuggedMessages *RuggedMessages::TILE_ALREADY_DEFINED = NULL;
        RuggedMessages *RuggedMessages::TILE_WITHOUT_REQUIRED_NEIGHBORS_SELECTED = NULL;
        RuggedMessages *RuggedMessages::UNINITIALIZED_CONTEXT = NULL;
        RuggedMessages *RuggedMessages::UNKNOWN_SENSOR = NULL;
        RuggedMessages *RuggedMessages::UNKNOWN_TILE = NULL;
        RuggedMessages *RuggedMessages::UNSUPPORTED_REFINING_CONTEXT = NULL;

        jclass RuggedMessages::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/errors/RuggedMessages");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getLocalizedString_3cd873bfb132c4fd] = env->getMethodID(cls, "getLocalizedString", "(Ljava/util/Locale;)Ljava/lang/String;");
            mids$[mid_getSourceString_11b109bd155ca898] = env->getMethodID(cls, "getSourceString", "()Ljava/lang/String;");
            mids$[mid_valueOf_a7864dfe63639cf2] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/rugged/errors/RuggedMessages;");
            mids$[mid_values_f9cb3fdbb5e76b2f] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/rugged/errors/RuggedMessages;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            ABERRATION_OF_LIGHT_CORRECTION_REDEFINED = new RuggedMessages(env->getStaticObjectField(cls, "ABERRATION_OF_LIGHT_CORRECTION_REDEFINED", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            ATMOSPHERIC_REFRACTION_REDEFINED = new RuggedMessages(env->getStaticObjectField(cls, "ATMOSPHERIC_REFRACTION_REDEFINED", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            CANNOT_PARSE_LINE = new RuggedMessages(env->getStaticObjectField(cls, "CANNOT_PARSE_LINE", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            DEBUG_DUMP_ACTIVATION_ERROR = new RuggedMessages(env->getStaticObjectField(cls, "DEBUG_DUMP_ACTIVATION_ERROR", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            DEBUG_DUMP_ALREADY_ACTIVE = new RuggedMessages(env->getStaticObjectField(cls, "DEBUG_DUMP_ALREADY_ACTIVE", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            DEBUG_DUMP_NOT_ACTIVE = new RuggedMessages(env->getStaticObjectField(cls, "DEBUG_DUMP_NOT_ACTIVE", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            DEM_ENTRY_POINT_IS_BEHIND_SPACECRAFT = new RuggedMessages(env->getStaticObjectField(cls, "DEM_ENTRY_POINT_IS_BEHIND_SPACECRAFT", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            DUPLICATED_PARAMETER_NAME = new RuggedMessages(env->getStaticObjectField(cls, "DUPLICATED_PARAMETER_NAME", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            EMPTY_TILE = new RuggedMessages(env->getStaticObjectField(cls, "EMPTY_TILE", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            FRAMES_MISMATCH_WITH_INTERPOLATOR_DUMP = new RuggedMessages(env->getStaticObjectField(cls, "FRAMES_MISMATCH_WITH_INTERPOLATOR_DUMP", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            INTERNAL_ERROR = new RuggedMessages(env->getStaticObjectField(cls, "INTERNAL_ERROR", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            INVALID_RANGE_FOR_LINES = new RuggedMessages(env->getStaticObjectField(cls, "INVALID_RANGE_FOR_LINES", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            INVALID_RUGGED_NAME = new RuggedMessages(env->getStaticObjectField(cls, "INVALID_RUGGED_NAME", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            INVALID_STEP = new RuggedMessages(env->getStaticObjectField(cls, "INVALID_STEP", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            LIGHT_TIME_CORRECTION_REDEFINED = new RuggedMessages(env->getStaticObjectField(cls, "LIGHT_TIME_CORRECTION_REDEFINED", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            LINE_OF_SIGHT_DOES_NOT_REACH_GROUND = new RuggedMessages(env->getStaticObjectField(cls, "LINE_OF_SIGHT_DOES_NOT_REACH_GROUND", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            LINE_OF_SIGHT_NEVER_CROSSES_ALTITUDE = new RuggedMessages(env->getStaticObjectField(cls, "LINE_OF_SIGHT_NEVER_CROSSES_ALTITUDE", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            LINE_OF_SIGHT_NEVER_CROSSES_LATITUDE = new RuggedMessages(env->getStaticObjectField(cls, "LINE_OF_SIGHT_NEVER_CROSSES_LATITUDE", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            LINE_OF_SIGHT_NEVER_CROSSES_LONGITUDE = new RuggedMessages(env->getStaticObjectField(cls, "LINE_OF_SIGHT_NEVER_CROSSES_LONGITUDE", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            NOT_INTERPOLATOR_DUMP_DATA = new RuggedMessages(env->getStaticObjectField(cls, "NOT_INTERPOLATOR_DUMP_DATA", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            NO_DEM_DATA = new RuggedMessages(env->getStaticObjectField(cls, "NO_DEM_DATA", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            NO_LAYER_DATA = new RuggedMessages(env->getStaticObjectField(cls, "NO_LAYER_DATA", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            NO_PARAMETERS_SELECTED = new RuggedMessages(env->getStaticObjectField(cls, "NO_PARAMETERS_SELECTED", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            NO_REFERENCE_MAPPINGS = new RuggedMessages(env->getStaticObjectField(cls, "NO_REFERENCE_MAPPINGS", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            OUT_OF_TILE_ANGLES = new RuggedMessages(env->getStaticObjectField(cls, "OUT_OF_TILE_ANGLES", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            OUT_OF_TILE_INDICES = new RuggedMessages(env->getStaticObjectField(cls, "OUT_OF_TILE_INDICES", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            OUT_OF_TIME_RANGE = new RuggedMessages(env->getStaticObjectField(cls, "OUT_OF_TIME_RANGE", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            SENSOR_PIXEL_NOT_FOUND_IN_PIXELS_LINE = new RuggedMessages(env->getStaticObjectField(cls, "SENSOR_PIXEL_NOT_FOUND_IN_PIXELS_LINE", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            SENSOR_PIXEL_NOT_FOUND_IN_RANGE_LINES = new RuggedMessages(env->getStaticObjectField(cls, "SENSOR_PIXEL_NOT_FOUND_IN_RANGE_LINES", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            TILE_ALREADY_DEFINED = new RuggedMessages(env->getStaticObjectField(cls, "TILE_ALREADY_DEFINED", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            TILE_WITHOUT_REQUIRED_NEIGHBORS_SELECTED = new RuggedMessages(env->getStaticObjectField(cls, "TILE_WITHOUT_REQUIRED_NEIGHBORS_SELECTED", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            UNINITIALIZED_CONTEXT = new RuggedMessages(env->getStaticObjectField(cls, "UNINITIALIZED_CONTEXT", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            UNKNOWN_SENSOR = new RuggedMessages(env->getStaticObjectField(cls, "UNKNOWN_SENSOR", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            UNKNOWN_TILE = new RuggedMessages(env->getStaticObjectField(cls, "UNKNOWN_TILE", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            UNSUPPORTED_REFINING_CONTEXT = new RuggedMessages(env->getStaticObjectField(cls, "UNSUPPORTED_REFINING_CONTEXT", "Lorg/orekit/rugged/errors/RuggedMessages;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::java::lang::String RuggedMessages::getLocalizedString(const ::java::util::Locale & a0) const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedString_3cd873bfb132c4fd], a0.this$));
        }

        ::java::lang::String RuggedMessages::getSourceString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSourceString_11b109bd155ca898]));
        }

        RuggedMessages RuggedMessages::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return RuggedMessages(env->callStaticObjectMethod(cls, mids$[mid_valueOf_a7864dfe63639cf2], a0.this$));
        }

        JArray< RuggedMessages > RuggedMessages::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< RuggedMessages >(env->callStaticObjectMethod(cls, mids$[mid_values_f9cb3fdbb5e76b2f]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/orekit/rugged/errors/RuggedMessages$UTF8Control.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace errors {
        static PyObject *t_RuggedMessages_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RuggedMessages_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RuggedMessages_of_(t_RuggedMessages *self, PyObject *args);
        static PyObject *t_RuggedMessages_getLocalizedString(t_RuggedMessages *self, PyObject *arg);
        static PyObject *t_RuggedMessages_getSourceString(t_RuggedMessages *self);
        static PyObject *t_RuggedMessages_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_RuggedMessages_values(PyTypeObject *type);
        static PyObject *t_RuggedMessages_get__sourceString(t_RuggedMessages *self, void *data);
        static PyObject *t_RuggedMessages_get__parameters_(t_RuggedMessages *self, void *data);
        static PyGetSetDef t_RuggedMessages__fields_[] = {
          DECLARE_GET_FIELD(t_RuggedMessages, sourceString),
          DECLARE_GET_FIELD(t_RuggedMessages, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_RuggedMessages__methods_[] = {
          DECLARE_METHOD(t_RuggedMessages, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RuggedMessages, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RuggedMessages, of_, METH_VARARGS),
          DECLARE_METHOD(t_RuggedMessages, getLocalizedString, METH_O),
          DECLARE_METHOD(t_RuggedMessages, getSourceString, METH_NOARGS),
          DECLARE_METHOD(t_RuggedMessages, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_RuggedMessages, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(RuggedMessages)[] = {
          { Py_tp_methods, t_RuggedMessages__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_RuggedMessages__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(RuggedMessages)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(RuggedMessages, t_RuggedMessages, RuggedMessages);
        PyObject *t_RuggedMessages::wrap_Object(const RuggedMessages& object, PyTypeObject *p0)
        {
          PyObject *obj = t_RuggedMessages::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_RuggedMessages *self = (t_RuggedMessages *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_RuggedMessages::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_RuggedMessages::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_RuggedMessages *self = (t_RuggedMessages *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_RuggedMessages::install(PyObject *module)
        {
          installType(&PY_TYPE(RuggedMessages), &PY_TYPE_DEF(RuggedMessages), module, "RuggedMessages", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "UTF8Control", make_descriptor(&PY_TYPE_DEF(RuggedMessages$UTF8Control)));
        }

        void t_RuggedMessages::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "class_", make_descriptor(RuggedMessages::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "wrapfn_", make_descriptor(t_RuggedMessages::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "boxfn_", make_descriptor(boxObject));
          env->getClass(RuggedMessages::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "ABERRATION_OF_LIGHT_CORRECTION_REDEFINED", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::ABERRATION_OF_LIGHT_CORRECTION_REDEFINED)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "ATMOSPHERIC_REFRACTION_REDEFINED", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::ATMOSPHERIC_REFRACTION_REDEFINED)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "CANNOT_PARSE_LINE", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::CANNOT_PARSE_LINE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "DEBUG_DUMP_ACTIVATION_ERROR", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::DEBUG_DUMP_ACTIVATION_ERROR)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "DEBUG_DUMP_ALREADY_ACTIVE", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::DEBUG_DUMP_ALREADY_ACTIVE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "DEBUG_DUMP_NOT_ACTIVE", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::DEBUG_DUMP_NOT_ACTIVE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "DEM_ENTRY_POINT_IS_BEHIND_SPACECRAFT", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::DEM_ENTRY_POINT_IS_BEHIND_SPACECRAFT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "DUPLICATED_PARAMETER_NAME", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::DUPLICATED_PARAMETER_NAME)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "EMPTY_TILE", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::EMPTY_TILE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "FRAMES_MISMATCH_WITH_INTERPOLATOR_DUMP", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::FRAMES_MISMATCH_WITH_INTERPOLATOR_DUMP)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "INTERNAL_ERROR", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::INTERNAL_ERROR)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "INVALID_RANGE_FOR_LINES", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::INVALID_RANGE_FOR_LINES)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "INVALID_RUGGED_NAME", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::INVALID_RUGGED_NAME)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "INVALID_STEP", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::INVALID_STEP)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "LIGHT_TIME_CORRECTION_REDEFINED", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::LIGHT_TIME_CORRECTION_REDEFINED)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "LINE_OF_SIGHT_DOES_NOT_REACH_GROUND", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::LINE_OF_SIGHT_DOES_NOT_REACH_GROUND)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "LINE_OF_SIGHT_NEVER_CROSSES_ALTITUDE", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::LINE_OF_SIGHT_NEVER_CROSSES_ALTITUDE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "LINE_OF_SIGHT_NEVER_CROSSES_LATITUDE", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::LINE_OF_SIGHT_NEVER_CROSSES_LATITUDE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "LINE_OF_SIGHT_NEVER_CROSSES_LONGITUDE", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::LINE_OF_SIGHT_NEVER_CROSSES_LONGITUDE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "NOT_INTERPOLATOR_DUMP_DATA", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::NOT_INTERPOLATOR_DUMP_DATA)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "NO_DEM_DATA", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::NO_DEM_DATA)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "NO_LAYER_DATA", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::NO_LAYER_DATA)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "NO_PARAMETERS_SELECTED", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::NO_PARAMETERS_SELECTED)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "NO_REFERENCE_MAPPINGS", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::NO_REFERENCE_MAPPINGS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "OUT_OF_TILE_ANGLES", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::OUT_OF_TILE_ANGLES)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "OUT_OF_TILE_INDICES", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::OUT_OF_TILE_INDICES)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "OUT_OF_TIME_RANGE", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::OUT_OF_TIME_RANGE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "SENSOR_PIXEL_NOT_FOUND_IN_PIXELS_LINE", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::SENSOR_PIXEL_NOT_FOUND_IN_PIXELS_LINE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "SENSOR_PIXEL_NOT_FOUND_IN_RANGE_LINES", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::SENSOR_PIXEL_NOT_FOUND_IN_RANGE_LINES)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "TILE_ALREADY_DEFINED", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::TILE_ALREADY_DEFINED)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "TILE_WITHOUT_REQUIRED_NEIGHBORS_SELECTED", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::TILE_WITHOUT_REQUIRED_NEIGHBORS_SELECTED)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "UNINITIALIZED_CONTEXT", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::UNINITIALIZED_CONTEXT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "UNKNOWN_SENSOR", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::UNKNOWN_SENSOR)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "UNKNOWN_TILE", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::UNKNOWN_TILE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedMessages), "UNSUPPORTED_REFINING_CONTEXT", make_descriptor(t_RuggedMessages::wrap_Object(*RuggedMessages::UNSUPPORTED_REFINING_CONTEXT)));
        }

        static PyObject *t_RuggedMessages_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, RuggedMessages::initializeClass, 1)))
            return NULL;
          return t_RuggedMessages::wrap_Object(RuggedMessages(((t_RuggedMessages *) arg)->object.this$));
        }
        static PyObject *t_RuggedMessages_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, RuggedMessages::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_RuggedMessages_of_(t_RuggedMessages *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_RuggedMessages_getLocalizedString(t_RuggedMessages *self, PyObject *arg)
        {
          ::java::util::Locale a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArg(arg, "k", ::java::util::Locale::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getLocalizedString(a0));
            return j2p(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getLocalizedString", arg);
          return NULL;
        }

        static PyObject *t_RuggedMessages_getSourceString(t_RuggedMessages *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSourceString());
          return j2p(result);
        }

        static PyObject *t_RuggedMessages_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          RuggedMessages result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::rugged::errors::RuggedMessages::valueOf(a0));
            return t_RuggedMessages::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_RuggedMessages_values(PyTypeObject *type)
        {
          JArray< RuggedMessages > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::rugged::errors::RuggedMessages::values());
          return JArray<jobject>(result.this$).wrap(t_RuggedMessages::wrap_jobject);
        }
        static PyObject *t_RuggedMessages_get__parameters_(t_RuggedMessages *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_RuggedMessages_get__sourceString(t_RuggedMessages *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getSourceString());
          return j2p(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/ArrayFieldVector.h"
#include "org/hipparchus/linear/FieldVectorPreservingVisitor.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/linear/ArrayFieldVector.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/FieldVectorChangingVisitor.h"
#include "org/hipparchus/FieldElement.h"
#include "java/lang/String.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "org/hipparchus/linear/FieldVector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *ArrayFieldVector::class$ = NULL;
      jmethodID *ArrayFieldVector::mids$ = NULL;
      bool ArrayFieldVector::live$ = false;

      jclass ArrayFieldVector::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/ArrayFieldVector");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ae869f331beac5a3] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/FieldElement;)V");
          mids$[mid_init$_484998d88974267b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
          mids$[mid_init$_97a9526ecbe150e3] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/FieldVector;)V");
          mids$[mid_init$_9774c1c57361b391] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/FieldElement;[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_init$_32e90f5b0060f32e] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/FieldElement;Z)V");
          mids$[mid_init$_239d03794876d0bc] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/FieldElement;Lorg/hipparchus/linear/FieldVector;)V");
          mids$[mid_init$_989e9dce085ad65f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_init$_78779ada9af66262] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/ArrayFieldVector;Z)V");
          mids$[mid_init$_aa8209689ea11eed] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/FieldVector;[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_init$_c5199de6167cff95] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;I)V");
          mids$[mid_init$_2c97e4718ab5a1ad] = env->getMethodID(cls, "<init>", "(ILorg/hipparchus/FieldElement;)V");
          mids$[mid_init$_13d04b0385259582] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/FieldVector;Lorg/hipparchus/linear/FieldVector;)V");
          mids$[mid_init$_563be101a3c29b4a] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;[Lorg/hipparchus/FieldElement;[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_init$_963fe94ecffbee5e] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;[Lorg/hipparchus/FieldElement;Z)V");
          mids$[mid_init$_2fccbcd906862e6b] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/FieldElement;II)V");
          mids$[mid_init$_5087400c092c3a0a] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;[Lorg/hipparchus/FieldElement;II)V");
          mids$[mid_add_836a82cbb58dc08f] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/ArrayFieldVector;)Lorg/hipparchus/linear/ArrayFieldVector;");
          mids$[mid_add_a657ce460dba8c79] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_append_836a82cbb58dc08f] = env->getMethodID(cls, "append", "(Lorg/hipparchus/linear/ArrayFieldVector;)Lorg/hipparchus/linear/ArrayFieldVector;");
          mids$[mid_append_ca6f118471875f79] = env->getMethodID(cls, "append", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_append_a657ce460dba8c79] = env->getMethodID(cls, "append", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_copy_34cb9002c167d93d] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_dotProduct_e0492c19b06bbaf0] = env->getMethodID(cls, "dotProduct", "(Lorg/hipparchus/linear/ArrayFieldVector;)Lorg/hipparchus/FieldElement;");
          mids$[mid_dotProduct_5546fa4eea5fe461] = env->getMethodID(cls, "dotProduct", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/FieldElement;");
          mids$[mid_ebeDivide_836a82cbb58dc08f] = env->getMethodID(cls, "ebeDivide", "(Lorg/hipparchus/linear/ArrayFieldVector;)Lorg/hipparchus/linear/ArrayFieldVector;");
          mids$[mid_ebeDivide_a657ce460dba8c79] = env->getMethodID(cls, "ebeDivide", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_ebeMultiply_836a82cbb58dc08f] = env->getMethodID(cls, "ebeMultiply", "(Lorg/hipparchus/linear/ArrayFieldVector;)Lorg/hipparchus/linear/ArrayFieldVector;");
          mids$[mid_ebeMultiply_a657ce460dba8c79] = env->getMethodID(cls, "ebeMultiply", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getDataRef_cbac806c384cdbe1] = env->getMethodID(cls, "getDataRef", "()[Lorg/hipparchus/FieldElement;");
          mids$[mid_getDimension_570ce0828f81a2c1] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_getEntry_ffcdb6600dc6671a] = env->getMethodID(cls, "getEntry", "(I)Lorg/hipparchus/FieldElement;");
          mids$[mid_getField_5b28be2d3632a5dc] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
          mids$[mid_getSubVector_cf350b5e44ab330d] = env->getMethodID(cls, "getSubVector", "(II)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_mapAdd_ca6f118471875f79] = env->getMethodID(cls, "mapAdd", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapAddToSelf_ca6f118471875f79] = env->getMethodID(cls, "mapAddToSelf", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapDivide_ca6f118471875f79] = env->getMethodID(cls, "mapDivide", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapDivideToSelf_ca6f118471875f79] = env->getMethodID(cls, "mapDivideToSelf", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapInv_34cb9002c167d93d] = env->getMethodID(cls, "mapInv", "()Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapInvToSelf_34cb9002c167d93d] = env->getMethodID(cls, "mapInvToSelf", "()Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapMultiply_ca6f118471875f79] = env->getMethodID(cls, "mapMultiply", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapMultiplyToSelf_ca6f118471875f79] = env->getMethodID(cls, "mapMultiplyToSelf", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapSubtract_ca6f118471875f79] = env->getMethodID(cls, "mapSubtract", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapSubtractToSelf_ca6f118471875f79] = env->getMethodID(cls, "mapSubtractToSelf", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_outerProduct_5a53d8eb0de13030] = env->getMethodID(cls, "outerProduct", "(Lorg/hipparchus/linear/ArrayFieldVector;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_outerProduct_02f30c6e86c806f6] = env->getMethodID(cls, "outerProduct", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_projection_836a82cbb58dc08f] = env->getMethodID(cls, "projection", "(Lorg/hipparchus/linear/ArrayFieldVector;)Lorg/hipparchus/linear/ArrayFieldVector;");
          mids$[mid_projection_a657ce460dba8c79] = env->getMethodID(cls, "projection", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_set_f96eb0f00086e90d] = env->getMethodID(cls, "set", "(Lorg/hipparchus/FieldElement;)V");
          mids$[mid_set_030a2d78726a29ac] = env->getMethodID(cls, "set", "(ILorg/hipparchus/linear/ArrayFieldVector;)V");
          mids$[mid_setEntry_2c97e4718ab5a1ad] = env->getMethodID(cls, "setEntry", "(ILorg/hipparchus/FieldElement;)V");
          mids$[mid_setSubVector_0c5a38a1f7c3f4d4] = env->getMethodID(cls, "setSubVector", "(ILorg/hipparchus/linear/FieldVector;)V");
          mids$[mid_subtract_836a82cbb58dc08f] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/ArrayFieldVector;)Lorg/hipparchus/linear/ArrayFieldVector;");
          mids$[mid_subtract_a657ce460dba8c79] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_toArray_cbac806c384cdbe1] = env->getMethodID(cls, "toArray", "()[Lorg/hipparchus/FieldElement;");
          mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_walkInDefaultOrder_fb947c4465b9a4d6] = env->getMethodID(cls, "walkInDefaultOrder", "(Lorg/hipparchus/linear/FieldVectorChangingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInDefaultOrder_ec6a5e8719a36b21] = env->getMethodID(cls, "walkInDefaultOrder", "(Lorg/hipparchus/linear/FieldVectorPreservingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInDefaultOrder_c01d5834289e5b85] = env->getMethodID(cls, "walkInDefaultOrder", "(Lorg/hipparchus/linear/FieldVectorChangingVisitor;II)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInDefaultOrder_411a1a5e2be54cff] = env->getMethodID(cls, "walkInDefaultOrder", "(Lorg/hipparchus/linear/FieldVectorPreservingVisitor;II)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_fb947c4465b9a4d6] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldVectorChangingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_ec6a5e8719a36b21] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldVectorPreservingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_c01d5834289e5b85] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldVectorChangingVisitor;II)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_411a1a5e2be54cff] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldVectorPreservingVisitor;II)Lorg/hipparchus/FieldElement;");
          mids$[mid_checkVectorDimensions_99803b0791f320ff] = env->getMethodID(cls, "checkVectorDimensions", "(I)V");
          mids$[mid_checkVectorDimensions_97a9526ecbe150e3] = env->getMethodID(cls, "checkVectorDimensions", "(Lorg/hipparchus/linear/FieldVector;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ArrayFieldVector::ArrayFieldVector(const JArray< ::org::hipparchus::FieldElement > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ae869f331beac5a3, a0.this$)) {}

      ArrayFieldVector::ArrayFieldVector(const ::org::hipparchus::Field & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_484998d88974267b, a0.this$)) {}

      ArrayFieldVector::ArrayFieldVector(const ::org::hipparchus::linear::FieldVector & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_97a9526ecbe150e3, a0.this$)) {}

      ArrayFieldVector::ArrayFieldVector(const JArray< ::org::hipparchus::FieldElement > & a0, const JArray< ::org::hipparchus::FieldElement > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9774c1c57361b391, a0.this$, a1.this$)) {}

      ArrayFieldVector::ArrayFieldVector(const JArray< ::org::hipparchus::FieldElement > & a0, jboolean a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_32e90f5b0060f32e, a0.this$, a1)) {}

      ArrayFieldVector::ArrayFieldVector(const JArray< ::org::hipparchus::FieldElement > & a0, const ::org::hipparchus::linear::FieldVector & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_239d03794876d0bc, a0.this$, a1.this$)) {}

      ArrayFieldVector::ArrayFieldVector(const ::org::hipparchus::Field & a0, const JArray< ::org::hipparchus::FieldElement > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_989e9dce085ad65f, a0.this$, a1.this$)) {}

      ArrayFieldVector::ArrayFieldVector(const ArrayFieldVector & a0, jboolean a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_78779ada9af66262, a0.this$, a1)) {}

      ArrayFieldVector::ArrayFieldVector(const ::org::hipparchus::linear::FieldVector & a0, const JArray< ::org::hipparchus::FieldElement > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_aa8209689ea11eed, a0.this$, a1.this$)) {}

      ArrayFieldVector::ArrayFieldVector(const ::org::hipparchus::Field & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c5199de6167cff95, a0.this$, a1)) {}

      ArrayFieldVector::ArrayFieldVector(jint a0, const ::org::hipparchus::FieldElement & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2c97e4718ab5a1ad, a0, a1.this$)) {}

      ArrayFieldVector::ArrayFieldVector(const ::org::hipparchus::linear::FieldVector & a0, const ::org::hipparchus::linear::FieldVector & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_13d04b0385259582, a0.this$, a1.this$)) {}

      ArrayFieldVector::ArrayFieldVector(const ::org::hipparchus::Field & a0, const JArray< ::org::hipparchus::FieldElement > & a1, const JArray< ::org::hipparchus::FieldElement > & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_563be101a3c29b4a, a0.this$, a1.this$, a2.this$)) {}

      ArrayFieldVector::ArrayFieldVector(const ::org::hipparchus::Field & a0, const JArray< ::org::hipparchus::FieldElement > & a1, jboolean a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_963fe94ecffbee5e, a0.this$, a1.this$, a2)) {}

      ArrayFieldVector::ArrayFieldVector(const JArray< ::org::hipparchus::FieldElement > & a0, jint a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2fccbcd906862e6b, a0.this$, a1, a2)) {}

      ArrayFieldVector::ArrayFieldVector(const ::org::hipparchus::Field & a0, const JArray< ::org::hipparchus::FieldElement > & a1, jint a2, jint a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5087400c092c3a0a, a0.this$, a1.this$, a2, a3)) {}

      ArrayFieldVector ArrayFieldVector::add(const ArrayFieldVector & a0) const
      {
        return ArrayFieldVector(env->callObjectMethod(this$, mids$[mid_add_836a82cbb58dc08f], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::add(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_add_a657ce460dba8c79], a0.this$));
      }

      ArrayFieldVector ArrayFieldVector::append(const ArrayFieldVector & a0) const
      {
        return ArrayFieldVector(env->callObjectMethod(this$, mids$[mid_append_836a82cbb58dc08f], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::append(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_append_ca6f118471875f79], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::append(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_append_a657ce460dba8c79], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::copy() const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_copy_34cb9002c167d93d]));
      }

      ::org::hipparchus::FieldElement ArrayFieldVector::dotProduct(const ArrayFieldVector & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_dotProduct_e0492c19b06bbaf0], a0.this$));
      }

      ::org::hipparchus::FieldElement ArrayFieldVector::dotProduct(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_dotProduct_5546fa4eea5fe461], a0.this$));
      }

      ArrayFieldVector ArrayFieldVector::ebeDivide(const ArrayFieldVector & a0) const
      {
        return ArrayFieldVector(env->callObjectMethod(this$, mids$[mid_ebeDivide_836a82cbb58dc08f], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::ebeDivide(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_ebeDivide_a657ce460dba8c79], a0.this$));
      }

      ArrayFieldVector ArrayFieldVector::ebeMultiply(const ArrayFieldVector & a0) const
      {
        return ArrayFieldVector(env->callObjectMethod(this$, mids$[mid_ebeMultiply_836a82cbb58dc08f], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::ebeMultiply(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_ebeMultiply_a657ce460dba8c79], a0.this$));
      }

      jboolean ArrayFieldVector::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
      }

      JArray< ::org::hipparchus::FieldElement > ArrayFieldVector::getDataRef() const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_getDataRef_cbac806c384cdbe1]));
      }

      jint ArrayFieldVector::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_570ce0828f81a2c1]);
      }

      ::org::hipparchus::FieldElement ArrayFieldVector::getEntry(jint a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_getEntry_ffcdb6600dc6671a], a0));
      }

      ::org::hipparchus::Field ArrayFieldVector::getField() const
      {
        return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_5b28be2d3632a5dc]));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::getSubVector(jint a0, jint a1) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_getSubVector_cf350b5e44ab330d], a0, a1));
      }

      jint ArrayFieldVector::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::mapAdd(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapAdd_ca6f118471875f79], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::mapAddToSelf(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapAddToSelf_ca6f118471875f79], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::mapDivide(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapDivide_ca6f118471875f79], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::mapDivideToSelf(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapDivideToSelf_ca6f118471875f79], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::mapInv() const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapInv_34cb9002c167d93d]));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::mapInvToSelf() const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapInvToSelf_34cb9002c167d93d]));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::mapMultiply(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapMultiply_ca6f118471875f79], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::mapMultiplyToSelf(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapMultiplyToSelf_ca6f118471875f79], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::mapSubtract(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapSubtract_ca6f118471875f79], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::mapSubtractToSelf(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapSubtractToSelf_ca6f118471875f79], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix ArrayFieldVector::outerProduct(const ArrayFieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_outerProduct_5a53d8eb0de13030], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix ArrayFieldVector::outerProduct(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_outerProduct_02f30c6e86c806f6], a0.this$));
      }

      ArrayFieldVector ArrayFieldVector::projection(const ArrayFieldVector & a0) const
      {
        return ArrayFieldVector(env->callObjectMethod(this$, mids$[mid_projection_836a82cbb58dc08f], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::projection(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_projection_a657ce460dba8c79], a0.this$));
      }

      void ArrayFieldVector::set(const ::org::hipparchus::FieldElement & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_set_f96eb0f00086e90d], a0.this$);
      }

      void ArrayFieldVector::set(jint a0, const ArrayFieldVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_set_030a2d78726a29ac], a0, a1.this$);
      }

      void ArrayFieldVector::setEntry(jint a0, const ::org::hipparchus::FieldElement & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_2c97e4718ab5a1ad], a0, a1.this$);
      }

      void ArrayFieldVector::setSubVector(jint a0, const ::org::hipparchus::linear::FieldVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setSubVector_0c5a38a1f7c3f4d4], a0, a1.this$);
      }

      ArrayFieldVector ArrayFieldVector::subtract(const ArrayFieldVector & a0) const
      {
        return ArrayFieldVector(env->callObjectMethod(this$, mids$[mid_subtract_836a82cbb58dc08f], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::subtract(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_subtract_a657ce460dba8c79], a0.this$));
      }

      JArray< ::org::hipparchus::FieldElement > ArrayFieldVector::toArray() const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_toArray_cbac806c384cdbe1]));
      }

      ::java::lang::String ArrayFieldVector::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
      }

      ::org::hipparchus::FieldElement ArrayFieldVector::walkInDefaultOrder(const ::org::hipparchus::linear::FieldVectorChangingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInDefaultOrder_fb947c4465b9a4d6], a0.this$));
      }

      ::org::hipparchus::FieldElement ArrayFieldVector::walkInDefaultOrder(const ::org::hipparchus::linear::FieldVectorPreservingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInDefaultOrder_ec6a5e8719a36b21], a0.this$));
      }

      ::org::hipparchus::FieldElement ArrayFieldVector::walkInDefaultOrder(const ::org::hipparchus::linear::FieldVectorChangingVisitor & a0, jint a1, jint a2) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInDefaultOrder_c01d5834289e5b85], a0.this$, a1, a2));
      }

      ::org::hipparchus::FieldElement ArrayFieldVector::walkInDefaultOrder(const ::org::hipparchus::linear::FieldVectorPreservingVisitor & a0, jint a1, jint a2) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInDefaultOrder_411a1a5e2be54cff], a0.this$, a1, a2));
      }

      ::org::hipparchus::FieldElement ArrayFieldVector::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldVectorChangingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_fb947c4465b9a4d6], a0.this$));
      }

      ::org::hipparchus::FieldElement ArrayFieldVector::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldVectorPreservingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_ec6a5e8719a36b21], a0.this$));
      }

      ::org::hipparchus::FieldElement ArrayFieldVector::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldVectorChangingVisitor & a0, jint a1, jint a2) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_c01d5834289e5b85], a0.this$, a1, a2));
      }

      ::org::hipparchus::FieldElement ArrayFieldVector::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldVectorPreservingVisitor & a0, jint a1, jint a2) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_411a1a5e2be54cff], a0.this$, a1, a2));
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
      static PyObject *t_ArrayFieldVector_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ArrayFieldVector_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ArrayFieldVector_of_(t_ArrayFieldVector *self, PyObject *args);
      static int t_ArrayFieldVector_init_(t_ArrayFieldVector *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ArrayFieldVector_add(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_append(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_copy(t_ArrayFieldVector *self);
      static PyObject *t_ArrayFieldVector_dotProduct(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_ebeDivide(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_ebeMultiply(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_equals(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_getDataRef(t_ArrayFieldVector *self);
      static PyObject *t_ArrayFieldVector_getDimension(t_ArrayFieldVector *self);
      static PyObject *t_ArrayFieldVector_getEntry(t_ArrayFieldVector *self, PyObject *arg);
      static PyObject *t_ArrayFieldVector_getField(t_ArrayFieldVector *self);
      static PyObject *t_ArrayFieldVector_getSubVector(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_hashCode(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_mapAdd(t_ArrayFieldVector *self, PyObject *arg);
      static PyObject *t_ArrayFieldVector_mapAddToSelf(t_ArrayFieldVector *self, PyObject *arg);
      static PyObject *t_ArrayFieldVector_mapDivide(t_ArrayFieldVector *self, PyObject *arg);
      static PyObject *t_ArrayFieldVector_mapDivideToSelf(t_ArrayFieldVector *self, PyObject *arg);
      static PyObject *t_ArrayFieldVector_mapInv(t_ArrayFieldVector *self);
      static PyObject *t_ArrayFieldVector_mapInvToSelf(t_ArrayFieldVector *self);
      static PyObject *t_ArrayFieldVector_mapMultiply(t_ArrayFieldVector *self, PyObject *arg);
      static PyObject *t_ArrayFieldVector_mapMultiplyToSelf(t_ArrayFieldVector *self, PyObject *arg);
      static PyObject *t_ArrayFieldVector_mapSubtract(t_ArrayFieldVector *self, PyObject *arg);
      static PyObject *t_ArrayFieldVector_mapSubtractToSelf(t_ArrayFieldVector *self, PyObject *arg);
      static PyObject *t_ArrayFieldVector_outerProduct(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_projection(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_set(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_setEntry(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_setSubVector(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_subtract(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_toArray(t_ArrayFieldVector *self);
      static PyObject *t_ArrayFieldVector_toString(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_walkInDefaultOrder(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_walkInOptimizedOrder(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_get__dataRef(t_ArrayFieldVector *self, void *data);
      static PyObject *t_ArrayFieldVector_get__dimension(t_ArrayFieldVector *self, void *data);
      static PyObject *t_ArrayFieldVector_get__field(t_ArrayFieldVector *self, void *data);
      static PyObject *t_ArrayFieldVector_get__parameters_(t_ArrayFieldVector *self, void *data);
      static PyGetSetDef t_ArrayFieldVector__fields_[] = {
        DECLARE_GET_FIELD(t_ArrayFieldVector, dataRef),
        DECLARE_GET_FIELD(t_ArrayFieldVector, dimension),
        DECLARE_GET_FIELD(t_ArrayFieldVector, field),
        DECLARE_GET_FIELD(t_ArrayFieldVector, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ArrayFieldVector__methods_[] = {
        DECLARE_METHOD(t_ArrayFieldVector, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ArrayFieldVector, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ArrayFieldVector, of_, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, add, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, append, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, copy, METH_NOARGS),
        DECLARE_METHOD(t_ArrayFieldVector, dotProduct, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, ebeDivide, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, ebeMultiply, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, equals, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, getDataRef, METH_NOARGS),
        DECLARE_METHOD(t_ArrayFieldVector, getDimension, METH_NOARGS),
        DECLARE_METHOD(t_ArrayFieldVector, getEntry, METH_O),
        DECLARE_METHOD(t_ArrayFieldVector, getField, METH_NOARGS),
        DECLARE_METHOD(t_ArrayFieldVector, getSubVector, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, mapAdd, METH_O),
        DECLARE_METHOD(t_ArrayFieldVector, mapAddToSelf, METH_O),
        DECLARE_METHOD(t_ArrayFieldVector, mapDivide, METH_O),
        DECLARE_METHOD(t_ArrayFieldVector, mapDivideToSelf, METH_O),
        DECLARE_METHOD(t_ArrayFieldVector, mapInv, METH_NOARGS),
        DECLARE_METHOD(t_ArrayFieldVector, mapInvToSelf, METH_NOARGS),
        DECLARE_METHOD(t_ArrayFieldVector, mapMultiply, METH_O),
        DECLARE_METHOD(t_ArrayFieldVector, mapMultiplyToSelf, METH_O),
        DECLARE_METHOD(t_ArrayFieldVector, mapSubtract, METH_O),
        DECLARE_METHOD(t_ArrayFieldVector, mapSubtractToSelf, METH_O),
        DECLARE_METHOD(t_ArrayFieldVector, outerProduct, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, projection, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, set, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, setEntry, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, setSubVector, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, subtract, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, toArray, METH_NOARGS),
        DECLARE_METHOD(t_ArrayFieldVector, toString, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, walkInDefaultOrder, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, walkInOptimizedOrder, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ArrayFieldVector)[] = {
        { Py_tp_methods, t_ArrayFieldVector__methods_ },
        { Py_tp_init, (void *) t_ArrayFieldVector_init_ },
        { Py_tp_getset, t_ArrayFieldVector__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ArrayFieldVector)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ArrayFieldVector, t_ArrayFieldVector, ArrayFieldVector);
      PyObject *t_ArrayFieldVector::wrap_Object(const ArrayFieldVector& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ArrayFieldVector::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ArrayFieldVector *self = (t_ArrayFieldVector *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_ArrayFieldVector::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ArrayFieldVector::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ArrayFieldVector *self = (t_ArrayFieldVector *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_ArrayFieldVector::install(PyObject *module)
      {
        installType(&PY_TYPE(ArrayFieldVector), &PY_TYPE_DEF(ArrayFieldVector), module, "ArrayFieldVector", 0);
      }

      void t_ArrayFieldVector::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ArrayFieldVector), "class_", make_descriptor(ArrayFieldVector::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ArrayFieldVector), "wrapfn_", make_descriptor(t_ArrayFieldVector::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ArrayFieldVector), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ArrayFieldVector_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ArrayFieldVector::initializeClass, 1)))
          return NULL;
        return t_ArrayFieldVector::wrap_Object(ArrayFieldVector(((t_ArrayFieldVector *) arg)->object.this$));
      }
      static PyObject *t_ArrayFieldVector_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ArrayFieldVector::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ArrayFieldVector_of_(t_ArrayFieldVector *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_ArrayFieldVector_init_(t_ArrayFieldVector *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
            PyTypeObject **p0;
            ArrayFieldVector object((jobject) NULL);

            if (!parseArgs(args, "[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
            {
              INT_CALL(object = ArrayFieldVector(a0));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ArrayFieldVector object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              INT_CALL(object = ArrayFieldVector(a0));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ArrayFieldVector object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              INT_CALL(object = ArrayFieldVector(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::FieldElement > a1((jobject) NULL);
            PyTypeObject **p1;
            ArrayFieldVector object((jobject) NULL);

            if (!parseArgs(args, "[K[K", ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
            {
              INT_CALL(object = ArrayFieldVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean a1;
            ArrayFieldVector object((jobject) NULL);

            if (!parseArgs(args, "[KZ", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_, &a1))
            {
              INT_CALL(object = ArrayFieldVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector a1((jobject) NULL);
            PyTypeObject **p1;
            ArrayFieldVector object((jobject) NULL);

            if (!parseArgs(args, "[KK", ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_, &a1, &p1, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              INT_CALL(object = ArrayFieldVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::FieldElement > a1((jobject) NULL);
            PyTypeObject **p1;
            ArrayFieldVector object((jobject) NULL);

            if (!parseArgs(args, "K[K", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
            {
              INT_CALL(object = ArrayFieldVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ArrayFieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean a1;
            ArrayFieldVector object((jobject) NULL);

            if (!parseArgs(args, "KZ", ArrayFieldVector::initializeClass, &a0, &p0, t_ArrayFieldVector::parameters_, &a1))
            {
              INT_CALL(object = ArrayFieldVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::FieldElement > a1((jobject) NULL);
            PyTypeObject **p1;
            ArrayFieldVector object((jobject) NULL);

            if (!parseArgs(args, "K[K", ::org::hipparchus::linear::FieldVector::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
            {
              INT_CALL(object = ArrayFieldVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ArrayFieldVector object((jobject) NULL);

            if (!parseArgs(args, "KI", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = ArrayFieldVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            ::org::hipparchus::FieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ArrayFieldVector object((jobject) NULL);

            if (!parseArgs(args, "IK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
            {
              INT_CALL(object = ArrayFieldVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector a1((jobject) NULL);
            PyTypeObject **p1;
            ArrayFieldVector object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::linear::FieldVector::initializeClass, ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_, &a1, &p1, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              INT_CALL(object = ArrayFieldVector(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::FieldElement > a1((jobject) NULL);
            PyTypeObject **p1;
            JArray< ::org::hipparchus::FieldElement > a2((jobject) NULL);
            PyTypeObject **p2;
            ArrayFieldVector object((jobject) NULL);

            if (!parseArgs(args, "K[K[K", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
            {
              INT_CALL(object = ArrayFieldVector(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::FieldElement > a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;
            ArrayFieldVector object((jobject) NULL);

            if (!parseArgs(args, "K[KZ", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_, &a2))
            {
              INT_CALL(object = ArrayFieldVector(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            ArrayFieldVector object((jobject) NULL);

            if (!parseArgs(args, "[KII", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_, &a1, &a2))
            {
              INT_CALL(object = ArrayFieldVector(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::FieldElement > a1((jobject) NULL);
            PyTypeObject **p1;
            jint a2;
            jint a3;
            ArrayFieldVector object((jobject) NULL);

            if (!parseArgs(args, "K[KII", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_, &a2, &a3))
            {
              INT_CALL(object = ArrayFieldVector(a0, a1, a2, a3));
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

      static PyObject *t_ArrayFieldVector_add(t_ArrayFieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ArrayFieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ArrayFieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ArrayFieldVector::initializeClass, &a0, &p0, t_ArrayFieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_ArrayFieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.add(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "add", args);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_append(t_ArrayFieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ArrayFieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ArrayFieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ArrayFieldVector::initializeClass, &a0, &p0, t_ArrayFieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.append(a0));
              return t_ArrayFieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::FieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.append(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.append(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "append", args);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_copy(t_ArrayFieldVector *self)
      {
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);
        OBJ_CALL(result = self->object.copy());
        return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_ArrayFieldVector_dotProduct(t_ArrayFieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ArrayFieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ArrayFieldVector::initializeClass, &a0, &p0, t_ArrayFieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.dotProduct(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.dotProduct(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "dotProduct", args);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_ebeDivide(t_ArrayFieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ArrayFieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ArrayFieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ArrayFieldVector::initializeClass, &a0, &p0, t_ArrayFieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.ebeDivide(a0));
              return t_ArrayFieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.ebeDivide(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "ebeDivide", args);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_ebeMultiply(t_ArrayFieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ArrayFieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ArrayFieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ArrayFieldVector::initializeClass, &a0, &p0, t_ArrayFieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.ebeMultiply(a0));
              return t_ArrayFieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.ebeMultiply(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "ebeMultiply", args);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_equals(t_ArrayFieldVector *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(ArrayFieldVector), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_ArrayFieldVector_getDataRef(t_ArrayFieldVector *self)
      {
        JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);
        OBJ_CALL(result = self->object.getDataRef());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
      }

      static PyObject *t_ArrayFieldVector_getDimension(t_ArrayFieldVector *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ArrayFieldVector_getEntry(t_ArrayFieldVector *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::FieldElement result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getEntry(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getEntry", arg);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_getField(t_ArrayFieldVector *self)
      {
        ::org::hipparchus::Field result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_ArrayFieldVector_getSubVector(t_ArrayFieldVector *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getSubVector(a0, a1));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getSubVector", args);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_hashCode(t_ArrayFieldVector *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(ArrayFieldVector), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_ArrayFieldVector_mapAdd(t_ArrayFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapAdd(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapAdd", arg);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_mapAddToSelf(t_ArrayFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapAddToSelf(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapAddToSelf", arg);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_mapDivide(t_ArrayFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapDivide(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapDivide", arg);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_mapDivideToSelf(t_ArrayFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapDivideToSelf(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapDivideToSelf", arg);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_mapInv(t_ArrayFieldVector *self)
      {
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);
        OBJ_CALL(result = self->object.mapInv());
        return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_ArrayFieldVector_mapInvToSelf(t_ArrayFieldVector *self)
      {
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);
        OBJ_CALL(result = self->object.mapInvToSelf());
        return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_ArrayFieldVector_mapMultiply(t_ArrayFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapMultiply(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapMultiply", arg);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_mapMultiplyToSelf(t_ArrayFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapMultiplyToSelf(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapMultiplyToSelf", arg);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_mapSubtract(t_ArrayFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapSubtract(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapSubtract", arg);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_mapSubtractToSelf(t_ArrayFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapSubtractToSelf(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapSubtractToSelf", arg);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_outerProduct(t_ArrayFieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ArrayFieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", ArrayFieldVector::initializeClass, &a0, &p0, t_ArrayFieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.outerProduct(a0));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.outerProduct(a0));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "outerProduct", args);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_projection(t_ArrayFieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ArrayFieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ArrayFieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ArrayFieldVector::initializeClass, &a0, &p0, t_ArrayFieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.projection(a0));
              return t_ArrayFieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.projection(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "projection", args);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_set(t_ArrayFieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::FieldElement a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArgs(args, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
            {
              OBJ_CALL(self->object.set(a0));
              Py_RETURN_NONE;
            }
          }
          break;
         case 2:
          {
            jint a0;
            ArrayFieldVector a1((jobject) NULL);
            PyTypeObject **p1;

            if (!parseArgs(args, "IK", ArrayFieldVector::initializeClass, &a0, &a1, &p1, t_ArrayFieldVector::parameters_))
            {
              OBJ_CALL(self->object.set(a0, a1));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "set", args);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_setEntry(t_ArrayFieldVector *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::FieldElement a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "IK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.setEntry(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setEntry", args);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_setSubVector(t_ArrayFieldVector *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::FieldVector a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "IK", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &a1, &p1, ::org::hipparchus::linear::t_FieldVector::parameters_))
        {
          OBJ_CALL(self->object.setSubVector(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setSubVector", args);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_subtract(t_ArrayFieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ArrayFieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ArrayFieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ArrayFieldVector::initializeClass, &a0, &p0, t_ArrayFieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_ArrayFieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", args);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_toArray(t_ArrayFieldVector *self)
      {
        JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);
        OBJ_CALL(result = self->object.toArray());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
      }

      static PyObject *t_ArrayFieldVector_toString(t_ArrayFieldVector *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(ArrayFieldVector), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_ArrayFieldVector_walkInDefaultOrder(t_ArrayFieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::FieldVectorChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVectorChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVectorChangingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInDefaultOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldVectorPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVectorPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVectorPreservingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInDefaultOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::linear::FieldVectorChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KII", ::org::hipparchus::linear::FieldVectorChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVectorChangingVisitor::parameters_, &a1, &a2))
            {
              OBJ_CALL(result = self->object.walkInDefaultOrder(a0, a1, a2));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldVectorPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KII", ::org::hipparchus::linear::FieldVectorPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVectorPreservingVisitor::parameters_, &a1, &a2))
            {
              OBJ_CALL(result = self->object.walkInDefaultOrder(a0, a1, a2));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "walkInDefaultOrder", args);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_walkInOptimizedOrder(t_ArrayFieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::FieldVectorChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVectorChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVectorChangingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldVectorPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVectorPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVectorPreservingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::linear::FieldVectorChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KII", ::org::hipparchus::linear::FieldVectorChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVectorChangingVisitor::parameters_, &a1, &a2))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0, a1, a2));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldVectorPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KII", ::org::hipparchus::linear::FieldVectorPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVectorPreservingVisitor::parameters_, &a1, &a2))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0, a1, a2));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "walkInOptimizedOrder", args);
        return NULL;
      }
      static PyObject *t_ArrayFieldVector_get__parameters_(t_ArrayFieldVector *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_ArrayFieldVector_get__dataRef(t_ArrayFieldVector *self, void *data)
      {
        JArray< ::org::hipparchus::FieldElement > value((jobject) NULL);
        OBJ_CALL(value = self->object.getDataRef());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
      }

      static PyObject *t_ArrayFieldVector_get__dimension(t_ArrayFieldVector *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_ArrayFieldVector_get__field(t_ArrayFieldVector *self, void *data)
      {
        ::org::hipparchus::Field value((jobject) NULL);
        OBJ_CALL(value = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/partitioning/BSPTree$VanishingCutHandler.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/partitioning/BSPTree.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *BSPTree$VanishingCutHandler::class$ = NULL;
        jmethodID *BSPTree$VanishingCutHandler::mids$ = NULL;
        bool BSPTree$VanishingCutHandler::live$ = false;

        jclass BSPTree$VanishingCutHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/BSPTree$VanishingCutHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_fixNode_fcfc0129c0a7b557] = env->getMethodID(cls, "fixNode", "(Lorg/hipparchus/geometry/partitioning/BSPTree;)Lorg/hipparchus/geometry/partitioning/BSPTree;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::geometry::partitioning::BSPTree BSPTree$VanishingCutHandler::fixNode(const ::org::hipparchus::geometry::partitioning::BSPTree & a0) const
        {
          return ::org::hipparchus::geometry::partitioning::BSPTree(env->callObjectMethod(this$, mids$[mid_fixNode_fcfc0129c0a7b557], a0.this$));
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
      namespace partitioning {
        static PyObject *t_BSPTree$VanishingCutHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BSPTree$VanishingCutHandler_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BSPTree$VanishingCutHandler_of_(t_BSPTree$VanishingCutHandler *self, PyObject *args);
        static PyObject *t_BSPTree$VanishingCutHandler_fixNode(t_BSPTree$VanishingCutHandler *self, PyObject *arg);
        static PyObject *t_BSPTree$VanishingCutHandler_get__parameters_(t_BSPTree$VanishingCutHandler *self, void *data);
        static PyGetSetDef t_BSPTree$VanishingCutHandler__fields_[] = {
          DECLARE_GET_FIELD(t_BSPTree$VanishingCutHandler, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BSPTree$VanishingCutHandler__methods_[] = {
          DECLARE_METHOD(t_BSPTree$VanishingCutHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BSPTree$VanishingCutHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BSPTree$VanishingCutHandler, of_, METH_VARARGS),
          DECLARE_METHOD(t_BSPTree$VanishingCutHandler, fixNode, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BSPTree$VanishingCutHandler)[] = {
          { Py_tp_methods, t_BSPTree$VanishingCutHandler__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_BSPTree$VanishingCutHandler__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BSPTree$VanishingCutHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BSPTree$VanishingCutHandler, t_BSPTree$VanishingCutHandler, BSPTree$VanishingCutHandler);
        PyObject *t_BSPTree$VanishingCutHandler::wrap_Object(const BSPTree$VanishingCutHandler& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BSPTree$VanishingCutHandler::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BSPTree$VanishingCutHandler *self = (t_BSPTree$VanishingCutHandler *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BSPTree$VanishingCutHandler::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BSPTree$VanishingCutHandler::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BSPTree$VanishingCutHandler *self = (t_BSPTree$VanishingCutHandler *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BSPTree$VanishingCutHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(BSPTree$VanishingCutHandler), &PY_TYPE_DEF(BSPTree$VanishingCutHandler), module, "BSPTree$VanishingCutHandler", 0);
        }

        void t_BSPTree$VanishingCutHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTree$VanishingCutHandler), "class_", make_descriptor(BSPTree$VanishingCutHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTree$VanishingCutHandler), "wrapfn_", make_descriptor(t_BSPTree$VanishingCutHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTree$VanishingCutHandler), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BSPTree$VanishingCutHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BSPTree$VanishingCutHandler::initializeClass, 1)))
            return NULL;
          return t_BSPTree$VanishingCutHandler::wrap_Object(BSPTree$VanishingCutHandler(((t_BSPTree$VanishingCutHandler *) arg)->object.this$));
        }
        static PyObject *t_BSPTree$VanishingCutHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BSPTree$VanishingCutHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BSPTree$VanishingCutHandler_of_(t_BSPTree$VanishingCutHandler *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_BSPTree$VanishingCutHandler_fixNode(t_BSPTree$VanishingCutHandler *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::partitioning::BSPTree result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_))
          {
            OBJ_CALL(result = self->object.fixNode(a0));
            return ::org::hipparchus::geometry::partitioning::t_BSPTree::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "fixNode", arg);
          return NULL;
        }
        static PyObject *t_BSPTree$VanishingCutHandler_get__parameters_(t_BSPTree$VanishingCutHandler *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/PythonFieldTimeStamped.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *PythonFieldTimeStamped::class$ = NULL;
      jmethodID *PythonFieldTimeStamped::mids$ = NULL;
      bool PythonFieldTimeStamped::live$ = false;

      jclass PythonFieldTimeStamped::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/PythonFieldTimeStamped");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getDate_51da00d5b8a3b5df] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonFieldTimeStamped::PythonFieldTimeStamped() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      void PythonFieldTimeStamped::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
      }

      jlong PythonFieldTimeStamped::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
      }

      void PythonFieldTimeStamped::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
      static PyObject *t_PythonFieldTimeStamped_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldTimeStamped_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldTimeStamped_of_(t_PythonFieldTimeStamped *self, PyObject *args);
      static int t_PythonFieldTimeStamped_init_(t_PythonFieldTimeStamped *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonFieldTimeStamped_finalize(t_PythonFieldTimeStamped *self);
      static PyObject *t_PythonFieldTimeStamped_pythonExtension(t_PythonFieldTimeStamped *self, PyObject *args);
      static jobject JNICALL t_PythonFieldTimeStamped_getDate0(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonFieldTimeStamped_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonFieldTimeStamped_get__self(t_PythonFieldTimeStamped *self, void *data);
      static PyObject *t_PythonFieldTimeStamped_get__parameters_(t_PythonFieldTimeStamped *self, void *data);
      static PyGetSetDef t_PythonFieldTimeStamped__fields_[] = {
        DECLARE_GET_FIELD(t_PythonFieldTimeStamped, self),
        DECLARE_GET_FIELD(t_PythonFieldTimeStamped, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonFieldTimeStamped__methods_[] = {
        DECLARE_METHOD(t_PythonFieldTimeStamped, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldTimeStamped, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldTimeStamped, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonFieldTimeStamped, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonFieldTimeStamped, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonFieldTimeStamped)[] = {
        { Py_tp_methods, t_PythonFieldTimeStamped__methods_ },
        { Py_tp_init, (void *) t_PythonFieldTimeStamped_init_ },
        { Py_tp_getset, t_PythonFieldTimeStamped__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonFieldTimeStamped)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonFieldTimeStamped, t_PythonFieldTimeStamped, PythonFieldTimeStamped);
      PyObject *t_PythonFieldTimeStamped::wrap_Object(const PythonFieldTimeStamped& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonFieldTimeStamped::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldTimeStamped *self = (t_PythonFieldTimeStamped *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PythonFieldTimeStamped::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonFieldTimeStamped::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldTimeStamped *self = (t_PythonFieldTimeStamped *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PythonFieldTimeStamped::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonFieldTimeStamped), &PY_TYPE_DEF(PythonFieldTimeStamped), module, "PythonFieldTimeStamped", 1);
      }

      void t_PythonFieldTimeStamped::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldTimeStamped), "class_", make_descriptor(PythonFieldTimeStamped::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldTimeStamped), "wrapfn_", make_descriptor(t_PythonFieldTimeStamped::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldTimeStamped), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonFieldTimeStamped::initializeClass);
        JNINativeMethod methods[] = {
          { "getDate", "()Lorg/orekit/time/FieldAbsoluteDate;", (void *) t_PythonFieldTimeStamped_getDate0 },
          { "pythonDecRef", "()V", (void *) t_PythonFieldTimeStamped_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonFieldTimeStamped_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonFieldTimeStamped::initializeClass, 1)))
          return NULL;
        return t_PythonFieldTimeStamped::wrap_Object(PythonFieldTimeStamped(((t_PythonFieldTimeStamped *) arg)->object.this$));
      }
      static PyObject *t_PythonFieldTimeStamped_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonFieldTimeStamped::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonFieldTimeStamped_of_(t_PythonFieldTimeStamped *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonFieldTimeStamped_init_(t_PythonFieldTimeStamped *self, PyObject *args, PyObject *kwds)
      {
        PythonFieldTimeStamped object((jobject) NULL);

        INT_CALL(object = PythonFieldTimeStamped());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonFieldTimeStamped_finalize(t_PythonFieldTimeStamped *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonFieldTimeStamped_pythonExtension(t_PythonFieldTimeStamped *self, PyObject *args)
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

      static jobject JNICALL t_PythonFieldTimeStamped_getDate0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeStamped::mids$[PythonFieldTimeStamped::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getDate", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &value))
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

      static void JNICALL t_PythonFieldTimeStamped_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeStamped::mids$[PythonFieldTimeStamped::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonFieldTimeStamped::mids$[PythonFieldTimeStamped::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonFieldTimeStamped_get__self(t_PythonFieldTimeStamped *self, void *data)
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
      static PyObject *t_PythonFieldTimeStamped_get__parameters_(t_PythonFieldTimeStamped *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm02Data.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/common/ClockCorrection.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm02Data::class$ = NULL;
              jmethodID *SsrIgm02Data::mids$ = NULL;
              bool SsrIgm02Data::live$ = false;

              jclass SsrIgm02Data::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm02Data");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getClockCorrection_ac204103acb34678] = env->getMethodID(cls, "getClockCorrection", "()Lorg/orekit/gnss/metric/messages/common/ClockCorrection;");
                  mids$[mid_setClockCorrection_b67ff9100e1cd031] = env->getMethodID(cls, "setClockCorrection", "(Lorg/orekit/gnss/metric/messages/common/ClockCorrection;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm02Data::SsrIgm02Data() : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

              ::org::orekit::gnss::metric::messages::common::ClockCorrection SsrIgm02Data::getClockCorrection() const
              {
                return ::org::orekit::gnss::metric::messages::common::ClockCorrection(env->callObjectMethod(this$, mids$[mid_getClockCorrection_ac204103acb34678]));
              }

              void SsrIgm02Data::setClockCorrection(const ::org::orekit::gnss::metric::messages::common::ClockCorrection & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setClockCorrection_b67ff9100e1cd031], a0.this$);
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
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {
              static PyObject *t_SsrIgm02Data_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm02Data_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIgm02Data_init_(t_SsrIgm02Data *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgm02Data_getClockCorrection(t_SsrIgm02Data *self);
              static PyObject *t_SsrIgm02Data_setClockCorrection(t_SsrIgm02Data *self, PyObject *arg);
              static PyObject *t_SsrIgm02Data_get__clockCorrection(t_SsrIgm02Data *self, void *data);
              static int t_SsrIgm02Data_set__clockCorrection(t_SsrIgm02Data *self, PyObject *arg, void *data);
              static PyGetSetDef t_SsrIgm02Data__fields_[] = {
                DECLARE_GETSET_FIELD(t_SsrIgm02Data, clockCorrection),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgm02Data__methods_[] = {
                DECLARE_METHOD(t_SsrIgm02Data, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm02Data, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm02Data, getClockCorrection, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm02Data, setClockCorrection, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm02Data)[] = {
                { Py_tp_methods, t_SsrIgm02Data__methods_ },
                { Py_tp_init, (void *) t_SsrIgm02Data_init_ },
                { Py_tp_getset, t_SsrIgm02Data__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm02Data)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData),
                NULL
              };

              DEFINE_TYPE(SsrIgm02Data, t_SsrIgm02Data, SsrIgm02Data);

              void t_SsrIgm02Data::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm02Data), &PY_TYPE_DEF(SsrIgm02Data), module, "SsrIgm02Data", 0);
              }

              void t_SsrIgm02Data::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm02Data), "class_", make_descriptor(SsrIgm02Data::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm02Data), "wrapfn_", make_descriptor(t_SsrIgm02Data::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm02Data), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm02Data_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm02Data::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm02Data::wrap_Object(SsrIgm02Data(((t_SsrIgm02Data *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm02Data_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm02Data::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIgm02Data_init_(t_SsrIgm02Data *self, PyObject *args, PyObject *kwds)
              {
                SsrIgm02Data object((jobject) NULL);

                INT_CALL(object = SsrIgm02Data());
                self->object = object;

                return 0;
              }

              static PyObject *t_SsrIgm02Data_getClockCorrection(t_SsrIgm02Data *self)
              {
                ::org::orekit::gnss::metric::messages::common::ClockCorrection result((jobject) NULL);
                OBJ_CALL(result = self->object.getClockCorrection());
                return ::org::orekit::gnss::metric::messages::common::t_ClockCorrection::wrap_Object(result);
              }

              static PyObject *t_SsrIgm02Data_setClockCorrection(t_SsrIgm02Data *self, PyObject *arg)
              {
                ::org::orekit::gnss::metric::messages::common::ClockCorrection a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::ClockCorrection::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setClockCorrection(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setClockCorrection", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm02Data_get__clockCorrection(t_SsrIgm02Data *self, void *data)
              {
                ::org::orekit::gnss::metric::messages::common::ClockCorrection value((jobject) NULL);
                OBJ_CALL(value = self->object.getClockCorrection());
                return ::org::orekit::gnss::metric::messages::common::t_ClockCorrection::wrap_Object(value);
              }
              static int t_SsrIgm02Data_set__clockCorrection(t_SsrIgm02Data *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::gnss::metric::messages::common::ClockCorrection value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::ClockCorrection::initializeClass, &value))
                  {
                    INT_CALL(self->object.setClockCorrection(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "clockCorrection", arg);
                return -1;
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
#include "org/orekit/files/ccsds/utils/lexical/MessageVersionXmlTokenBuilder.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "org/orekit/files/ccsds/utils/lexical/XmlTokenBuilder.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *MessageVersionXmlTokenBuilder::class$ = NULL;
            jmethodID *MessageVersionXmlTokenBuilder::mids$ = NULL;
            bool MessageVersionXmlTokenBuilder::live$ = false;

            jclass MessageVersionXmlTokenBuilder::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/MessageVersionXmlTokenBuilder");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_buildTokens_e5e9154f880f1aad] = env->getMethodID(cls, "buildTokens", "(ZZLjava/lang/String;Ljava/lang/String;Ljava/util/Map;ILjava/lang/String;)Ljava/util/List;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            MessageVersionXmlTokenBuilder::MessageVersionXmlTokenBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

            ::java::util::List MessageVersionXmlTokenBuilder::buildTokens(jboolean a0, jboolean a1, const ::java::lang::String & a2, const ::java::lang::String & a3, const ::java::util::Map & a4, jint a5, const ::java::lang::String & a6) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_buildTokens_e5e9154f880f1aad], a0, a1, a2.this$, a3.this$, a4.this$, a5, a6.this$));
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
            static PyObject *t_MessageVersionXmlTokenBuilder_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MessageVersionXmlTokenBuilder_instance_(PyTypeObject *type, PyObject *arg);
            static int t_MessageVersionXmlTokenBuilder_init_(t_MessageVersionXmlTokenBuilder *self, PyObject *args, PyObject *kwds);
            static PyObject *t_MessageVersionXmlTokenBuilder_buildTokens(t_MessageVersionXmlTokenBuilder *self, PyObject *args);

            static PyMethodDef t_MessageVersionXmlTokenBuilder__methods_[] = {
              DECLARE_METHOD(t_MessageVersionXmlTokenBuilder, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MessageVersionXmlTokenBuilder, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MessageVersionXmlTokenBuilder, buildTokens, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(MessageVersionXmlTokenBuilder)[] = {
              { Py_tp_methods, t_MessageVersionXmlTokenBuilder__methods_ },
              { Py_tp_init, (void *) t_MessageVersionXmlTokenBuilder_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(MessageVersionXmlTokenBuilder)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(MessageVersionXmlTokenBuilder, t_MessageVersionXmlTokenBuilder, MessageVersionXmlTokenBuilder);

            void t_MessageVersionXmlTokenBuilder::install(PyObject *module)
            {
              installType(&PY_TYPE(MessageVersionXmlTokenBuilder), &PY_TYPE_DEF(MessageVersionXmlTokenBuilder), module, "MessageVersionXmlTokenBuilder", 0);
            }

            void t_MessageVersionXmlTokenBuilder::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(MessageVersionXmlTokenBuilder), "class_", make_descriptor(MessageVersionXmlTokenBuilder::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MessageVersionXmlTokenBuilder), "wrapfn_", make_descriptor(t_MessageVersionXmlTokenBuilder::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MessageVersionXmlTokenBuilder), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_MessageVersionXmlTokenBuilder_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, MessageVersionXmlTokenBuilder::initializeClass, 1)))
                return NULL;
              return t_MessageVersionXmlTokenBuilder::wrap_Object(MessageVersionXmlTokenBuilder(((t_MessageVersionXmlTokenBuilder *) arg)->object.this$));
            }
            static PyObject *t_MessageVersionXmlTokenBuilder_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, MessageVersionXmlTokenBuilder::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_MessageVersionXmlTokenBuilder_init_(t_MessageVersionXmlTokenBuilder *self, PyObject *args, PyObject *kwds)
            {
              MessageVersionXmlTokenBuilder object((jobject) NULL);

              INT_CALL(object = MessageVersionXmlTokenBuilder());
              self->object = object;

              return 0;
            }

            static PyObject *t_MessageVersionXmlTokenBuilder_buildTokens(t_MessageVersionXmlTokenBuilder *self, PyObject *args)
            {
              jboolean a0;
              jboolean a1;
              ::java::lang::String a2((jobject) NULL);
              ::java::lang::String a3((jobject) NULL);
              ::java::util::Map a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;
              ::java::lang::String a6((jobject) NULL);
              ::java::util::List result((jobject) NULL);

              if (!parseArgs(args, "ZZssKIs", ::java::util::Map::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::java::util::t_Map::parameters_, &a5, &a6))
              {
                OBJ_CALL(result = self->object.buildTokens(a0, a1, a2, a3, a4, a5, a6));
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::utils::lexical::PY_TYPE(ParseToken));
              }

              PyErr_SetArgsError((PyObject *) self, "buildTokens", args);
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
#include "org/orekit/gnss/attitude/GPSBlockIIR.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace attitude {

        ::java::lang::Class *GPSBlockIIR::class$ = NULL;
        jmethodID *GPSBlockIIR::mids$ = NULL;
        bool GPSBlockIIR::live$ = false;
        jdouble GPSBlockIIR::DEFAULT_YAW_RATE = (jdouble) 0;

        jclass GPSBlockIIR::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/attitude/GPSBlockIIR");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ffdc3ec10e7d4912] = env->getMethodID(cls, "<init>", "(DLorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/frames/Frame;)V");
            mids$[mid_correctedYaw_64e3133ed57cb807] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSFieldAttitudeContext;)Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;");
            mids$[mid_correctedYaw_dbb16eda5c9f6b1d] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSAttitudeContext;)Lorg/orekit/utils/TimeStampedAngularCoordinates;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_YAW_RATE = env->getStaticDoubleField(cls, "DEFAULT_YAW_RATE");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GPSBlockIIR::GPSBlockIIR(jdouble a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a3, const ::org::orekit::frames::Frame & a4) : ::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider(env->newObject(initializeClass, &mids$, mid_init$_ffdc3ec10e7d4912, a0, a1.this$, a2.this$, a3.this$, a4.this$)) {}
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
      namespace attitude {
        static PyObject *t_GPSBlockIIR_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GPSBlockIIR_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GPSBlockIIR_init_(t_GPSBlockIIR *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_GPSBlockIIR__methods_[] = {
          DECLARE_METHOD(t_GPSBlockIIR, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GPSBlockIIR, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GPSBlockIIR)[] = {
          { Py_tp_methods, t_GPSBlockIIR__methods_ },
          { Py_tp_init, (void *) t_GPSBlockIIR_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GPSBlockIIR)[] = {
          &PY_TYPE_DEF(::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider),
          NULL
        };

        DEFINE_TYPE(GPSBlockIIR, t_GPSBlockIIR, GPSBlockIIR);

        void t_GPSBlockIIR::install(PyObject *module)
        {
          installType(&PY_TYPE(GPSBlockIIR), &PY_TYPE_DEF(GPSBlockIIR), module, "GPSBlockIIR", 0);
        }

        void t_GPSBlockIIR::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GPSBlockIIR), "class_", make_descriptor(GPSBlockIIR::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GPSBlockIIR), "wrapfn_", make_descriptor(t_GPSBlockIIR::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GPSBlockIIR), "boxfn_", make_descriptor(boxObject));
          env->getClass(GPSBlockIIR::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(GPSBlockIIR), "DEFAULT_YAW_RATE", make_descriptor(GPSBlockIIR::DEFAULT_YAW_RATE));
        }

        static PyObject *t_GPSBlockIIR_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GPSBlockIIR::initializeClass, 1)))
            return NULL;
          return t_GPSBlockIIR::wrap_Object(GPSBlockIIR(((t_GPSBlockIIR *) arg)->object.this$));
        }
        static PyObject *t_GPSBlockIIR_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GPSBlockIIR::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GPSBlockIIR_init_(t_GPSBlockIIR *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
          ::org::orekit::utils::ExtendedPVCoordinatesProvider a3((jobject) NULL);
          ::org::orekit::frames::Frame a4((jobject) NULL);
          GPSBlockIIR object((jobject) NULL);

          if (!parseArgs(args, "Dkkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3, &a4))
          {
            INT_CALL(object = GPSBlockIIR(a0, a1, a2, a3, a4));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/handlers/PythonFieldEventHandler.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/events/handlers/FieldEventHandler.h"
#include "org/hipparchus/ode/events/Action.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {

          ::java::lang::Class *PythonFieldEventHandler::class$ = NULL;
          jmethodID *PythonFieldEventHandler::mids$ = NULL;
          bool PythonFieldEventHandler::live$ = false;

          jclass PythonFieldEventHandler::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/events/handlers/PythonFieldEventHandler");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_eventOccurred_fc49a7ff6cb062a2] = env->getMethodID(cls, "eventOccurred", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/events/FieldEventDetector;Z)Lorg/hipparchus/ode/events/Action;");
              mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_init_cb6b7da7e22b633e] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/propagation/events/FieldEventDetector;)V");
              mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");
              mids$[mid_resetState_be16adf9d9d445bf] = env->getMethodID(cls, "resetState", "(Lorg/orekit/propagation/events/FieldEventDetector;Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/FieldSpacecraftState;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonFieldEventHandler::PythonFieldEventHandler() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          void PythonFieldEventHandler::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
          }

          jlong PythonFieldEventHandler::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
          }

          void PythonFieldEventHandler::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
          static PyObject *t_PythonFieldEventHandler_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonFieldEventHandler_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonFieldEventHandler_of_(t_PythonFieldEventHandler *self, PyObject *args);
          static int t_PythonFieldEventHandler_init_(t_PythonFieldEventHandler *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonFieldEventHandler_finalize(t_PythonFieldEventHandler *self);
          static PyObject *t_PythonFieldEventHandler_pythonExtension(t_PythonFieldEventHandler *self, PyObject *args);
          static jobject JNICALL t_PythonFieldEventHandler_eventOccurred0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jboolean a2);
          static void JNICALL t_PythonFieldEventHandler_init1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
          static void JNICALL t_PythonFieldEventHandler_pythonDecRef2(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonFieldEventHandler_resetState3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static PyObject *t_PythonFieldEventHandler_get__self(t_PythonFieldEventHandler *self, void *data);
          static PyObject *t_PythonFieldEventHandler_get__parameters_(t_PythonFieldEventHandler *self, void *data);
          static PyGetSetDef t_PythonFieldEventHandler__fields_[] = {
            DECLARE_GET_FIELD(t_PythonFieldEventHandler, self),
            DECLARE_GET_FIELD(t_PythonFieldEventHandler, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonFieldEventHandler__methods_[] = {
            DECLARE_METHOD(t_PythonFieldEventHandler, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonFieldEventHandler, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonFieldEventHandler, of_, METH_VARARGS),
            DECLARE_METHOD(t_PythonFieldEventHandler, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonFieldEventHandler, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonFieldEventHandler)[] = {
            { Py_tp_methods, t_PythonFieldEventHandler__methods_ },
            { Py_tp_init, (void *) t_PythonFieldEventHandler_init_ },
            { Py_tp_getset, t_PythonFieldEventHandler__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonFieldEventHandler)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonFieldEventHandler, t_PythonFieldEventHandler, PythonFieldEventHandler);
          PyObject *t_PythonFieldEventHandler::wrap_Object(const PythonFieldEventHandler& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_PythonFieldEventHandler::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonFieldEventHandler *self = (t_PythonFieldEventHandler *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_PythonFieldEventHandler::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_PythonFieldEventHandler::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonFieldEventHandler *self = (t_PythonFieldEventHandler *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_PythonFieldEventHandler::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonFieldEventHandler), &PY_TYPE_DEF(PythonFieldEventHandler), module, "PythonFieldEventHandler", 1);
          }

          void t_PythonFieldEventHandler::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldEventHandler), "class_", make_descriptor(PythonFieldEventHandler::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldEventHandler), "wrapfn_", make_descriptor(t_PythonFieldEventHandler::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldEventHandler), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonFieldEventHandler::initializeClass);
            JNINativeMethod methods[] = {
              { "eventOccurred", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/events/FieldEventDetector;Z)Lorg/hipparchus/ode/events/Action;", (void *) t_PythonFieldEventHandler_eventOccurred0 },
              { "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/propagation/events/FieldEventDetector;)V", (void *) t_PythonFieldEventHandler_init1 },
              { "pythonDecRef", "()V", (void *) t_PythonFieldEventHandler_pythonDecRef2 },
              { "resetState", "(Lorg/orekit/propagation/events/FieldEventDetector;Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/FieldSpacecraftState;", (void *) t_PythonFieldEventHandler_resetState3 },
            };
            env->registerNatives(cls, methods, 4);
          }

          static PyObject *t_PythonFieldEventHandler_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonFieldEventHandler::initializeClass, 1)))
              return NULL;
            return t_PythonFieldEventHandler::wrap_Object(PythonFieldEventHandler(((t_PythonFieldEventHandler *) arg)->object.this$));
          }
          static PyObject *t_PythonFieldEventHandler_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonFieldEventHandler::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PythonFieldEventHandler_of_(t_PythonFieldEventHandler *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PythonFieldEventHandler_init_(t_PythonFieldEventHandler *self, PyObject *args, PyObject *kwds)
          {
            PythonFieldEventHandler object((jobject) NULL);

            INT_CALL(object = PythonFieldEventHandler());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonFieldEventHandler_finalize(t_PythonFieldEventHandler *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonFieldEventHandler_pythonExtension(t_PythonFieldEventHandler *self, PyObject *args)
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

          static jobject JNICALL t_PythonFieldEventHandler_eventOccurred0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jboolean a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonFieldEventHandler::mids$[PythonFieldEventHandler::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::ode::events::Action value((jobject) NULL);
            PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
            PyObject *o1 = ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(::org::orekit::propagation::events::FieldEventDetector(a1));
            PyObject *o2 = (a2 ? Py_True : Py_False);
            PyObject *result = PyObject_CallMethod(obj, "eventOccurred", "OOO", o0, o1, o2);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::ode::events::Action::initializeClass, &value))
            {
              throwTypeError("eventOccurred", result);
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

          static void JNICALL t_PythonFieldEventHandler_init1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonFieldEventHandler::mids$[PythonFieldEventHandler::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
            PyObject *o1 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a1));
            PyObject *o2 = ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(::org::orekit::propagation::events::FieldEventDetector(a2));
            PyObject *result = PyObject_CallMethod(obj, "init", "OOO", o0, o1, o2);
            Py_DECREF(o0);
            Py_DECREF(o1);
            Py_DECREF(o2);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonFieldEventHandler_pythonDecRef2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonFieldEventHandler::mids$[PythonFieldEventHandler::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonFieldEventHandler::mids$[PythonFieldEventHandler::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static jobject JNICALL t_PythonFieldEventHandler_resetState3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonFieldEventHandler::mids$[PythonFieldEventHandler::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
            PyObject *o0 = ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(::org::orekit::propagation::events::FieldEventDetector(a0));
            PyObject *o1 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a1));
            PyObject *result = PyObject_CallMethod(obj, "resetState", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &value))
            {
              throwTypeError("resetState", result);
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

          static PyObject *t_PythonFieldEventHandler_get__self(t_PythonFieldEventHandler *self, void *data)
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
          static PyObject *t_PythonFieldEventHandler_get__parameters_(t_PythonFieldEventHandler *self, void *data)
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
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
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
              mids$[mid_init$_52b83ffd78ff321a] = env->getMethodID(cls, "<init>", "([Ljava/lang/String;[D[D[D[D)V");
              mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modify_e4935e9a55e01fd8] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Bias::Bias(const JArray< ::java::lang::String > & a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2, const JArray< jdouble > & a3, const JArray< jdouble > & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_52b83ffd78ff321a, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

          ::java::util::List Bias::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
          }

          void Bias::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_e4935e9a55e01fd8], a0.this$);
          }

          void Bias::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9], a0.this$);
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
#include "org/orekit/propagation/events/LatitudeExtremumDetector.h"
#include "org/orekit/bodies/BodyShape.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/propagation/events/LatitudeExtremumDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *LatitudeExtremumDetector::class$ = NULL;
        jmethodID *LatitudeExtremumDetector::mids$ = NULL;
        bool LatitudeExtremumDetector::live$ = false;

        jclass LatitudeExtremumDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/LatitudeExtremumDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7c502fc601af6f77] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/OneAxisEllipsoid;)V");
            mids$[mid_init$_b67b42078e2e878c] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/bodies/OneAxisEllipsoid;)V");
            mids$[mid_g_432f3d328c15ec82] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getBody_6f78da94fd048d9d] = env->getMethodID(cls, "getBody", "()Lorg/orekit/bodies/BodyShape;");
            mids$[mid_create_4905953214205b97] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/LatitudeExtremumDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LatitudeExtremumDetector::LatitudeExtremumDetector(const ::org::orekit::bodies::OneAxisEllipsoid & a0) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_7c502fc601af6f77, a0.this$)) {}

        LatitudeExtremumDetector::LatitudeExtremumDetector(jdouble a0, jdouble a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_b67b42078e2e878c, a0, a1, a2.this$)) {}

        jdouble LatitudeExtremumDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_432f3d328c15ec82], a0.this$);
        }

        ::org::orekit::bodies::BodyShape LatitudeExtremumDetector::getBody() const
        {
          return ::org::orekit::bodies::BodyShape(env->callObjectMethod(this$, mids$[mid_getBody_6f78da94fd048d9d]));
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
        static PyObject *t_LatitudeExtremumDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LatitudeExtremumDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LatitudeExtremumDetector_of_(t_LatitudeExtremumDetector *self, PyObject *args);
        static int t_LatitudeExtremumDetector_init_(t_LatitudeExtremumDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LatitudeExtremumDetector_g(t_LatitudeExtremumDetector *self, PyObject *args);
        static PyObject *t_LatitudeExtremumDetector_getBody(t_LatitudeExtremumDetector *self);
        static PyObject *t_LatitudeExtremumDetector_get__body(t_LatitudeExtremumDetector *self, void *data);
        static PyObject *t_LatitudeExtremumDetector_get__parameters_(t_LatitudeExtremumDetector *self, void *data);
        static PyGetSetDef t_LatitudeExtremumDetector__fields_[] = {
          DECLARE_GET_FIELD(t_LatitudeExtremumDetector, body),
          DECLARE_GET_FIELD(t_LatitudeExtremumDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LatitudeExtremumDetector__methods_[] = {
          DECLARE_METHOD(t_LatitudeExtremumDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LatitudeExtremumDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LatitudeExtremumDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_LatitudeExtremumDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_LatitudeExtremumDetector, getBody, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LatitudeExtremumDetector)[] = {
          { Py_tp_methods, t_LatitudeExtremumDetector__methods_ },
          { Py_tp_init, (void *) t_LatitudeExtremumDetector_init_ },
          { Py_tp_getset, t_LatitudeExtremumDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LatitudeExtremumDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(LatitudeExtremumDetector, t_LatitudeExtremumDetector, LatitudeExtremumDetector);
        PyObject *t_LatitudeExtremumDetector::wrap_Object(const LatitudeExtremumDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_LatitudeExtremumDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_LatitudeExtremumDetector *self = (t_LatitudeExtremumDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_LatitudeExtremumDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_LatitudeExtremumDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_LatitudeExtremumDetector *self = (t_LatitudeExtremumDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_LatitudeExtremumDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(LatitudeExtremumDetector), &PY_TYPE_DEF(LatitudeExtremumDetector), module, "LatitudeExtremumDetector", 0);
        }

        void t_LatitudeExtremumDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LatitudeExtremumDetector), "class_", make_descriptor(LatitudeExtremumDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LatitudeExtremumDetector), "wrapfn_", make_descriptor(t_LatitudeExtremumDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LatitudeExtremumDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LatitudeExtremumDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LatitudeExtremumDetector::initializeClass, 1)))
            return NULL;
          return t_LatitudeExtremumDetector::wrap_Object(LatitudeExtremumDetector(((t_LatitudeExtremumDetector *) arg)->object.this$));
        }
        static PyObject *t_LatitudeExtremumDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LatitudeExtremumDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_LatitudeExtremumDetector_of_(t_LatitudeExtremumDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_LatitudeExtremumDetector_init_(t_LatitudeExtremumDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::bodies::OneAxisEllipsoid a0((jobject) NULL);
              LatitudeExtremumDetector object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0))
              {
                INT_CALL(object = LatitudeExtremumDetector(a0));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(LatitudeExtremumDetector);
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              ::org::orekit::bodies::OneAxisEllipsoid a2((jobject) NULL);
              LatitudeExtremumDetector object((jobject) NULL);

              if (!parseArgs(args, "DDk", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = LatitudeExtremumDetector(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(LatitudeExtremumDetector);
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

        static PyObject *t_LatitudeExtremumDetector_g(t_LatitudeExtremumDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LatitudeExtremumDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_LatitudeExtremumDetector_getBody(t_LatitudeExtremumDetector *self)
        {
          ::org::orekit::bodies::BodyShape result((jobject) NULL);
          OBJ_CALL(result = self->object.getBody());
          return ::org::orekit::bodies::t_BodyShape::wrap_Object(result);
        }
        static PyObject *t_LatitudeExtremumDetector_get__parameters_(t_LatitudeExtremumDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_LatitudeExtremumDetector_get__body(t_LatitudeExtremumDetector *self, void *data)
        {
          ::org::orekit::bodies::BodyShape value((jobject) NULL);
          OBJ_CALL(value = self->object.getBody());
          return ::org::orekit::bodies::t_BodyShape::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/KalmanEstimation.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *KalmanEstimation::class$ = NULL;
        jmethodID *KalmanEstimation::mids$ = NULL;
        bool KalmanEstimation::live$ = false;

        jclass KalmanEstimation::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/KalmanEstimation");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getCorrectedMeasurement_5a90ceef60f482f1] = env->getMethodID(cls, "getCorrectedMeasurement", "()Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_getCorrectedSpacecraftStates_fa9cea0faefb9a31] = env->getMethodID(cls, "getCorrectedSpacecraftStates", "()[Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getCurrentDate_85703d13e302437e] = env->getMethodID(cls, "getCurrentDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getCurrentMeasurementNumber_570ce0828f81a2c1] = env->getMethodID(cls, "getCurrentMeasurementNumber", "()I");
            mids$[mid_getEstimatedMeasurementsParameters_bd51074bfd9d41da] = env->getMethodID(cls, "getEstimatedMeasurementsParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getEstimatedOrbitalParameters_bd51074bfd9d41da] = env->getMethodID(cls, "getEstimatedOrbitalParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getEstimatedPropagationParameters_bd51074bfd9d41da] = env->getMethodID(cls, "getEstimatedPropagationParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getPhysicalEstimatedCovarianceMatrix_688b496048ff947b] = env->getMethodID(cls, "getPhysicalEstimatedCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalEstimatedState_aab4fbf77867daa8] = env->getMethodID(cls, "getPhysicalEstimatedState", "()Lorg/hipparchus/linear/RealVector;");
            mids$[mid_getPhysicalInnovationCovarianceMatrix_688b496048ff947b] = env->getMethodID(cls, "getPhysicalInnovationCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalKalmanGain_688b496048ff947b] = env->getMethodID(cls, "getPhysicalKalmanGain", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalMeasurementJacobian_688b496048ff947b] = env->getMethodID(cls, "getPhysicalMeasurementJacobian", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalStateTransitionMatrix_688b496048ff947b] = env->getMethodID(cls, "getPhysicalStateTransitionMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPredictedMeasurement_5a90ceef60f482f1] = env->getMethodID(cls, "getPredictedMeasurement", "()Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_getPredictedSpacecraftStates_fa9cea0faefb9a31] = env->getMethodID(cls, "getPredictedSpacecraftStates", "()[Lorg/orekit/propagation/SpacecraftState;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::estimation::measurements::EstimatedMeasurement KalmanEstimation::getCorrectedMeasurement() const
        {
          return ::org::orekit::estimation::measurements::EstimatedMeasurement(env->callObjectMethod(this$, mids$[mid_getCorrectedMeasurement_5a90ceef60f482f1]));
        }

        JArray< ::org::orekit::propagation::SpacecraftState > KalmanEstimation::getCorrectedSpacecraftStates() const
        {
          return JArray< ::org::orekit::propagation::SpacecraftState >(env->callObjectMethod(this$, mids$[mid_getCorrectedSpacecraftStates_fa9cea0faefb9a31]));
        }

        ::org::orekit::time::AbsoluteDate KalmanEstimation::getCurrentDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getCurrentDate_85703d13e302437e]));
        }

        jint KalmanEstimation::getCurrentMeasurementNumber() const
        {
          return env->callIntMethod(this$, mids$[mid_getCurrentMeasurementNumber_570ce0828f81a2c1]);
        }

        ::org::orekit::utils::ParameterDriversList KalmanEstimation::getEstimatedMeasurementsParameters() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getEstimatedMeasurementsParameters_bd51074bfd9d41da]));
        }

        ::org::orekit::utils::ParameterDriversList KalmanEstimation::getEstimatedOrbitalParameters() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getEstimatedOrbitalParameters_bd51074bfd9d41da]));
        }

        ::org::orekit::utils::ParameterDriversList KalmanEstimation::getEstimatedPropagationParameters() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getEstimatedPropagationParameters_bd51074bfd9d41da]));
        }

        ::org::hipparchus::linear::RealMatrix KalmanEstimation::getPhysicalEstimatedCovarianceMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalEstimatedCovarianceMatrix_688b496048ff947b]));
        }

        ::org::hipparchus::linear::RealVector KalmanEstimation::getPhysicalEstimatedState() const
        {
          return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getPhysicalEstimatedState_aab4fbf77867daa8]));
        }

        ::org::hipparchus::linear::RealMatrix KalmanEstimation::getPhysicalInnovationCovarianceMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalInnovationCovarianceMatrix_688b496048ff947b]));
        }

        ::org::hipparchus::linear::RealMatrix KalmanEstimation::getPhysicalKalmanGain() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalKalmanGain_688b496048ff947b]));
        }

        ::org::hipparchus::linear::RealMatrix KalmanEstimation::getPhysicalMeasurementJacobian() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalMeasurementJacobian_688b496048ff947b]));
        }

        ::org::hipparchus::linear::RealMatrix KalmanEstimation::getPhysicalStateTransitionMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalStateTransitionMatrix_688b496048ff947b]));
        }

        ::org::orekit::estimation::measurements::EstimatedMeasurement KalmanEstimation::getPredictedMeasurement() const
        {
          return ::org::orekit::estimation::measurements::EstimatedMeasurement(env->callObjectMethod(this$, mids$[mid_getPredictedMeasurement_5a90ceef60f482f1]));
        }

        JArray< ::org::orekit::propagation::SpacecraftState > KalmanEstimation::getPredictedSpacecraftStates() const
        {
          return JArray< ::org::orekit::propagation::SpacecraftState >(env->callObjectMethod(this$, mids$[mid_getPredictedSpacecraftStates_fa9cea0faefb9a31]));
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
        static PyObject *t_KalmanEstimation_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_KalmanEstimation_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_KalmanEstimation_getCorrectedMeasurement(t_KalmanEstimation *self);
        static PyObject *t_KalmanEstimation_getCorrectedSpacecraftStates(t_KalmanEstimation *self);
        static PyObject *t_KalmanEstimation_getCurrentDate(t_KalmanEstimation *self);
        static PyObject *t_KalmanEstimation_getCurrentMeasurementNumber(t_KalmanEstimation *self);
        static PyObject *t_KalmanEstimation_getEstimatedMeasurementsParameters(t_KalmanEstimation *self);
        static PyObject *t_KalmanEstimation_getEstimatedOrbitalParameters(t_KalmanEstimation *self);
        static PyObject *t_KalmanEstimation_getEstimatedPropagationParameters(t_KalmanEstimation *self);
        static PyObject *t_KalmanEstimation_getPhysicalEstimatedCovarianceMatrix(t_KalmanEstimation *self);
        static PyObject *t_KalmanEstimation_getPhysicalEstimatedState(t_KalmanEstimation *self);
        static PyObject *t_KalmanEstimation_getPhysicalInnovationCovarianceMatrix(t_KalmanEstimation *self);
        static PyObject *t_KalmanEstimation_getPhysicalKalmanGain(t_KalmanEstimation *self);
        static PyObject *t_KalmanEstimation_getPhysicalMeasurementJacobian(t_KalmanEstimation *self);
        static PyObject *t_KalmanEstimation_getPhysicalStateTransitionMatrix(t_KalmanEstimation *self);
        static PyObject *t_KalmanEstimation_getPredictedMeasurement(t_KalmanEstimation *self);
        static PyObject *t_KalmanEstimation_getPredictedSpacecraftStates(t_KalmanEstimation *self);
        static PyObject *t_KalmanEstimation_get__correctedMeasurement(t_KalmanEstimation *self, void *data);
        static PyObject *t_KalmanEstimation_get__correctedSpacecraftStates(t_KalmanEstimation *self, void *data);
        static PyObject *t_KalmanEstimation_get__currentDate(t_KalmanEstimation *self, void *data);
        static PyObject *t_KalmanEstimation_get__currentMeasurementNumber(t_KalmanEstimation *self, void *data);
        static PyObject *t_KalmanEstimation_get__estimatedMeasurementsParameters(t_KalmanEstimation *self, void *data);
        static PyObject *t_KalmanEstimation_get__estimatedOrbitalParameters(t_KalmanEstimation *self, void *data);
        static PyObject *t_KalmanEstimation_get__estimatedPropagationParameters(t_KalmanEstimation *self, void *data);
        static PyObject *t_KalmanEstimation_get__physicalEstimatedCovarianceMatrix(t_KalmanEstimation *self, void *data);
        static PyObject *t_KalmanEstimation_get__physicalEstimatedState(t_KalmanEstimation *self, void *data);
        static PyObject *t_KalmanEstimation_get__physicalInnovationCovarianceMatrix(t_KalmanEstimation *self, void *data);
        static PyObject *t_KalmanEstimation_get__physicalKalmanGain(t_KalmanEstimation *self, void *data);
        static PyObject *t_KalmanEstimation_get__physicalMeasurementJacobian(t_KalmanEstimation *self, void *data);
        static PyObject *t_KalmanEstimation_get__physicalStateTransitionMatrix(t_KalmanEstimation *self, void *data);
        static PyObject *t_KalmanEstimation_get__predictedMeasurement(t_KalmanEstimation *self, void *data);
        static PyObject *t_KalmanEstimation_get__predictedSpacecraftStates(t_KalmanEstimation *self, void *data);
        static PyGetSetDef t_KalmanEstimation__fields_[] = {
          DECLARE_GET_FIELD(t_KalmanEstimation, correctedMeasurement),
          DECLARE_GET_FIELD(t_KalmanEstimation, correctedSpacecraftStates),
          DECLARE_GET_FIELD(t_KalmanEstimation, currentDate),
          DECLARE_GET_FIELD(t_KalmanEstimation, currentMeasurementNumber),
          DECLARE_GET_FIELD(t_KalmanEstimation, estimatedMeasurementsParameters),
          DECLARE_GET_FIELD(t_KalmanEstimation, estimatedOrbitalParameters),
          DECLARE_GET_FIELD(t_KalmanEstimation, estimatedPropagationParameters),
          DECLARE_GET_FIELD(t_KalmanEstimation, physicalEstimatedCovarianceMatrix),
          DECLARE_GET_FIELD(t_KalmanEstimation, physicalEstimatedState),
          DECLARE_GET_FIELD(t_KalmanEstimation, physicalInnovationCovarianceMatrix),
          DECLARE_GET_FIELD(t_KalmanEstimation, physicalKalmanGain),
          DECLARE_GET_FIELD(t_KalmanEstimation, physicalMeasurementJacobian),
          DECLARE_GET_FIELD(t_KalmanEstimation, physicalStateTransitionMatrix),
          DECLARE_GET_FIELD(t_KalmanEstimation, predictedMeasurement),
          DECLARE_GET_FIELD(t_KalmanEstimation, predictedSpacecraftStates),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_KalmanEstimation__methods_[] = {
          DECLARE_METHOD(t_KalmanEstimation, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KalmanEstimation, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KalmanEstimation, getCorrectedMeasurement, METH_NOARGS),
          DECLARE_METHOD(t_KalmanEstimation, getCorrectedSpacecraftStates, METH_NOARGS),
          DECLARE_METHOD(t_KalmanEstimation, getCurrentDate, METH_NOARGS),
          DECLARE_METHOD(t_KalmanEstimation, getCurrentMeasurementNumber, METH_NOARGS),
          DECLARE_METHOD(t_KalmanEstimation, getEstimatedMeasurementsParameters, METH_NOARGS),
          DECLARE_METHOD(t_KalmanEstimation, getEstimatedOrbitalParameters, METH_NOARGS),
          DECLARE_METHOD(t_KalmanEstimation, getEstimatedPropagationParameters, METH_NOARGS),
          DECLARE_METHOD(t_KalmanEstimation, getPhysicalEstimatedCovarianceMatrix, METH_NOARGS),
          DECLARE_METHOD(t_KalmanEstimation, getPhysicalEstimatedState, METH_NOARGS),
          DECLARE_METHOD(t_KalmanEstimation, getPhysicalInnovationCovarianceMatrix, METH_NOARGS),
          DECLARE_METHOD(t_KalmanEstimation, getPhysicalKalmanGain, METH_NOARGS),
          DECLARE_METHOD(t_KalmanEstimation, getPhysicalMeasurementJacobian, METH_NOARGS),
          DECLARE_METHOD(t_KalmanEstimation, getPhysicalStateTransitionMatrix, METH_NOARGS),
          DECLARE_METHOD(t_KalmanEstimation, getPredictedMeasurement, METH_NOARGS),
          DECLARE_METHOD(t_KalmanEstimation, getPredictedSpacecraftStates, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(KalmanEstimation)[] = {
          { Py_tp_methods, t_KalmanEstimation__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_KalmanEstimation__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(KalmanEstimation)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(KalmanEstimation, t_KalmanEstimation, KalmanEstimation);

        void t_KalmanEstimation::install(PyObject *module)
        {
          installType(&PY_TYPE(KalmanEstimation), &PY_TYPE_DEF(KalmanEstimation), module, "KalmanEstimation", 0);
        }

        void t_KalmanEstimation::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanEstimation), "class_", make_descriptor(KalmanEstimation::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanEstimation), "wrapfn_", make_descriptor(t_KalmanEstimation::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanEstimation), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_KalmanEstimation_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, KalmanEstimation::initializeClass, 1)))
            return NULL;
          return t_KalmanEstimation::wrap_Object(KalmanEstimation(((t_KalmanEstimation *) arg)->object.this$));
        }
        static PyObject *t_KalmanEstimation_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, KalmanEstimation::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_KalmanEstimation_getCorrectedMeasurement(t_KalmanEstimation *self)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrectedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(result);
        }

        static PyObject *t_KalmanEstimation_getCorrectedSpacecraftStates(t_KalmanEstimation *self)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrectedSpacecraftStates());
          return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_KalmanEstimation_getCurrentDate(t_KalmanEstimation *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getCurrentDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_KalmanEstimation_getCurrentMeasurementNumber(t_KalmanEstimation *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getCurrentMeasurementNumber());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_KalmanEstimation_getEstimatedMeasurementsParameters(t_KalmanEstimation *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedMeasurementsParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_KalmanEstimation_getEstimatedOrbitalParameters(t_KalmanEstimation *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedOrbitalParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_KalmanEstimation_getEstimatedPropagationParameters(t_KalmanEstimation *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedPropagationParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_KalmanEstimation_getPhysicalEstimatedCovarianceMatrix(t_KalmanEstimation *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalEstimatedCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_KalmanEstimation_getPhysicalEstimatedState(t_KalmanEstimation *self)
        {
          ::org::hipparchus::linear::RealVector result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalEstimatedState());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        static PyObject *t_KalmanEstimation_getPhysicalInnovationCovarianceMatrix(t_KalmanEstimation *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalInnovationCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_KalmanEstimation_getPhysicalKalmanGain(t_KalmanEstimation *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalKalmanGain());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_KalmanEstimation_getPhysicalMeasurementJacobian(t_KalmanEstimation *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalMeasurementJacobian());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_KalmanEstimation_getPhysicalStateTransitionMatrix(t_KalmanEstimation *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalStateTransitionMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_KalmanEstimation_getPredictedMeasurement(t_KalmanEstimation *self)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement result((jobject) NULL);
          OBJ_CALL(result = self->object.getPredictedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(result);
        }

        static PyObject *t_KalmanEstimation_getPredictedSpacecraftStates(t_KalmanEstimation *self)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > result((jobject) NULL);
          OBJ_CALL(result = self->object.getPredictedSpacecraftStates());
          return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_KalmanEstimation_get__correctedMeasurement(t_KalmanEstimation *self, void *data)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrectedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(value);
        }

        static PyObject *t_KalmanEstimation_get__correctedSpacecraftStates(t_KalmanEstimation *self, void *data)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrectedSpacecraftStates());
          return JArray<jobject>(value.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_KalmanEstimation_get__currentDate(t_KalmanEstimation *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getCurrentDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_KalmanEstimation_get__currentMeasurementNumber(t_KalmanEstimation *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getCurrentMeasurementNumber());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_KalmanEstimation_get__estimatedMeasurementsParameters(t_KalmanEstimation *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedMeasurementsParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_KalmanEstimation_get__estimatedOrbitalParameters(t_KalmanEstimation *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedOrbitalParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_KalmanEstimation_get__estimatedPropagationParameters(t_KalmanEstimation *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedPropagationParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_KalmanEstimation_get__physicalEstimatedCovarianceMatrix(t_KalmanEstimation *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalEstimatedCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_KalmanEstimation_get__physicalEstimatedState(t_KalmanEstimation *self, void *data)
        {
          ::org::hipparchus::linear::RealVector value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalEstimatedState());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
        }

        static PyObject *t_KalmanEstimation_get__physicalInnovationCovarianceMatrix(t_KalmanEstimation *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalInnovationCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_KalmanEstimation_get__physicalKalmanGain(t_KalmanEstimation *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalKalmanGain());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_KalmanEstimation_get__physicalMeasurementJacobian(t_KalmanEstimation *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalMeasurementJacobian());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_KalmanEstimation_get__physicalStateTransitionMatrix(t_KalmanEstimation *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalStateTransitionMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_KalmanEstimation_get__predictedMeasurement(t_KalmanEstimation *self, void *data)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement value((jobject) NULL);
          OBJ_CALL(value = self->object.getPredictedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(value);
        }

        static PyObject *t_KalmanEstimation_get__predictedSpacecraftStates(t_KalmanEstimation *self, void *data)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > value((jobject) NULL);
          OBJ_CALL(value = self->object.getPredictedSpacecraftStates());
          return JArray<jobject>(value.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/ionosphere/NeQuickModel.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/frames/TopocentricFrame.h"
#include "java/util/List.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/models/earth/ionosphere/IonosphericModel.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace ionosphere {

          ::java::lang::Class *NeQuickModel::class$ = NULL;
          jmethodID *NeQuickModel::mids$ = NULL;
          bool NeQuickModel::live$ = false;

          jclass NeQuickModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/ionosphere/NeQuickModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_fa9d415d19f69361] = env->getMethodID(cls, "<init>", "([D)V");
              mids$[mid_init$_544c95b15198d0bf] = env->getMethodID(cls, "<init>", "([DLorg/orekit/time/TimeScale;)V");
              mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_pathDelay_bea489d08473aa2e] = env->getMethodID(cls, "pathDelay", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/frames/TopocentricFrame;D[D)D");
              mids$[mid_pathDelay_28325ab4dabb069a] = env->getMethodID(cls, "pathDelay", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/frames/TopocentricFrame;D[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_stec_d290e0e343b87314] = env->getMethodID(cls, "stec", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/bodies/FieldGeodeticPoint;Lorg/orekit/bodies/FieldGeodeticPoint;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_stec_1bddb8d30c8be0d0] = env->getMethodID(cls, "stec", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/bodies/GeodeticPoint;Lorg/orekit/bodies/GeodeticPoint;)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          NeQuickModel::NeQuickModel(const JArray< jdouble > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fa9d415d19f69361, a0.this$)) {}

          NeQuickModel::NeQuickModel(const JArray< jdouble > & a0, const ::org::orekit::time::TimeScale & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_544c95b15198d0bf, a0.this$, a1.this$)) {}

          ::java::util::List NeQuickModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
          }

          jdouble NeQuickModel::pathDelay(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::frames::TopocentricFrame & a1, jdouble a2, const JArray< jdouble > & a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_pathDelay_bea489d08473aa2e], a0.this$, a1.this$, a2, a3.this$);
          }

          ::org::hipparchus::CalculusFieldElement NeQuickModel::pathDelay(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::frames::TopocentricFrame & a1, jdouble a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_28325ab4dabb069a], a0.this$, a1.this$, a2, a3.this$));
          }

          ::org::hipparchus::CalculusFieldElement NeQuickModel::stec(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const ::org::orekit::bodies::FieldGeodeticPoint & a2) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_stec_d290e0e343b87314], a0.this$, a1.this$, a2.this$));
          }

          jdouble NeQuickModel::stec(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::bodies::GeodeticPoint & a1, const ::org::orekit::bodies::GeodeticPoint & a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_stec_1bddb8d30c8be0d0], a0.this$, a1.this$, a2.this$);
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
        namespace ionosphere {
          static PyObject *t_NeQuickModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NeQuickModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_NeQuickModel_init_(t_NeQuickModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_NeQuickModel_getParametersDrivers(t_NeQuickModel *self);
          static PyObject *t_NeQuickModel_pathDelay(t_NeQuickModel *self, PyObject *args);
          static PyObject *t_NeQuickModel_stec(t_NeQuickModel *self, PyObject *args);
          static PyObject *t_NeQuickModel_get__parametersDrivers(t_NeQuickModel *self, void *data);
          static PyGetSetDef t_NeQuickModel__fields_[] = {
            DECLARE_GET_FIELD(t_NeQuickModel, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_NeQuickModel__methods_[] = {
            DECLARE_METHOD(t_NeQuickModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NeQuickModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NeQuickModel, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_NeQuickModel, pathDelay, METH_VARARGS),
            DECLARE_METHOD(t_NeQuickModel, stec, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(NeQuickModel)[] = {
            { Py_tp_methods, t_NeQuickModel__methods_ },
            { Py_tp_init, (void *) t_NeQuickModel_init_ },
            { Py_tp_getset, t_NeQuickModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(NeQuickModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(NeQuickModel, t_NeQuickModel, NeQuickModel);

          void t_NeQuickModel::install(PyObject *module)
          {
            installType(&PY_TYPE(NeQuickModel), &PY_TYPE_DEF(NeQuickModel), module, "NeQuickModel", 0);
          }

          void t_NeQuickModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(NeQuickModel), "class_", make_descriptor(NeQuickModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NeQuickModel), "wrapfn_", make_descriptor(t_NeQuickModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NeQuickModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_NeQuickModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, NeQuickModel::initializeClass, 1)))
              return NULL;
            return t_NeQuickModel::wrap_Object(NeQuickModel(((t_NeQuickModel *) arg)->object.this$));
          }
          static PyObject *t_NeQuickModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, NeQuickModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_NeQuickModel_init_(t_NeQuickModel *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                JArray< jdouble > a0((jobject) NULL);
                NeQuickModel object((jobject) NULL);

                if (!parseArgs(args, "[D", &a0))
                {
                  INT_CALL(object = NeQuickModel(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                JArray< jdouble > a0((jobject) NULL);
                ::org::orekit::time::TimeScale a1((jobject) NULL);
                NeQuickModel object((jobject) NULL);

                if (!parseArgs(args, "[Dk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = NeQuickModel(a0, a1));
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

          static PyObject *t_NeQuickModel_getParametersDrivers(t_NeQuickModel *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_NeQuickModel_pathDelay(t_NeQuickModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::frames::TopocentricFrame a1((jobject) NULL);
                jdouble a2;
                JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KkD[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::frames::TopocentricFrame::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::orekit::frames::TopocentricFrame a1((jobject) NULL);
                jdouble a2;
                JArray< jdouble > a3((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "kkD[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::frames::TopocentricFrame::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "pathDelay", args);
            return NULL;
          }

          static PyObject *t_NeQuickModel_stec(t_NeQuickModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
                ::org::orekit::bodies::GeodeticPoint a2((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.stec(a0, a1, a2));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::bodies::FieldGeodeticPoint a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::bodies::FieldGeodeticPoint a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_, &a2, &p2, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_))
                {
                  OBJ_CALL(result = self->object.stec(a0, a1, a2));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "stec", args);
            return NULL;
          }

          static PyObject *t_NeQuickModel_get__parametersDrivers(t_NeQuickModel *self, void *data)
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
#include "org/orekit/propagation/EphemerisGenerator.h"
#include "org/orekit/propagation/BoundedPropagator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *EphemerisGenerator::class$ = NULL;
      jmethodID *EphemerisGenerator::mids$ = NULL;
      bool EphemerisGenerator::live$ = false;

      jclass EphemerisGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/EphemerisGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getGeneratedEphemeris_08b52de56e2dfa9a] = env->getMethodID(cls, "getGeneratedEphemeris", "()Lorg/orekit/propagation/BoundedPropagator;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::propagation::BoundedPropagator EphemerisGenerator::getGeneratedEphemeris() const
      {
        return ::org::orekit::propagation::BoundedPropagator(env->callObjectMethod(this$, mids$[mid_getGeneratedEphemeris_08b52de56e2dfa9a]));
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
      static PyObject *t_EphemerisGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EphemerisGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EphemerisGenerator_getGeneratedEphemeris(t_EphemerisGenerator *self);
      static PyObject *t_EphemerisGenerator_get__generatedEphemeris(t_EphemerisGenerator *self, void *data);
      static PyGetSetDef t_EphemerisGenerator__fields_[] = {
        DECLARE_GET_FIELD(t_EphemerisGenerator, generatedEphemeris),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_EphemerisGenerator__methods_[] = {
        DECLARE_METHOD(t_EphemerisGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EphemerisGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EphemerisGenerator, getGeneratedEphemeris, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(EphemerisGenerator)[] = {
        { Py_tp_methods, t_EphemerisGenerator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_EphemerisGenerator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(EphemerisGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(EphemerisGenerator, t_EphemerisGenerator, EphemerisGenerator);

      void t_EphemerisGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(EphemerisGenerator), &PY_TYPE_DEF(EphemerisGenerator), module, "EphemerisGenerator", 0);
      }

      void t_EphemerisGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisGenerator), "class_", make_descriptor(EphemerisGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisGenerator), "wrapfn_", make_descriptor(t_EphemerisGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_EphemerisGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, EphemerisGenerator::initializeClass, 1)))
          return NULL;
        return t_EphemerisGenerator::wrap_Object(EphemerisGenerator(((t_EphemerisGenerator *) arg)->object.this$));
      }
      static PyObject *t_EphemerisGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, EphemerisGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_EphemerisGenerator_getGeneratedEphemeris(t_EphemerisGenerator *self)
      {
        ::org::orekit::propagation::BoundedPropagator result((jobject) NULL);
        OBJ_CALL(result = self->object.getGeneratedEphemeris());
        return ::org::orekit::propagation::t_BoundedPropagator::wrap_Object(result);
      }

      static PyObject *t_EphemerisGenerator_get__generatedEphemeris(t_EphemerisGenerator *self, void *data)
      {
        ::org::orekit::propagation::BoundedPropagator value((jobject) NULL);
        OBJ_CALL(value = self->object.getGeneratedEphemeris());
        return ::org::orekit::propagation::t_BoundedPropagator::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadata.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *CdmRelativeMetadataKey::class$ = NULL;
            jmethodID *CdmRelativeMetadataKey::mids$ = NULL;
            bool CdmRelativeMetadataKey::live$ = false;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::APPROACH_ANGLE = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::COLLISION_MAX_PC_METHOD = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::COLLISION_MAX_PROBABILITY = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::COLLISION_PERCENTILE = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::COLLISION_PROBABILITY = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::COLLISION_PROBABILITY_METHOD = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::CONJUNCTION_ID = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::MAHALANOBIS_DISTANCE = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::MISS_DISTANCE = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::NEXT_MESSAGE_EPOCH = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::PREVIOUS_MESSAGE_EPOCH = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::PREVIOUS_MESSAGE_ID = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::RELATIVE_POSITION_N = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::RELATIVE_POSITION_R = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::RELATIVE_POSITION_T = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::RELATIVE_SPEED = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::RELATIVE_VELOCITY_N = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::RELATIVE_VELOCITY_R = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::RELATIVE_VELOCITY_T = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::SCREEN_ENTRY_TIME = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::SCREEN_EXIT_TIME = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::SCREEN_PC_THRESHOLD = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::SCREEN_TYPE = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::SCREEN_VOLUME_FRAME = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::SCREEN_VOLUME_RADIUS = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::SCREEN_VOLUME_SHAPE = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::SCREEN_VOLUME_X = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::SCREEN_VOLUME_Y = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::SCREEN_VOLUME_Z = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::SEFI_COLLISION_PROBABILITY = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::SEFI_COLLISION_PROBABILITY_METHOD = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::SEFI_FRAGMENTATION_MODEL = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::START_SCREEN_PERIOD = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::STOP_SCREEN_PERIOD = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::TCA = NULL;

            jclass CdmRelativeMetadataKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_782a6103009bbc73] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadata;)Z");
                mids$[mid_valueOf_cd70eed78d98625e] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;");
                mids$[mid_values_d82f415f166f6072] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                APPROACH_ANGLE = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "APPROACH_ANGLE", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                COLLISION_MAX_PC_METHOD = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "COLLISION_MAX_PC_METHOD", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                COLLISION_MAX_PROBABILITY = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "COLLISION_MAX_PROBABILITY", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                COLLISION_PERCENTILE = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "COLLISION_PERCENTILE", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                COLLISION_PROBABILITY = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "COLLISION_PROBABILITY", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                COLLISION_PROBABILITY_METHOD = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "COLLISION_PROBABILITY_METHOD", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                CONJUNCTION_ID = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "CONJUNCTION_ID", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                MAHALANOBIS_DISTANCE = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "MAHALANOBIS_DISTANCE", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                MISS_DISTANCE = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "MISS_DISTANCE", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                NEXT_MESSAGE_EPOCH = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "NEXT_MESSAGE_EPOCH", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                PREVIOUS_MESSAGE_EPOCH = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "PREVIOUS_MESSAGE_EPOCH", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                PREVIOUS_MESSAGE_ID = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "PREVIOUS_MESSAGE_ID", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                RELATIVE_POSITION_N = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "RELATIVE_POSITION_N", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                RELATIVE_POSITION_R = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "RELATIVE_POSITION_R", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                RELATIVE_POSITION_T = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "RELATIVE_POSITION_T", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                RELATIVE_SPEED = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "RELATIVE_SPEED", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                RELATIVE_VELOCITY_N = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "RELATIVE_VELOCITY_N", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                RELATIVE_VELOCITY_R = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "RELATIVE_VELOCITY_R", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                RELATIVE_VELOCITY_T = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "RELATIVE_VELOCITY_T", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                SCREEN_ENTRY_TIME = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "SCREEN_ENTRY_TIME", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                SCREEN_EXIT_TIME = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "SCREEN_EXIT_TIME", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                SCREEN_PC_THRESHOLD = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "SCREEN_PC_THRESHOLD", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                SCREEN_TYPE = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "SCREEN_TYPE", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                SCREEN_VOLUME_FRAME = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "SCREEN_VOLUME_FRAME", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                SCREEN_VOLUME_RADIUS = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "SCREEN_VOLUME_RADIUS", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                SCREEN_VOLUME_SHAPE = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "SCREEN_VOLUME_SHAPE", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                SCREEN_VOLUME_X = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "SCREEN_VOLUME_X", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                SCREEN_VOLUME_Y = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "SCREEN_VOLUME_Y", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                SCREEN_VOLUME_Z = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "SCREEN_VOLUME_Z", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                SEFI_COLLISION_PROBABILITY = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "SEFI_COLLISION_PROBABILITY", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                SEFI_COLLISION_PROBABILITY_METHOD = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "SEFI_COLLISION_PROBABILITY_METHOD", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                SEFI_FRAGMENTATION_MODEL = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "SEFI_FRAGMENTATION_MODEL", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                START_SCREEN_PERIOD = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "START_SCREEN_PERIOD", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                STOP_SCREEN_PERIOD = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "STOP_SCREEN_PERIOD", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                TCA = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "TCA", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean CdmRelativeMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_782a6103009bbc73], a0.this$, a1.this$, a2.this$);
            }

            CdmRelativeMetadataKey CdmRelativeMetadataKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return CdmRelativeMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_cd70eed78d98625e], a0.this$));
            }

            JArray< CdmRelativeMetadataKey > CdmRelativeMetadataKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< CdmRelativeMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_d82f415f166f6072]));
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
          namespace cdm {
            static PyObject *t_CdmRelativeMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmRelativeMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmRelativeMetadataKey_of_(t_CdmRelativeMetadataKey *self, PyObject *args);
            static PyObject *t_CdmRelativeMetadataKey_process(t_CdmRelativeMetadataKey *self, PyObject *args);
            static PyObject *t_CdmRelativeMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_CdmRelativeMetadataKey_values(PyTypeObject *type);
            static PyObject *t_CdmRelativeMetadataKey_get__parameters_(t_CdmRelativeMetadataKey *self, void *data);
            static PyGetSetDef t_CdmRelativeMetadataKey__fields_[] = {
              DECLARE_GET_FIELD(t_CdmRelativeMetadataKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CdmRelativeMetadataKey__methods_[] = {
              DECLARE_METHOD(t_CdmRelativeMetadataKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmRelativeMetadataKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmRelativeMetadataKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_CdmRelativeMetadataKey, process, METH_VARARGS),
              DECLARE_METHOD(t_CdmRelativeMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_CdmRelativeMetadataKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CdmRelativeMetadataKey)[] = {
              { Py_tp_methods, t_CdmRelativeMetadataKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_CdmRelativeMetadataKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CdmRelativeMetadataKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(CdmRelativeMetadataKey, t_CdmRelativeMetadataKey, CdmRelativeMetadataKey);
            PyObject *t_CdmRelativeMetadataKey::wrap_Object(const CdmRelativeMetadataKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CdmRelativeMetadataKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CdmRelativeMetadataKey *self = (t_CdmRelativeMetadataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_CdmRelativeMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CdmRelativeMetadataKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CdmRelativeMetadataKey *self = (t_CdmRelativeMetadataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_CdmRelativeMetadataKey::install(PyObject *module)
            {
              installType(&PY_TYPE(CdmRelativeMetadataKey), &PY_TYPE_DEF(CdmRelativeMetadataKey), module, "CdmRelativeMetadataKey", 0);
            }

            void t_CdmRelativeMetadataKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "class_", make_descriptor(CdmRelativeMetadataKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "wrapfn_", make_descriptor(t_CdmRelativeMetadataKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(CdmRelativeMetadataKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "APPROACH_ANGLE", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::APPROACH_ANGLE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "COLLISION_MAX_PC_METHOD", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::COLLISION_MAX_PC_METHOD)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "COLLISION_MAX_PROBABILITY", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::COLLISION_MAX_PROBABILITY)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "COLLISION_PERCENTILE", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::COLLISION_PERCENTILE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "COLLISION_PROBABILITY", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::COLLISION_PROBABILITY)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "COLLISION_PROBABILITY_METHOD", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::COLLISION_PROBABILITY_METHOD)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "CONJUNCTION_ID", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::CONJUNCTION_ID)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "MAHALANOBIS_DISTANCE", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::MAHALANOBIS_DISTANCE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "MISS_DISTANCE", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::MISS_DISTANCE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "NEXT_MESSAGE_EPOCH", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::NEXT_MESSAGE_EPOCH)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "PREVIOUS_MESSAGE_EPOCH", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::PREVIOUS_MESSAGE_EPOCH)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "PREVIOUS_MESSAGE_ID", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::PREVIOUS_MESSAGE_ID)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "RELATIVE_POSITION_N", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::RELATIVE_POSITION_N)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "RELATIVE_POSITION_R", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::RELATIVE_POSITION_R)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "RELATIVE_POSITION_T", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::RELATIVE_POSITION_T)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "RELATIVE_SPEED", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::RELATIVE_SPEED)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "RELATIVE_VELOCITY_N", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::RELATIVE_VELOCITY_N)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "RELATIVE_VELOCITY_R", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::RELATIVE_VELOCITY_R)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "RELATIVE_VELOCITY_T", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::RELATIVE_VELOCITY_T)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "SCREEN_ENTRY_TIME", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::SCREEN_ENTRY_TIME)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "SCREEN_EXIT_TIME", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::SCREEN_EXIT_TIME)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "SCREEN_PC_THRESHOLD", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::SCREEN_PC_THRESHOLD)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "SCREEN_TYPE", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::SCREEN_TYPE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "SCREEN_VOLUME_FRAME", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::SCREEN_VOLUME_FRAME)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "SCREEN_VOLUME_RADIUS", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::SCREEN_VOLUME_RADIUS)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "SCREEN_VOLUME_SHAPE", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::SCREEN_VOLUME_SHAPE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "SCREEN_VOLUME_X", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::SCREEN_VOLUME_X)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "SCREEN_VOLUME_Y", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::SCREEN_VOLUME_Y)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "SCREEN_VOLUME_Z", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::SCREEN_VOLUME_Z)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "SEFI_COLLISION_PROBABILITY", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::SEFI_COLLISION_PROBABILITY)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "SEFI_COLLISION_PROBABILITY_METHOD", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::SEFI_COLLISION_PROBABILITY_METHOD)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "SEFI_FRAGMENTATION_MODEL", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::SEFI_FRAGMENTATION_MODEL)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "START_SCREEN_PERIOD", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::START_SCREEN_PERIOD)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "STOP_SCREEN_PERIOD", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::STOP_SCREEN_PERIOD)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "TCA", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::TCA)));
            }

            static PyObject *t_CdmRelativeMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CdmRelativeMetadataKey::initializeClass, 1)))
                return NULL;
              return t_CdmRelativeMetadataKey::wrap_Object(CdmRelativeMetadataKey(((t_CdmRelativeMetadataKey *) arg)->object.this$));
            }
            static PyObject *t_CdmRelativeMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CdmRelativeMetadataKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_CdmRelativeMetadataKey_of_(t_CdmRelativeMetadataKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_CdmRelativeMetadataKey_process(t_CdmRelativeMetadataKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              CdmRelativeMetadataKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadataKey::valueOf(a0));
                return t_CdmRelativeMetadataKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_CdmRelativeMetadataKey_values(PyTypeObject *type)
            {
              JArray< CdmRelativeMetadataKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadataKey::values());
              return JArray<jobject>(result.this$).wrap(t_CdmRelativeMetadataKey::wrap_jobject);
            }
            static PyObject *t_CdmRelativeMetadataKey_get__parameters_(t_CdmRelativeMetadataKey *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/tessellation/EllipsoidTessellator.h"
#include "java/util/List.h"
#include "org/orekit/models/earth/tessellation/TileAiming.h"
#include "org/orekit/models/earth/tessellation/Tile.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/hipparchus/geometry/spherical/twod/SphericalPolygonsSet.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace tessellation {

          ::java::lang::Class *EllipsoidTessellator::class$ = NULL;
          jmethodID *EllipsoidTessellator::mids$ = NULL;
          bool EllipsoidTessellator::live$ = false;

          jclass EllipsoidTessellator::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/tessellation/EllipsoidTessellator");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_77f1a5dfde5d9334] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/OneAxisEllipsoid;Lorg/orekit/models/earth/tessellation/TileAiming;I)V");
              mids$[mid_buildSimpleZone_e0cdac0f8844a597] = env->getStaticMethodID(cls, "buildSimpleZone", "(D[Lorg/orekit/bodies/GeodeticPoint;)Lorg/hipparchus/geometry/spherical/twod/SphericalPolygonsSet;");
              mids$[mid_buildSimpleZone_90b26b8ccdda699d] = env->getStaticMethodID(cls, "buildSimpleZone", "(D[[D)Lorg/hipparchus/geometry/spherical/twod/SphericalPolygonsSet;");
              mids$[mid_sample_8281c4d2cd40ce62] = env->getMethodID(cls, "sample", "(Lorg/hipparchus/geometry/spherical/twod/SphericalPolygonsSet;DD)Ljava/util/List;");
              mids$[mid_tessellate_23b10122fe29aea8] = env->getMethodID(cls, "tessellate", "(Lorg/hipparchus/geometry/spherical/twod/SphericalPolygonsSet;DDDDZZ)Ljava/util/List;");
              mids$[mid_toGeodetic_1b240fc4f889c389] = env->getMethodID(cls, "toGeodetic", "(Lorg/hipparchus/geometry/spherical/twod/S2Point;)Lorg/orekit/bodies/GeodeticPoint;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          EllipsoidTessellator::EllipsoidTessellator(const ::org::orekit::bodies::OneAxisEllipsoid & a0, const ::org::orekit::models::earth::tessellation::TileAiming & a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_77f1a5dfde5d9334, a0.this$, a1.this$, a2)) {}

          ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet EllipsoidTessellator::buildSimpleZone(jdouble a0, const JArray< ::org::orekit::bodies::GeodeticPoint > & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet(env->callStaticObjectMethod(cls, mids$[mid_buildSimpleZone_e0cdac0f8844a597], a0, a1.this$));
          }

          ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet EllipsoidTessellator::buildSimpleZone(jdouble a0, const JArray< JArray< jdouble > > & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet(env->callStaticObjectMethod(cls, mids$[mid_buildSimpleZone_90b26b8ccdda699d], a0, a1.this$));
          }

          ::java::util::List EllipsoidTessellator::sample(const ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet & a0, jdouble a1, jdouble a2) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_sample_8281c4d2cd40ce62], a0.this$, a1, a2));
          }

          ::java::util::List EllipsoidTessellator::tessellate(const ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jboolean a5, jboolean a6) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_tessellate_23b10122fe29aea8], a0.this$, a1, a2, a3, a4, a5, a6));
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
          static PyObject *t_EllipsoidTessellator_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_EllipsoidTessellator_instance_(PyTypeObject *type, PyObject *arg);
          static int t_EllipsoidTessellator_init_(t_EllipsoidTessellator *self, PyObject *args, PyObject *kwds);
          static PyObject *t_EllipsoidTessellator_buildSimpleZone(PyTypeObject *type, PyObject *args);
          static PyObject *t_EllipsoidTessellator_sample(t_EllipsoidTessellator *self, PyObject *args);
          static PyObject *t_EllipsoidTessellator_tessellate(t_EllipsoidTessellator *self, PyObject *args);

          static PyMethodDef t_EllipsoidTessellator__methods_[] = {
            DECLARE_METHOD(t_EllipsoidTessellator, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EllipsoidTessellator, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EllipsoidTessellator, buildSimpleZone, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_EllipsoidTessellator, sample, METH_VARARGS),
            DECLARE_METHOD(t_EllipsoidTessellator, tessellate, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(EllipsoidTessellator)[] = {
            { Py_tp_methods, t_EllipsoidTessellator__methods_ },
            { Py_tp_init, (void *) t_EllipsoidTessellator_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(EllipsoidTessellator)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(EllipsoidTessellator, t_EllipsoidTessellator, EllipsoidTessellator);

          void t_EllipsoidTessellator::install(PyObject *module)
          {
            installType(&PY_TYPE(EllipsoidTessellator), &PY_TYPE_DEF(EllipsoidTessellator), module, "EllipsoidTessellator", 0);
          }

          void t_EllipsoidTessellator::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(EllipsoidTessellator), "class_", make_descriptor(EllipsoidTessellator::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EllipsoidTessellator), "wrapfn_", make_descriptor(t_EllipsoidTessellator::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EllipsoidTessellator), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_EllipsoidTessellator_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, EllipsoidTessellator::initializeClass, 1)))
              return NULL;
            return t_EllipsoidTessellator::wrap_Object(EllipsoidTessellator(((t_EllipsoidTessellator *) arg)->object.this$));
          }
          static PyObject *t_EllipsoidTessellator_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, EllipsoidTessellator::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_EllipsoidTessellator_init_(t_EllipsoidTessellator *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::bodies::OneAxisEllipsoid a0((jobject) NULL);
            ::org::orekit::models::earth::tessellation::TileAiming a1((jobject) NULL);
            jint a2;
            EllipsoidTessellator object((jobject) NULL);

            if (!parseArgs(args, "kkI", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, ::org::orekit::models::earth::tessellation::TileAiming::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = EllipsoidTessellator(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_EllipsoidTessellator_buildSimpleZone(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                jdouble a0;
                JArray< ::org::orekit::bodies::GeodeticPoint > a1((jobject) NULL);
                ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet result((jobject) NULL);

                if (!parseArgs(args, "D[k", ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = ::org::orekit::models::earth::tessellation::EllipsoidTessellator::buildSimpleZone(a0, a1));
                  return ::org::hipparchus::geometry::spherical::twod::t_SphericalPolygonsSet::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                JArray< JArray< jdouble > > a1((jobject) NULL);
                ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet result((jobject) NULL);

                if (!parseArgs(args, "D[[D", &a0, &a1))
                {
                  OBJ_CALL(result = ::org::orekit::models::earth::tessellation::EllipsoidTessellator::buildSimpleZone(a0, a1));
                  return ::org::hipparchus::geometry::spherical::twod::t_SphericalPolygonsSet::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "buildSimpleZone", args);
            return NULL;
          }

          static PyObject *t_EllipsoidTessellator_sample(t_EllipsoidTessellator *self, PyObject *args)
          {
            ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            jdouble a2;
            ::java::util::List result((jobject) NULL);

            if (!parseArgs(args, "KDD", ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet::initializeClass, &a0, &p0, ::org::hipparchus::geometry::spherical::twod::t_SphericalPolygonsSet::parameters_, &a1, &a2))
            {
              OBJ_CALL(result = self->object.sample(a0, a1, a2));
              return ::java::util::t_List::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "sample", args);
            return NULL;
          }

          static PyObject *t_EllipsoidTessellator_tessellate(t_EllipsoidTessellator *self, PyObject *args)
          {
            ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            jdouble a2;
            jdouble a3;
            jdouble a4;
            jboolean a5;
            jboolean a6;
            ::java::util::List result((jobject) NULL);

            if (!parseArgs(args, "KDDDDZZ", ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet::initializeClass, &a0, &p0, ::org::hipparchus::geometry::spherical::twod::t_SphericalPolygonsSet::parameters_, &a1, &a2, &a3, &a4, &a5, &a6))
            {
              OBJ_CALL(result = self->object.tessellate(a0, a1, a2, a3, a4, a5, a6));
              return ::java::util::t_List::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "tessellate", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/observation/PhaseShiftCorrection.h"
#include "org/orekit/gnss/SatInSystem.h"
#include "java/util/List.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/gnss/ObservationType.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace observation {

          ::java::lang::Class *PhaseShiftCorrection::class$ = NULL;
          jmethodID *PhaseShiftCorrection::mids$ = NULL;
          bool PhaseShiftCorrection::live$ = false;

          jclass PhaseShiftCorrection::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/observation/PhaseShiftCorrection");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_2c72c6e9e0881d7c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/SatelliteSystem;Lorg/orekit/gnss/ObservationType;DLjava/util/List;)V");
              mids$[mid_getCorrection_dff5885c2c873297] = env->getMethodID(cls, "getCorrection", "()D");
              mids$[mid_getSatelliteSystem_01acae5c1a253b8e] = env->getMethodID(cls, "getSatelliteSystem", "()Lorg/orekit/gnss/SatelliteSystem;");
              mids$[mid_getSatsCorrected_2afa36052df4765d] = env->getMethodID(cls, "getSatsCorrected", "()Ljava/util/List;");
              mids$[mid_getTypeObs_1d725002fa550800] = env->getMethodID(cls, "getTypeObs", "()Lorg/orekit/gnss/ObservationType;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PhaseShiftCorrection::PhaseShiftCorrection(const ::org::orekit::gnss::SatelliteSystem & a0, const ::org::orekit::gnss::ObservationType & a1, jdouble a2, const ::java::util::List & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2c72c6e9e0881d7c, a0.this$, a1.this$, a2, a3.this$)) {}

          jdouble PhaseShiftCorrection::getCorrection() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getCorrection_dff5885c2c873297]);
          }

          ::org::orekit::gnss::SatelliteSystem PhaseShiftCorrection::getSatelliteSystem() const
          {
            return ::org::orekit::gnss::SatelliteSystem(env->callObjectMethod(this$, mids$[mid_getSatelliteSystem_01acae5c1a253b8e]));
          }

          ::java::util::List PhaseShiftCorrection::getSatsCorrected() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSatsCorrected_2afa36052df4765d]));
          }

          ::org::orekit::gnss::ObservationType PhaseShiftCorrection::getTypeObs() const
          {
            return ::org::orekit::gnss::ObservationType(env->callObjectMethod(this$, mids$[mid_getTypeObs_1d725002fa550800]));
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
          static PyObject *t_PhaseShiftCorrection_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PhaseShiftCorrection_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PhaseShiftCorrection_init_(t_PhaseShiftCorrection *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PhaseShiftCorrection_getCorrection(t_PhaseShiftCorrection *self);
          static PyObject *t_PhaseShiftCorrection_getSatelliteSystem(t_PhaseShiftCorrection *self);
          static PyObject *t_PhaseShiftCorrection_getSatsCorrected(t_PhaseShiftCorrection *self);
          static PyObject *t_PhaseShiftCorrection_getTypeObs(t_PhaseShiftCorrection *self);
          static PyObject *t_PhaseShiftCorrection_get__correction(t_PhaseShiftCorrection *self, void *data);
          static PyObject *t_PhaseShiftCorrection_get__satelliteSystem(t_PhaseShiftCorrection *self, void *data);
          static PyObject *t_PhaseShiftCorrection_get__satsCorrected(t_PhaseShiftCorrection *self, void *data);
          static PyObject *t_PhaseShiftCorrection_get__typeObs(t_PhaseShiftCorrection *self, void *data);
          static PyGetSetDef t_PhaseShiftCorrection__fields_[] = {
            DECLARE_GET_FIELD(t_PhaseShiftCorrection, correction),
            DECLARE_GET_FIELD(t_PhaseShiftCorrection, satelliteSystem),
            DECLARE_GET_FIELD(t_PhaseShiftCorrection, satsCorrected),
            DECLARE_GET_FIELD(t_PhaseShiftCorrection, typeObs),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PhaseShiftCorrection__methods_[] = {
            DECLARE_METHOD(t_PhaseShiftCorrection, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseShiftCorrection, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseShiftCorrection, getCorrection, METH_NOARGS),
            DECLARE_METHOD(t_PhaseShiftCorrection, getSatelliteSystem, METH_NOARGS),
            DECLARE_METHOD(t_PhaseShiftCorrection, getSatsCorrected, METH_NOARGS),
            DECLARE_METHOD(t_PhaseShiftCorrection, getTypeObs, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PhaseShiftCorrection)[] = {
            { Py_tp_methods, t_PhaseShiftCorrection__methods_ },
            { Py_tp_init, (void *) t_PhaseShiftCorrection_init_ },
            { Py_tp_getset, t_PhaseShiftCorrection__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PhaseShiftCorrection)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PhaseShiftCorrection, t_PhaseShiftCorrection, PhaseShiftCorrection);

          void t_PhaseShiftCorrection::install(PyObject *module)
          {
            installType(&PY_TYPE(PhaseShiftCorrection), &PY_TYPE_DEF(PhaseShiftCorrection), module, "PhaseShiftCorrection", 0);
          }

          void t_PhaseShiftCorrection::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseShiftCorrection), "class_", make_descriptor(PhaseShiftCorrection::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseShiftCorrection), "wrapfn_", make_descriptor(t_PhaseShiftCorrection::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseShiftCorrection), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PhaseShiftCorrection_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PhaseShiftCorrection::initializeClass, 1)))
              return NULL;
            return t_PhaseShiftCorrection::wrap_Object(PhaseShiftCorrection(((t_PhaseShiftCorrection *) arg)->object.this$));
          }
          static PyObject *t_PhaseShiftCorrection_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PhaseShiftCorrection::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PhaseShiftCorrection_init_(t_PhaseShiftCorrection *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::gnss::ObservationType a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble a2;
            ::java::util::List a3((jobject) NULL);
            PyTypeObject **p3;
            PhaseShiftCorrection object((jobject) NULL);

            if (!parseArgs(args, "KKDK", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::gnss::ObservationType::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1, &p1, ::org::orekit::gnss::t_ObservationType::parameters_, &a2, &a3, &p3, ::java::util::t_List::parameters_))
            {
              INT_CALL(object = PhaseShiftCorrection(a0, a1, a2, a3));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_PhaseShiftCorrection_getCorrection(t_PhaseShiftCorrection *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getCorrection());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_PhaseShiftCorrection_getSatelliteSystem(t_PhaseShiftCorrection *self)
          {
            ::org::orekit::gnss::SatelliteSystem result((jobject) NULL);
            OBJ_CALL(result = self->object.getSatelliteSystem());
            return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(result);
          }

          static PyObject *t_PhaseShiftCorrection_getSatsCorrected(t_PhaseShiftCorrection *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getSatsCorrected());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::gnss::PY_TYPE(SatInSystem));
          }

          static PyObject *t_PhaseShiftCorrection_getTypeObs(t_PhaseShiftCorrection *self)
          {
            ::org::orekit::gnss::ObservationType result((jobject) NULL);
            OBJ_CALL(result = self->object.getTypeObs());
            return ::org::orekit::gnss::t_ObservationType::wrap_Object(result);
          }

          static PyObject *t_PhaseShiftCorrection_get__correction(t_PhaseShiftCorrection *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getCorrection());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_PhaseShiftCorrection_get__satelliteSystem(t_PhaseShiftCorrection *self, void *data)
          {
            ::org::orekit::gnss::SatelliteSystem value((jobject) NULL);
            OBJ_CALL(value = self->object.getSatelliteSystem());
            return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(value);
          }

          static PyObject *t_PhaseShiftCorrection_get__satsCorrected(t_PhaseShiftCorrection *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getSatsCorrected());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_PhaseShiftCorrection_get__typeObs(t_PhaseShiftCorrection *self, void *data)
          {
            ::org::orekit::gnss::ObservationType value((jobject) NULL);
            OBJ_CALL(value = self->object.getTypeObs());
            return ::org::orekit::gnss::t_ObservationType::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/linear/LinearConstraintSet.h"
#include "java/util/Collection.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/linear/LinearConstraint.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace linear {

        ::java::lang::Class *LinearConstraintSet::class$ = NULL;
        jmethodID *LinearConstraintSet::mids$ = NULL;
        bool LinearConstraintSet::live$ = false;

        jclass LinearConstraintSet::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/optim/linear/LinearConstraintSet");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_9593a64b2533d7fd] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/optim/linear/LinearConstraint;)V");
            mids$[mid_init$_f72f53318f80c525] = env->getMethodID(cls, "<init>", "(Ljava/util/Collection;)V");
            mids$[mid_getConstraints_37528d110cff6b74] = env->getMethodID(cls, "getConstraints", "()Ljava/util/Collection;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LinearConstraintSet::LinearConstraintSet(const JArray< ::org::hipparchus::optim::linear::LinearConstraint > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9593a64b2533d7fd, a0.this$)) {}

        LinearConstraintSet::LinearConstraintSet(const ::java::util::Collection & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f72f53318f80c525, a0.this$)) {}

        ::java::util::Collection LinearConstraintSet::getConstraints() const
        {
          return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_getConstraints_37528d110cff6b74]));
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
        static PyObject *t_LinearConstraintSet_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LinearConstraintSet_instance_(PyTypeObject *type, PyObject *arg);
        static int t_LinearConstraintSet_init_(t_LinearConstraintSet *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LinearConstraintSet_getConstraints(t_LinearConstraintSet *self);
        static PyObject *t_LinearConstraintSet_get__constraints(t_LinearConstraintSet *self, void *data);
        static PyGetSetDef t_LinearConstraintSet__fields_[] = {
          DECLARE_GET_FIELD(t_LinearConstraintSet, constraints),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LinearConstraintSet__methods_[] = {
          DECLARE_METHOD(t_LinearConstraintSet, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LinearConstraintSet, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LinearConstraintSet, getConstraints, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LinearConstraintSet)[] = {
          { Py_tp_methods, t_LinearConstraintSet__methods_ },
          { Py_tp_init, (void *) t_LinearConstraintSet_init_ },
          { Py_tp_getset, t_LinearConstraintSet__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LinearConstraintSet)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(LinearConstraintSet, t_LinearConstraintSet, LinearConstraintSet);

        void t_LinearConstraintSet::install(PyObject *module)
        {
          installType(&PY_TYPE(LinearConstraintSet), &PY_TYPE_DEF(LinearConstraintSet), module, "LinearConstraintSet", 0);
        }

        void t_LinearConstraintSet::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LinearConstraintSet), "class_", make_descriptor(LinearConstraintSet::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LinearConstraintSet), "wrapfn_", make_descriptor(t_LinearConstraintSet::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LinearConstraintSet), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LinearConstraintSet_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LinearConstraintSet::initializeClass, 1)))
            return NULL;
          return t_LinearConstraintSet::wrap_Object(LinearConstraintSet(((t_LinearConstraintSet *) arg)->object.this$));
        }
        static PyObject *t_LinearConstraintSet_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LinearConstraintSet::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_LinearConstraintSet_init_(t_LinearConstraintSet *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< ::org::hipparchus::optim::linear::LinearConstraint > a0((jobject) NULL);
              LinearConstraintSet object((jobject) NULL);

              if (!parseArgs(args, "[k", ::org::hipparchus::optim::linear::LinearConstraint::initializeClass, &a0))
              {
                INT_CALL(object = LinearConstraintSet(a0));
                self->object = object;
                break;
              }
            }
            {
              ::java::util::Collection a0((jobject) NULL);
              PyTypeObject **p0;
              LinearConstraintSet object((jobject) NULL);

              if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
              {
                INT_CALL(object = LinearConstraintSet(a0));
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

        static PyObject *t_LinearConstraintSet_getConstraints(t_LinearConstraintSet *self)
        {
          ::java::util::Collection result((jobject) NULL);
          OBJ_CALL(result = self->object.getConstraints());
          return ::java::util::t_Collection::wrap_Object(result, ::org::hipparchus::optim::linear::PY_TYPE(LinearConstraint));
        }

        static PyObject *t_LinearConstraintSet_get__constraints(t_LinearConstraintSet *self, void *data)
        {
          ::java::util::Collection value((jobject) NULL);
          OBJ_CALL(value = self->object.getConstraints());
          return ::java::util::t_Collection::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/BrouwerLyddanePropagator.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics.h"
#include "org/orekit/utils/ParameterDriversProvider.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/util/List.h"
#include "org/orekit/orbits/KeplerianOrbit.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *BrouwerLyddanePropagator::class$ = NULL;
        jmethodID *BrouwerLyddanePropagator::mids$ = NULL;
        bool BrouwerLyddanePropagator::live$ = false;
        jdouble BrouwerLyddanePropagator::M2 = (jdouble) 0;
        ::java::lang::String *BrouwerLyddanePropagator::M2_NAME = NULL;

        jclass BrouwerLyddanePropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/BrouwerLyddanePropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_31607b718e7a1097] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;D)V");
            mids$[mid_init$_a1b1c06f492959e4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/propagation/PropagationType;D)V");
            mids$[mid_init$_8646cc10dd33bbf2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;DLorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;D)V");
            mids$[mid_init$_2c72174dffba1894] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;D)V");
            mids$[mid_init$_f8b9250146f13e12] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DLorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;D)V");
            mids$[mid_init$_252682d189d40f9c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DLorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/propagation/PropagationType;D)V");
            mids$[mid_init$_54e2c5d7b9423480] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DLorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;D)V");
            mids$[mid_init$_20cb587487bfb507] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DLorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;Lorg/orekit/propagation/PropagationType;D)V");
            mids$[mid_init$_4afced4a8ff4bea6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;DDDDDDD)V");
            mids$[mid_init$_e47ae3c1fa8fb703] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;DDDDDDDD)V");
            mids$[mid_init$_54f20a766b03c649] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DDDDDDD)V");
            mids$[mid_init$_0a5ace5164997436] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DDDDDDDD)V");
            mids$[mid_init$_97c1c2d9fb9540d2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DDDDDDDLorg/orekit/propagation/PropagationType;D)V");
            mids$[mid_init$_c47d0d0c5cbf47f4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DDDDDDDLorg/orekit/propagation/PropagationType;DDI)V");
            mids$[mid_computeMeanOrbit_246b62ce75e6ee7b] = env->getStaticMethodID(cls, "computeMeanOrbit", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;D)Lorg/orekit/orbits/KeplerianOrbit;");
            mids$[mid_computeMeanOrbit_6de83e60186a683f] = env->getStaticMethodID(cls, "computeMeanOrbit", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;DDI)Lorg/orekit/orbits/KeplerianOrbit;");
            mids$[mid_computeMeanOrbit_739ead9f7fc14c65] = env->getStaticMethodID(cls, "computeMeanOrbit", "(Lorg/orekit/orbits/Orbit;DDDDDDDDI)Lorg/orekit/orbits/KeplerianOrbit;");
            mids$[mid_getCk0_60c7040667a7dc5c] = env->getMethodID(cls, "getCk0", "()[D");
            mids$[mid_getM2_dff5885c2c873297] = env->getMethodID(cls, "getM2", "()D");
            mids$[mid_getMu_dff5885c2c873297] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_getReferenceRadius_dff5885c2c873297] = env->getMethodID(cls, "getReferenceRadius", "()D");
            mids$[mid_propagateOrbit_ce31a304312e0d13] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/orbits/KeplerianOrbit;");
            mids$[mid_resetInitialState_0ee5c56004643a2e] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_resetInitialState_49bd3c28fa9b4521] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/PropagationType;)V");
            mids$[mid_resetInitialState_e810a1bf28643513] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/PropagationType;DI)V");
            mids$[mid_getMass_bf1d7732f1acb697] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_resetIntermediateState_33f4696e4edaa03c] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/SpacecraftState;Z)V");
            mids$[mid_resetIntermediateState_f44ee54963124581] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/SpacecraftState;ZDI)V");
            mids$[mid_getJacobiansColumnsNames_2afa36052df4765d] = env->getMethodID(cls, "getJacobiansColumnsNames", "()Ljava/util/List;");
            mids$[mid_createHarvester_5cfd2a13971b74c7] = env->getMethodID(cls, "createHarvester", "(Ljava/lang/String;Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/utils/DoubleArrayDictionary;)Lorg/orekit/propagation/AbstractMatricesHarvester;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            M2 = env->getStaticDoubleField(cls, "M2");
            M2_NAME = new ::java::lang::String(env->getStaticObjectField(cls, "M2_NAME", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BrouwerLyddanePropagator::BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, jdouble a2) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_31607b718e7a1097, a0.this$, a1.this$, a2)) {}

        BrouwerLyddanePropagator::BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, const ::org::orekit::propagation::PropagationType & a2, jdouble a3) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_a1b1c06f492959e4, a0.this$, a1.this$, a2.this$, a3)) {}

        BrouwerLyddanePropagator::BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit & a0, jdouble a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a2, jdouble a3) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_8646cc10dd33bbf2, a0.this$, a1, a2.this$, a3)) {}

        BrouwerLyddanePropagator::BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a2, jdouble a3) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_2c72174dffba1894, a0.this$, a1.this$, a2.this$, a3)) {}

        BrouwerLyddanePropagator::BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3, jdouble a4) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_f8b9250146f13e12, a0.this$, a1.this$, a2, a3.this$, a4)) {}

        BrouwerLyddanePropagator::BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3, const ::org::orekit::propagation::PropagationType & a4, jdouble a5) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_252682d189d40f9c, a0.this$, a1.this$, a2, a3.this$, a4.this$, a5)) {}

        BrouwerLyddanePropagator::BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics & a4, jdouble a5) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_54e2c5d7b9423480, a0.this$, a1.this$, a2, a3.this$, a4.this$, a5)) {}

        BrouwerLyddanePropagator::BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics & a4, const ::org::orekit::propagation::PropagationType & a5, jdouble a6) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_20cb587487bfb507, a0.this$, a1.this$, a2, a3.this$, a4.this$, a5.this$, a6)) {}

        BrouwerLyddanePropagator::BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_4afced4a8ff4bea6, a0.this$, a1, a2, a3, a4, a5, a6, a7)) {}

        BrouwerLyddanePropagator::BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_e47ae3c1fa8fb703, a0.this$, a1, a2, a3, a4, a5, a6, a7, a8)) {}

        BrouwerLyddanePropagator::BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_54f20a766b03c649, a0.this$, a1.this$, a2, a3, a4, a5, a6, a7, a8)) {}

        BrouwerLyddanePropagator::BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_0a5ace5164997436, a0.this$, a1.this$, a2, a3, a4, a5, a6, a7, a8, a9)) {}

        BrouwerLyddanePropagator::BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, const ::org::orekit::propagation::PropagationType & a9, jdouble a10) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_97c1c2d9fb9540d2, a0.this$, a1.this$, a2, a3, a4, a5, a6, a7, a8, a9.this$, a10)) {}

        BrouwerLyddanePropagator::BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, const ::org::orekit::propagation::PropagationType & a9, jdouble a10, jdouble a11, jint a12) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_c47d0d0c5cbf47f4, a0.this$, a1.this$, a2, a3, a4, a5, a6, a7, a8, a9.this$, a10, a11, a12)) {}

        ::org::orekit::orbits::KeplerianOrbit BrouwerLyddanePropagator::computeMeanOrbit(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics & a2, jdouble a3)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::orbits::KeplerianOrbit(env->callStaticObjectMethod(cls, mids$[mid_computeMeanOrbit_246b62ce75e6ee7b], a0.this$, a1.this$, a2.this$, a3));
        }

        ::org::orekit::orbits::KeplerianOrbit BrouwerLyddanePropagator::computeMeanOrbit(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics & a2, jdouble a3, jdouble a4, jint a5)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::orbits::KeplerianOrbit(env->callStaticObjectMethod(cls, mids$[mid_computeMeanOrbit_6de83e60186a683f], a0.this$, a1.this$, a2.this$, a3, a4, a5));
        }

        ::org::orekit::orbits::KeplerianOrbit BrouwerLyddanePropagator::computeMeanOrbit(const ::org::orekit::orbits::Orbit & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jint a9)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::orbits::KeplerianOrbit(env->callStaticObjectMethod(cls, mids$[mid_computeMeanOrbit_739ead9f7fc14c65], a0.this$, a1, a2, a3, a4, a5, a6, a7, a8, a9));
        }

        JArray< jdouble > BrouwerLyddanePropagator::getCk0() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getCk0_60c7040667a7dc5c]));
        }

        jdouble BrouwerLyddanePropagator::getM2() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getM2_dff5885c2c873297]);
        }

        jdouble BrouwerLyddanePropagator::getMu() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_dff5885c2c873297]);
        }

        ::java::util::List BrouwerLyddanePropagator::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
        }

        jdouble BrouwerLyddanePropagator::getReferenceRadius() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getReferenceRadius_dff5885c2c873297]);
        }

        ::org::orekit::orbits::KeplerianOrbit BrouwerLyddanePropagator::propagateOrbit(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::orbits::KeplerianOrbit(env->callObjectMethod(this$, mids$[mid_propagateOrbit_ce31a304312e0d13], a0.this$));
        }

        void BrouwerLyddanePropagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_0ee5c56004643a2e], a0.this$);
        }

        void BrouwerLyddanePropagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::PropagationType & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_49bd3c28fa9b4521], a0.this$, a1.this$);
        }

        void BrouwerLyddanePropagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::PropagationType & a1, jdouble a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_e810a1bf28643513], a0.this$, a1.this$, a2, a3);
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
        static PyObject *t_BrouwerLyddanePropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BrouwerLyddanePropagator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_BrouwerLyddanePropagator_init_(t_BrouwerLyddanePropagator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BrouwerLyddanePropagator_computeMeanOrbit(PyTypeObject *type, PyObject *args);
        static PyObject *t_BrouwerLyddanePropagator_getCk0(t_BrouwerLyddanePropagator *self);
        static PyObject *t_BrouwerLyddanePropagator_getM2(t_BrouwerLyddanePropagator *self);
        static PyObject *t_BrouwerLyddanePropagator_getMu(t_BrouwerLyddanePropagator *self);
        static PyObject *t_BrouwerLyddanePropagator_getParametersDrivers(t_BrouwerLyddanePropagator *self);
        static PyObject *t_BrouwerLyddanePropagator_getReferenceRadius(t_BrouwerLyddanePropagator *self);
        static PyObject *t_BrouwerLyddanePropagator_propagateOrbit(t_BrouwerLyddanePropagator *self, PyObject *arg);
        static PyObject *t_BrouwerLyddanePropagator_resetInitialState(t_BrouwerLyddanePropagator *self, PyObject *args);
        static PyObject *t_BrouwerLyddanePropagator_get__ck0(t_BrouwerLyddanePropagator *self, void *data);
        static PyObject *t_BrouwerLyddanePropagator_get__m2(t_BrouwerLyddanePropagator *self, void *data);
        static PyObject *t_BrouwerLyddanePropagator_get__mu(t_BrouwerLyddanePropagator *self, void *data);
        static PyObject *t_BrouwerLyddanePropagator_get__parametersDrivers(t_BrouwerLyddanePropagator *self, void *data);
        static PyObject *t_BrouwerLyddanePropagator_get__referenceRadius(t_BrouwerLyddanePropagator *self, void *data);
        static PyGetSetDef t_BrouwerLyddanePropagator__fields_[] = {
          DECLARE_GET_FIELD(t_BrouwerLyddanePropagator, ck0),
          DECLARE_GET_FIELD(t_BrouwerLyddanePropagator, m2),
          DECLARE_GET_FIELD(t_BrouwerLyddanePropagator, mu),
          DECLARE_GET_FIELD(t_BrouwerLyddanePropagator, parametersDrivers),
          DECLARE_GET_FIELD(t_BrouwerLyddanePropagator, referenceRadius),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BrouwerLyddanePropagator__methods_[] = {
          DECLARE_METHOD(t_BrouwerLyddanePropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BrouwerLyddanePropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BrouwerLyddanePropagator, computeMeanOrbit, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_BrouwerLyddanePropagator, getCk0, METH_NOARGS),
          DECLARE_METHOD(t_BrouwerLyddanePropagator, getM2, METH_NOARGS),
          DECLARE_METHOD(t_BrouwerLyddanePropagator, getMu, METH_NOARGS),
          DECLARE_METHOD(t_BrouwerLyddanePropagator, getParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_BrouwerLyddanePropagator, getReferenceRadius, METH_NOARGS),
          DECLARE_METHOD(t_BrouwerLyddanePropagator, propagateOrbit, METH_O),
          DECLARE_METHOD(t_BrouwerLyddanePropagator, resetInitialState, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BrouwerLyddanePropagator)[] = {
          { Py_tp_methods, t_BrouwerLyddanePropagator__methods_ },
          { Py_tp_init, (void *) t_BrouwerLyddanePropagator_init_ },
          { Py_tp_getset, t_BrouwerLyddanePropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BrouwerLyddanePropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::analytical::AbstractAnalyticalPropagator),
          NULL
        };

        DEFINE_TYPE(BrouwerLyddanePropagator, t_BrouwerLyddanePropagator, BrouwerLyddanePropagator);

        void t_BrouwerLyddanePropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(BrouwerLyddanePropagator), &PY_TYPE_DEF(BrouwerLyddanePropagator), module, "BrouwerLyddanePropagator", 0);
        }

        void t_BrouwerLyddanePropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BrouwerLyddanePropagator), "class_", make_descriptor(BrouwerLyddanePropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BrouwerLyddanePropagator), "wrapfn_", make_descriptor(t_BrouwerLyddanePropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BrouwerLyddanePropagator), "boxfn_", make_descriptor(boxObject));
          env->getClass(BrouwerLyddanePropagator::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(BrouwerLyddanePropagator), "M2", make_descriptor(BrouwerLyddanePropagator::M2));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BrouwerLyddanePropagator), "M2_NAME", make_descriptor(j2p(*BrouwerLyddanePropagator::M2_NAME)));
        }

        static PyObject *t_BrouwerLyddanePropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BrouwerLyddanePropagator::initializeClass, 1)))
            return NULL;
          return t_BrouwerLyddanePropagator::wrap_Object(BrouwerLyddanePropagator(((t_BrouwerLyddanePropagator *) arg)->object.this$));
        }
        static PyObject *t_BrouwerLyddanePropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BrouwerLyddanePropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_BrouwerLyddanePropagator_init_(t_BrouwerLyddanePropagator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              jdouble a2;
              BrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "kkD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = BrouwerLyddanePropagator(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              ::org::orekit::propagation::PropagationType a2((jobject) NULL);
              PyTypeObject **p2;
              jdouble a3;
              BrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "kkKD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::propagation::t_PropagationType::parameters_, &a3))
              {
                INT_CALL(object = BrouwerLyddanePropagator(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              jdouble a1;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a2((jobject) NULL);
              jdouble a3;
              BrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "kDkD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = BrouwerLyddanePropagator(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a2((jobject) NULL);
              jdouble a3;
              BrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "kkkD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = BrouwerLyddanePropagator(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              jdouble a2;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a3((jobject) NULL);
              jdouble a4;
              BrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "kkDkD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = BrouwerLyddanePropagator(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
            goto err;
           case 6:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              jdouble a2;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a3((jobject) NULL);
              ::org::orekit::propagation::PropagationType a4((jobject) NULL);
              PyTypeObject **p4;
              jdouble a5;
              BrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "kkDkKD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::org::orekit::propagation::t_PropagationType::parameters_, &a5))
              {
                INT_CALL(object = BrouwerLyddanePropagator(a0, a1, a2, a3, a4, a5));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              jdouble a2;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a3((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics a4((jobject) NULL);
              jdouble a5;
              BrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "kkDkkD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
              {
                INT_CALL(object = BrouwerLyddanePropagator(a0, a1, a2, a3, a4, a5));
                self->object = object;
                break;
              }
            }
            goto err;
           case 7:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              jdouble a2;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a3((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics a4((jobject) NULL);
              ::org::orekit::propagation::PropagationType a5((jobject) NULL);
              PyTypeObject **p5;
              jdouble a6;
              BrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "kkDkkKD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &p5, ::org::orekit::propagation::t_PropagationType::parameters_, &a6))
              {
                INT_CALL(object = BrouwerLyddanePropagator(a0, a1, a2, a3, a4, a5, a6));
                self->object = object;
                break;
              }
            }
            goto err;
           case 8:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              BrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "kDDDDDDD", ::org::orekit::orbits::Orbit::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
              {
                INT_CALL(object = BrouwerLyddanePropagator(a0, a1, a2, a3, a4, a5, a6, a7));
                self->object = object;
                break;
              }
            }
            goto err;
           case 9:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              BrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "kDDDDDDDD", ::org::orekit::orbits::Orbit::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8))
              {
                INT_CALL(object = BrouwerLyddanePropagator(a0, a1, a2, a3, a4, a5, a6, a7, a8));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              BrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "kkDDDDDDD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8))
              {
                INT_CALL(object = BrouwerLyddanePropagator(a0, a1, a2, a3, a4, a5, a6, a7, a8));
                self->object = object;
                break;
              }
            }
            goto err;
           case 10:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              jdouble a9;
              BrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "kkDDDDDDDD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9))
              {
                INT_CALL(object = BrouwerLyddanePropagator(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
                self->object = object;
                break;
              }
            }
            goto err;
           case 11:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              ::org::orekit::propagation::PropagationType a9((jobject) NULL);
              PyTypeObject **p9;
              jdouble a10;
              BrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "kkDDDDDDDKD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &p9, ::org::orekit::propagation::t_PropagationType::parameters_, &a10))
              {
                INT_CALL(object = BrouwerLyddanePropagator(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10));
                self->object = object;
                break;
              }
            }
            goto err;
           case 13:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              ::org::orekit::propagation::PropagationType a9((jobject) NULL);
              PyTypeObject **p9;
              jdouble a10;
              jdouble a11;
              jint a12;
              BrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "kkDDDDDDDKDDI", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &p9, ::org::orekit::propagation::t_PropagationType::parameters_, &a10, &a11, &a12))
              {
                INT_CALL(object = BrouwerLyddanePropagator(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12));
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

        static PyObject *t_BrouwerLyddanePropagator_computeMeanOrbit(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics a2((jobject) NULL);
              jdouble a3;
              ::org::orekit::orbits::KeplerianOrbit result((jobject) NULL);

              if (!parseArgs(args, "kkkD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = ::org::orekit::propagation::analytical::BrouwerLyddanePropagator::computeMeanOrbit(a0, a1, a2, a3));
                return ::org::orekit::orbits::t_KeplerianOrbit::wrap_Object(result);
              }
            }
            break;
           case 6:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics a2((jobject) NULL);
              jdouble a3;
              jdouble a4;
              jint a5;
              ::org::orekit::orbits::KeplerianOrbit result((jobject) NULL);

              if (!parseArgs(args, "kkkDDI", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(result = ::org::orekit::propagation::analytical::BrouwerLyddanePropagator::computeMeanOrbit(a0, a1, a2, a3, a4, a5));
                return ::org::orekit::orbits::t_KeplerianOrbit::wrap_Object(result);
              }
            }
            break;
           case 10:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              jint a9;
              ::org::orekit::orbits::KeplerianOrbit result((jobject) NULL);

              if (!parseArgs(args, "kDDDDDDDDI", ::org::orekit::orbits::Orbit::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9))
              {
                OBJ_CALL(result = ::org::orekit::propagation::analytical::BrouwerLyddanePropagator::computeMeanOrbit(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
                return ::org::orekit::orbits::t_KeplerianOrbit::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError(type, "computeMeanOrbit", args);
          return NULL;
        }

        static PyObject *t_BrouwerLyddanePropagator_getCk0(t_BrouwerLyddanePropagator *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getCk0());
          return result.wrap();
        }

        static PyObject *t_BrouwerLyddanePropagator_getM2(t_BrouwerLyddanePropagator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getM2());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BrouwerLyddanePropagator_getMu(t_BrouwerLyddanePropagator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMu());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BrouwerLyddanePropagator_getParametersDrivers(t_BrouwerLyddanePropagator *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_BrouwerLyddanePropagator_getReferenceRadius(t_BrouwerLyddanePropagator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getReferenceRadius());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BrouwerLyddanePropagator_propagateOrbit(t_BrouwerLyddanePropagator *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::orbits::KeplerianOrbit result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.propagateOrbit(a0));
            return ::org::orekit::orbits::t_KeplerianOrbit::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "propagateOrbit", arg);
          return NULL;
        }

        static PyObject *t_BrouwerLyddanePropagator_resetInitialState(t_BrouwerLyddanePropagator *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
              {
                OBJ_CALL(self->object.resetInitialState(a0));
                Py_RETURN_NONE;
              }
            }
            break;
           case 2:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              ::org::orekit::propagation::PropagationType a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "kK", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_))
              {
                OBJ_CALL(self->object.resetInitialState(a0, a1));
                Py_RETURN_NONE;
              }
            }
            break;
           case 4:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              ::org::orekit::propagation::PropagationType a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              jint a3;

              if (!parseArgs(args, "kKDI", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_, &a2, &a3))
              {
                OBJ_CALL(self->object.resetInitialState(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          return callSuper(PY_TYPE(BrouwerLyddanePropagator), (PyObject *) self, "resetInitialState", args, 2);
        }

        static PyObject *t_BrouwerLyddanePropagator_get__ck0(t_BrouwerLyddanePropagator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getCk0());
          return value.wrap();
        }

        static PyObject *t_BrouwerLyddanePropagator_get__m2(t_BrouwerLyddanePropagator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getM2());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BrouwerLyddanePropagator_get__mu(t_BrouwerLyddanePropagator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMu());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BrouwerLyddanePropagator_get__parametersDrivers(t_BrouwerLyddanePropagator *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_BrouwerLyddanePropagator_get__referenceRadius(t_BrouwerLyddanePropagator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getReferenceRadius());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/StatisticalMultivariateSummary.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {

        ::java::lang::Class *StatisticalMultivariateSummary::class$ = NULL;
        jmethodID *StatisticalMultivariateSummary::mids$ = NULL;
        bool StatisticalMultivariateSummary::live$ = false;

        jclass StatisticalMultivariateSummary::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/StatisticalMultivariateSummary");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getCovariance_688b496048ff947b] = env->getMethodID(cls, "getCovariance", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getDimension_570ce0828f81a2c1] = env->getMethodID(cls, "getDimension", "()I");
            mids$[mid_getGeometricMean_60c7040667a7dc5c] = env->getMethodID(cls, "getGeometricMean", "()[D");
            mids$[mid_getMax_60c7040667a7dc5c] = env->getMethodID(cls, "getMax", "()[D");
            mids$[mid_getMean_60c7040667a7dc5c] = env->getMethodID(cls, "getMean", "()[D");
            mids$[mid_getMin_60c7040667a7dc5c] = env->getMethodID(cls, "getMin", "()[D");
            mids$[mid_getN_492808a339bfa35f] = env->getMethodID(cls, "getN", "()J");
            mids$[mid_getStandardDeviation_60c7040667a7dc5c] = env->getMethodID(cls, "getStandardDeviation", "()[D");
            mids$[mid_getSum_60c7040667a7dc5c] = env->getMethodID(cls, "getSum", "()[D");
            mids$[mid_getSumLog_60c7040667a7dc5c] = env->getMethodID(cls, "getSumLog", "()[D");
            mids$[mid_getSumSq_60c7040667a7dc5c] = env->getMethodID(cls, "getSumSq", "()[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::linear::RealMatrix StatisticalMultivariateSummary::getCovariance() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCovariance_688b496048ff947b]));
        }

        jint StatisticalMultivariateSummary::getDimension() const
        {
          return env->callIntMethod(this$, mids$[mid_getDimension_570ce0828f81a2c1]);
        }

        JArray< jdouble > StatisticalMultivariateSummary::getGeometricMean() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getGeometricMean_60c7040667a7dc5c]));
        }

        JArray< jdouble > StatisticalMultivariateSummary::getMax() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getMax_60c7040667a7dc5c]));
        }

        JArray< jdouble > StatisticalMultivariateSummary::getMean() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getMean_60c7040667a7dc5c]));
        }

        JArray< jdouble > StatisticalMultivariateSummary::getMin() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getMin_60c7040667a7dc5c]));
        }

        jlong StatisticalMultivariateSummary::getN() const
        {
          return env->callLongMethod(this$, mids$[mid_getN_492808a339bfa35f]);
        }

        JArray< jdouble > StatisticalMultivariateSummary::getStandardDeviation() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getStandardDeviation_60c7040667a7dc5c]));
        }

        JArray< jdouble > StatisticalMultivariateSummary::getSum() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getSum_60c7040667a7dc5c]));
        }

        JArray< jdouble > StatisticalMultivariateSummary::getSumLog() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getSumLog_60c7040667a7dc5c]));
        }

        JArray< jdouble > StatisticalMultivariateSummary::getSumSq() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getSumSq_60c7040667a7dc5c]));
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
        static PyObject *t_StatisticalMultivariateSummary_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StatisticalMultivariateSummary_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StatisticalMultivariateSummary_getCovariance(t_StatisticalMultivariateSummary *self);
        static PyObject *t_StatisticalMultivariateSummary_getDimension(t_StatisticalMultivariateSummary *self);
        static PyObject *t_StatisticalMultivariateSummary_getGeometricMean(t_StatisticalMultivariateSummary *self);
        static PyObject *t_StatisticalMultivariateSummary_getMax(t_StatisticalMultivariateSummary *self);
        static PyObject *t_StatisticalMultivariateSummary_getMean(t_StatisticalMultivariateSummary *self);
        static PyObject *t_StatisticalMultivariateSummary_getMin(t_StatisticalMultivariateSummary *self);
        static PyObject *t_StatisticalMultivariateSummary_getN(t_StatisticalMultivariateSummary *self);
        static PyObject *t_StatisticalMultivariateSummary_getStandardDeviation(t_StatisticalMultivariateSummary *self);
        static PyObject *t_StatisticalMultivariateSummary_getSum(t_StatisticalMultivariateSummary *self);
        static PyObject *t_StatisticalMultivariateSummary_getSumLog(t_StatisticalMultivariateSummary *self);
        static PyObject *t_StatisticalMultivariateSummary_getSumSq(t_StatisticalMultivariateSummary *self);
        static PyObject *t_StatisticalMultivariateSummary_get__covariance(t_StatisticalMultivariateSummary *self, void *data);
        static PyObject *t_StatisticalMultivariateSummary_get__dimension(t_StatisticalMultivariateSummary *self, void *data);
        static PyObject *t_StatisticalMultivariateSummary_get__geometricMean(t_StatisticalMultivariateSummary *self, void *data);
        static PyObject *t_StatisticalMultivariateSummary_get__max(t_StatisticalMultivariateSummary *self, void *data);
        static PyObject *t_StatisticalMultivariateSummary_get__mean(t_StatisticalMultivariateSummary *self, void *data);
        static PyObject *t_StatisticalMultivariateSummary_get__min(t_StatisticalMultivariateSummary *self, void *data);
        static PyObject *t_StatisticalMultivariateSummary_get__n(t_StatisticalMultivariateSummary *self, void *data);
        static PyObject *t_StatisticalMultivariateSummary_get__standardDeviation(t_StatisticalMultivariateSummary *self, void *data);
        static PyObject *t_StatisticalMultivariateSummary_get__sum(t_StatisticalMultivariateSummary *self, void *data);
        static PyObject *t_StatisticalMultivariateSummary_get__sumLog(t_StatisticalMultivariateSummary *self, void *data);
        static PyObject *t_StatisticalMultivariateSummary_get__sumSq(t_StatisticalMultivariateSummary *self, void *data);
        static PyGetSetDef t_StatisticalMultivariateSummary__fields_[] = {
          DECLARE_GET_FIELD(t_StatisticalMultivariateSummary, covariance),
          DECLARE_GET_FIELD(t_StatisticalMultivariateSummary, dimension),
          DECLARE_GET_FIELD(t_StatisticalMultivariateSummary, geometricMean),
          DECLARE_GET_FIELD(t_StatisticalMultivariateSummary, max),
          DECLARE_GET_FIELD(t_StatisticalMultivariateSummary, mean),
          DECLARE_GET_FIELD(t_StatisticalMultivariateSummary, min),
          DECLARE_GET_FIELD(t_StatisticalMultivariateSummary, n),
          DECLARE_GET_FIELD(t_StatisticalMultivariateSummary, standardDeviation),
          DECLARE_GET_FIELD(t_StatisticalMultivariateSummary, sum),
          DECLARE_GET_FIELD(t_StatisticalMultivariateSummary, sumLog),
          DECLARE_GET_FIELD(t_StatisticalMultivariateSummary, sumSq),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_StatisticalMultivariateSummary__methods_[] = {
          DECLARE_METHOD(t_StatisticalMultivariateSummary, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StatisticalMultivariateSummary, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StatisticalMultivariateSummary, getCovariance, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalMultivariateSummary, getDimension, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalMultivariateSummary, getGeometricMean, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalMultivariateSummary, getMax, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalMultivariateSummary, getMean, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalMultivariateSummary, getMin, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalMultivariateSummary, getN, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalMultivariateSummary, getStandardDeviation, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalMultivariateSummary, getSum, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalMultivariateSummary, getSumLog, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalMultivariateSummary, getSumSq, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StatisticalMultivariateSummary)[] = {
          { Py_tp_methods, t_StatisticalMultivariateSummary__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_StatisticalMultivariateSummary__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StatisticalMultivariateSummary)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(StatisticalMultivariateSummary, t_StatisticalMultivariateSummary, StatisticalMultivariateSummary);

        void t_StatisticalMultivariateSummary::install(PyObject *module)
        {
          installType(&PY_TYPE(StatisticalMultivariateSummary), &PY_TYPE_DEF(StatisticalMultivariateSummary), module, "StatisticalMultivariateSummary", 0);
        }

        void t_StatisticalMultivariateSummary::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StatisticalMultivariateSummary), "class_", make_descriptor(StatisticalMultivariateSummary::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StatisticalMultivariateSummary), "wrapfn_", make_descriptor(t_StatisticalMultivariateSummary::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StatisticalMultivariateSummary), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_StatisticalMultivariateSummary_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StatisticalMultivariateSummary::initializeClass, 1)))
            return NULL;
          return t_StatisticalMultivariateSummary::wrap_Object(StatisticalMultivariateSummary(((t_StatisticalMultivariateSummary *) arg)->object.this$));
        }
        static PyObject *t_StatisticalMultivariateSummary_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StatisticalMultivariateSummary::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_StatisticalMultivariateSummary_getCovariance(t_StatisticalMultivariateSummary *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getCovariance());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_StatisticalMultivariateSummary_getDimension(t_StatisticalMultivariateSummary *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getDimension());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_StatisticalMultivariateSummary_getGeometricMean(t_StatisticalMultivariateSummary *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getGeometricMean());
          return result.wrap();
        }

        static PyObject *t_StatisticalMultivariateSummary_getMax(t_StatisticalMultivariateSummary *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getMax());
          return result.wrap();
        }

        static PyObject *t_StatisticalMultivariateSummary_getMean(t_StatisticalMultivariateSummary *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getMean());
          return result.wrap();
        }

        static PyObject *t_StatisticalMultivariateSummary_getMin(t_StatisticalMultivariateSummary *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getMin());
          return result.wrap();
        }

        static PyObject *t_StatisticalMultivariateSummary_getN(t_StatisticalMultivariateSummary *self)
        {
          jlong result;
          OBJ_CALL(result = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        static PyObject *t_StatisticalMultivariateSummary_getStandardDeviation(t_StatisticalMultivariateSummary *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getStandardDeviation());
          return result.wrap();
        }

        static PyObject *t_StatisticalMultivariateSummary_getSum(t_StatisticalMultivariateSummary *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getSum());
          return result.wrap();
        }

        static PyObject *t_StatisticalMultivariateSummary_getSumLog(t_StatisticalMultivariateSummary *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getSumLog());
          return result.wrap();
        }

        static PyObject *t_StatisticalMultivariateSummary_getSumSq(t_StatisticalMultivariateSummary *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getSumSq());
          return result.wrap();
        }

        static PyObject *t_StatisticalMultivariateSummary_get__covariance(t_StatisticalMultivariateSummary *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getCovariance());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_StatisticalMultivariateSummary_get__dimension(t_StatisticalMultivariateSummary *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getDimension());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_StatisticalMultivariateSummary_get__geometricMean(t_StatisticalMultivariateSummary *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getGeometricMean());
          return value.wrap();
        }

        static PyObject *t_StatisticalMultivariateSummary_get__max(t_StatisticalMultivariateSummary *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getMax());
          return value.wrap();
        }

        static PyObject *t_StatisticalMultivariateSummary_get__mean(t_StatisticalMultivariateSummary *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getMean());
          return value.wrap();
        }

        static PyObject *t_StatisticalMultivariateSummary_get__min(t_StatisticalMultivariateSummary *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getMin());
          return value.wrap();
        }

        static PyObject *t_StatisticalMultivariateSummary_get__n(t_StatisticalMultivariateSummary *self, void *data)
        {
          jlong value;
          OBJ_CALL(value = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) value);
        }

        static PyObject *t_StatisticalMultivariateSummary_get__standardDeviation(t_StatisticalMultivariateSummary *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getStandardDeviation());
          return value.wrap();
        }

        static PyObject *t_StatisticalMultivariateSummary_get__sum(t_StatisticalMultivariateSummary *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getSum());
          return value.wrap();
        }

        static PyObject *t_StatisticalMultivariateSummary_get__sumLog(t_StatisticalMultivariateSummary *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getSumLog());
          return value.wrap();
        }

        static PyObject *t_StatisticalMultivariateSummary_get__sumSq(t_StatisticalMultivariateSummary *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getSumSq());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Gaussian.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Gaussian::class$ = NULL;
        jmethodID *Gaussian::mids$ = NULL;
        bool Gaussian::live$ = false;

        jclass Gaussian::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Gaussian");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_8f2e782d5278b131] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_2c56b6dd4d4b1dec] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_value_dcbc7ce2902fa136] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_73d6acaa8ebd2b7d] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Gaussian::Gaussian() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        Gaussian::Gaussian(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8f2e782d5278b131, a0, a1)) {}

        Gaussian::Gaussian(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2c56b6dd4d4b1dec, a0, a1, a2)) {}

        jdouble Gaussian::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_dcbc7ce2902fa136], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Gaussian::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_73d6acaa8ebd2b7d], a0.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/hipparchus/analysis/function/Gaussian$Parametric.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {
        static PyObject *t_Gaussian_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Gaussian_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Gaussian_init_(t_Gaussian *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Gaussian_value(t_Gaussian *self, PyObject *args);

        static PyMethodDef t_Gaussian__methods_[] = {
          DECLARE_METHOD(t_Gaussian, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Gaussian, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Gaussian, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Gaussian)[] = {
          { Py_tp_methods, t_Gaussian__methods_ },
          { Py_tp_init, (void *) t_Gaussian_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Gaussian)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Gaussian, t_Gaussian, Gaussian);

        void t_Gaussian::install(PyObject *module)
        {
          installType(&PY_TYPE(Gaussian), &PY_TYPE_DEF(Gaussian), module, "Gaussian", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Gaussian), "Parametric", make_descriptor(&PY_TYPE_DEF(Gaussian$Parametric)));
        }

        void t_Gaussian::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Gaussian), "class_", make_descriptor(Gaussian::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Gaussian), "wrapfn_", make_descriptor(t_Gaussian::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Gaussian), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Gaussian_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Gaussian::initializeClass, 1)))
            return NULL;
          return t_Gaussian::wrap_Object(Gaussian(((t_Gaussian *) arg)->object.this$));
        }
        static PyObject *t_Gaussian_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Gaussian::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Gaussian_init_(t_Gaussian *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              Gaussian object((jobject) NULL);

              INT_CALL(object = Gaussian());
              self->object = object;
              break;
            }
           case 2:
            {
              jdouble a0;
              jdouble a1;
              Gaussian object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = Gaussian(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              Gaussian object((jobject) NULL);

              if (!parseArgs(args, "DDD", &a0, &a1, &a2))
              {
                INT_CALL(object = Gaussian(a0, a1, a2));
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

        static PyObject *t_Gaussian_value(t_Gaussian *self, PyObject *args)
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
#include "org/orekit/orbits/FieldOrbitHermiteInterpolator.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *FieldOrbitHermiteInterpolator::class$ = NULL;
      jmethodID *FieldOrbitHermiteInterpolator::mids$ = NULL;
      bool FieldOrbitHermiteInterpolator::live$ = false;

      jclass FieldOrbitHermiteInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/FieldOrbitHermiteInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_b5680f5c30eede66] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;)V");
          mids$[mid_init$_f67f9ac4338cd9bf] = env->getMethodID(cls, "<init>", "(ILorg/orekit/frames/Frame;)V");
          mids$[mid_init$_66865f52d36c8d04] = env->getMethodID(cls, "<init>", "(ILorg/orekit/frames/Frame;Lorg/orekit/utils/CartesianDerivativesFilter;)V");
          mids$[mid_init$_1958d683b153c045] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/frames/Frame;Lorg/orekit/utils/CartesianDerivativesFilter;)V");
          mids$[mid_getPVAFilter_16e9a7b5414faf2d] = env->getMethodID(cls, "getPVAFilter", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
          mids$[mid_interpolate_356bc1e00fec4509] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractFieldTimeInterpolator$InterpolationData;)Lorg/orekit/orbits/FieldOrbit;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldOrbitHermiteInterpolator::FieldOrbitHermiteInterpolator(const ::org::orekit::frames::Frame & a0) : ::org::orekit::orbits::AbstractFieldOrbitInterpolator(env->newObject(initializeClass, &mids$, mid_init$_b5680f5c30eede66, a0.this$)) {}

      FieldOrbitHermiteInterpolator::FieldOrbitHermiteInterpolator(jint a0, const ::org::orekit::frames::Frame & a1) : ::org::orekit::orbits::AbstractFieldOrbitInterpolator(env->newObject(initializeClass, &mids$, mid_init$_f67f9ac4338cd9bf, a0, a1.this$)) {}

      FieldOrbitHermiteInterpolator::FieldOrbitHermiteInterpolator(jint a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::utils::CartesianDerivativesFilter & a2) : ::org::orekit::orbits::AbstractFieldOrbitInterpolator(env->newObject(initializeClass, &mids$, mid_init$_66865f52d36c8d04, a0, a1.this$, a2.this$)) {}

      FieldOrbitHermiteInterpolator::FieldOrbitHermiteInterpolator(jint a0, jdouble a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::utils::CartesianDerivativesFilter & a3) : ::org::orekit::orbits::AbstractFieldOrbitInterpolator(env->newObject(initializeClass, &mids$, mid_init$_1958d683b153c045, a0, a1, a2.this$, a3.this$)) {}

      ::org::orekit::utils::CartesianDerivativesFilter FieldOrbitHermiteInterpolator::getPVAFilter() const
      {
        return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getPVAFilter_16e9a7b5414faf2d]));
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
      static PyObject *t_FieldOrbitHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldOrbitHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldOrbitHermiteInterpolator_of_(t_FieldOrbitHermiteInterpolator *self, PyObject *args);
      static int t_FieldOrbitHermiteInterpolator_init_(t_FieldOrbitHermiteInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldOrbitHermiteInterpolator_getPVAFilter(t_FieldOrbitHermiteInterpolator *self);
      static PyObject *t_FieldOrbitHermiteInterpolator_get__pVAFilter(t_FieldOrbitHermiteInterpolator *self, void *data);
      static PyObject *t_FieldOrbitHermiteInterpolator_get__parameters_(t_FieldOrbitHermiteInterpolator *self, void *data);
      static PyGetSetDef t_FieldOrbitHermiteInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_FieldOrbitHermiteInterpolator, pVAFilter),
        DECLARE_GET_FIELD(t_FieldOrbitHermiteInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldOrbitHermiteInterpolator__methods_[] = {
        DECLARE_METHOD(t_FieldOrbitHermiteInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldOrbitHermiteInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldOrbitHermiteInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldOrbitHermiteInterpolator, getPVAFilter, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldOrbitHermiteInterpolator)[] = {
        { Py_tp_methods, t_FieldOrbitHermiteInterpolator__methods_ },
        { Py_tp_init, (void *) t_FieldOrbitHermiteInterpolator_init_ },
        { Py_tp_getset, t_FieldOrbitHermiteInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldOrbitHermiteInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::orbits::AbstractFieldOrbitInterpolator),
        NULL
      };

      DEFINE_TYPE(FieldOrbitHermiteInterpolator, t_FieldOrbitHermiteInterpolator, FieldOrbitHermiteInterpolator);
      PyObject *t_FieldOrbitHermiteInterpolator::wrap_Object(const FieldOrbitHermiteInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldOrbitHermiteInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldOrbitHermiteInterpolator *self = (t_FieldOrbitHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldOrbitHermiteInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldOrbitHermiteInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldOrbitHermiteInterpolator *self = (t_FieldOrbitHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldOrbitHermiteInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldOrbitHermiteInterpolator), &PY_TYPE_DEF(FieldOrbitHermiteInterpolator), module, "FieldOrbitHermiteInterpolator", 0);
      }

      void t_FieldOrbitHermiteInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrbitHermiteInterpolator), "class_", make_descriptor(FieldOrbitHermiteInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrbitHermiteInterpolator), "wrapfn_", make_descriptor(t_FieldOrbitHermiteInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrbitHermiteInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldOrbitHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldOrbitHermiteInterpolator::initializeClass, 1)))
          return NULL;
        return t_FieldOrbitHermiteInterpolator::wrap_Object(FieldOrbitHermiteInterpolator(((t_FieldOrbitHermiteInterpolator *) arg)->object.this$));
      }
      static PyObject *t_FieldOrbitHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldOrbitHermiteInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldOrbitHermiteInterpolator_of_(t_FieldOrbitHermiteInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldOrbitHermiteInterpolator_init_(t_FieldOrbitHermiteInterpolator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            FieldOrbitHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              INT_CALL(object = FieldOrbitHermiteInterpolator(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            FieldOrbitHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              INT_CALL(object = FieldOrbitHermiteInterpolator(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            jint a0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::utils::CartesianDerivativesFilter a2((jobject) NULL);
            PyTypeObject **p2;
            FieldOrbitHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IkK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_))
            {
              INT_CALL(object = FieldOrbitHermiteInterpolator(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            jint a0;
            jdouble a1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::utils::CartesianDerivativesFilter a3((jobject) NULL);
            PyTypeObject **p3;
            FieldOrbitHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IDkK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_))
            {
              INT_CALL(object = FieldOrbitHermiteInterpolator(a0, a1, a2, a3));
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

      static PyObject *t_FieldOrbitHermiteInterpolator_getPVAFilter(t_FieldOrbitHermiteInterpolator *self)
      {
        ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
        OBJ_CALL(result = self->object.getPVAFilter());
        return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
      }
      static PyObject *t_FieldOrbitHermiteInterpolator_get__parameters_(t_FieldOrbitHermiteInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldOrbitHermiteInterpolator_get__pVAFilter(t_FieldOrbitHermiteInterpolator *self, void *data)
      {
        ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
        OBJ_CALL(value = self->object.getPVAFilter());
        return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/tle/SDP4.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {

          ::java::lang::Class *SDP4::class$ = NULL;
          jmethodID *SDP4::mids$ = NULL;
          bool SDP4::live$ = false;

          jclass SDP4::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/SDP4");

              mids$ = new jmethodID[max_mid];
              mids$[mid_sxpInitialize_0fa09c18fee449d5] = env->getMethodID(cls, "sxpInitialize", "()V");
              mids$[mid_sxpPropagate_17db3a65980d3441] = env->getMethodID(cls, "sxpPropagate", "(D)V");
              mids$[mid_thetaG_bf1d7732f1acb697] = env->getMethodID(cls, "thetaG", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_luniSolarTermsComputation_0fa09c18fee449d5] = env->getMethodID(cls, "luniSolarTermsComputation", "()V");
              mids$[mid_deepSecularEffects_17db3a65980d3441] = env->getMethodID(cls, "deepSecularEffects", "(D)V");
              mids$[mid_deepPeriodicEffects_17db3a65980d3441] = env->getMethodID(cls, "deepPeriodicEffects", "(D)V");

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
    namespace propagation {
      namespace analytical {
        namespace tle {
          static PyObject *t_SDP4_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SDP4_instance_(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_SDP4__methods_[] = {
            DECLARE_METHOD(t_SDP4, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SDP4, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SDP4)[] = {
            { Py_tp_methods, t_SDP4__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SDP4)[] = {
            &PY_TYPE_DEF(::org::orekit::propagation::analytical::tle::TLEPropagator),
            NULL
          };

          DEFINE_TYPE(SDP4, t_SDP4, SDP4);

          void t_SDP4::install(PyObject *module)
          {
            installType(&PY_TYPE(SDP4), &PY_TYPE_DEF(SDP4), module, "SDP4", 0);
          }

          void t_SDP4::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SDP4), "class_", make_descriptor(SDP4::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SDP4), "wrapfn_", make_descriptor(t_SDP4::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SDP4), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SDP4_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SDP4::initializeClass, 1)))
              return NULL;
            return t_SDP4::wrap_Object(SDP4(((t_SDP4 *) arg)->object.this$));
          }
          static PyObject *t_SDP4_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SDP4::initializeClass, 0))
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
#include "org/hipparchus/util/Blendable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *Blendable::class$ = NULL;
      jmethodID *Blendable::mids$ = NULL;
      bool Blendable::live$ = false;

      jclass Blendable::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/Blendable");

          mids$ = new jmethodID[max_mid];
          mids$[mid_blendArithmeticallyWith_6fddec41dc8667ed] = env->getMethodID(cls, "blendArithmeticallyWith", "(Ljava/lang/Object;D)Ljava/lang/Object;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::Object Blendable::blendArithmeticallyWith(const ::java::lang::Object & a0, jdouble a1) const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_blendArithmeticallyWith_6fddec41dc8667ed], a0.this$, a1));
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
      static PyObject *t_Blendable_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Blendable_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Blendable_of_(t_Blendable *self, PyObject *args);
      static PyObject *t_Blendable_blendArithmeticallyWith(t_Blendable *self, PyObject *args);
      static PyObject *t_Blendable_get__parameters_(t_Blendable *self, void *data);
      static PyGetSetDef t_Blendable__fields_[] = {
        DECLARE_GET_FIELD(t_Blendable, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Blendable__methods_[] = {
        DECLARE_METHOD(t_Blendable, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Blendable, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Blendable, of_, METH_VARARGS),
        DECLARE_METHOD(t_Blendable, blendArithmeticallyWith, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Blendable)[] = {
        { Py_tp_methods, t_Blendable__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_Blendable__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Blendable)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Blendable, t_Blendable, Blendable);
      PyObject *t_Blendable::wrap_Object(const Blendable& object, PyTypeObject *p0)
      {
        PyObject *obj = t_Blendable::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Blendable *self = (t_Blendable *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_Blendable::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_Blendable::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Blendable *self = (t_Blendable *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_Blendable::install(PyObject *module)
      {
        installType(&PY_TYPE(Blendable), &PY_TYPE_DEF(Blendable), module, "Blendable", 0);
      }

      void t_Blendable::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Blendable), "class_", make_descriptor(Blendable::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Blendable), "wrapfn_", make_descriptor(t_Blendable::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Blendable), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Blendable_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Blendable::initializeClass, 1)))
          return NULL;
        return t_Blendable::wrap_Object(Blendable(((t_Blendable *) arg)->object.this$));
      }
      static PyObject *t_Blendable_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Blendable::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Blendable_of_(t_Blendable *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_Blendable_blendArithmeticallyWith(t_Blendable *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jdouble a1;
        ::java::lang::Object result((jobject) NULL);

        if (!parseArgs(args, "OD", self->parameters[0], &a0, &a1))
        {
          OBJ_CALL(result = self->object.blendArithmeticallyWith(a0, a1));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "blendArithmeticallyWith", args);
        return NULL;
      }
      static PyObject *t_Blendable_get__parameters_(t_Blendable *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/GradientField.h"
#include "org/hipparchus/analysis/differentiation/GradientField.h"
#include "org/hipparchus/analysis/differentiation/Gradient.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *GradientField::class$ = NULL;
        jmethodID *GradientField::mids$ = NULL;
        bool GradientField::live$ = false;

        jclass GradientField::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/GradientField");

            mids$ = new jmethodID[max_mid];
            mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getField_981218e64b7680f0] = env->getStaticMethodID(cls, "getField", "(I)Lorg/hipparchus/analysis/differentiation/GradientField;");
            mids$[mid_getOne_cc2f4e0a456f51de] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_getRuntimeClass_7c16c5008b34b3db] = env->getMethodID(cls, "getRuntimeClass", "()Ljava/lang/Class;");
            mids$[mid_getZero_cc2f4e0a456f51de] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jboolean GradientField::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
        }

        GradientField GradientField::getField(jint a0)
        {
          jclass cls = env->getClass(initializeClass);
          return GradientField(env->callStaticObjectMethod(cls, mids$[mid_getField_981218e64b7680f0], a0));
        }

        ::org::hipparchus::analysis::differentiation::Gradient GradientField::getOne() const
        {
          return ::org::hipparchus::analysis::differentiation::Gradient(env->callObjectMethod(this$, mids$[mid_getOne_cc2f4e0a456f51de]));
        }

        ::java::lang::Class GradientField::getRuntimeClass() const
        {
          return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getRuntimeClass_7c16c5008b34b3db]));
        }

        ::org::hipparchus::analysis::differentiation::Gradient GradientField::getZero() const
        {
          return ::org::hipparchus::analysis::differentiation::Gradient(env->callObjectMethod(this$, mids$[mid_getZero_cc2f4e0a456f51de]));
        }

        jint GradientField::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
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
        static PyObject *t_GradientField_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GradientField_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GradientField_equals(t_GradientField *self, PyObject *args);
        static PyObject *t_GradientField_getField(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GradientField_getOne(t_GradientField *self);
        static PyObject *t_GradientField_getRuntimeClass(t_GradientField *self);
        static PyObject *t_GradientField_getZero(t_GradientField *self);
        static PyObject *t_GradientField_hashCode(t_GradientField *self, PyObject *args);
        static PyObject *t_GradientField_get__one(t_GradientField *self, void *data);
        static PyObject *t_GradientField_get__runtimeClass(t_GradientField *self, void *data);
        static PyObject *t_GradientField_get__zero(t_GradientField *self, void *data);
        static PyGetSetDef t_GradientField__fields_[] = {
          DECLARE_GET_FIELD(t_GradientField, one),
          DECLARE_GET_FIELD(t_GradientField, runtimeClass),
          DECLARE_GET_FIELD(t_GradientField, zero),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GradientField__methods_[] = {
          DECLARE_METHOD(t_GradientField, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GradientField, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GradientField, equals, METH_VARARGS),
          DECLARE_METHOD(t_GradientField, getField, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GradientField, getOne, METH_NOARGS),
          DECLARE_METHOD(t_GradientField, getRuntimeClass, METH_NOARGS),
          DECLARE_METHOD(t_GradientField, getZero, METH_NOARGS),
          DECLARE_METHOD(t_GradientField, hashCode, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GradientField)[] = {
          { Py_tp_methods, t_GradientField__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_GradientField__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GradientField)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(GradientField, t_GradientField, GradientField);

        void t_GradientField::install(PyObject *module)
        {
          installType(&PY_TYPE(GradientField), &PY_TYPE_DEF(GradientField), module, "GradientField", 0);
        }

        void t_GradientField::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GradientField), "class_", make_descriptor(GradientField::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GradientField), "wrapfn_", make_descriptor(t_GradientField::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GradientField), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GradientField_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GradientField::initializeClass, 1)))
            return NULL;
          return t_GradientField::wrap_Object(GradientField(((t_GradientField *) arg)->object.this$));
        }
        static PyObject *t_GradientField_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GradientField::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_GradientField_equals(t_GradientField *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(GradientField), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_GradientField_getField(PyTypeObject *type, PyObject *arg)
        {
          jint a0;
          GradientField result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::GradientField::getField(a0));
            return t_GradientField::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getField", arg);
          return NULL;
        }

        static PyObject *t_GradientField_getOne(t_GradientField *self)
        {
          ::org::hipparchus::analysis::differentiation::Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.getOne());
          return ::org::hipparchus::analysis::differentiation::t_Gradient::wrap_Object(result);
        }

        static PyObject *t_GradientField_getRuntimeClass(t_GradientField *self)
        {
          ::java::lang::Class result((jobject) NULL);
          OBJ_CALL(result = self->object.getRuntimeClass());
          return ::java::lang::t_Class::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(Gradient));
        }

        static PyObject *t_GradientField_getZero(t_GradientField *self)
        {
          ::org::hipparchus::analysis::differentiation::Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.getZero());
          return ::org::hipparchus::analysis::differentiation::t_Gradient::wrap_Object(result);
        }

        static PyObject *t_GradientField_hashCode(t_GradientField *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(GradientField), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_GradientField_get__one(t_GradientField *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::Gradient value((jobject) NULL);
          OBJ_CALL(value = self->object.getOne());
          return ::org::hipparchus::analysis::differentiation::t_Gradient::wrap_Object(value);
        }

        static PyObject *t_GradientField_get__runtimeClass(t_GradientField *self, void *data)
        {
          ::java::lang::Class value((jobject) NULL);
          OBJ_CALL(value = self->object.getRuntimeClass());
          return ::java::lang::t_Class::wrap_Object(value);
        }

        static PyObject *t_GradientField_get__zero(t_GradientField *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::Gradient value((jobject) NULL);
          OBJ_CALL(value = self->object.getZero());
          return ::org::hipparchus::analysis::differentiation::t_Gradient::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/AdamsIntegrator.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/ode/ODEState.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/ode/ExpandableODE.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "org/hipparchus/linear/Array2DRowRealMatrix.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *AdamsIntegrator::class$ = NULL;
        jmethodID *AdamsIntegrator::mids$ = NULL;
        bool AdamsIntegrator::live$ = false;

        jclass AdamsIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/AdamsIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_e116bf0bc4dbdd71] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;IIDD[D[D)V");
            mids$[mid_init$_1cc92cea9850434d] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;IIDDDD)V");
            mids$[mid_integrate_3c1cc820e563e3e9] = env->getMethodID(cls, "integrate", "(Lorg/hipparchus/ode/ExpandableODE;Lorg/hipparchus/ode/ODEState;D)Lorg/hipparchus/ode/ODEStateAndDerivative;");
            mids$[mid_updateHighOrderDerivativesPhase1_98f76adeb9727d30] = env->getMethodID(cls, "updateHighOrderDerivativesPhase1", "(Lorg/hipparchus/linear/Array2DRowRealMatrix;)Lorg/hipparchus/linear/Array2DRowRealMatrix;");
            mids$[mid_updateHighOrderDerivativesPhase2_a5e518d6a6618759] = env->getMethodID(cls, "updateHighOrderDerivativesPhase2", "([D[DLorg/hipparchus/linear/Array2DRowRealMatrix;)V");
            mids$[mid_initializeHighOrderDerivatives_05286ba32ad1612e] = env->getMethodID(cls, "initializeHighOrderDerivatives", "(D[D[[D[[D)Lorg/hipparchus/linear/Array2DRowRealMatrix;");
            mids$[mid_errorEstimation_292da48f87a5db99] = env->getMethodID(cls, "errorEstimation", "([DD[D[DLorg/hipparchus/linear/RealMatrix;)D");
            mids$[mid_finalizeStep_07f673992ff5deaf] = env->getMethodID(cls, "finalizeStep", "(D[D[DLorg/hipparchus/linear/Array2DRowRealMatrix;ZLorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/EquationsMapper;)Lorg/hipparchus/ode/nonstiff/AdamsStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdamsIntegrator::AdamsIntegrator(const ::java::lang::String & a0, jint a1, jint a2, jdouble a3, jdouble a4, const JArray< jdouble > & a5, const JArray< jdouble > & a6) : ::org::hipparchus::ode::MultistepIntegrator(env->newObject(initializeClass, &mids$, mid_init$_e116bf0bc4dbdd71, a0.this$, a1, a2, a3, a4, a5.this$, a6.this$)) {}

        AdamsIntegrator::AdamsIntegrator(const ::java::lang::String & a0, jint a1, jint a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6) : ::org::hipparchus::ode::MultistepIntegrator(env->newObject(initializeClass, &mids$, mid_init$_1cc92cea9850434d, a0.this$, a1, a2, a3, a4, a5, a6)) {}

        ::org::hipparchus::ode::ODEStateAndDerivative AdamsIntegrator::integrate(const ::org::hipparchus::ode::ExpandableODE & a0, const ::org::hipparchus::ode::ODEState & a1, jdouble a2) const
        {
          return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_integrate_3c1cc820e563e3e9], a0.this$, a1.this$, a2));
        }

        ::org::hipparchus::linear::Array2DRowRealMatrix AdamsIntegrator::updateHighOrderDerivativesPhase1(const ::org::hipparchus::linear::Array2DRowRealMatrix & a0) const
        {
          return ::org::hipparchus::linear::Array2DRowRealMatrix(env->callObjectMethod(this$, mids$[mid_updateHighOrderDerivativesPhase1_98f76adeb9727d30], a0.this$));
        }

        void AdamsIntegrator::updateHighOrderDerivativesPhase2(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const ::org::hipparchus::linear::Array2DRowRealMatrix & a2) const
        {
          env->callVoidMethod(this$, mids$[mid_updateHighOrderDerivativesPhase2_a5e518d6a6618759], a0.this$, a1.this$, a2.this$);
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
        static PyObject *t_AdamsIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AdamsIntegrator_init_(t_AdamsIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AdamsIntegrator_integrate(t_AdamsIntegrator *self, PyObject *args);
        static PyObject *t_AdamsIntegrator_updateHighOrderDerivativesPhase1(t_AdamsIntegrator *self, PyObject *arg);
        static PyObject *t_AdamsIntegrator_updateHighOrderDerivativesPhase2(t_AdamsIntegrator *self, PyObject *args);

        static PyMethodDef t_AdamsIntegrator__methods_[] = {
          DECLARE_METHOD(t_AdamsIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsIntegrator, integrate, METH_VARARGS),
          DECLARE_METHOD(t_AdamsIntegrator, updateHighOrderDerivativesPhase1, METH_O),
          DECLARE_METHOD(t_AdamsIntegrator, updateHighOrderDerivativesPhase2, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdamsIntegrator)[] = {
          { Py_tp_methods, t_AdamsIntegrator__methods_ },
          { Py_tp_init, (void *) t_AdamsIntegrator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdamsIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::MultistepIntegrator),
          NULL
        };

        DEFINE_TYPE(AdamsIntegrator, t_AdamsIntegrator, AdamsIntegrator);

        void t_AdamsIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(AdamsIntegrator), &PY_TYPE_DEF(AdamsIntegrator), module, "AdamsIntegrator", 0);
        }

        void t_AdamsIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsIntegrator), "class_", make_descriptor(AdamsIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsIntegrator), "wrapfn_", make_descriptor(t_AdamsIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdamsIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdamsIntegrator::initializeClass, 1)))
            return NULL;
          return t_AdamsIntegrator::wrap_Object(AdamsIntegrator(((t_AdamsIntegrator *) arg)->object.this$));
        }
        static PyObject *t_AdamsIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdamsIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AdamsIntegrator_init_(t_AdamsIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 7:
            {
              ::java::lang::String a0((jobject) NULL);
              jint a1;
              jint a2;
              jdouble a3;
              jdouble a4;
              JArray< jdouble > a5((jobject) NULL);
              JArray< jdouble > a6((jobject) NULL);
              AdamsIntegrator object((jobject) NULL);

              if (!parseArgs(args, "sIIDD[D[D", &a0, &a1, &a2, &a3, &a4, &a5, &a6))
              {
                INT_CALL(object = AdamsIntegrator(a0, a1, a2, a3, a4, a5, a6));
                self->object = object;
                break;
              }
            }
            {
              ::java::lang::String a0((jobject) NULL);
              jint a1;
              jint a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              AdamsIntegrator object((jobject) NULL);

              if (!parseArgs(args, "sIIDDDD", &a0, &a1, &a2, &a3, &a4, &a5, &a6))
              {
                INT_CALL(object = AdamsIntegrator(a0, a1, a2, a3, a4, a5, a6));
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

        static PyObject *t_AdamsIntegrator_integrate(t_AdamsIntegrator *self, PyObject *args)
        {
          ::org::hipparchus::ode::ExpandableODE a0((jobject) NULL);
          ::org::hipparchus::ode::ODEState a1((jobject) NULL);
          jdouble a2;
          ::org::hipparchus::ode::ODEStateAndDerivative result((jobject) NULL);

          if (!parseArgs(args, "kkD", ::org::hipparchus::ode::ExpandableODE::initializeClass, ::org::hipparchus::ode::ODEState::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.integrate(a0, a1, a2));
            return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(result);
          }

          return callSuper(PY_TYPE(AdamsIntegrator), (PyObject *) self, "integrate", args, 2);
        }

        static PyObject *t_AdamsIntegrator_updateHighOrderDerivativesPhase1(t_AdamsIntegrator *self, PyObject *arg)
        {
          ::org::hipparchus::linear::Array2DRowRealMatrix a0((jobject) NULL);
          ::org::hipparchus::linear::Array2DRowRealMatrix result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::linear::Array2DRowRealMatrix::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.updateHighOrderDerivativesPhase1(a0));
            return ::org::hipparchus::linear::t_Array2DRowRealMatrix::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "updateHighOrderDerivativesPhase1", arg);
          return NULL;
        }

        static PyObject *t_AdamsIntegrator_updateHighOrderDerivativesPhase2(t_AdamsIntegrator *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          ::org::hipparchus::linear::Array2DRowRealMatrix a2((jobject) NULL);

          if (!parseArgs(args, "[D[Dk", ::org::hipparchus::linear::Array2DRowRealMatrix::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.updateHighOrderDerivativesPhase2(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "updateHighOrderDerivativesPhase2", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/Geoid.h"
#include "org/orekit/models/earth/ReferenceEllipsoid.h"
#include "org/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldLine.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/models/earth/EarthShape.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/Line.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {

        ::java::lang::Class *Geoid::class$ = NULL;
        jmethodID *Geoid::mids$ = NULL;
        bool Geoid::live$ = false;

        jclass Geoid::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/models/earth/Geoid");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_3e46faf0843f94b0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider;Lorg/orekit/models/earth/ReferenceEllipsoid;)V");
            mids$[mid_getBodyFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getBodyFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getEllipsoid_eead5b864957d48b] = env->getMethodID(cls, "getEllipsoid", "()Lorg/orekit/models/earth/ReferenceEllipsoid;");
            mids$[mid_getIntersectionPoint_e81d59d1bc381e5e] = env->getMethodID(cls, "getIntersectionPoint", "(Lorg/hipparchus/geometry/euclidean/threed/FieldLine;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/bodies/FieldGeodeticPoint;");
            mids$[mid_getIntersectionPoint_ec4b828b0bd3964b] = env->getMethodID(cls, "getIntersectionPoint", "(Lorg/hipparchus/geometry/euclidean/threed/Line;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/GeodeticPoint;");
            mids$[mid_getUndulation_51525816d9b1365b] = env->getMethodID(cls, "getUndulation", "(DDLorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_projectToGround_7ddc39790e3dd04b] = env->getMethodID(cls, "projectToGround", "(Lorg/orekit/utils/TimeStampedPVCoordinates;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
            mids$[mid_projectToGround_73ba258c5f91e9db] = env->getMethodID(cls, "projectToGround", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_transform_5f1451dffd8cde56] = env->getMethodID(cls, "transform", "(Lorg/orekit/bodies/FieldGeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_transform_6cf64433187e46c3] = env->getMethodID(cls, "transform", "(Lorg/orekit/bodies/GeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_transform_e019f2426bfb11d5] = env->getMethodID(cls, "transform", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/bodies/FieldGeodeticPoint;");
            mids$[mid_transform_dd18b1b42137f809] = env->getMethodID(cls, "transform", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/GeodeticPoint;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Geoid::Geoid(const ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider & a0, const ::org::orekit::models::earth::ReferenceEllipsoid & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3e46faf0843f94b0, a0.this$, a1.this$)) {}

        ::org::orekit::frames::Frame Geoid::getBodyFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getBodyFrame_b86f9f61d97a7244]));
        }

        ::org::orekit::models::earth::ReferenceEllipsoid Geoid::getEllipsoid() const
        {
          return ::org::orekit::models::earth::ReferenceEllipsoid(env->callObjectMethod(this$, mids$[mid_getEllipsoid_eead5b864957d48b]));
        }

        ::org::orekit::bodies::FieldGeodeticPoint Geoid::getIntersectionPoint(const ::org::hipparchus::geometry::euclidean::threed::FieldLine & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::time::FieldAbsoluteDate & a3) const
        {
          return ::org::orekit::bodies::FieldGeodeticPoint(env->callObjectMethod(this$, mids$[mid_getIntersectionPoint_e81d59d1bc381e5e], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::bodies::GeodeticPoint Geoid::getIntersectionPoint(const ::org::hipparchus::geometry::euclidean::threed::Line & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::time::AbsoluteDate & a3) const
        {
          return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_getIntersectionPoint_ec4b828b0bd3964b], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        jdouble Geoid::getUndulation(jdouble a0, jdouble a1, const ::org::orekit::time::AbsoluteDate & a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getUndulation_51525816d9b1365b], a0, a1, a2.this$);
        }

        ::org::orekit::utils::TimeStampedPVCoordinates Geoid::projectToGround(const ::org::orekit::utils::TimeStampedPVCoordinates & a0, const ::org::orekit::frames::Frame & a1) const
        {
          return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_projectToGround_7ddc39790e3dd04b], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D Geoid::projectToGround(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_projectToGround_73ba258c5f91e9db], a0.this$, a1.this$, a2.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D Geoid::transform(const ::org::orekit::bodies::FieldGeodeticPoint & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_transform_5f1451dffd8cde56], a0.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D Geoid::transform(const ::org::orekit::bodies::GeodeticPoint & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_transform_6cf64433187e46c3], a0.this$));
        }

        ::org::orekit::bodies::FieldGeodeticPoint Geoid::transform(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
        {
          return ::org::orekit::bodies::FieldGeodeticPoint(env->callObjectMethod(this$, mids$[mid_transform_e019f2426bfb11d5], a0.this$, a1.this$, a2.this$));
        }

        ::org::orekit::bodies::GeodeticPoint Geoid::transform(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2) const
        {
          return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_transform_dd18b1b42137f809], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_Geoid_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Geoid_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Geoid_init_(t_Geoid *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Geoid_getBodyFrame(t_Geoid *self);
        static PyObject *t_Geoid_getEllipsoid(t_Geoid *self);
        static PyObject *t_Geoid_getIntersectionPoint(t_Geoid *self, PyObject *args);
        static PyObject *t_Geoid_getUndulation(t_Geoid *self, PyObject *args);
        static PyObject *t_Geoid_projectToGround(t_Geoid *self, PyObject *args);
        static PyObject *t_Geoid_transform(t_Geoid *self, PyObject *args);
        static PyObject *t_Geoid_get__bodyFrame(t_Geoid *self, void *data);
        static PyObject *t_Geoid_get__ellipsoid(t_Geoid *self, void *data);
        static PyGetSetDef t_Geoid__fields_[] = {
          DECLARE_GET_FIELD(t_Geoid, bodyFrame),
          DECLARE_GET_FIELD(t_Geoid, ellipsoid),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Geoid__methods_[] = {
          DECLARE_METHOD(t_Geoid, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Geoid, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Geoid, getBodyFrame, METH_NOARGS),
          DECLARE_METHOD(t_Geoid, getEllipsoid, METH_NOARGS),
          DECLARE_METHOD(t_Geoid, getIntersectionPoint, METH_VARARGS),
          DECLARE_METHOD(t_Geoid, getUndulation, METH_VARARGS),
          DECLARE_METHOD(t_Geoid, projectToGround, METH_VARARGS),
          DECLARE_METHOD(t_Geoid, transform, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Geoid)[] = {
          { Py_tp_methods, t_Geoid__methods_ },
          { Py_tp_init, (void *) t_Geoid_init_ },
          { Py_tp_getset, t_Geoid__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Geoid)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Geoid, t_Geoid, Geoid);

        void t_Geoid::install(PyObject *module)
        {
          installType(&PY_TYPE(Geoid), &PY_TYPE_DEF(Geoid), module, "Geoid", 0);
        }

        void t_Geoid::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Geoid), "class_", make_descriptor(Geoid::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Geoid), "wrapfn_", make_descriptor(t_Geoid::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Geoid), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Geoid_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Geoid::initializeClass, 1)))
            return NULL;
          return t_Geoid::wrap_Object(Geoid(((t_Geoid *) arg)->object.this$));
        }
        static PyObject *t_Geoid_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Geoid::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Geoid_init_(t_Geoid *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider a0((jobject) NULL);
          ::org::orekit::models::earth::ReferenceEllipsoid a1((jobject) NULL);
          Geoid object((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::models::earth::ReferenceEllipsoid::initializeClass, &a0, &a1))
          {
            INT_CALL(object = Geoid(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_Geoid_getBodyFrame(t_Geoid *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getBodyFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_Geoid_getEllipsoid(t_Geoid *self)
        {
          ::org::orekit::models::earth::ReferenceEllipsoid result((jobject) NULL);
          OBJ_CALL(result = self->object.getEllipsoid());
          return ::org::orekit::models::earth::t_ReferenceEllipsoid::wrap_Object(result);
        }

        static PyObject *t_Geoid_getIntersectionPoint(t_Geoid *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::hipparchus::geometry::euclidean::threed::Line a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::orekit::frames::Frame a2((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
              ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);

              if (!parseArgs(args, "kkkk", ::org::hipparchus::geometry::euclidean::threed::Line::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.getIntersectionPoint(a0, a1, a2, a3));
                return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::geometry::euclidean::threed::FieldLine a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::frames::Frame a2((jobject) NULL);
              ::org::orekit::time::FieldAbsoluteDate a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::bodies::FieldGeodeticPoint result((jobject) NULL);

              if (!parseArgs(args, "KKkK", ::org::hipparchus::geometry::euclidean::threed::FieldLine::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldLine::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &a3, &p3, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
              {
                OBJ_CALL(result = self->object.getIntersectionPoint(a0, a1, a2, a3));
                return ::org::orekit::bodies::t_FieldGeodeticPoint::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getIntersectionPoint", args);
          return NULL;
        }

        static PyObject *t_Geoid_getUndulation(t_Geoid *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "DDk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.getUndulation(a0, a1, a2));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getUndulation", args);
          return NULL;
        }

        static PyObject *t_Geoid_projectToGround(t_Geoid *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::utils::TimeStampedPVCoordinates a0((jobject) NULL);
              ::org::orekit::frames::Frame a1((jobject) NULL);
              ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.projectToGround(a0, a1));
                return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
              }
            }
            break;
           case 3:
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              ::org::orekit::frames::Frame a2((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "kkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.projectToGround(a0, a1, a2));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "projectToGround", args);
          return NULL;
        }

        static PyObject *t_Geoid_transform(t_Geoid *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::bodies::FieldGeodeticPoint a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, &a0, &p0, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_))
              {
                OBJ_CALL(result = self->object.transform(a0));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
            {
              ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.transform(a0));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
            break;
           case 3:
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
              ::org::orekit::frames::Frame a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);

              if (!parseArgs(args, "kkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.transform(a0, a1, a2));
                return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::frames::Frame a1((jobject) NULL);
              ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::bodies::FieldGeodeticPoint result((jobject) NULL);

              if (!parseArgs(args, "KkK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
              {
                OBJ_CALL(result = self->object.transform(a0, a1, a2));
                return ::org::orekit::bodies::t_FieldGeodeticPoint::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "transform", args);
          return NULL;
        }

        static PyObject *t_Geoid_get__bodyFrame(t_Geoid *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getBodyFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_Geoid_get__ellipsoid(t_Geoid *self, void *data)
        {
          ::org::orekit::models::earth::ReferenceEllipsoid value((jobject) NULL);
          OBJ_CALL(value = self->object.getEllipsoid());
          return ::org::orekit::models::earth::t_ReferenceEllipsoid::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/bodies/CR3BPFactory.h"
#include "org/orekit/bodies/CR3BPSystem.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *CR3BPFactory::class$ = NULL;
      jmethodID *CR3BPFactory::mids$ = NULL;
      bool CR3BPFactory::live$ = false;

      jclass CR3BPFactory::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/CR3BPFactory");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getEarthMoonCR3BP_5fad4f68327f5e3d] = env->getStaticMethodID(cls, "getEarthMoonCR3BP", "()Lorg/orekit/bodies/CR3BPSystem;");
          mids$[mid_getSunEarthCR3BP_2a04e203dd5a7815] = env->getStaticMethodID(cls, "getSunEarthCR3BP", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/TimeScale;)Lorg/orekit/bodies/CR3BPSystem;");
          mids$[mid_getSunJupiterCR3BP_2a04e203dd5a7815] = env->getStaticMethodID(cls, "getSunJupiterCR3BP", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/TimeScale;)Lorg/orekit/bodies/CR3BPSystem;");
          mids$[mid_getSystem_806055d4cfef5676] = env->getStaticMethodID(cls, "getSystem", "(Lorg/orekit/bodies/CelestialBody;Lorg/orekit/bodies/CelestialBody;D)Lorg/orekit/bodies/CR3BPSystem;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::bodies::CR3BPSystem CR3BPFactory::getEarthMoonCR3BP()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CR3BPSystem(env->callStaticObjectMethod(cls, mids$[mid_getEarthMoonCR3BP_5fad4f68327f5e3d]));
      }

      ::org::orekit::bodies::CR3BPSystem CR3BPFactory::getSunEarthCR3BP(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::TimeScale & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CR3BPSystem(env->callStaticObjectMethod(cls, mids$[mid_getSunEarthCR3BP_2a04e203dd5a7815], a0.this$, a1.this$));
      }

      ::org::orekit::bodies::CR3BPSystem CR3BPFactory::getSunJupiterCR3BP(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::TimeScale & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CR3BPSystem(env->callStaticObjectMethod(cls, mids$[mid_getSunJupiterCR3BP_2a04e203dd5a7815], a0.this$, a1.this$));
      }

      ::org::orekit::bodies::CR3BPSystem CR3BPFactory::getSystem(const ::org::orekit::bodies::CelestialBody & a0, const ::org::orekit::bodies::CelestialBody & a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::bodies::CR3BPSystem(env->callStaticObjectMethod(cls, mids$[mid_getSystem_806055d4cfef5676], a0.this$, a1.this$, a2));
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
      static PyObject *t_CR3BPFactory_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CR3BPFactory_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CR3BPFactory_getEarthMoonCR3BP(PyTypeObject *type);
      static PyObject *t_CR3BPFactory_getSunEarthCR3BP(PyTypeObject *type, PyObject *args);
      static PyObject *t_CR3BPFactory_getSunJupiterCR3BP(PyTypeObject *type, PyObject *args);
      static PyObject *t_CR3BPFactory_getSystem(PyTypeObject *type, PyObject *args);
      static PyObject *t_CR3BPFactory_get__earthMoonCR3BP(t_CR3BPFactory *self, void *data);
      static PyGetSetDef t_CR3BPFactory__fields_[] = {
        DECLARE_GET_FIELD(t_CR3BPFactory, earthMoonCR3BP),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CR3BPFactory__methods_[] = {
        DECLARE_METHOD(t_CR3BPFactory, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CR3BPFactory, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CR3BPFactory, getEarthMoonCR3BP, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_CR3BPFactory, getSunEarthCR3BP, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CR3BPFactory, getSunJupiterCR3BP, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CR3BPFactory, getSystem, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CR3BPFactory)[] = {
        { Py_tp_methods, t_CR3BPFactory__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_CR3BPFactory__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CR3BPFactory)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CR3BPFactory, t_CR3BPFactory, CR3BPFactory);

      void t_CR3BPFactory::install(PyObject *module)
      {
        installType(&PY_TYPE(CR3BPFactory), &PY_TYPE_DEF(CR3BPFactory), module, "CR3BPFactory", 0);
      }

      void t_CR3BPFactory::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPFactory), "class_", make_descriptor(CR3BPFactory::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPFactory), "wrapfn_", make_descriptor(t_CR3BPFactory::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPFactory), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CR3BPFactory_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CR3BPFactory::initializeClass, 1)))
          return NULL;
        return t_CR3BPFactory::wrap_Object(CR3BPFactory(((t_CR3BPFactory *) arg)->object.this$));
      }
      static PyObject *t_CR3BPFactory_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CR3BPFactory::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_CR3BPFactory_getEarthMoonCR3BP(PyTypeObject *type)
      {
        ::org::orekit::bodies::CR3BPSystem result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::bodies::CR3BPFactory::getEarthMoonCR3BP());
        return ::org::orekit::bodies::t_CR3BPSystem::wrap_Object(result);
      }

      static PyObject *t_CR3BPFactory_getSunEarthCR3BP(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::time::TimeScale a1((jobject) NULL);
        ::org::orekit::bodies::CR3BPSystem result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::bodies::CR3BPFactory::getSunEarthCR3BP(a0, a1));
          return ::org::orekit::bodies::t_CR3BPSystem::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getSunEarthCR3BP", args);
        return NULL;
      }

      static PyObject *t_CR3BPFactory_getSunJupiterCR3BP(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::time::TimeScale a1((jobject) NULL);
        ::org::orekit::bodies::CR3BPSystem result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::bodies::CR3BPFactory::getSunJupiterCR3BP(a0, a1));
          return ::org::orekit::bodies::t_CR3BPSystem::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getSunJupiterCR3BP", args);
        return NULL;
      }

      static PyObject *t_CR3BPFactory_getSystem(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::bodies::CelestialBody a0((jobject) NULL);
        ::org::orekit::bodies::CelestialBody a1((jobject) NULL);
        jdouble a2;
        ::org::orekit::bodies::CR3BPSystem result((jobject) NULL);

        if (!parseArgs(args, "kkD", ::org::orekit::bodies::CelestialBody::initializeClass, ::org::orekit::bodies::CelestialBody::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::orekit::bodies::CR3BPFactory::getSystem(a0, a1, a2));
          return ::org::orekit::bodies::t_CR3BPSystem::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getSystem", args);
        return NULL;
      }

      static PyObject *t_CR3BPFactory_get__earthMoonCR3BP(t_CR3BPFactory *self, void *data)
      {
        ::org::orekit::bodies::CR3BPSystem value((jobject) NULL);
        OBJ_CALL(value = self->object.getEarthMoonCR3BP());
        return ::org::orekit::bodies::t_CR3BPSystem::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/PhaseMinusCodeCycleSlipDetector.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *PhaseMinusCodeCycleSlipDetector::class$ = NULL;
          jmethodID *PhaseMinusCodeCycleSlipDetector::mids$ = NULL;
          bool PhaseMinusCodeCycleSlipDetector::live$ = false;

          jclass PhaseMinusCodeCycleSlipDetector::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/PhaseMinusCodeCycleSlipDetector");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_1b5e9254fb70ca20] = env->getMethodID(cls, "<init>", "(DDII)V");
              mids$[mid_manageData_5e249044f63168db] = env->getMethodID(cls, "manageData", "(Lorg/orekit/files/rinex/observation/ObservationDataSet;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PhaseMinusCodeCycleSlipDetector::PhaseMinusCodeCycleSlipDetector(jdouble a0, jdouble a1, jint a2, jint a3) : ::org::orekit::estimation::measurements::gnss::AbstractCycleSlipDetector(env->newObject(initializeClass, &mids$, mid_init$_1b5e9254fb70ca20, a0, a1, a2, a3)) {}
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
          static PyObject *t_PhaseMinusCodeCycleSlipDetector_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PhaseMinusCodeCycleSlipDetector_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PhaseMinusCodeCycleSlipDetector_init_(t_PhaseMinusCodeCycleSlipDetector *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_PhaseMinusCodeCycleSlipDetector__methods_[] = {
            DECLARE_METHOD(t_PhaseMinusCodeCycleSlipDetector, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseMinusCodeCycleSlipDetector, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PhaseMinusCodeCycleSlipDetector)[] = {
            { Py_tp_methods, t_PhaseMinusCodeCycleSlipDetector__methods_ },
            { Py_tp_init, (void *) t_PhaseMinusCodeCycleSlipDetector_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PhaseMinusCodeCycleSlipDetector)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::AbstractCycleSlipDetector),
            NULL
          };

          DEFINE_TYPE(PhaseMinusCodeCycleSlipDetector, t_PhaseMinusCodeCycleSlipDetector, PhaseMinusCodeCycleSlipDetector);

          void t_PhaseMinusCodeCycleSlipDetector::install(PyObject *module)
          {
            installType(&PY_TYPE(PhaseMinusCodeCycleSlipDetector), &PY_TYPE_DEF(PhaseMinusCodeCycleSlipDetector), module, "PhaseMinusCodeCycleSlipDetector", 0);
          }

          void t_PhaseMinusCodeCycleSlipDetector::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseMinusCodeCycleSlipDetector), "class_", make_descriptor(PhaseMinusCodeCycleSlipDetector::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseMinusCodeCycleSlipDetector), "wrapfn_", make_descriptor(t_PhaseMinusCodeCycleSlipDetector::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseMinusCodeCycleSlipDetector), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PhaseMinusCodeCycleSlipDetector_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PhaseMinusCodeCycleSlipDetector::initializeClass, 1)))
              return NULL;
            return t_PhaseMinusCodeCycleSlipDetector::wrap_Object(PhaseMinusCodeCycleSlipDetector(((t_PhaseMinusCodeCycleSlipDetector *) arg)->object.this$));
          }
          static PyObject *t_PhaseMinusCodeCycleSlipDetector_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PhaseMinusCodeCycleSlipDetector::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PhaseMinusCodeCycleSlipDetector_init_(t_PhaseMinusCodeCycleSlipDetector *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jdouble a1;
            jint a2;
            jint a3;
            PhaseMinusCodeCycleSlipDetector object((jobject) NULL);

            if (!parseArgs(args, "DDII", &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = PhaseMinusCodeCycleSlipDetector(a0, a1, a2, a3));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/tle/TLEPropagator.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/analytical/tle/TLEPropagator.h"
#include "org/orekit/propagation/analytical/tle/generation/TleGenerationAlgorithm.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/analytical/tle/TLE.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {

          ::java::lang::Class *TLEPropagator::class$ = NULL;
          jmethodID *TLEPropagator::mids$ = NULL;
          bool TLEPropagator::live$ = false;

          jclass TLEPropagator::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/TLEPropagator");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getDefaultTleGenerationAlgorithm_626c08330c00a237] = env->getStaticMethodID(cls, "getDefaultTleGenerationAlgorithm", "(Lorg/orekit/time/TimeScale;Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/analytical/tle/generation/TleGenerationAlgorithm;");
              mids$[mid_getFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
              mids$[mid_getMU_dff5885c2c873297] = env->getStaticMethodID(cls, "getMU", "()D");
              mids$[mid_getPVCoordinates_38efe74c9e3a1286] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/utils/PVCoordinates;");
              mids$[mid_getTLE_e993eceec98c738b] = env->getMethodID(cls, "getTLE", "()Lorg/orekit/propagation/analytical/tle/TLE;");
              mids$[mid_resetInitialState_0ee5c56004643a2e] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
              mids$[mid_selectExtrapolator_8f723e93b6b0c0e4] = env->getStaticMethodID(cls, "selectExtrapolator", "(Lorg/orekit/propagation/analytical/tle/TLE;)Lorg/orekit/propagation/analytical/tle/TLEPropagator;");
              mids$[mid_selectExtrapolator_14e6136d1bc29138] = env->getStaticMethodID(cls, "selectExtrapolator", "(Lorg/orekit/propagation/analytical/tle/TLE;Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/analytical/tle/TLEPropagator;");
              mids$[mid_selectExtrapolator_031507efeb924a11] = env->getStaticMethodID(cls, "selectExtrapolator", "(Lorg/orekit/propagation/analytical/tle/TLE;Lorg/orekit/attitudes/AttitudeProvider;D)Lorg/orekit/propagation/analytical/tle/TLEPropagator;");
              mids$[mid_selectExtrapolator_d73df9db6a3294a1] = env->getStaticMethodID(cls, "selectExtrapolator", "(Lorg/orekit/propagation/analytical/tle/TLE;Lorg/orekit/attitudes/AttitudeProvider;DLorg/orekit/frames/Frame;)Lorg/orekit/propagation/analytical/tle/TLEPropagator;");
              mids$[mid_propagateOrbit_7a8f4c854607bed6] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/orbits/Orbit;");
              mids$[mid_getMass_bf1d7732f1acb697] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_resetIntermediateState_33f4696e4edaa03c] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/SpacecraftState;Z)V");
              mids$[mid_getJacobiansColumnsNames_2afa36052df4765d] = env->getMethodID(cls, "getJacobiansColumnsNames", "()Ljava/util/List;");
              mids$[mid_createHarvester_5cfd2a13971b74c7] = env->getMethodID(cls, "createHarvester", "(Ljava/lang/String;Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/utils/DoubleArrayDictionary;)Lorg/orekit/propagation/AbstractMatricesHarvester;");
              mids$[mid_sxpInitialize_0fa09c18fee449d5] = env->getMethodID(cls, "sxpInitialize", "()V");
              mids$[mid_sxpPropagate_17db3a65980d3441] = env->getMethodID(cls, "sxpPropagate", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::propagation::analytical::tle::generation::TleGenerationAlgorithm TLEPropagator::getDefaultTleGenerationAlgorithm(const ::org::orekit::time::TimeScale & a0, const ::org::orekit::frames::Frame & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::propagation::analytical::tle::generation::TleGenerationAlgorithm(env->callStaticObjectMethod(cls, mids$[mid_getDefaultTleGenerationAlgorithm_626c08330c00a237], a0.this$, a1.this$));
          }

          ::org::orekit::frames::Frame TLEPropagator::getFrame() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_b86f9f61d97a7244]));
          }

          jdouble TLEPropagator::getMU()
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_getMU_dff5885c2c873297]);
          }

          ::org::orekit::utils::PVCoordinates TLEPropagator::getPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_38efe74c9e3a1286], a0.this$));
          }

          ::org::orekit::propagation::analytical::tle::TLE TLEPropagator::getTLE() const
          {
            return ::org::orekit::propagation::analytical::tle::TLE(env->callObjectMethod(this$, mids$[mid_getTLE_e993eceec98c738b]));
          }

          void TLEPropagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_resetInitialState_0ee5c56004643a2e], a0.this$);
          }

          TLEPropagator TLEPropagator::selectExtrapolator(const ::org::orekit::propagation::analytical::tle::TLE & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return TLEPropagator(env->callStaticObjectMethod(cls, mids$[mid_selectExtrapolator_8f723e93b6b0c0e4], a0.this$));
          }

          TLEPropagator TLEPropagator::selectExtrapolator(const ::org::orekit::propagation::analytical::tle::TLE & a0, const ::org::orekit::frames::Frame & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return TLEPropagator(env->callStaticObjectMethod(cls, mids$[mid_selectExtrapolator_14e6136d1bc29138], a0.this$, a1.this$));
          }

          TLEPropagator TLEPropagator::selectExtrapolator(const ::org::orekit::propagation::analytical::tle::TLE & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2)
          {
            jclass cls = env->getClass(initializeClass);
            return TLEPropagator(env->callStaticObjectMethod(cls, mids$[mid_selectExtrapolator_031507efeb924a11], a0.this$, a1.this$, a2));
          }

          TLEPropagator TLEPropagator::selectExtrapolator(const ::org::orekit::propagation::analytical::tle::TLE & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, const ::org::orekit::frames::Frame & a3)
          {
            jclass cls = env->getClass(initializeClass);
            return TLEPropagator(env->callStaticObjectMethod(cls, mids$[mid_selectExtrapolator_d73df9db6a3294a1], a0.this$, a1.this$, a2, a3.this$));
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
          static PyObject *t_TLEPropagator_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TLEPropagator_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TLEPropagator_getDefaultTleGenerationAlgorithm(PyTypeObject *type, PyObject *args);
          static PyObject *t_TLEPropagator_getFrame(t_TLEPropagator *self, PyObject *args);
          static PyObject *t_TLEPropagator_getMU(PyTypeObject *type);
          static PyObject *t_TLEPropagator_getPVCoordinates(t_TLEPropagator *self, PyObject *args);
          static PyObject *t_TLEPropagator_getTLE(t_TLEPropagator *self);
          static PyObject *t_TLEPropagator_resetInitialState(t_TLEPropagator *self, PyObject *args);
          static PyObject *t_TLEPropagator_selectExtrapolator(PyTypeObject *type, PyObject *args);
          static PyObject *t_TLEPropagator_get__frame(t_TLEPropagator *self, void *data);
          static PyObject *t_TLEPropagator_get__mU(t_TLEPropagator *self, void *data);
          static PyObject *t_TLEPropagator_get__tLE(t_TLEPropagator *self, void *data);
          static PyGetSetDef t_TLEPropagator__fields_[] = {
            DECLARE_GET_FIELD(t_TLEPropagator, frame),
            DECLARE_GET_FIELD(t_TLEPropagator, mU),
            DECLARE_GET_FIELD(t_TLEPropagator, tLE),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_TLEPropagator__methods_[] = {
            DECLARE_METHOD(t_TLEPropagator, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TLEPropagator, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TLEPropagator, getDefaultTleGenerationAlgorithm, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_TLEPropagator, getFrame, METH_VARARGS),
            DECLARE_METHOD(t_TLEPropagator, getMU, METH_NOARGS | METH_CLASS),
            DECLARE_METHOD(t_TLEPropagator, getPVCoordinates, METH_VARARGS),
            DECLARE_METHOD(t_TLEPropagator, getTLE, METH_NOARGS),
            DECLARE_METHOD(t_TLEPropagator, resetInitialState, METH_VARARGS),
            DECLARE_METHOD(t_TLEPropagator, selectExtrapolator, METH_VARARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TLEPropagator)[] = {
            { Py_tp_methods, t_TLEPropagator__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_TLEPropagator__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TLEPropagator)[] = {
            &PY_TYPE_DEF(::org::orekit::propagation::analytical::AbstractAnalyticalPropagator),
            NULL
          };

          DEFINE_TYPE(TLEPropagator, t_TLEPropagator, TLEPropagator);

          void t_TLEPropagator::install(PyObject *module)
          {
            installType(&PY_TYPE(TLEPropagator), &PY_TYPE_DEF(TLEPropagator), module, "TLEPropagator", 0);
          }

          void t_TLEPropagator::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEPropagator), "class_", make_descriptor(TLEPropagator::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEPropagator), "wrapfn_", make_descriptor(t_TLEPropagator::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLEPropagator), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_TLEPropagator_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TLEPropagator::initializeClass, 1)))
              return NULL;
            return t_TLEPropagator::wrap_Object(TLEPropagator(((t_TLEPropagator *) arg)->object.this$));
          }
          static PyObject *t_TLEPropagator_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TLEPropagator::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_TLEPropagator_getDefaultTleGenerationAlgorithm(PyTypeObject *type, PyObject *args)
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::propagation::analytical::tle::generation::TleGenerationAlgorithm result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::orekit::propagation::analytical::tle::TLEPropagator::getDefaultTleGenerationAlgorithm(a0, a1));
              return ::org::orekit::propagation::analytical::tle::generation::t_TleGenerationAlgorithm::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getDefaultTleGenerationAlgorithm", args);
            return NULL;
          }

          static PyObject *t_TLEPropagator_getFrame(t_TLEPropagator *self, PyObject *args)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getFrame());
              return ::org::orekit::frames::t_Frame::wrap_Object(result);
            }

            return callSuper(PY_TYPE(TLEPropagator), (PyObject *) self, "getFrame", args, 2);
          }

          static PyObject *t_TLEPropagator_getMU(PyTypeObject *type)
          {
            jdouble result;
            OBJ_CALL(result = ::org::orekit::propagation::analytical::tle::TLEPropagator::getMU());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_TLEPropagator_getPVCoordinates(t_TLEPropagator *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getPVCoordinates(a0));
              return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
            }

            return callSuper(PY_TYPE(TLEPropagator), (PyObject *) self, "getPVCoordinates", args, 2);
          }

          static PyObject *t_TLEPropagator_getTLE(t_TLEPropagator *self)
          {
            ::org::orekit::propagation::analytical::tle::TLE result((jobject) NULL);
            OBJ_CALL(result = self->object.getTLE());
            return ::org::orekit::propagation::analytical::tle::t_TLE::wrap_Object(result);
          }

          static PyObject *t_TLEPropagator_resetInitialState(t_TLEPropagator *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(self->object.resetInitialState(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(TLEPropagator), (PyObject *) self, "resetInitialState", args, 2);
          }

          static PyObject *t_TLEPropagator_selectExtrapolator(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::propagation::analytical::tle::TLE a0((jobject) NULL);
                TLEPropagator result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::propagation::analytical::tle::TLE::initializeClass, &a0))
                {
                  OBJ_CALL(result = ::org::orekit::propagation::analytical::tle::TLEPropagator::selectExtrapolator(a0));
                  return t_TLEPropagator::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                ::org::orekit::propagation::analytical::tle::TLE a0((jobject) NULL);
                ::org::orekit::frames::Frame a1((jobject) NULL);
                TLEPropagator result((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::orekit::propagation::analytical::tle::TLE::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = ::org::orekit::propagation::analytical::tle::TLEPropagator::selectExtrapolator(a0, a1));
                  return t_TLEPropagator::wrap_Object(result);
                }
              }
              break;
             case 3:
              {
                ::org::orekit::propagation::analytical::tle::TLE a0((jobject) NULL);
                ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                jdouble a2;
                TLEPropagator result((jobject) NULL);

                if (!parseArgs(args, "kkD", ::org::orekit::propagation::analytical::tle::TLE::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = ::org::orekit::propagation::analytical::tle::TLEPropagator::selectExtrapolator(a0, a1, a2));
                  return t_TLEPropagator::wrap_Object(result);
                }
              }
              break;
             case 4:
              {
                ::org::orekit::propagation::analytical::tle::TLE a0((jobject) NULL);
                ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                jdouble a2;
                ::org::orekit::frames::Frame a3((jobject) NULL);
                TLEPropagator result((jobject) NULL);

                if (!parseArgs(args, "kkDk", ::org::orekit::propagation::analytical::tle::TLE::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = ::org::orekit::propagation::analytical::tle::TLEPropagator::selectExtrapolator(a0, a1, a2, a3));
                  return t_TLEPropagator::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "selectExtrapolator", args);
            return NULL;
          }

          static PyObject *t_TLEPropagator_get__frame(t_TLEPropagator *self, void *data)
          {
            ::org::orekit::frames::Frame value((jobject) NULL);
            OBJ_CALL(value = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(value);
          }

          static PyObject *t_TLEPropagator_get__mU(t_TLEPropagator *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMU());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_TLEPropagator_get__tLE(t_TLEPropagator *self, void *data)
          {
            ::org::orekit::propagation::analytical::tle::TLE value((jobject) NULL);
            OBJ_CALL(value = self->object.getTLE());
            return ::org::orekit::propagation::analytical::tle::t_TLE::wrap_Object(value);
          }
        }
      }
    }
  }
}
